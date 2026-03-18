/*
 * XREFs of ExGetLicenseTamperState @ 0x140949C80
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     ExpGetLicenseTamperState @ 0x1405AD768 (ExpGetLicenseTamperState.c)
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
  v4 = (signed __int64 *)(v2 + 37464);
  ExAcquirePushLockSharedEx(v2 + 37464, 0LL);
  ExpGetLicenseTamperState(v2, &v7);
  v5 = v7 != 0;
  if ( a1 )
    *a1 = v7;
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
