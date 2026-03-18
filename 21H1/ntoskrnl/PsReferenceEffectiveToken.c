/*
 * XREFs of PsReferenceEffectiveToken @ 0x140609900
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x140259670 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpQueryLowBoxId @ 0x1402A5CA8 (RtlpQueryLowBoxId.c)
 *     SeLogAccessFailure @ 0x14030A578 (SeLogAccessFailure.c)
 *     SeCaptureAtomTableCallout @ 0x14030AEB0 (SeCaptureAtomTableCallout.c)
 *     RtlpAllowsLowBoxAccess @ 0x140317EB8 (RtlpAllowsLowBoxAccess.c)
 *     SepDesktopAppxSubProcessToken @ 0x140339778 (SepDesktopAppxSubProcessToken.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140590890 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x14064BEFC (MiIsUserQueryVmCallerTrusted.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140669C64 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14066AF50 (EtwpGetSidExtendedHeaderItem.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406CBAEC (PspAllocateAndQueryNotificationChannel.c)
 *     SeSubProcessToken @ 0x1406F7240 (SeSubProcessToken.c)
 * Callees:
 *     ObFastReferenceObject @ 0x140206610 (ObFastReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14025B058 (ObFastReferenceObjectLocked.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsReferenceEffectiveToken(__int64 a1, _DWORD *a2, bool *a3, int *a4, _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbp
  void *v11; // r13
  ULONG_PTR v12; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  signed __int64 *BugCheckParameter2; // [rsp+20h] [rbp-38h]
  struct _KTHREAD *v21; // [rsp+28h] [rbp-30h]
  __int64 v22; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = *(_KPROCESS **)(a1 + 544);
  v11 = 0LL;
  if ( (*(_DWORD *)(a1 + 1296) & 8) == 0 )
    goto LABEL_4;
  v22 = *(_QWORD *)(a1 + 544);
  v21 = KeGetCurrentThread();
  --v21->KernelApcDisable;
  BugCheckParameter2 = (signed __int64 *)(a1 + 1280);
  ExAcquirePushLockSharedEx(a1 + 1280, 0LL);
  if ( (*(_DWORD *)(a1 + 1296) & 8) != 0 )
  {
    v11 = (void *)(*(_QWORD *)(a1 + 1192) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObject(v11);
    *a4 = *(_DWORD *)(a1 + 1192) & 3;
    *a3 = (*(_BYTE *)(a1 + 1192) & 4) != 0;
    if ( a5 )
      *a5 = *(_BYTE *)(v22 + 2170);
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)v21, v14, v15, v16);
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
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v17, v18, v19);
    }
    *a2 = 1;
    *a3 = 0;
    if ( a5 )
      *a5 = BYTE2(Process[2].Header.WaitListHead.Flink);
    return (void *)v12;
  }
}
