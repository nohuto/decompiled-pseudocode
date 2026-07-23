/*
 * XREFs of MiDeleteAllHardwareEnclaves @ 0x1409B18F0
 * Callers:
 *     MiShutdownSystem @ 0x1409B0CE8 (MiShutdownSystem.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeRemoveEnclavePage @ 0x140515630 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePages @ 0x1409B1A90 (MiDeleteEnclavePages.c)
 */

char MiDeleteAllHardwareEnclaves()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rsi
  struct _KPROCESS *v2; // r14
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  char *v5; // rsi
  char result; // al
  int v7; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140C4EF00);
  --CurrentThread->SpecialApcDisable;
  while ( 1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4EEF8, 0LL);
    v1 = qword_140C4EEE8;
    if ( (__int64 *)qword_140C4EEE8 == &qword_140C4EEE8 )
      break;
    v2 = *(struct _KPROCESS **)(qword_140C4EEE8 - 8);
    ObfReferenceObject(v2);
    v3 = (*(unsigned int *)(v1 - 96) | ((unsigned __int64)*(unsigned __int8 *)(v1 - 88) << 32)) << 12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4EEF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4EEF8);
    KeAbPostRelease((ULONG_PTR)&qword_140C4EEF8);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    KeStackAttachProcess(v2, &ApcState);
    v4 = MiObtainReferencedVadEx(v3, 0, &v7);
    v5 = (char *)v4;
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 48) & 0x3100000) == 0x2100000 && (*(_DWORD *)(v4 + 64) & 1) != 0 )
        MiDeleteEnclavePages(v2, v4);
      MiUnlockAndDereferenceVad(v5);
    }
    KeUnstackDetachProcess(&ApcState);
    HalPutDmaAdapter((PADAPTER_OBJECT)v2);
    --CurrentThread->SpecialApcDisable;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4EEF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4EEF8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4EEF8);
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( qword_140C4EEC8 )
    return KeRemoveEnclavePage();
  return result;
}
