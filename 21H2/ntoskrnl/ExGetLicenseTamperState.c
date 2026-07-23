/*
 * XREFs of ExGetLicenseTamperState @ 0x14094D3E0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExpGetLicenseTamperState @ 0x1405B2EF8 (ExpGetLicenseTamperState.c)
 */

bool __fastcall ExGetLicenseTamperState(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rdi
  bool v6; // bl
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  v3 = *((_QWORD *)PsGetCurrentServerSiloGlobals((__int64)a1, a2) + 113);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (signed __int64 *)(v3 + 46840);
  ExAcquirePushLockSharedEx(v3 + 46840, 0LL);
  ExpGetLicenseTamperState(v3, &v11);
  v6 = v11 != 0;
  if ( a1 )
    *a1 = v11;
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  return v6;
}
