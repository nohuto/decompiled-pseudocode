/*
 * XREFs of MiFlushTbList @ 0x14032F1B0
 * Callers:
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140200D20 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MmUnmapIoSpace @ 0x140215660 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1402157EC (MiZeroAndFlushPtes.c)
 *     MiZeroPageWorkMapping @ 0x14022689C (MiZeroPageWorkMapping.c)
 *     MiFlushValidPteFromTb @ 0x140227254 (MiFlushValidPteFromTb.c)
 *     MiDecommitLargePoolVa @ 0x140228464 (MiDecommitLargePoolVa.c)
 *     MiDeleteNonPagedPoolTail @ 0x1402286E0 (MiDeleteNonPagedPoolTail.c)
 *     MiDeleteSystemPageTableTail @ 0x140229590 (MiDeleteSystemPageTableTail.c)
 *     MiDeleteEmptyPageTableTail @ 0x140233B60 (MiDeleteEmptyPageTableTail.c)
 *     MiGetNextPageTableTail @ 0x14023E500 (MiGetNextPageTableTail.c)
 *     MiCreateSystemPageTableTail @ 0x140243AE0 (MiCreateSystemPageTableTail.c)
 *     MmRemoveExecuteGrants @ 0x140258CE0 (MmRemoveExecuteGrants.c)
 *     MiReplenishBitMap @ 0x1402697F0 (MiReplenishBitMap.c)
 *     MiFlushTbListEarly @ 0x140269FA8 (MiFlushTbListEarly.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MiCreateSystemPageTable @ 0x14027CE40 (MiCreateSystemPageTable.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MiMoveDirtyBitsToPfns @ 0x14028E8E0 (MiMoveDirtyBitsToPfns.c)
 *     MmOutPageKernelStack @ 0x140299F34 (MmOutPageKernelStack.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiFreeWsleList @ 0x1402C1D70 (MiFreeWsleList.c)
 *     MiWsleFlush @ 0x1402C1F50 (MiWsleFlush.c)
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 *     MiZeroPage @ 0x1402C4E50 (MiZeroPage.c)
 *     MiGetPteFromCopyList @ 0x1402CBF80 (MiGetPteFromCopyList.c)
 *     NtGetWriteWatch @ 0x1402CF630 (NtGetWriteWatch.c)
 *     MiSetPagingOfDriver @ 0x1402D8F30 (MiSetPagingOfDriver.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiGetNextPageTablePte @ 0x14031B510 (MiGetNextPageTablePte.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14032EA60 (MiProtectPrivateMemory.c)
 *     MiDeleteVaTail @ 0x14032F0E0 (MiDeleteVaTail.c)
 *     MiTerminateWsleCluster @ 0x14032F750 (MiTerminateWsleCluster.c)
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x140332670 (MiAgePteWorker.c)
 *     MiSetReadOnlyOnSectionView @ 0x14033A030 (MiSetReadOnlyOnSectionView.c)
 *     MmSetAddressRangeModifiedEx @ 0x14033D860 (MmSetAddressRangeModifiedEx.c)
 *     MiWalkVaRange @ 0x14033E5D0 (MiWalkVaRange.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MiFlushTbAsNeeded @ 0x140352EB0 (MiFlushTbAsNeeded.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     MiFlushDirtyBitsToPfn @ 0x14036B408 (MiFlushDirtyBitsToPfn.c)
 *     MiReplacePageTablePage @ 0x14036CF60 (MiReplacePageTablePage.c)
 *     MiMapMemoryDumpMdl @ 0x14038C4CC (MiMapMemoryDumpMdl.c)
 *     MmSetPageProtection @ 0x1403C2120 (MmSetPageProtection.c)
 *     MiReplacePfnWithGapMapping @ 0x1403C92F4 (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x1403C9494 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403C9590 (MiDemoteValidLargePageOneLevel.c)
 *     MiResetAccessBitsTail @ 0x1403CA3D0 (MiResetAccessBitsTail.c)
 *     MiFlushHyperSpace @ 0x1403D3284 (MiFlushHyperSpace.c)
 *     MiMapMdlCommon @ 0x1403D77D4 (MiMapMdlCommon.c)
 *     MiClearPteAccessedBitRange @ 0x140419160 (MiClearPteAccessedBitRange.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14045BD30 (MiSimpleAgeWorkingSetTail.c)
 *     MiReplicatePfnDatabaseMappings @ 0x1405839A4 (MiReplicatePfnDatabaseMappings.c)
 *     MiUnmapMdlCommon @ 0x1405853E4 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x140585D50 (MmProtectMdlSystemAddress.c)
 *     MiReadyReservedView @ 0x14059219C (MiReadyReservedView.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 *     MiPersistMdl @ 0x14059FECC (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x1405A1128 (MiTransferFileExtent.c)
 *     MiUnmapRetpolineStubs @ 0x1405A2A48 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x1405A2F88 (MiClearDriverHotPatchPtes.c)
 *     MiLargePageFault @ 0x1405A7708 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x1405A94F4 (MiFlushEnclaveTb.c)
 *     MiFreePhysicalPages @ 0x1405AAA4C (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1405ABD20 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1405ACB84 (MiWriteAwePtes.c)
 *     MiWritePteHighLevelIsr @ 0x1405AE310 (MiWritePteHighLevelIsr.c)
 *     MiZeroWithSystemPtes @ 0x1405B2A90 (MiZeroWithSystemPtes.c)
 *     MiReleaseLargePteMappings @ 0x1405B585C (MiReleaseLargePteMappings.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1405B99AC (MiCloneVads.c)
 *     MiHandleForkTransitionPte @ 0x1405BB090 (MiHandleForkTransitionPte.c)
 *     MiScrubLargeMappedPage @ 0x1405C4FB8 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x14082B4E0 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x140978B04 (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x14097FA08 (MmUnmapProtectedKernelPageRange.c)
 *     MiReloadBootLoadedDrivers @ 0x140B04F8C (MiReloadBootLoadedDrivers.c)
 *     MiTradeBootImagePage @ 0x140B05434 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140B05620 (MiFreeBootDriverPages.c)
 *     MiMarkBootKernelStack @ 0x140B05B1C (MiMarkBootKernelStack.c)
 *     MiInitializeTbFlush @ 0x140B09340 (MiInitializeTbFlush.c)
 *     MmFreeLoaderBlock @ 0x140B190F0 (MmFreeLoaderBlock.c)
 *     MiProtectSharedUserPage @ 0x140B31048 (MiProtectSharedUserPage.c)
 * Callees:
 *     KiFlushRangeWorker @ 0x14021C750 (KiFlushRangeWorker.c)
 *     KeFlushProcessWriteBuffers @ 0x1402F374C (KeFlushProcessWriteBuffers.c)
 *     KeFlushTb @ 0x1402F391C (KeFlushTb.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x1402F4380 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiIpiSendRequest @ 0x1402FFB70 (KiIpiSendRequest.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     HvlFlushRangeListTb @ 0x14039DB1C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x14039E48C (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x14039E55C (KiFlushAffinity.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiFlushRangeTb @ 0x1403A22F0 (KiFlushRangeTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403AD034 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403AD40C (KeFlushMultipleRangeCurrentTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     VmFlushTb @ 0x14045F6DE (VmFlushTb.c)
 *     ExFlushTb @ 0x14063F75C (ExFlushTb.c)
 */

void __fastcall MiFlushTbList(__int64 a1)
{
  __int64 v1; // r15
  __int64 v3; // r8
  unsigned int v4; // eax
  __int64 Process; // rdx
  unsigned __int64 v6; // rcx
  unsigned int v7; // r13d
  unsigned int v8; // r12d
  _QWORD *v9; // rbp
  char v10; // di
  char v11; // bl
  unsigned __int8 v12; // r14
  struct _KPRCB *v13; // rbp
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // rdi
  _KPROCESS *v15; // rbx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int16 v18; // ax
  unsigned __int64 v19; // rdx
  _DWORD *v20; // r9
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v23; // r11
  _QWORD *v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // ebx
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  unsigned __int8 v36; // r10
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  bool v40; // zf
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  unsigned __int8 v49; // al
  unsigned __int8 v50; // bl
  _DWORD *v51; // r11
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r9
  _DWORD *v54; // r8
  int v55; // eax
  signed __int32 v56[8]; // [rsp+0h] [rbp-88h] BYREF
  __int128 v57; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 v58; // [rsp+90h] [rbp+8h] BYREF
  __int64 v59; // [rsp+98h] [rbp+10h] BYREF

  v1 = *(unsigned int *)(a1 + 12);
  if ( (_DWORD)v1 )
  {
    v3 = *(unsigned __int8 *)(a1 + 4);
    v4 = *(_DWORD *)a1;
    Process = 1LL;
    v6 = qword_140C507D0;
    v7 = v4;
    if ( (v3 & 2) != 0 )
    {
      if ( v4 == 1 )
      {
LABEL_7:
        v8 = 0;
        goto LABEL_8;
      }
    }
    else if ( v4 == 1 )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_QWORD *)(Process + 2288) || *(_QWORD *)(Process + 992) )
      {
        v7 = *(_DWORD *)a1;
        v6 = -1LL;
      }
      else
      {
        v7 = *(_DWORD *)a1;
      }
      goto LABEL_7;
    }
    v8 = 1;
    if ( (v3 & 8) != 0 )
      v8 = 2;
LABEL_8:
    if ( *(_BYTE *)(a1 + 5) || *(_QWORD *)(a1 + 16) > v6 )
    {
      if ( (v3 & 1) != 0 )
        KeFlushCurrentTbOnly(v7, Process, v3, 0LL);
      else
        KeFlushTb(v7, v8);
      *(_BYTE *)(a1 + 5) = 0;
    }
    else
    {
      v9 = (_QWORD *)(a1 + 24);
      if ( (v3 & 1) == 0 )
      {
        v10 = 0;
        v59 = 0LL;
        v58 = 0;
        if ( (HvlEnlightenments & 4) == 0 )
        {
LABEL_12:
          v11 = 0;
          goto LABEL_13;
        }
        if ( (HvlEnlightenments & 2) != 0 )
        {
          v11 = 1;
        }
        else if ( (KiFlushPcid & 3) == 1 )
        {
          v11 = 1;
        }
        else
        {
          if ( (_DWORD)KeNumberProcessors_0 == 1 )
            goto LABEL_12;
          if ( v8 )
          {
            v11 = 1;
          }
          else
          {
            _InterlockedOr(v56, 0);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(0xCuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
            }
            CurrentPrcb = KeGetCurrentPrcb();
            if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                                 (__int64)CurrentPrcb,
                                 &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors.Count) )
            {
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v41 = KeGetCurrentIrql();
                  if ( v41 <= 0xFu && CurrentIrql <= 0xFu && v41 >= 2u )
                  {
                    v42 = KeGetCurrentPrcb();
                    v43 = v42->SchedulerAssist;
                    v44 = ~(unsigned __int16)(v23 << (CurrentIrql + 1));
                    v40 = (v44 & v43[5]) == 0;
                    v43[5] &= v44;
                    if ( v40 )
                      KiRemoveSystemWorkPriorityKick(v42);
                  }
                }
              }
              __writecr8(CurrentIrql);
              v11 = 1;
            }
            else
            {
              v11 = 0;
              v24 = (_QWORD *)(a1 + 24);
              v25 = v1;
              do
              {
                KiFlushRangeTb(*v24++, v7);
                --v25;
              }
              while ( v25 );
              v9 = (_QWORD *)(a1 + 24);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v45 = KeGetCurrentIrql();
                  if ( v45 <= 0xFu && CurrentIrql <= 0xFu && v45 >= 2u )
                  {
                    v46 = KeGetCurrentPrcb();
                    v47 = v46->SchedulerAssist;
                    v48 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v40 = (v48 & v47[5]) == 0;
                    v47[5] &= v48;
                    if ( v40 )
                      KiRemoveSystemWorkPriorityKick(v46);
                  }
                }
              }
              __writecr8(CurrentIrql);
              v10 = 1;
            }
          }
        }
LABEL_13:
        if ( v7 == 1 && *v9 <= 0x7FFFFFFEFFFFuLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle
          || v11 )
        {
          KiPrepareFlushParameters(v7, &v59, &v58);
          v35 = KiFlushAffinity(v8);
          v10 |= HvlFlushRangeListTb(v59, v35, v58, v36, v11, v1, (__int64)v9);
        }
        if ( v10 )
        {
          if ( v7 == 4 )
            KeFlushProcessWriteBuffers(1);
          goto LABEL_28;
        }
        *(_QWORD *)&v57 = v9;
        *((_QWORD *)&v57 + 1) = __PAIR64__(v7, v1);
        v12 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
        {
          v20 = KeGetCurrentPrcb()->SchedulerAssist;
          v20[5] |= (-1 << (v12 + 1)) & 0x1FFC;
        }
        v13 = KeGetCurrentPrcb();
        if ( v8 )
        {
          if ( (unsigned int)KeNumberProcessors_0 > 1 )
          {
            v27 = 2147483652LL;
            if ( v8 != 1 )
              v27 = 4LL;
            v26 = 0LL;
            v28 = 1;
LABEL_50:
            KiIpiSendRequest((__int64)v13, v28, v26, &v57, v27);
            KiFlushRangeWorker((__int64)&v57);
            v33 = 0;
            while ( v13->PacketBarrier )
            {
              if ( (++v33 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30, v29, v31, v32) )
              {
                HvlNotifyLongSpinWait(v33);
              }
              else
              {
                _mm_pause();
              }
            }
            goto LABEL_26;
          }
        }
        else
        {
          _InterlockedOr(v56, 0);
          p_StaticAffinity = &v13->StaticAffinity;
          v15 = v13->CurrentThread->ApcState.Process;
          *(_QWORD *)&v13->StaticAffinity.KeFlushTbAffinity.Count = 2097153LL;
          memset(&v13->StaticAffinity.KeSyncContextAffinity.8, 0, sizeof(v13->StaticAffinity.KeSyncContextAffinity.8));
          KiCopyAffinityEx(
            (__int64)&v13->StaticAffinity,
            v13->StaticAffinity.KeFlushTbAffinity.Size,
            &v15->ActiveProcessors.Count);
          LODWORD(v16) = v13->StaticAffinity.KeFlushTbAffinity.Count;
          v17 = KiProcessorIndexToNumberMappingTable[v13->Number] >> 6;
          if ( (unsigned int)v16 > (unsigned int)v17 )
          {
            v16 = p_StaticAffinity->KeFlushTbAffinity.Bitmap[v17];
            _bittestandreset64((__int64 *)&v16, KiProcessorIndexToNumberMappingTable[v13->Number] & 0x3F);
            p_StaticAffinity->KeFlushTbAffinity.Bitmap[v17] = v16;
            LOWORD(v16) = p_StaticAffinity->KeFlushTbAffinity.Count;
          }
          v18 = 0;
          if ( (_WORD)v16 )
          {
            while ( 1 )
            {
              v19 = p_StaticAffinity->KeFlushTbAffinity.Bitmap[v18];
              if ( v19 )
              {
                if ( v18 != v13->Group || v19 != v13->GroupSetMember )
                  break;
              }
              if ( ++v18 >= p_StaticAffinity->KeFlushTbAffinity.Count )
                goto LABEL_25;
            }
            v26 = (__int64)&v13->StaticAffinity;
            v27 = 4LL;
            v28 = 0;
            goto LABEL_50;
          }
        }
LABEL_25:
        KiFlushRangeWorker((__int64)&v57);
LABEL_26:
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v49 = KeGetCurrentIrql();
            if ( v49 <= 0xFu && v12 <= 0xFu && v49 >= 2u )
            {
              v37 = KeGetCurrentPrcb();
              v38 = v37->SchedulerAssist;
              v39 = ~(unsigned __int16)(-1LL << (v12 + 1));
              v40 = (v39 & v38[5]) == 0;
              v38[5] &= v39;
              if ( v40 )
                KiRemoveSystemWorkPriorityKick(v37);
            }
          }
        }
        __writecr8(v12);
        v9 = (_QWORD *)(a1 + 24);
LABEL_28:
        if ( VmTbFlushEnabled )
          VmFlushTb((unsigned int)v1, v9, v7);
        if ( ExTbFlushActive )
        {
          v50 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v50 <= 0xFu )
          {
            v51 = KeGetCurrentPrcb()->SchedulerAssist;
            v51[5] |= (-1 << (v50 + 1)) & 0xFFFC;
          }
          ExFlushTb((unsigned int)v1, v9, v7);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v52 = KeGetCurrentIrql();
              if ( v52 <= 0xFu && v50 <= 0xFu && v52 >= 2u )
              {
                v53 = KeGetCurrentPrcb();
                v54 = v53->SchedulerAssist;
                v55 = ~(unsigned __int16)(-1LL << (v50 + 1));
                v40 = (v55 & v54[5]) == 0;
                v54[5] &= v55;
                if ( v40 )
                  KiRemoveSystemWorkPriorityKick(v53);
              }
            }
          }
          __writecr8(v50);
        }
        goto LABEL_31;
      }
      KeFlushMultipleRangeCurrentTb((unsigned int)v1, a1 + 24, v7);
    }
LABEL_31:
    *(_BYTE *)(a1 + 4) &= ~8u;
    *(_DWORD *)(a1 + 12) = 0;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
