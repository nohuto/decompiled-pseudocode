/*
 * XREFs of KeRundownApcQueues @ 0x140706C0C
 * Callers:
 *     sub_1405B9500 @ 0x1405B9500 (sub_1405B9500.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiFlushQueueApc @ 0x140355E80 (KiFlushQueueApc.c)
 *     KeForceResumeThread @ 0x1403560CC (KeForceResumeThread.c)
 *     KiAcquireReleaseThreadLock @ 0x140356910 (KiAcquireReleaseThreadLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall KeRundownApcQueues(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // r8
  _DWORD *v16; // r9
  _QWORD *v17; // rsi
  _QWORD *result; // rax
  _QWORD *v19; // rdi
  _QWORD *v20; // rcx
  void (*v21)(void); // rax
  unsigned __int8 CurrentIrql; // cl

  --*(_WORD *)(a1 + 484);
  *(_DWORD *)(a1 + 116) &= ~0x4000u;
  KiAcquireReleaseThreadLock(a1, a2, a3, a4);
  KeForceResumeThread(a1, v5, v6, v7);
  KeLeaveCriticalRegionThread(a1, v8, v9, v10);
  LOBYTE(v11) = 1;
  v14 = KiFlushQueueApc(a1, v11, v12, v13);
  v17 = v14;
  if ( v14 )
  {
    v19 = v14;
    do
    {
      v20 = v19 - 2;
      v19 = (_QWORD *)*v19;
      v21 = (void (*)(void))v20[5];
      if ( v21 )
        v21();
      else
        ExFreePoolWithTag(v20, 0);
    }
    while ( v19 != v17 );
  }
  result = KiFlushQueueApc(a1, 0LL, v15, v16);
  if ( result || *(_DWORD *)(a1 + 484) )
  {
    CurrentIrql = KeGetCurrentIrql();
    KeBugCheckEx(0x20u, (ULONG_PTR)result, *(unsigned int *)(a1 + 484), CurrentIrql, 0LL);
  }
  return result;
}
