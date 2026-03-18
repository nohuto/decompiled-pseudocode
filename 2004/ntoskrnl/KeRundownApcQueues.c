/*
 * XREFs of KeRundownApcQueues @ 0x1406B0D4C
 * Callers:
 *     sub_1405B9C20 @ 0x1405B9C20 (sub_1405B9C20.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KiFlushQueueApc @ 0x1402F9EA0 (KiFlushQueueApc.c)
 *     KeForceResumeThread @ 0x1402FA0EC (KeForceResumeThread.c)
 *     KiAcquireReleaseThreadLock @ 0x1402FA930 (KiAcquireReleaseThreadLock.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall KeRundownApcQueues(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // r8
  _DWORD *v13; // r9
  _QWORD *v14; // rsi
  _QWORD *result; // rax
  _QWORD *v16; // rdi
  _QWORD *v17; // rcx
  void (*v18)(void); // rax
  unsigned __int8 CurrentIrql; // cl

  --*(_WORD *)(a1 + 484);
  *(_DWORD *)(a1 + 116) &= ~0x4000u;
  KiAcquireReleaseThreadLock(a1, a2, a3, a4);
  KeForceResumeThread(a1, v5, v6, v7);
  KeLeaveCriticalRegionThread(a1);
  LOBYTE(v8) = 1;
  v11 = KiFlushQueueApc(a1, v8, v9, v10);
  v14 = v11;
  if ( v11 )
  {
    v16 = v11;
    do
    {
      v17 = v16 - 2;
      v16 = (_QWORD *)*v16;
      v18 = (void (*)(void))v17[5];
      if ( v18 )
        v18();
      else
        ExFreePoolWithTag(v17, 0);
    }
    while ( v16 != v14 );
  }
  result = KiFlushQueueApc(a1, 0LL, v12, v13);
  if ( result || *(_DWORD *)(a1 + 484) )
  {
    CurrentIrql = KeGetCurrentIrql();
    KeBugCheckEx(0x20u, (ULONG_PTR)result, *(unsigned int *)(a1 + 484), CurrentIrql, 0LL);
  }
  return result;
}
