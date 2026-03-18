/*
 * XREFs of ExFreeHeapPool @ 0x1402176E0
 * Callers:
 *     ExFreeCacheAwareRundownProtection @ 0x140202C10 (ExFreeCacheAwareRundownProtection.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140206490 (NtWaitForWorkViaWorkerFactory.c)
 *     ExGetSessionPoolTagInfo @ 0x14025EB48 (ExGetSessionPoolTagInfo.c)
 *     ExDeleteResourceLite @ 0x14029DAD0 (ExDeleteResourceLite.c)
 *     ExFreePoolEx @ 0x14031BDC0 (ExFreePoolEx.c)
 *     ExpFinalizeTimerDeletion @ 0x140327280 (ExpFinalizeTimerDeletion.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14035BDC0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391918 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExFreeAutoExpandPushLock @ 0x140392090 (ExFreeAutoExpandPushLock.c)
 *     BiWasFirmwareModified @ 0x14039AC00 (BiWasFirmwareModified.c)
 *     BgpFwFreeMemory @ 0x14039B490 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039BCB4 (BgpFwAllocateMemory.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1403B70A0 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1403B7514 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1403B76F0 (RtlpMuiRegLoadLicInformation.c)
 *     AdtpCleanupParameterAllocations @ 0x1403BFD74 (AdtpCleanupParameterAllocations.c)
 *     AdtpPackageParameters @ 0x1403BFE64 (AdtpPackageParameters.c)
 *     ExFreeCacheAwarePushLock @ 0x1405B2430 (ExFreeCacheAwarePushLock.c)
 *     ExGetWakeTimerList @ 0x1405B4718 (ExGetWakeTimerList.c)
 *     ExpAllocateAsid @ 0x1405B6CDC (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x1405B7108 (ExpPrepareNewSvmDevice.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x1405B80D0 (ExpResourceTimeoutCaptureLiveDump.c)
 *     ExpSaBinaryArrayRemove @ 0x1405B8A50 (ExpSaBinaryArrayRemove.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405B8A98 (ExpSaPageGroupDescriptorFree.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405B8EBC (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1405B914C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     WheapFreeErrorRecord @ 0x1405BA060 (WheapFreeErrorRecord.c)
 *     WheapFreeDriverPacketBuffer @ 0x1405BA91C (WheapFreeDriverPacketBuffer.c)
 *     WheaPersistBadPageToBcd @ 0x1405BAD00 (WheaPersistBadPageToBcd.c)
 *     ApiSetReleaseSchema @ 0x1405BCB38 (ApiSetReleaseSchema.c)
 *     ApiSetComposeSchema @ 0x1405BCB50 (ApiSetComposeSchema.c)
 *     sub_1405BE2C0 @ 0x1405BE2C0 (sub_1405BE2C0.c)
 *     sub_1405BE89C @ 0x1405BE89C (sub_1405BE89C.c)
 *     AdtpBuildAccessReasonAuditString @ 0x1405C0ADC (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C10BC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405C1B1C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BiLogFileOwnerProcess @ 0x1405C2350 (BiLogFileOwnerProcess.c)
 *     BiMapEfiDeviceForSpaces @ 0x1405C2644 (BiMapEfiDeviceForSpaces.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x1405C27AC (BiSpacesUpdatePhysicalDevicePath.c)
 *     _SafeReallocBlob @ 0x1405C922C (_SafeReallocBlob.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     CcInitializeCacheManager @ 0x140A3F638 (CcInitializeCacheManager.c)
 *     WheapInitializeErrorSourceTable @ 0x140A6216C (WheapInitializeErrorSourceTable.c)
 *     VhdiInitializeBootDisk @ 0x140A97B00 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x140A97E08 (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140A98318 (VhdiQueryVolumeVhdFilePath.c)
 *     SbpAddTransportToInstance @ 0x140A98758 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A98958 (SbpStartLanman.c)
 * Callees:
 *     RtlpHpVsContextFree @ 0x140215910 (RtlpHpVsContextFree.c)
 *     PspReturnQuota @ 0x1402175A0 (PspReturnQuota.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140217F10 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     MiDeterminePoolType @ 0x1402381E0 (MiDeterminePoolType.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402CDD70 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402CEE38 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1402D1660 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     ExpTryAcquireSpinLockShared @ 0x1402D2E60 (ExpTryAcquireSpinLockShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FFF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x140305540 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x140308734 (RtlpHpLargeFree.c)
 *     RtlpHpQueryVA @ 0x1403090DC (RtlpHpQueryVA.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x140309560 (RtlpHpLfhBucketUpdateStats.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140314B3C (ExpRemovePoolTrackerExpansion.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CD36C (ExpHpIsSpecialPoolHeap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     KeCheckForTimer @ 0x140513FBC (KeCheckForTimer.c)
 *     RtlpLogHeapFailure @ 0x140591B24 (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasGet @ 0x140592F20 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x14059303C (RtlpHpSizeHeap.c)
 *     VerifierFreeTrackedPool @ 0x1405A0270 (VerifierFreeTrackedPool.c)
 *     EtwTracePool @ 0x1405A6294 (EtwTracePool.c)
 *     ExpCheckForResource @ 0x1405B3C24 (ExpCheckForResource.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B4254 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B43A4 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpCheckForLookaside @ 0x1405B5018 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x1405B5594 (ExpCheckForWorker.c)
 *     ExpFreeHeapSpecialPool @ 0x1405B86B0 (ExpFreeHeapSpecialPool.c)
 *     VfFreePoolNotification @ 0x1409E3084 (VfFreePoolNotification.c)
 */

__int64 __fastcall ExFreeHeapPool(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v1; // rdx
  char v3; // al
  int v4; // eax
  __int64 v5; // rcx
  ULONG_PTR v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned int v10; // r12d
  int v11; // r13d
  unsigned int v12; // r15d
  __int64 v13; // r14
  int v14; // r11d
  __int64 v15; // r9
  unsigned int v16; // edx
  __int64 v17; // r8
  int v18; // eax
  _DWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  int v23; // ecx
  unsigned int v24; // esi
  int v25; // eax
  __int64 v26; // rbx
  unsigned __int64 v27; // r8
  char v28; // cl
  unsigned __int64 v29; // rdx
  char v30; // al
  char v31; // al
  unsigned __int64 v32; // rdx
  __int64 result; // rax
  __int64 v34; // rdx
  struct _KPROCESS *v35; // r14
  ULONG v36; // edx
  __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned __int8 v39; // r8
  int v40; // r14d
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v43; // rcx
  int v44; // r8d
  __int64 v45; // r9
  volatile signed __int32 *v46; // r10
  unsigned __int64 v47; // r11
  int v48; // r15d
  __int64 v49; // rcx
  struct _KPRCB *v50; // rcx
  _DWORD *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 HeapManager; // rax
  __int64 v55; // rax
  int v56; // eax
  _DWORD *v57; // rcx
  _DWORD *SchedulerAssist; // r9
  int v59; // eax
  int v60; // eax
  int v61; // eax
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r9
  int v64; // eax
  bool v65; // zf
  char v66; // cl
  int v67; // ecx
  __int128 v68; // [rsp+40h] [rbp-98h]
  __int128 v69; // [rsp+50h] [rbp-88h] BYREF
  __int128 v70; // [rsp+60h] [rbp-78h] BYREF
  _OWORD v71[2]; // [rsp+70h] [rbp-68h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]
  unsigned int v73; // [rsp+E0h] [rbp+8h] BYREF
  int v74; // [rsp+E8h] [rbp+10h] BYREF
  __int64 *v75; // [rsp+F0h] [rbp+18h] BYREF
  int v76; // [rsp+F8h] [rbp+20h]
  int v77; // [rsp+FCh] [rbp+24h]

  v1 = 0x140000000uLL;
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140C4F848[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
    v3 = 5;
  else
    v3 = 3;
  v68 = 0LL;
  *(_WORD *)((char *)&v68 + 1) = 1;
  LOBYTE(v68) = v3;
  v71[1] = v68;
  if ( (_WORD)BugCheckParameter2 )
  {
    v4 = 0;
LABEL_6:
    v5 = v4;
    v76 = 0x100000;
    v77 = 0x1000000;
    v6 = BugCheckParameter2 & ~((unsigned int)*(&v76 + v4) - 1LL);
    v7 = (RtlpHpHeapGlobals ^ v6 ^ *(_QWORD *)(v6 + 16) ^ 0xA2E64EADA2E64EADuLL) - 192 * v5 - 256;
    goto LABEL_7;
  }
  v69 = v68;
  HeapManager = RtlpHpEnvGetHeapManager(&v69, 0x140000000uLL);
  v55 = RtlCSparseBitmapBitmaskRead(HeapManager + 16, 2 * ((BugCheckParameter2 - *(_QWORD *)(HeapManager + 8)) >> 20));
  if ( v55 )
  {
    v4 = v55 - 1;
    if ( v4 != 2 )
      goto LABEL_6;
  }
  v75 = 0LL;
  v74 = 0;
  v70 = v68;
  RtlpHpQueryVA(BugCheckParameter2, &v70, &v75, &v74);
  v7 = *v75;
LABEL_7:
  if ( !v7 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter2, 0LL);
  if ( ExpSpecialAllocations && (unsigned int)ExpHpIsSpecialPoolHeap(v7) )
  {
    if ( _InterlockedExchangeAdd(&ExpSpecialAllocations, 0xFFFFFFFF) == 1 )
      _InterlockedDecrement(&dword_140C4ED58);
    return ExpFreeHeapSpecialPool(v7, BugCheckParameter2);
  }
  v8 = 1LL;
  if ( (BugCheckParameter2 & 0xFFF) != 0 )
  {
    v9 = BugCheckParameter2 - 16;
    if ( (*(_BYTE *)(BugCheckParameter2 - 13) & 4) != 0 )
    {
      v9 -= 16LL * (unsigned __int8)*(_WORD *)v9;
      *(_BYTE *)(v9 + 3) |= 4u;
    }
    v10 = *(unsigned __int8 *)(v9 + 3);
    v11 = v9 + 16;
    v12 = *(_DWORD *)(v9 + 4);
    if ( (v10 & 8) != 0 )
    {
      v35 = (struct _KPROCESS *)(v9 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v9 + 8));
      if ( v35 )
      {
        if ( (unsigned __int64)v35 < 0xFFFF800000000000uLL || (v35->Header.Type & 0x7F) != 3 )
          KeBugCheckEx(0xC2u, 0xDuLL, v9 + 16, *(unsigned int *)(v9 + 4), v9 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v9 + 8));
        v36 = *(_DWORD *)(v9 + 4);
        if ( v35 != PsInitialSystemProcess )
        {
          PspReturnQuota(
            *(char **)((v9 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v9 + 8)) + 0x568),
            v9 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v9 + 8),
            v10 & 1,
            16LL * (unsigned __int8)*(_WORD *)(v9 + 2));
          v36 = *(_DWORD *)(v9 + 4);
        }
        ObDereferenceObjectDeferDeleteWithTag(v35, v36);
      }
    }
    v13 = 16LL * (unsigned __int8)*(_WORD *)(v9 + 2);
    goto LABEL_14;
  }
  v40 = MiDeterminePoolType(BugCheckParameter2, v1, 1LL);
  if ( v40 == 32 )
    v40 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & v39) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v43 = CurrentPrcb->SchedulerAssist;
    if ( v43 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v59 = v43[6];
        v43[6] = v59 + 1;
        if ( v59 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (unsigned __int8)ExpTryAcquireSpinLockShared(&ExpLargePoolTableLock) )
      goto LABEL_76;
    v57 = CurrentPrcb->SchedulerAssist;
    if ( v57 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v60 = v57[6] - 1;
        v57[6] = v60;
        if ( !v60 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
  }
  v44 = 1;
LABEL_76:
  if ( (v40 & 0x20) != 0 )
  {
    v45 = *(_QWORD *)(qword_140C4DC60 + 992);
    v46 = (volatile signed __int32 *)(qword_140C4DC60 + 864);
    v47 = *(_QWORD *)(qword_140C4DC60 + 1000);
  }
  else
  {
    v45 = PoolBigPageTable;
    v46 = &ExpPoolBigEntriesInUse;
    v47 = PoolBigPageTableSize;
  }
LABEL_78:
  v48 = v44;
  v8 = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32) ^ (40543
                                                                                      * (unsigned int)(BugCheckParameter2 >> 12))) & (unsigned int)(v47 - 1);
  while ( *(_QWORD *)(v45 + 24LL * (unsigned int)v8) != BugCheckParameter2 )
  {
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= v47 )
    {
      if ( !v48 )
      {
LABEL_124:
        if ( (v40 & 0x21) != 0
          || v45 != PoolBigPageTable
          || (unsigned int)MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process) == -1
          || (v45 = *(_QWORD *)(qword_140C4DC60 + 992),
              v46 = (volatile signed __int32 *)(qword_140C4DC60 + 864),
              v47 = *(_QWORD *)(qword_140C4DC60 + 1000),
              !v45)
          || (v44 = 1, !v47) )
        {
          KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v40, 0LL);
        }
        goto LABEL_78;
      }
      v8 = 0LL;
      v48 = 0;
    }
  }
  v49 = v45 + 24LL * (unsigned int)v8;
  if ( !v49 )
    goto LABEL_124;
  v12 = *(_DWORD *)(v49 + 8);
  v13 = *(_QWORD *)(v49 + 16);
  v10 = (*(_DWORD *)(v49 + 12) >> 8) & 0xFFF;
  _InterlockedDecrement(v46);
  _InterlockedIncrement64((volatile signed __int64 *)v49);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
  }
  else
  {
    _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
    _InterlockedDecrement(&ExpLargePoolTableLock);
  }
  v50 = KeGetCurrentPrcb();
  v51 = v50->SchedulerAssist;
  if ( v51 )
  {
    if ( v50->NestingLevel <= 1u )
    {
      v61 = v51[6] - 1;
      v51[6] = v61;
      if ( !v61 )
        KiRemoveSystemWorkPriorityKick(v50);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v62 = KeGetCurrentIrql();
      if ( v62 <= 0xFu && CurrentIrql <= 0xFu && v62 >= 2u )
      {
        v63 = KeGetCurrentPrcb();
        v8 = (unsigned __int64)v63->SchedulerAssist;
        v64 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v65 = (v64 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v64;
        if ( v65 )
          KiRemoveSystemWorkPriorityKick(v63);
      }
    }
  }
  __writecr8(CurrentIrql);
  v9 = BugCheckParameter2;
  v11 = BugCheckParameter2;
LABEL_14:
  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !v10 )
      ExpCheckForLookaside(v9, v13, v8);
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(v9);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource(v9, v13, v8);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(v9);
  }
  if ( (ExpPoolFlags & 0x10) != 0 )
    VfFreePoolNotification(v9, v13, v8);
  if ( v12 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3618, v10, v12, v11, v13);
  if ( (v10 & 0x20) != 0 )
  {
    v15 = ExpSessionPoolTrackTable;
    v14 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    v14 = PoolTrackTableMask;
    v15 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v16 = v14 & ((40543 * v12) ^ ((40543 * (unsigned __int64)v12) >> 32));
  while ( 1 )
  {
    v17 = 56LL * v16;
    v18 = *(_DWORD *)(v17 + v15);
    v19 = (_DWORD *)(v17 + v15);
    if ( v18 == v12 )
      break;
    if ( v18 || (v10 & 0x20) != 0 || (v56 = *(_DWORD *)(v17 + PoolTrackTable)) == 0 )
    {
      v16 = v14 & (v16 + 1);
      if ( v16 == (v14 & ((40543 * v12) ^ ((40543 * (unsigned __int64)v12) >> 32))) )
      {
        ExpRemovePoolTrackerExpansion(v12, v13, v10);
        goto LABEL_28;
      }
    }
    else
    {
      *v19 = v56;
    }
  }
  if ( (v10 & 1) != 0 )
  {
    v20 = 8LL;
    v21 = 12LL;
  }
  else
  {
    v20 = 2LL;
    v21 = 6LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v19[v21]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v19[v20], -v13);
LABEL_28:
  if ( (v10 & 0x40) != 0 )
    VerifierFreeTrackedPool(BugCheckParameter2, v13);
  v22 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v13 - 513) <= 0xD7F && v22 )
  {
    v37 = v22
        + (((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned __int64)(unsigned int)(v13 + 15) >> 4))
          - 33
          + 1LL) << 6);
    ++*(_DWORD *)(v37 + 28);
    if ( *(_WORD *)v37 < *(_WORD *)(v37 + 16) )
      return (__int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)v37, (PSLIST_ENTRY)v9);
    ++*(_DWORD *)(v37 + 32);
  }
  v23 = *(_DWORD *)(v7 + 220);
  v24 = *(_DWORD *)(v7 + 20) & 0x11000001;
  if ( v23 && v23 == KeGetCurrentThread()[1].CurrentRunTime )
    v24 = *(_DWORD *)(v7 + 20) & 0x11000000 | 1;
  if ( (v24 & 0x1000000) != 0
    || !*(_DWORD *)(v7 + 24)
    || (result = RtlpHpExtrasGet(v7, v9, v24, 0LL), v15 = result, (unsigned __int64)(result - 1) > 0xFFFFFFFFFFFFFFFDuLL)
    || (v66 = *(_BYTE *)(result + 2), (v66 & 0xF) == 0)
    || (v67 = v66 & 0xF) != 0
    && (_WORD)v67 == 1
    && (result = ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64, __int64))RtlpInterceptorRoutines)(
                   v7,
                   v9,
                   3LL,
                   result + 16),
        (int)result >= 0) )
  {
    if ( (*(_DWORD *)(v7 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(v7, v9, v24, v15) == -1 )
    {
      LODWORD(v34) = v7;
      return RtlpLogHeapFailure(9, v34, v9, 0, 0LL, 0LL);
    }
    if ( (_WORD)v9 )
    {
      v25 = 0;
    }
    else
    {
      v71[0] = *(_OWORD *)v7;
      v52 = RtlpHpEnvGetHeapManager(v71, v22);
      v53 = RtlCSparseBitmapBitmaskRead(v52 + 16, 2 * ((v9 - *(_QWORD *)(v52 + 8)) >> 20));
      if ( !v53 )
        return RtlpHpLargeFree(v7, v9, v24);
      v25 = v53 - 1;
      if ( v25 == 2 )
        return RtlpHpLargeFree(v7, v9, v24);
    }
    v73 = 0;
    v26 = 192LL * v25 + 256 + v7;
    v27 = v9 & *(_QWORD *)v26;
    if ( ((unsigned __int64)RtlpHpHeapGlobals ^ v26 ^ v27 ^ *(_QWORD *)(v27 + 0x10)) == 0xA2E64EADA2E64EADuLL )
    {
      v28 = *(_BYTE *)(v26 + 8);
      v29 = v27 + 32 * ((unsigned __int64)(unsigned int)(v9 - v27) >> v28);
      if ( v29 )
      {
        v30 = *(_BYTE *)(v29 + 24);
        if ( (v30 & 1) != 0 )
        {
          if ( (v30 & 2) != 0 )
          {
            if ( (v30 & 0xCu) >= 8 || (((1 << v28) - 1) & v9) == 0 )
            {
LABEL_45:
              if ( v9 <= (v29 & *(_QWORD *)v26) + ((__int64)(v29 - (v29 & *(_QWORD *)v26)) >> 5 << v28) )
                return RtlpHpSegPageRangeShrink(v26, v29, v27, v24);
              v31 = *(_BYTE *)(v29 + 24) & 0xC;
              v32 = (v29 & *(_QWORD *)v26) + ((__int64)(v29 - (v29 & *(_QWORD *)v26)) >> 5 << v28);
              if ( v31 == 8 )
                return RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v26 + 24), v32, v9, v24);
              result = RtlpHpVsContextFree(*(_QWORD *)(v26 + 32), v32, v9, v24, &v73);
              if ( (_DWORD)result )
              {
                v38 = *(_QWORD *)(v26 + 24);
                result = (unsigned int)*(unsigned __int16 *)(v38 + 60) - 16;
                if ( v73 <= (unsigned int)result )
                  return RtlpHpLfhBucketUpdateStats(v38, v73, 0LL);
              }
              return result;
            }
          }
          else
          {
            v29 -= 32LL * *(unsigned __int8 *)(v29 + 31);
            v27 = *(unsigned __int8 *)(v29 + 24);
            if ( (v27 & 3) == 3 )
            {
              LOBYTE(v27) = v27 & 0xC;
              if ( (unsigned __int8)v27 >= 8u )
                goto LABEL_45;
            }
          }
        }
      }
    }
    v34 = *(_QWORD *)(v26 + 56);
    return RtlpLogHeapFailure(9, v34, v9, 0, 0LL, 0LL);
  }
  return result;
}
