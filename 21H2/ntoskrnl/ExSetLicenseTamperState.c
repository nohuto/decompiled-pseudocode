/*
 * XREFs of ExSetLicenseTamperState @ 0x14094D2D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ExpGetLicenseTamperState @ 0x1405B2CC8 (ExpGetLicenseTamperState.c)
 *     ExpSetLicenseTamperState @ 0x1405B3064 (ExpSetLicenseTamperState.c)
 *     ExpSetKernelDataProtection @ 0x140685DD0 (ExpSetKernelDataProtection.c)
 */

__int64 (__fastcall *__fastcall ExSetLicenseTamperState(__int64 a1, __int64 a2))(_QWORD)
{
  int v2; // edi
  __int64 (__fastcall *result)(_QWORD); // rax
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  bool v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _OWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF
  int v11; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1;
  v11 = 0;
  result = (__int64 (__fastcall *)(_QWORD))PsGetCurrentServerSiloGlobals(a1, a2);
  v4 = *((_QWORD *)result + 113);
  if ( v2 && v2 != 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v4 + 46840, 0LL);
    ExpGetLicenseTamperState(v4, &v11);
    v6 = v11 == 0;
    ExpSetLicenseTamperState(v4, v2);
    memset(v10, 0, sizeof(v10));
    ExpSetKernelDataProtection(v4, (__int64)v10, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4 + 46840);
    KeAbPostRelease(v4 + 46840);
    result = (__int64 (__fastcall *)(_QWORD))KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v6 )
    {
      v9 = *((_QWORD *)PsGetCurrentServerSiloGlobals(v8, v7) + 113);
      result = qword_140D2D4F8;
      if ( qword_140D2D4F8 )
        return (__int64 (__fastcall *)(_QWORD))qword_140D2D4F8(v9);
    }
  }
  return result;
}
