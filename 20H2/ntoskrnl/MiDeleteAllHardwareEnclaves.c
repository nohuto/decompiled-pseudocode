/*
 * XREFs of MiDeleteAllHardwareEnclaves @ 0x1409B3AC0
 * Callers:
 *     MiShutdownSystem @ 0x1409B2EB8 (MiShutdownSystem.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     KeStackAttachProcess @ 0x14023EE20 (KeStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KeUnstackDetachProcess @ 0x1402688E0 (KeUnstackDetachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14027CA80 (MiObtainReferencedVadEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeRemoveEnclavePage @ 0x1405138B0 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePages @ 0x1409B3C60 (MiDeleteEnclavePages.c)
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
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140C4ED40);
  --CurrentThread->SpecialApcDisable;
  while ( 1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4ED38, 0LL);
    v1 = qword_140C4ED28;
    if ( (__int64 *)qword_140C4ED28 == &qword_140C4ED28 )
      break;
    v2 = *(struct _KPROCESS **)(qword_140C4ED28 - 8);
    ObfReferenceObject(v2);
    v3 = (*(unsigned int *)(v1 - 96) | ((unsigned __int64)*(unsigned __int8 *)(v1 - 88) << 32)) << 12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4ED38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4ED38);
    KeAbPostRelease((ULONG_PTR)&qword_140C4ED38);
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4ED38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4ED38);
  KeAbPostRelease((ULONG_PTR)&qword_140C4ED38);
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( qword_140C4ED08 )
    return KeRemoveEnclavePage();
  return result;
}
