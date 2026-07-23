/*
 * XREFs of ExSetLicenseTamperState @ 0x14094D4A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExpGetLicenseTamperState @ 0x1405B2EF8 (ExpGetLicenseTamperState.c)
 *     ExpSetLicenseTamperState @ 0x1405B3294 (ExpSetLicenseTamperState.c)
 *     ExpSetKernelDataProtection @ 0x1405E4F30 (ExpSetKernelDataProtection.c)
 */

__int64 (__fastcall *__fastcall ExSetLicenseTamperState(__int64 a1, __int64 a2))(_QWORD)
{
  int v2; // edi
  __int64 (__fastcall *result)(_QWORD); // rax
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  bool v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _OWORD v13[3]; // [rsp+20h] [rbp-48h] BYREF
  int v14; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1;
  v14 = 0;
  result = (__int64 (__fastcall *)(_QWORD))PsGetCurrentServerSiloGlobals(a1, a2);
  v4 = *((_QWORD *)result + 113);
  if ( v2 && v2 != 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v4 + 46840, 0LL);
    ExpGetLicenseTamperState(v4, &v14);
    v6 = v14 == 0;
    ExpSetLicenseTamperState(v4, v2);
    memset(v13, 0, sizeof(v13));
    ExpSetKernelDataProtection(v4, (__int64)v13, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4 + 46840);
    KeAbPostRelease(v4 + 46840);
    result = (__int64 (__fastcall *)(_QWORD))KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
    if ( v6 )
    {
      v12 = *((_QWORD *)PsGetCurrentServerSiloGlobals(v11, v10) + 113);
      result = qword_140D2D4F8;
      if ( qword_140D2D4F8 )
        return (__int64 (__fastcall *)(_QWORD))qword_140D2D4F8(v12);
    }
  }
  return result;
}
