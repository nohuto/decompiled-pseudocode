/*
 * XREFs of MiDeleteAllHardwareEnclaves @ 0x1409B09C0
 * Callers:
 *     MiShutdownSystem @ 0x1409AFDB8 (MiShutdownSystem.c)
 * Callees:
 *     KeUnstackDetachProcess @ 0x1402075C0 (KeUnstackDetachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x14021AF80 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14021B2A0 (MiObtainReferencedVadEx.c)
 *     KeStackAttachProcess @ 0x14025C110 (KeStackAttachProcess.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402797E0 (ExWaitForRundownProtectionRelease.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeRemoveEnclavePage @ 0x1405153F0 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePages @ 0x1409B0B60 (MiDeleteEnclavePages.c)
 */

char MiDeleteAllHardwareEnclaves()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rsi
  struct _KPROCESS *v2; // r14
  unsigned __int64 v3; // rbp
  volatile signed __int32 *v4; // rax
  char *v5; // rsi
  char result; // al
  int v7; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140C4EEC0);
  --CurrentThread->SpecialApcDisable;
  while ( 1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4EEB8, 0LL);
    v1 = qword_140C4EEA8;
    if ( (__int64 *)qword_140C4EEA8 == &qword_140C4EEA8 )
      break;
    v2 = *(struct _KPROCESS **)(qword_140C4EEA8 - 8);
    ObfReferenceObject(v2);
    v3 = (*(unsigned int *)(v1 - 96) | ((unsigned __int64)*(unsigned __int8 *)(v1 - 88) << 32)) << 12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4EEB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4EEB8);
    KeAbPostRelease((ULONG_PTR)&qword_140C4EEB8);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    KeStackAttachProcess(v2, &ApcState);
    v4 = MiObtainReferencedVadEx(v3, 0, &v7);
    v5 = (char *)v4;
    if ( v4 )
    {
      if ( (v4[12] & 0x3100000) == 0x2100000 && (v4[16] & 1) != 0 )
        MiDeleteEnclavePages(v2, v4);
      MiUnlockAndDereferenceVad(v5);
    }
    KeUnstackDetachProcess(&ApcState);
    HalPutDmaAdapter((PADAPTER_OBJECT)v2);
    --CurrentThread->SpecialApcDisable;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4EEB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4EEB8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4EEB8);
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( qword_140C4EE88 )
    return KeRemoveEnclavePage();
  return result;
}
