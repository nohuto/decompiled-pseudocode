/*
 * XREFs of MiDeleteAllHardwareEnclaves @ 0x1409ADB50
 * Callers:
 *     MiShutdownSystem @ 0x1409ACF48 (MiShutdownSystem.c)
 * Callees:
 *     KeUnstackDetachProcess @ 0x140205990 (KeUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     MiObtainReferencedVadEx @ 0x14020E520 (MiObtainReferencedVadEx.c)
 *     KeStackAttachProcess @ 0x14024C170 (KeStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeRemoveEnclavePage @ 0x14050FF80 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePages @ 0x1409ADCF0 (MiDeleteEnclavePages.c)
 */

__int64 MiDeleteAllHardwareEnclaves()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rsi
  struct _KPROCESS *v2; // r14
  unsigned __int64 v3; // rbp
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rsi
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140C4ECC0);
  --CurrentThread->SpecialApcDisable;
  while ( 1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4ECB8, 0LL);
    v1 = qword_140C4ECA8;
    if ( (__int64 *)qword_140C4ECA8 == &qword_140C4ECA8 )
      break;
    v2 = *(struct _KPROCESS **)(qword_140C4ECA8 - 8);
    ObfReferenceObject(v2);
    v3 = (*(unsigned int *)(v1 - 96) | ((unsigned __int64)*(unsigned __int8 *)(v1 - 88) << 32)) << 12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4ECB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4ECB8);
    KeAbPostRelease((ULONG_PTR)&qword_140C4ECB8);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    KeStackAttachProcess(v2, &ApcState);
    v4 = MiObtainReferencedVadEx(v3, 0, &v7);
    v5 = v4;
    if ( v4 )
    {
      if ( (v4[12] & 0x3100000) == 0x2100000 && (v4[16] & 1) != 0 )
        MiDeleteEnclavePages(v2, v4);
      MiUnlockAndDereferenceVad((PVOID)v5);
    }
    KeUnstackDetachProcess(&ApcState);
    HalPutDmaAdapter((PADAPTER_OBJECT)v2);
    --CurrentThread->SpecialApcDisable;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4ECB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4ECB8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4ECB8);
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( qword_140C4EC88 )
    return KeRemoveEnclavePage();
  return result;
}
