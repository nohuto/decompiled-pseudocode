/*
 * XREFs of ExSetLicenseTamperState @ 0x1409489A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExpGetLicenseTamperState @ 0x1405AD048 (ExpGetLicenseTamperState.c)
 *     ExpSetLicenseTamperState @ 0x1405AD3E4 (ExpSetLicenseTamperState.c)
 *     ExpSetKernelDataProtection @ 0x1406B8830 (ExpSetKernelDataProtection.c)
 */

__int64 (__fastcall *__fastcall ExSetLicenseTamperState(int a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // rax
  bool v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  _OWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF
  int v11; // [rsp+70h] [rbp+8h] BYREF

  v11 = 0;
  result = (__int64 (__fastcall *)(_QWORD))PsGetCurrentServerSiloGlobals();
  v3 = *((_QWORD *)result + 113);
  if ( a1 && a1 != 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v3 + 37464, 0LL);
    ExpGetLicenseTamperState(v3, &v11);
    v5 = v11 == 0;
    ExpSetLicenseTamperState(v3, a1);
    memset(v10, 0, sizeof(v10));
    ExpSetKernelDataProtection(v3, (__int64)v10, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 37464), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3 + 37464);
    KeAbPostRelease(v3 + 37464);
    result = (__int64 (__fastcall *)(_QWORD))KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
    if ( v5 )
    {
      v9 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
      result = qword_140D2C510;
      if ( qword_140D2C510 )
        return (__int64 (__fastcall *)(_QWORD))qword_140D2C510(v9);
    }
  }
  return result;
}
