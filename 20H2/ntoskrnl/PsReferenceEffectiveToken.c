/*
 * XREFs of PsReferenceEffectiveToken @ 0x14061FA40
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x14022A460 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpQueryLowBoxId @ 0x140233928 (RtlpQueryLowBoxId.c)
 *     SepDesktopAppxSubProcessToken @ 0x1402E3978 (SepDesktopAppxSubProcessToken.c)
 *     SeLogAccessFailure @ 0x140318300 (SeLogAccessFailure.c)
 *     SeCaptureAtomTableCallout @ 0x140318E80 (SeCaptureAtomTableCallout.c)
 *     RtlpAllowsLowBoxAccess @ 0x140326628 (RtlpAllowsLowBoxAccess.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140594A20 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1405E2F64 (MiIsUserQueryVmCallerTrusted.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140655650 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140656940 (EtwpGetSidExtendedHeaderItem.c)
 *     SeSubProcessToken @ 0x14068F0A8 (SeSubProcessToken.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407112A0 (PspAllocateAndQueryNotificationChannel.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140209828 (ObFastReferenceObjectLocked.c)
 *     ObFastReferenceObject @ 0x140210F10 (ObFastReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsReferenceEffectiveToken(__int64 a1, _DWORD *a2, bool *a3, int *a4, _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbp
  void *v11; // r13
  ULONG_PTR v12; // rbx
  signed __int64 *BugCheckParameter2; // [rsp+20h] [rbp-38h]
  struct _KTHREAD *v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = *(_KPROCESS **)(a1 + 544);
  v11 = 0LL;
  if ( (*(_DWORD *)(a1 + 1296) & 8) == 0 )
    goto LABEL_4;
  v16 = *(_QWORD *)(a1 + 544);
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  BugCheckParameter2 = (signed __int64 *)(a1 + 1280);
  ExAcquirePushLockSharedEx(a1 + 1280, 0LL);
  if ( (*(_DWORD *)(a1 + 1296) & 8) != 0 )
  {
    v11 = (void *)(*(_QWORD *)(a1 + 1192) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObject(v11);
    *a4 = *(_DWORD *)(a1 + 1192) & 3;
    *a3 = (*(_BYTE *)(a1 + 1192) & 4) != 0;
    if ( a5 )
      *a5 = *(_BYTE *)(v16 + 2170);
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)v15);
  if ( v11 )
  {
    *a2 = 2;
    return v11;
  }
  else
  {
LABEL_4:
    v12 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
    if ( !v12 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
      v12 = ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
      KeAbPostRelease((ULONG_PTR)&Process[1]);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    *a2 = 1;
    *a3 = 0;
    if ( a5 )
      *a5 = BYTE2(Process[2].Header.WaitListHead.Flink);
    return (void *)v12;
  }
}
