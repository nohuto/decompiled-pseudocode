/*
 * XREFs of KsepIsModuleShimmed @ 0x1407442C4
 * Callers:
 *     KsepGetShimCallbacksForDriver @ 0x140741120 (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x140741648 (KsepGetShimsForDriver.c)
 *     KseDriverUnloadImage @ 0x14075E3F4 (KseDriverUnloadImage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
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
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50540, 0LL);
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50540, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C50540);
  KeAbPostRelease((ULONG_PTR)&qword_140C50540);
  KeLeaveCriticalRegion();
  return v3;
}
