/*
 * XREFs of ExGetLicenseTamperState @ 0x1409F9700
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExpGetLicenseTamperState @ 0x140639C30 (ExpGetLicenseTamperState.c)
 */

bool __fastcall ExGetLicenseTamperState(_DWORD *a1)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rdi
  bool v5; // bl
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (signed __int64 *)(v2 + 46840);
  ExAcquirePushLockSharedEx(v2 + 46840, 0LL);
  ExpGetLicenseTamperState(v2, &v7);
  v5 = v7 != 0;
  if ( a1 )
    *a1 = v7;
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}
