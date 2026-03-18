/*
 * XREFs of MiDeleteAllHardwareEnclaves @ 0x1409ACCF0
 * Callers:
 *     MiShutdownSystem @ 0x1409AC0E8 (MiShutdownSystem.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     KeStackAttachProcess @ 0x1402A51A0 (KeStackAttachProcess.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeRemoveEnclavePage @ 0x14050F930 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePages @ 0x1409ACE90 (MiDeleteEnclavePages.c)
 */

__int64 MiDeleteAllHardwareEnclaves()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rsi
  struct _KPROCESS *v2; // r14
  unsigned __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  volatile signed __int32 *v7; // rax
  char *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140C4EE00);
  --CurrentThread->SpecialApcDisable;
  while ( 1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4EDF8, 0LL);
    v1 = qword_140C4EDE8;
    if ( (__int64 *)qword_140C4EDE8 == &qword_140C4EDE8 )
      break;
    v2 = *(struct _KPROCESS **)(qword_140C4EDE8 - 8);
    ObfReferenceObject(v2);
    v3 = (*(unsigned int *)(v1 - 96) | ((unsigned __int64)*(unsigned __int8 *)(v1 - 88) << 32)) << 12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4EDF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4EDF8);
    KeAbPostRelease((ULONG_PTR)&qword_140C4EDF8);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v4, v5, v6);
    KeStackAttachProcess(v2, &ApcState);
    v7 = MiObtainReferencedVadEx(v3, 0, &v13);
    v8 = (char *)v7;
    if ( v7 )
    {
      if ( (v7[12] & 0x3100000) == 0x2100000 && (v7[16] & 1) != 0 )
        MiDeleteEnclavePages(v2, v7);
      MiUnlockAndDereferenceVad(v8);
    }
    KeUnstackDetachProcess(&ApcState);
    HalPutDmaAdapter((PADAPTER_OBJECT)v2);
    --CurrentThread->SpecialApcDisable;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4EDF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4EDF8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4EDF8);
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v9, v10, v11);
  if ( qword_140C4EDC8 )
    return KeRemoveEnclavePage();
  return result;
}
