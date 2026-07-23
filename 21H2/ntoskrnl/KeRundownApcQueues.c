/*
 * XREFs of KeRundownApcQueues @ 0x14063FDC4
 * Callers:
 *     sub_1405BF400 @ 0x1405BF400 (sub_1405BF400.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 * Callees:
 *     KiFlushQueueApc @ 0x1402668F8 (KiFlushQueueApc.c)
 *     KeForceResumeThread @ 0x1402677AC (KeForceResumeThread.c)
 *     KiAcquireReleaseThreadLock @ 0x140267FF0 (KiAcquireReleaseThreadLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall KeRundownApcQueues(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  _QWORD *result; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  void (*v10)(void); // rax
  unsigned __int8 CurrentIrql; // cl

  --*(_WORD *)(a1 + 484);
  *(_DWORD *)(a1 + 116) &= ~0x4000u;
  KiAcquireReleaseThreadLock(a1);
  KeForceResumeThread(a1);
  KeLeaveCriticalRegionThread(a1, v2, v3, v4);
  v5 = KiFlushQueueApc(a1, 1);
  v6 = v5;
  if ( v5 )
  {
    v8 = v5;
    do
    {
      v9 = v8 - 2;
      v8 = (_QWORD *)*v8;
      v10 = (void (*)(void))v9[5];
      if ( v10 )
        v10();
      else
        ExFreePoolWithTag(v9, 0);
    }
    while ( v8 != v6 );
  }
  result = KiFlushQueueApc(a1, 0);
  if ( result || *(_DWORD *)(a1 + 484) )
  {
    CurrentIrql = KeGetCurrentIrql();
    KeBugCheckEx(0x20u, (ULONG_PTR)result, *(unsigned int *)(a1 + 484), CurrentIrql, 0LL);
  }
  return result;
}
