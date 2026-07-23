/*
 * XREFs of ExFreeHeapPool @ 0x14034C810
 * Callers:
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140202C40 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExGetSessionPoolTagInfo @ 0x14021564C (ExGetSessionPoolTagInfo.c)
 *     ExFreePoolEx @ 0x14023C600 (ExFreePoolEx.c)
 *     ExpFinalizeTimerDeletion @ 0x140246CB0 (ExpFinalizeTimerDeletion.c)
 *     ExFreeCacheAwareRundownProtection @ 0x1402A6400 (ExFreeCacheAwareRundownProtection.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 *     ExDeleteResourceLite @ 0x1402FFDF0 (ExDeleteResourceLite.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391F38 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExFreeAutoExpandPushLock @ 0x140392650 (ExFreeAutoExpandPushLock.c)
 *     BiWasFirmwareModified @ 0x14039B61C (BiWasFirmwareModified.c)
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039C6D4 (BgpFwAllocateMemory.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1403A7F10 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1403A8404 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1403A8878 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     AdtpCleanupParameterAllocations @ 0x1403C09F4 (AdtpCleanupParameterAllocations.c)
 *     AdtpPackageParameters @ 0x1403C0AE4 (AdtpPackageParameters.c)
 *     ExFreeCacheAwarePushLock @ 0x1405B4060 (ExFreeCacheAwarePushLock.c)
 *     ExGetWakeTimerList @ 0x1405B6378 (ExGetWakeTimerList.c)
 *     ExpAllocateAsid @ 0x1405B893C (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x1405B8D68 (ExpPrepareNewSvmDevice.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x1405B9D30 (ExpResourceTimeoutCaptureLiveDump.c)
 *     ExpSaBinaryArrayRemove @ 0x1405BA6C4 (ExpSaBinaryArrayRemove.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405BA70C (ExpSaPageGroupDescriptorFree.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405BAB30 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1405BADC0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     WheapFreeErrorRecord @ 0x1405BBCD8 (WheapFreeErrorRecord.c)
 *     WheapFreeDriverPacketBuffer @ 0x1405BC59C (WheapFreeDriverPacketBuffer.c)
 *     WheaPersistBadPageToBcd @ 0x1405BC980 (WheaPersistBadPageToBcd.c)
 *     ApiSetReleaseSchema @ 0x1405BE7B8 (ApiSetReleaseSchema.c)
 *     ApiSetComposeSchema @ 0x1405BE7D0 (ApiSetComposeSchema.c)
 *     sub_1405BFF40 @ 0x1405BFF40 (sub_1405BFF40.c)
 *     sub_1405C051C @ 0x1405C051C (sub_1405C051C.c)
 *     AdtpBuildAccessReasonAuditString @ 0x1405C25AC (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C2B24 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405C3584 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BiLogFileOwnerProcess @ 0x1405C3DB0 (BiLogFileOwnerProcess.c)
 *     BiMapEfiDeviceForSpaces @ 0x1405C40A4 (BiMapEfiDeviceForSpaces.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x1405C420C (BiSpacesUpdatePhysicalDevicePath.c)
 *     _SafeReallocBlob @ 0x1405CAC8C (_SafeReallocBlob.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     CcInitializeCacheManager @ 0x140A3E1B8 (CcInitializeCacheManager.c)
 *     WheapInitializeErrorSourceTable @ 0x140A6478C (WheapInitializeErrorSourceTable.c)
 *     VhdiInitializeBootDisk @ 0x140A95990 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x140A95C98 (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140A961A8 (VhdiQueryVolumeVhdFilePath.c)
 *     SbpAddTransportToInstance @ 0x140A965E8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A967E8 (SbpStartLanman.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140213930 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14021F7C0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpQueryVA @ 0x1402230E4 (RtlpHpQueryVA.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1402361C0 (ExpRemovePoolTrackerExpansion.c)
 *     RtlpHpEnvGetHeapManager @ 0x140314164 (RtlpHpEnvGetHeapManager.c)
 *     PspReturnQuota @ 0x14034C6D0 (PspReturnQuota.c)
 *     RtlpHpFreeHeap @ 0x14034CE50 (RtlpHpFreeHeap.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14034D0C0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CDEBC (ExpHpIsSpecialPoolHeap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     KeCheckForTimer @ 0x140515D3C (KeCheckForTimer.c)
 *     VerifierFreeTrackedPool @ 0x1405A1ED0 (VerifierFreeTrackedPool.c)
 *     EtwTracePool @ 0x1405A7EF4 (EtwTracePool.c)
 *     ExpCheckForResource @ 0x1405B5854 (ExpCheckForResource.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5E94 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5FEC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpCheckForLookaside @ 0x1405B6C78 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x1405B71F4 (ExpCheckForWorker.c)
 *     ExpFreeHeapSpecialPool @ 0x1405BA310 (ExpFreeHeapSpecialPool.c)
 *     VfFreePoolNotification @ 0x1409E1074 (VfFreePoolNotification.c)
 */

PSLIST_ENTRY __fastcall ExFreeHeapPool(ULONG_PTR BugCheckParameter2)
{
  char v2; // al
  int v3; // eax
  __int64 v4; // rcx
  ULONG_PTR v5; // rax
  __int64 v6; // rbx
  unsigned __int8 v7; // al
  ULONG_PTR v8; // rdi
  unsigned int v9; // r15d
  int v10; // r13d
  int v11; // r12d
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // r11d
  __int64 v15; // r9
  unsigned int v16; // eax
  __int64 v17; // r8
  int v18; // ecx
  _DWORD *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  struct _KPROCESS *v24; // r14
  ULONG v25; // edx
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // r14d
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v31; // rcx
  int v32; // ett
  __int64 v33; // r9
  volatile signed __int32 *v34; // r10
  unsigned __int64 v35; // r11
  int v36; // r15d
  unsigned int v37; // r8d
  __int64 v38; // rcx
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  _QWORD *HeapManager; // rax
  __int64 v42; // rax
  int v43; // ecx
  _DWORD *v44; // rcx
  _DWORD *SchedulerAssist; // r9
  int v46; // eax
  int v47; // eax
  int v48; // eax
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  _DWORD *v51; // r8
  int v52; // eax
  bool v53; // zf
  __int128 v54; // [rsp+30h] [rbp-88h]
  __int128 v55; // [rsp+40h] [rbp-78h] BYREF
  __int128 v56[2]; // [rsp+50h] [rbp-68h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v58; // [rsp+C0h] [rbp+8h] BYREF
  __int64 *v59; // [rsp+C8h] [rbp+10h] BYREF
  int v60; // [rsp+D0h] [rbp+18h]
  int v61; // [rsp+D4h] [rbp+1Ch]
  __int64 v62; // [rsp+D8h] [rbp+20h]

  v62 = 0LL;
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140C4FA08[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
    v2 = 5;
  else
    v2 = 3;
  v54 = 0LL;
  *(_WORD *)((char *)&v54 + 1) = 1;
  LOBYTE(v54) = v2;
  v56[1] = v54;
  if ( (_WORD)BugCheckParameter2 )
  {
    v3 = 0;
LABEL_6:
    v4 = v3;
    v60 = 0x100000;
    v61 = 0x1000000;
    v5 = BugCheckParameter2 & ~((unsigned int)*(&v60 + v3) - 1LL);
    v6 = (RtlpHpHeapGlobals ^ v5 ^ *(_QWORD *)(v5 + 16) ^ 0xA2E64EADA2E64EADuLL) - 192 * v4 - 256;
    goto LABEL_7;
  }
  v55 = v54;
  HeapManager = RtlpHpEnvGetHeapManager(&v55);
  v42 = RtlCSparseBitmapBitmaskRead((__int64)(HeapManager + 2), 2 * ((BugCheckParameter2 - HeapManager[1]) >> 20));
  if ( v42 )
  {
    v3 = v42 - 1;
    if ( v3 != 2 )
      goto LABEL_6;
  }
  v59 = 0LL;
  v58 = 0;
  v56[0] = v54;
  RtlpHpQueryVA(BugCheckParameter2, v56, &v59, &v58);
  v6 = *v59;
LABEL_7:
  if ( !v6 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter2, 0LL);
  if ( !ExpSpecialAllocations || !(unsigned int)ExpHpIsSpecialPoolHeap(v6) )
  {
    if ( (BugCheckParameter2 & 0xFFF) != 0 )
    {
      v7 = *(_BYTE *)(BugCheckParameter2 - 13);
      v8 = BugCheckParameter2 - 16;
      if ( (v7 & 4) != 0 )
      {
        v8 += -16LL * (unsigned __int8)*(_WORD *)v8;
        *(_BYTE *)(v8 + 3) |= 4u;
        v7 = *(_BYTE *)(v8 + 3);
      }
      v9 = *(_DWORD *)(v8 + 4);
      v10 = v8 + 16;
      v11 = v7;
      if ( (v7 & 8) != 0 )
      {
        v24 = (struct _KPROCESS *)(v8 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v8 + 8));
        if ( v24 )
        {
          if ( (unsigned __int64)v24 < 0xFFFF800000000000uLL || (v24->Header.Type & 0x7F) != 3 )
            KeBugCheckEx(
              0xC2u,
              0xDuLL,
              v8 + 16,
              *(unsigned int *)(v8 + 4),
              v8 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v8 + 8));
          v25 = *(_DWORD *)(v8 + 4);
          if ( v24 != PsInitialSystemProcess )
          {
            PspReturnQuota(
              *(char **)((v8 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v8 + 8)) + 0x568),
              v8 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v8 + 8),
              v7 & 1,
              16LL * (unsigned __int8)*(_WORD *)(v8 + 2));
            v25 = *(_DWORD *)(v8 + 4);
          }
          ObDereferenceObjectDeferDeleteWithTag(v24, v25);
        }
      }
      v12 = 16LL * (unsigned __int8)*(_WORD *)(v8 + 2);
      goto LABEL_14;
    }
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL )
    {
      v27 = (unsigned __int8)byte_140C4FA08[((BugCheckParameter2 >> 39) & 0x1FF) - 256];
      if ( v27 == 1 )
      {
        v28 = 33;
LABEL_49:
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
          v31 = CurrentPrcb->SchedulerAssist;
          if ( v31 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v46 = v31[6];
              v31[6] = v46 + 1;
              if ( v46 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          _m_prefetchw(&ExpLargePoolTableLock);
          v32 = ExpLargePoolTableLock & 0x7FFFFFFF;
          if ( v32 != _InterlockedCompareExchange(
                        &ExpLargePoolTableLock,
                        (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                        ExpLargePoolTableLock & 0x7FFFFFFF) )
          {
            v44 = CurrentPrcb->SchedulerAssist;
            if ( v44 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v47 = v44[6] - 1;
                v44[6] = v47;
                if ( !v47 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
          }
        }
        if ( (v28 & 0x20) != 0 )
        {
          v33 = *(_QWORD *)(qword_140C4DE20 + 992);
          v34 = (volatile signed __int32 *)(qword_140C4DE20 + 864);
          v35 = *(_QWORD *)(qword_140C4DE20 + 1000);
        }
        else
        {
          v33 = PoolBigPageTable;
          v34 = &ExpPoolBigEntriesInUse;
          v35 = PoolBigPageTableSize;
        }
LABEL_55:
        v36 = 1;
        v37 = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32) ^ (40543
                                                                                             * (BugCheckParameter2 >> 12))) & (v35 - 1);
        while ( *(_QWORD *)(v33 + 24LL * v37) != BugCheckParameter2 )
        {
          if ( ++v37 >= v35 )
          {
            if ( !v36 )
            {
LABEL_96:
              if ( v28
                || v33 != PoolBigPageTable
                || (unsigned int)MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process) == -1
                || (v33 = *(_QWORD *)(qword_140C4DE20 + 992),
                    v34 = (volatile signed __int32 *)(qword_140C4DE20 + 864),
                    v35 = *(_QWORD *)(qword_140C4DE20 + 1000),
                    !v33)
                || !v35 )
              {
                KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v28, 0LL);
              }
              goto LABEL_55;
            }
            v37 = 0;
            v36 = 0;
          }
        }
        v38 = v33 + 24LL * v37;
        if ( !v38 )
          goto LABEL_96;
        v9 = *(_DWORD *)(v38 + 8);
        v12 = *(_QWORD *)(v38 + 16);
        v11 = (*(_DWORD *)(v38 + 12) >> 8) & 0xFFF;
        _InterlockedDecrement(v34);
        _InterlockedIncrement64((volatile signed __int64 *)v38);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
        }
        else
        {
          _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
          _InterlockedDecrement(&ExpLargePoolTableLock);
        }
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        if ( v40 )
        {
          if ( v39->NestingLevel <= 1u )
          {
            v48 = v40[6] - 1;
            v40[6] = v48;
            if ( !v48 )
              KiRemoveSystemWorkPriorityKick(v39);
          }
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v49 = KeGetCurrentIrql();
            if ( v49 <= 0xFu && CurrentIrql <= 0xFu && v49 >= 2u )
            {
              v50 = KeGetCurrentPrcb();
              v51 = v50->SchedulerAssist;
              v52 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v53 = (v52 & v51[5]) == 0;
              v51[5] &= v52;
              if ( v53 )
                KiRemoveSystemWorkPriorityKick(v50);
            }
          }
        }
        __writecr8(CurrentIrql);
        v8 = BugCheckParameter2;
        v10 = BugCheckParameter2;
LABEL_14:
        if ( (ExpPoolFlags & 0x207) != 0 )
        {
          if ( (ExpPoolFlags & 0x200) != 0 && !v11 )
            ExpCheckForLookaside(v8, v12);
          if ( (ExpPoolFlags & 1) != 0 )
            KeCheckForTimer(v8);
          if ( (ExpPoolFlags & 4) != 0 )
            ExpCheckForResource(v8, v12);
          if ( (ExpPoolFlags & 2) != 0 )
            ExpCheckForWorker(v8);
        }
        if ( (ExpPoolFlags & 0x10) != 0 )
          VfFreePoolNotification(v8, v12);
        if ( v9 == PoolHitTag )
          __debugbreak();
        v13 = DWORD1(PerfGlobalGroupMask);
        if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
          v13 = EtwTracePool(3618, v11, v9, v10, v12);
        if ( (v11 & 0x20) != 0 )
        {
          v15 = ExpSessionPoolTrackTable;
          v14 = ExpSessionPoolTrackTableMask;
        }
        else
        {
          LODWORD(v13) = KeGetPcr()->Prcb.Number;
          v14 = PoolTrackTableMask;
          v15 = (__int64)*(&ExPoolTagTables + v13);
        }
        v16 = v14 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32));
        while ( 1 )
        {
          v17 = 56LL * v16;
          v18 = *(_DWORD *)(v17 + v15);
          v19 = (_DWORD *)(v17 + v15);
          if ( v18 == v9 )
            break;
          if ( v18 || (v11 & 0x20) != 0 || (v43 = *(_DWORD *)(v17 + PoolTrackTable)) == 0 )
          {
            v16 = v14 & (v16 + 1);
            if ( v16 == (v14 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32))) )
            {
              ExpRemovePoolTrackerExpansion(v9, v12, v11);
              goto LABEL_28;
            }
          }
          else
          {
            *v19 = v43;
          }
        }
        if ( (v11 & 1) != 0 )
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
        _InterlockedExchangeAdd64((volatile signed __int64 *)&v19[v20], -v12);
LABEL_28:
        if ( (v11 & 0x40) != 0 )
          VerifierFreeTrackedPool(BugCheckParameter2, v12);
        v22 = *(_QWORD *)(v6 + 40);
        if ( (unsigned __int64)(v12 - 513) <= 0xD7F && v22 )
        {
          v26 = v22
              + (((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap
                                + ((unsigned __int64)(unsigned int)(v12 + 15) >> 4))
                - 33
                + 1LL) << 6);
          ++*(_DWORD *)(v26 + 28);
          if ( *(_WORD *)v26 < *(_WORD *)(v26 + 16) )
            return RtlpInterlockedPushEntrySList((PSLIST_HEADER)v26, (PSLIST_ENTRY)v8);
          ++*(_DWORD *)(v26 + 32);
        }
        return (PSLIST_ENTRY)RtlpHpFreeHeap(v6, v8, 0LL);
      }
      if ( v27 != 5 && (_BYTE)v27 == 6 )
      {
        v28 = 1;
        goto LABEL_49;
      }
    }
    v28 = 0;
    goto LABEL_49;
  }
  if ( _InterlockedExchangeAdd(&ExpSpecialAllocations, 0xFFFFFFFF) == 1 )
    _InterlockedDecrement(&dword_140C4EF18);
  return (PSLIST_ENTRY)ExpFreeHeapSpecialPool(v6, BugCheckParameter2);
}
