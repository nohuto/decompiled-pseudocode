/*
 * XREFs of KsepIsModuleShimmed @ 0x140745E44
 * Callers:
 *     KsepGetShimCallbacksForDriver @ 0x140742CA0 (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x1407431C8 (KsepGetShimsForDriver.c)
 *     KseDriverUnloadImage @ 0x140760764 (KseDriverUnloadImage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall KsepIsModuleShimmed(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v8; // rbp
  _QWORD *v9; // rax
  _QWORD *v11; // rcx

  v3 = 0;
  if ( !a2 || !a1 || !a3 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  *a3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50410, 0LL);
  v8 = (_QWORD **)(a1 + 32);
  v9 = *v8;
  while ( v9 != v8 )
  {
    v11 = v9;
    v9 = (_QWORD *)*v9;
    if ( v11[2] == a2 )
    {
      *a3 = v11;
      v3 = 1;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50410, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C50410);
  KeAbPostRelease((ULONG_PTR)&qword_140C50410);
  KeLeaveCriticalRegion();
  return v3;
}
