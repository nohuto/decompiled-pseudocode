/*
 * XREFs of ExFreeHeapPool @ 0x140341AC0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140203150 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140285AA0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExGetSessionPoolTagInfo @ 0x140298C6C (ExGetSessionPoolTagInfo.c)
 *     ExFreePoolEx @ 0x1402BDFC0 (ExFreePoolEx.c)
 *     ExpFinalizeTimerDeletion @ 0x1402C8450 (ExpFinalizeTimerDeletion.c)
 *     ExDeleteResourceLite @ 0x1402F50A0 (ExDeleteResourceLite.c)
 *     ExFreeCacheAwareRundownProtection @ 0x140360670 (ExFreeCacheAwareRundownProtection.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391DE8 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExFreeAutoExpandPushLock @ 0x140392500 (ExFreeAutoExpandPushLock.c)
 *     BiWasFirmwareModified @ 0x14039B4CC (BiWasFirmwareModified.c)
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039C584 (BgpFwAllocateMemory.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1403AC89C (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1403ACD90 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1403AD204 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     AdtpCleanupParameterAllocations @ 0x1403C05C4 (AdtpCleanupParameterAllocations.c)
 *     AdtpPackageParameters @ 0x1403C06B4 (AdtpPackageParameters.c)
 *     ExFreeCacheAwarePushLock @ 0x1405B3E30 (ExFreeCacheAwarePushLock.c)
 *     ExGetWakeTimerList @ 0x1405B6148 (ExGetWakeTimerList.c)
 *     ExpAllocateAsid @ 0x1405B870C (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x1405B8B38 (ExpPrepareNewSvmDevice.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x1405B9B00 (ExpResourceTimeoutCaptureLiveDump.c)
 *     ExpSaBinaryArrayRemove @ 0x1405BA494 (ExpSaBinaryArrayRemove.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405BA4DC (ExpSaPageGroupDescriptorFree.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405BA900 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1405BAB90 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     WheapFreeErrorRecord @ 0x1405BBAA8 (WheapFreeErrorRecord.c)
 *     WheapFreeDriverPacketBuffer @ 0x1405BC36C (WheapFreeDriverPacketBuffer.c)
 *     WheaPersistBadPageToBcd @ 0x1405BC750 (WheaPersistBadPageToBcd.c)
 *     ApiSetReleaseSchema @ 0x1405BE588 (ApiSetReleaseSchema.c)
 *     ApiSetComposeSchema @ 0x1405BE5A0 (ApiSetComposeSchema.c)
 *     sub_1405BFD10 @ 0x1405BFD10 (sub_1405BFD10.c)
 *     sub_1405C02EC @ 0x1405C02EC (sub_1405C02EC.c)
 *     AdtpBuildAccessReasonAuditString @ 0x1405C237C (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C28F4 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405C3354 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BiLogFileOwnerProcess @ 0x1405C3B80 (BiLogFileOwnerProcess.c)
 *     BiMapEfiDeviceForSpaces @ 0x1405C3E74 (BiMapEfiDeviceForSpaces.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x1405C3FDC (BiSpacesUpdatePhysicalDevicePath.c)
 *     _SafeReallocBlob @ 0x1405CAA5C (_SafeReallocBlob.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     CcInitializeCacheManager @ 0x140A3D1B8 (CcInitializeCacheManager.c)
 *     WheapInitializeErrorSourceTable @ 0x140A6378C (WheapInitializeErrorSourceTable.c)
 *     VhdiInitializeBootDisk @ 0x140A94990 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x140A94C98 (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140A951A8 (VhdiQueryVolumeVhdFilePath.c)
 *     SbpAddTransportToInstance @ 0x140A955E8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A957E8 (SbpStartLanman.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1402A2380 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpQueryVA @ 0x1402A5CA4 (RtlpHpQueryVA.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1402B7FB0 (ExpRemovePoolTrackerExpansion.c)
 *     RtlpHpEnvGetHeapManager @ 0x140309414 (RtlpHpEnvGetHeapManager.c)
 *     PspReturnQuota @ 0x140341980 (PspReturnQuota.c)
 *     RtlpHpFreeHeap @ 0x140342100 (RtlpHpFreeHeap.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140342370 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CDD4C (ExpHpIsSpecialPoolHeap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 *     KeCheckForTimer @ 0x140515AFC (KeCheckForTimer.c)
 *     VerifierFreeTrackedPool @ 0x1405A1CA0 (VerifierFreeTrackedPool.c)
 *     EtwTracePool @ 0x1405A7CC4 (EtwTracePool.c)
 *     ExpCheckForResource @ 0x1405B5624 (ExpCheckForResource.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5C64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5DBC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpCheckForLookaside @ 0x1405B6A48 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x1405B6FC4 (ExpCheckForWorker.c)
 *     ExpFreeHeapSpecialPool @ 0x1405BA0E0 (ExpFreeHeapSpecialPool.c)
 *     VfFreePoolNotification @ 0x1409E0074 (VfFreePoolNotification.c)
 */

PSLIST_ENTRY __fastcall ExFreeHeapPool(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  char v5; // al
  int v6; // eax
  __int64 v7; // rcx
  ULONG_PTR v8; // rax
  __int64 v9; // rbx
  unsigned __int8 v10; // al
  ULONG_PTR v11; // rdi
  unsigned int v12; // r15d
  int v13; // r13d
  int v14; // r12d
  __int64 v15; // r14
  __int64 v16; // rax
  int v17; // r11d
  __int64 v18; // r9
  unsigned int v19; // eax
  __int64 v20; // r8
  int v21; // ecx
  _DWORD *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  struct _KPROCESS *v27; // r14
  ULONG v28; // edx
  __int64 v29; // rcx
  int v30; // eax
  unsigned int v31; // r14d
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v34; // rcx
  int v35; // ett
  __int64 v36; // r9
  volatile signed __int32 *v37; // r10
  unsigned __int64 v38; // r11
  int v39; // r15d
  unsigned int v40; // r8d
  __int64 v41; // rcx
  struct _KPRCB *v42; // rcx
  _DWORD *v43; // rdx
  _QWORD *HeapManager; // rax
  __int64 v45; // rax
  int v46; // ecx
  _DWORD *v47; // rcx
  int v48; // eax
  int v49; // eax
  int v50; // eax
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r9
  _DWORD *v53; // r8
  int v54; // eax
  bool v55; // zf
  __int128 v56; // [rsp+30h] [rbp-88h]
  __int128 v57; // [rsp+40h] [rbp-78h] BYREF
  __int128 v58[2]; // [rsp+50h] [rbp-68h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v60; // [rsp+C0h] [rbp+8h] BYREF
  __int64 *v61; // [rsp+C8h] [rbp+10h] BYREF
  int v62; // [rsp+D0h] [rbp+18h]
  int v63; // [rsp+D4h] [rbp+1Ch]
  __int64 v64; // [rsp+D8h] [rbp+20h]

  v64 = 0LL;
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140C4F9C8[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
    v5 = 5;
  else
    v5 = 3;
  v56 = 0LL;
  *(_WORD *)((char *)&v56 + 1) = 1;
  LOBYTE(v56) = v5;
  v58[1] = v56;
  if ( (_WORD)BugCheckParameter2 )
  {
    v6 = 0;
LABEL_6:
    v7 = v6;
    v62 = 0x100000;
    v63 = 0x1000000;
    v8 = BugCheckParameter2 & ~((unsigned int)*(&v62 + v6) - 1LL);
    v9 = (RtlpHpHeapGlobals ^ v8 ^ *(_QWORD *)(v8 + 16) ^ 0xA2E64EADA2E64EADuLL) - 192 * v7 - 256;
    goto LABEL_7;
  }
  v57 = v56;
  HeapManager = RtlpHpEnvGetHeapManager(&v57);
  v45 = RtlCSparseBitmapBitmaskRead((__int64)(HeapManager + 2), 2 * ((BugCheckParameter2 - HeapManager[1]) >> 20));
  if ( v45 )
  {
    v6 = v45 - 1;
    if ( v6 != 2 )
      goto LABEL_6;
  }
  v61 = 0LL;
  v60 = 0;
  v58[0] = v56;
  RtlpHpQueryVA(BugCheckParameter2, v58, &v61, &v60);
  v9 = *v61;
LABEL_7:
  if ( !v9 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter2, 0LL);
  if ( !ExpSpecialAllocations || !(unsigned int)ExpHpIsSpecialPoolHeap(v9) )
  {
    if ( (BugCheckParameter2 & 0xFFF) != 0 )
    {
      v10 = *(_BYTE *)(BugCheckParameter2 - 13);
      v11 = BugCheckParameter2 - 16;
      if ( (v10 & 4) != 0 )
      {
        v11 += -16LL * (unsigned __int8)*(_WORD *)v11;
        *(_BYTE *)(v11 + 3) |= 4u;
        v10 = *(_BYTE *)(v11 + 3);
      }
      v12 = *(_DWORD *)(v11 + 4);
      v13 = v11 + 16;
      v14 = v10;
      if ( (v10 & 8) != 0 )
      {
        v27 = (struct _KPROCESS *)(v11 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v11 + 8));
        if ( v27 )
        {
          if ( (unsigned __int64)v27 < 0xFFFF800000000000uLL || (v27->Header.Type & 0x7F) != 3 )
            KeBugCheckEx(
              0xC2u,
              0xDuLL,
              v11 + 16,
              *(unsigned int *)(v11 + 4),
              v11 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v11 + 8));
          v28 = *(_DWORD *)(v11 + 4);
          if ( v27 != PsInitialSystemProcess )
          {
            PspReturnQuota(
              *(char **)((v11 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v11 + 8)) + 0x568),
              v11 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v11 + 8),
              v10 & 1,
              16LL * (unsigned __int8)*(_WORD *)(v11 + 2));
            v28 = *(_DWORD *)(v11 + 4);
          }
          ObDereferenceObjectDeferDeleteWithTag(v27, v28);
        }
      }
      v15 = 16LL * (unsigned __int8)*(_WORD *)(v11 + 2);
      goto LABEL_14;
    }
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL )
    {
      v30 = (unsigned __int8)byte_140C4F9C8[((BugCheckParameter2 >> 39) & 0x1FF) - 256];
      if ( v30 == 1 )
      {
        v31 = 33;
LABEL_49:
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
          SchedulerAssist[5] = a3;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v34 = CurrentPrcb->SchedulerAssist;
          if ( v34 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v48 = v34[6];
              v34[6] = v48 + 1;
              if ( v48 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          _m_prefetchw(&ExpLargePoolTableLock);
          v35 = ExpLargePoolTableLock & 0x7FFFFFFF;
          if ( v35 != _InterlockedCompareExchange(
                        &ExpLargePoolTableLock,
                        (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                        ExpLargePoolTableLock & 0x7FFFFFFF) )
          {
            v47 = CurrentPrcb->SchedulerAssist;
            if ( v47 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v49 = v47[6] - 1;
                v47[6] = v49;
                if ( !v49 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            ExpWaitForSpinLockSharedAndAcquire(
              (unsigned __int64)&ExpLargePoolTableLock,
              CurrentIrql,
              a3,
              SchedulerAssist);
          }
        }
        if ( (v31 & 0x20) != 0 )
        {
          v36 = *(_QWORD *)(qword_140C4DDE0 + 992);
          v37 = (volatile signed __int32 *)(qword_140C4DDE0 + 864);
          v38 = *(_QWORD *)(qword_140C4DDE0 + 1000);
        }
        else
        {
          v36 = PoolBigPageTable;
          v37 = &ExpPoolBigEntriesInUse;
          v38 = PoolBigPageTableSize;
        }
LABEL_55:
        v39 = 1;
        v40 = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32) ^ (40543
                                                                                             * (BugCheckParameter2 >> 12))) & (v38 - 1);
        while ( *(_QWORD *)(v36 + 24LL * v40) != BugCheckParameter2 )
        {
          if ( ++v40 >= v38 )
          {
            if ( !v39 )
            {
LABEL_96:
              if ( v31
                || v36 != PoolBigPageTable
                || (unsigned int)MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process) == -1
                || (v36 = *(_QWORD *)(qword_140C4DDE0 + 992),
                    v37 = (volatile signed __int32 *)(qword_140C4DDE0 + 864),
                    v38 = *(_QWORD *)(qword_140C4DDE0 + 1000),
                    !v36)
                || !v38 )
              {
                KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v31, 0LL);
              }
              goto LABEL_55;
            }
            v40 = 0;
            v39 = 0;
          }
        }
        v41 = v36 + 24LL * v40;
        if ( !v41 )
          goto LABEL_96;
        v12 = *(_DWORD *)(v41 + 8);
        v15 = *(_QWORD *)(v41 + 16);
        v14 = (*(_DWORD *)(v41 + 12) >> 8) & 0xFFF;
        _InterlockedDecrement(v37);
        _InterlockedIncrement64((volatile signed __int64 *)v41);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
        }
        else
        {
          _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
          _InterlockedDecrement(&ExpLargePoolTableLock);
        }
        v42 = KeGetCurrentPrcb();
        v43 = v42->SchedulerAssist;
        if ( v43 )
        {
          if ( v42->NestingLevel <= 1u )
          {
            v50 = v43[6] - 1;
            v43[6] = v50;
            if ( !v50 )
              KiRemoveSystemWorkPriorityKick(v42);
          }
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v51 = KeGetCurrentIrql();
            if ( v51 <= 0xFu && CurrentIrql <= 0xFu && v51 >= 2u )
            {
              v52 = KeGetCurrentPrcb();
              v53 = v52->SchedulerAssist;
              v54 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v55 = (v54 & v53[5]) == 0;
              v53[5] &= v54;
              if ( v55 )
                KiRemoveSystemWorkPriorityKick(v52);
            }
          }
        }
        __writecr8(CurrentIrql);
        v11 = BugCheckParameter2;
        v13 = BugCheckParameter2;
LABEL_14:
        if ( (ExpPoolFlags & 0x207) != 0 )
        {
          if ( (ExpPoolFlags & 0x200) != 0 && !v14 )
            ExpCheckForLookaside(v11, v15);
          if ( (ExpPoolFlags & 1) != 0 )
            KeCheckForTimer(v11);
          if ( (ExpPoolFlags & 4) != 0 )
            ExpCheckForResource(v11, v15);
          if ( (ExpPoolFlags & 2) != 0 )
            ExpCheckForWorker(v11);
        }
        if ( (ExpPoolFlags & 0x10) != 0 )
          VfFreePoolNotification(v11, v15);
        if ( v12 == PoolHitTag )
          __debugbreak();
        v16 = DWORD1(PerfGlobalGroupMask);
        if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
          v16 = EtwTracePool(3618, v14, v12, v13, v15);
        if ( (v14 & 0x20) != 0 )
        {
          v18 = ExpSessionPoolTrackTable;
          v17 = ExpSessionPoolTrackTableMask;
        }
        else
        {
          LODWORD(v16) = KeGetPcr()->Prcb.Number;
          v17 = PoolTrackTableMask;
          v18 = (__int64)*(&ExPoolTagTables + v16);
        }
        v19 = v17 & ((40543 * v12) ^ ((40543 * (unsigned __int64)v12) >> 32));
        while ( 1 )
        {
          v20 = 56LL * v19;
          v21 = *(_DWORD *)(v20 + v18);
          v22 = (_DWORD *)(v20 + v18);
          if ( v21 == v12 )
            break;
          if ( v21 || (v14 & 0x20) != 0 || (v46 = *(_DWORD *)(v20 + PoolTrackTable)) == 0 )
          {
            v19 = v17 & (v19 + 1);
            if ( v19 == (v17 & ((40543 * v12) ^ ((40543 * (unsigned __int64)v12) >> 32))) )
            {
              ExpRemovePoolTrackerExpansion(v12, v15, v14);
              goto LABEL_28;
            }
          }
          else
          {
            *v22 = v46;
          }
        }
        if ( (v14 & 1) != 0 )
        {
          v23 = 8LL;
          v24 = 12LL;
        }
        else
        {
          v23 = 2LL;
          v24 = 6LL;
        }
        _InterlockedIncrement64((volatile signed __int64 *)&v22[v24]);
        _InterlockedExchangeAdd64((volatile signed __int64 *)&v22[v23], -v15);
LABEL_28:
        if ( (v14 & 0x40) != 0 )
          VerifierFreeTrackedPool(BugCheckParameter2, v15);
        v25 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v15 - 513) <= 0xD7F && v25 )
        {
          v29 = v25
              + (((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap
                                + ((unsigned __int64)(unsigned int)(v15 + 15) >> 4))
                - 33
                + 1LL) << 6);
          ++*(_DWORD *)(v29 + 28);
          if ( *(_WORD *)v29 < *(_WORD *)(v29 + 16) )
            return RtlpInterlockedPushEntrySList((PSLIST_HEADER)v29, (PSLIST_ENTRY)v11);
          ++*(_DWORD *)(v29 + 32);
        }
        return (PSLIST_ENTRY)RtlpHpFreeHeap(v9, v11, 0LL);
      }
      if ( v30 != 5 && (_BYTE)v30 == 6 )
      {
        v31 = 1;
        goto LABEL_49;
      }
    }
    v31 = 0;
    goto LABEL_49;
  }
  if ( _InterlockedExchangeAdd(&ExpSpecialAllocations, 0xFFFFFFFF) == 1 )
    _InterlockedDecrement(&dword_140C4EED8);
  return (PSLIST_ENTRY)ExpFreeHeapSpecialPool(v9, BugCheckParameter2);
}
