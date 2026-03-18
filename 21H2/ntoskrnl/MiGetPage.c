/*
 * XREFs of MiGetPage @ 0x1403250B0
 * Callers:
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 *     MiGetUltraPage @ 0x14026A6C4 (MiGetUltraPage.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiGetPageTablePages @ 0x14027D03C (MiGetPageTablePages.c)
 *     MiGetPoolPages @ 0x140284A20 (MiGetPoolPages.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiGetSystemPage @ 0x1402E6738 (MiGetSystemPage.c)
 *     MiTradeTransitionPage @ 0x1402E8240 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiAllocateMdlPagesByLists @ 0x140324C60 (MiAllocateMdlPagesByLists.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 *     MiResolveMappedFileFault @ 0x140339520 (MiResolveMappedFileFault.c)
 *     MiAllocateKernelStackPages @ 0x14033B770 (MiAllocateKernelStackPages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14038E608 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReplaceLockedPage @ 0x1403D0BD4 (MiReplaceLockedPage.c)
 *     MiPruneStandbyPages @ 0x14045C812 (MiPruneStandbyPages.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MmAllocateNonChargedSecurePages @ 0x14058A110 (MmAllocateNonChargedSecurePages.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140599EBC (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiSplitDirectMapPage @ 0x1405A0B10 (MiSplitDirectMapPage.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x1405BA768 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x1405BB090 (MiHandleForkTransitionPte.c)
 *     MiGetFileHashPage @ 0x1405BC4E8 (MiGetFileHashPage.c)
 *     MiAllocateDriverPage @ 0x14079D08C (MiAllocateDriverPage.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x1407F1AF8 (MiAllocateTopLevelPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140829CBC (MmAllocateIndependentPagesEx.c)
 *     MiFillPerSessionProtos @ 0x140983680 (MiFillPerSessionProtos.c)
 *     MxSwapPages @ 0x140AF3FFC (MxSwapPages.c)
 *     MiInitializeGapFrames @ 0x140AF6B44 (MiInitializeGapFrames.c)
 *     MiComputeOptimalZeroPath @ 0x140B088E4 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140B08B40 (MiInitializeCacheFlushing.c)
 *     MiAllocateDummyPage @ 0x140B09B18 (MiAllocateDummyPage.c)
 * Callees:
 *     MiGetPageSlist @ 0x140220360 (MiGetPageSlist.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x14022FD10 (MiGetFreeOrZeroPageAnyColor.c)
 *     MiRemovePageAnyColor @ 0x14022FDA0 (MiRemovePageAnyColor.c)
 *     MiZeroPhysicalPage @ 0x1402359C4 (MiZeroPhysicalPage.c)
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiPfnZeroingNeeded @ 0x140268A70 (MiPfnZeroingNeeded.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiDemoteLocalLargePage @ 0x1402CA210 (MiDemoteLocalLargePage.c)
 *     MiGetPfnChannel @ 0x1402E8990 (MiGetPfnChannel.c)
 *     ExQueueWorkItemToPartition @ 0x1402EF060 (ExQueueWorkItemToPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetPerfectColorHeadPage @ 0x140325830 (MiGetPerfectColorHeadPage.c)
 *     PsReferencePartitionSafe @ 0x1403606EC (PsReferencePartitionSafe.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14038E608 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiPageAvailableEx @ 0x1403AD018 (MiPageAvailableEx.c)
 *     MiPageToChannel @ 0x1403B76EC (MiPageToChannel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     MiGetNodeStandbyPageCount @ 0x14045C7CC (MiGetNodeStandbyPageCount.c)
 *     MiArePageContentsZero @ 0x1405AD468 (MiArePageContentsZero.c)
 *     MiCheckNodeChannelStandbyCount @ 0x1405AD720 (MiCheckNodeChannelStandbyCount.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 */

__int64 __fastcall MiGetPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r10d
  int v4; // esi
  __int64 v5; // r15
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  unsigned __int8 *v8; // r8
  int v9; // r12d
  unsigned int v10; // r11d
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 *v13; // r13
  __int64 v14; // rdx
  int v15; // eax
  union _SLIST_HEADER *v16; // rcx
  __int64 PerfectColorHeadPage; // r15
  unsigned int v18; // r13d
  int v19; // edx
  ULONG_PTR v20; // rdi
  char *v21; // rax
  int v22; // eax
  unsigned int v23; // ebx
  int v25; // r8d
  int v26; // ecx
  __int64 *v27; // rdx
  unsigned int v28; // r8d
  int v29; // eax
  union _SLIST_HEADER *v30; // rcx
  __int64 v31; // r13
  __int64 v32; // r15
  unsigned __int64 v33; // r8
  __int64 i; // rdx
  __int64 v35; // r11
  unsigned __int64 v36; // r8
  __int64 v37; // rcx
  _QWORD *v38; // r8
  __int64 *v39; // r9
  __int64 v40; // r10
  __int64 v41; // rbx
  __int64 v42; // r13
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r13
  unsigned __int64 v46; // r9
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // eax
  __int64 v53; // rax
  __int64 FreeOrZeroPageAnyColor; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  char *v57; // rax
  int v58; // r9d
  __int64 v59; // rdx
  int v60; // ecx
  _QWORD *v61; // r15
  __int64 v62; // rdx
  __int64 v63; // r8
  unsigned __int8 OldIrql; // r11
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v68; // eax
  bool v69; // zf
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  BOOL v73; // esi
  unsigned int v74; // [rsp+30h] [rbp-A8h]
  BOOL v75; // [rsp+34h] [rbp-A4h]
  __int64 v76; // [rsp+38h] [rbp-A0h]
  int v77; // [rsp+38h] [rbp-A0h]
  unsigned __int8 *v78; // [rsp+40h] [rbp-98h]
  char v79; // [rsp+48h] [rbp-90h] BYREF
  char v80; // [rsp+49h] [rbp-8Fh] BYREF
  int v81; // [rsp+4Ch] [rbp-8Ch]
  unsigned int v82; // [rsp+50h] [rbp-88h]
  unsigned int v83; // [rsp+54h] [rbp-84h]
  __int64 *v84; // [rsp+58h] [rbp-80h]
  int v85; // [rsp+60h] [rbp-78h]
  __int64 v86; // [rsp+68h] [rbp-70h]
  _QWORD *v87; // [rsp+70h] [rbp-68h]
  __int64 v88; // [rsp+78h] [rbp-60h]
  unsigned __int8 *v89; // [rsp+80h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-50h] BYREF
  unsigned int v92; // [rsp+E8h] [rbp+10h]
  int v94; // [rsp+F8h] [rbp+20h]
  int v95; // [rsp+F8h] [rbp+20h]
  unsigned int v96; // [rsp+F8h] [rbp+20h]
  __int16 v97; // [rsp+F8h] [rbp+20h]
  unsigned __int8 v98; // [rsp+F8h] [rbp+20h]

  v92 = a2;
  v3 = MmNumberOfChannels;
  v4 = 0;
  v5 = a1;
  v75 = 1;
  v6 = a2 >> byte_140C506CC;
  v7 = a3;
  v8 = 0LL;
  v82 = a2 >> byte_140C506CC;
  v85 = MmNumberOfChannels;
  v74 = 0;
  v9 = 3;
  v10 = a2;
  v11 = a2 >> byte_140C506CC;
LABEL_2:
  v78 = 0LL;
LABEL_3:
  v12 = *(_QWORD *)(v5 + 16) + 24512LL * v11;
  if ( !*(_QWORD *)(v12 + 22608) && (_DWORD)InitializationPhase )
  {
    v55 = *(_QWORD *)(v5 + 16896);
    v56 = v55 - 1;
    if ( !v55 )
      v56 = 0LL;
    if ( !(unsigned int)MiPageAvailableEx(v5, v56, v7) )
      return -1LL;
    v8 = v78;
    goto LABEL_158;
  }
  if ( v3 > 1 )
  {
    v8 = (unsigned __int8 *)(v12 + 22817);
    v78 = (unsigned __int8 *)(v12 + 22817);
    if ( v11 == v6 )
    {
      v75 = (*(_DWORD *)(v12 + 22784) & 1) == 0;
      if ( (v7 & 8) != 0 )
      {
        v8 = (unsigned __int8 *)(v12 + 22821);
        v78 = (unsigned __int8 *)(v12 + 22821);
      }
      if ( (v7 & 0x20) != 0 && (*(_DWORD *)(v12 + 22784) & 1) != 0 )
      {
        v57 = &v80;
        v58 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v10 >> byte_140C506CD);
        v79 = MiChannelMaximumPowerOf2Mask & (v10 >> byte_140C506CD);
        v59 = v3;
        do
        {
          v60 = *v8;
          if ( v60 != v58 )
            *v57++ = v60;
          ++v8;
          --v59;
        }
        while ( v59 );
        v8 = (unsigned __int8 *)&v79;
        v78 = (unsigned __int8 *)&v79;
      }
      v74 = *v8;
    }
  }
  v89 = &v8[v3];
  v81 = v7 & 2;
  while ( 1 )
  {
    if ( v8 )
    {
      v10 = v10 & dword_140C50738 | (v11 << byte_140C506CC) | (*v8 << byte_140C506CD);
      v92 = v10;
    }
    v6 = v82;
    v13 = &MiZeroThenZero;
    if ( !v81 )
      v13 = &MiFreeThenFree;
    v7 = a3;
    v14 = 16LL * v10;
    v76 = v14;
    v15 = *(_DWORD *)v13;
    do
    {
      v94 = v15;
      v16 = (union _SLIST_HEADER *)(v14 + *(_QWORD *)(v5 + 8LL * v15 + 6616));
      if ( LOWORD(v16->Alignment) )
      {
        PerfectColorHeadPage = (__int64)RtlpInterlockedPopEntrySList(v16);
        if ( PerfectColorHeadPage )
        {
          *(_QWORD *)(PerfectColorHeadPage + 16) = ZeroPte;
          if ( !v94 )
          {
            if ( (MiFlags & 0x80u) != 0 && (++dword_140C52AE0 & MmPageValidationFrequency) == 0 )
              MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((PerfectColorHeadPage + 0x220000000000LL) >> 4));
            goto LABEL_15;
          }
          if ( ZeroPte )
          {
            v50 = ZeroPte & 0xFFFFFFFFFFFFFC9FuLL;
          }
          else
          {
            v49 = 128LL;
            if ( !qword_140C50780 )
            {
LABEL_83:
              *(_QWORD *)(PerfectColorHeadPage + 16) = v49;
LABEL_15:
              *(_QWORD *)PerfectColorHeadPage = 0LL;
              goto LABEL_16;
            }
            if ( (qword_140C50780 & 0x80) != 0 )
            {
              v49 = 144LL;
              goto LABEL_83;
            }
            v50 = qword_140C50780;
          }
          v49 = v50 | 0x80;
          goto LABEL_83;
        }
        v14 = v76;
        v5 = a1;
      }
      v15 = *((_DWORD *)v13 + 1);
    }
    while ( v94 != v15 );
    PerfectColorHeadPage = MiGetPerfectColorHeadPage(
                             v5,
                             *(_DWORD *)(v5 + 8LL * *(int *)v13 + 2432) + 88 * v92,
                             v92,
                             *(_DWORD *)v13,
                             a3);
LABEL_16:
    if ( PerfectColorHeadPage == 1 )
      return -1LL;
    if ( PerfectColorHeadPage )
      goto LABEL_18;
    v27 = &MiZeroThenZero;
    v28 = a3 & 0xFFFFFFFD;
    if ( !v81 )
      v28 = a3 | 2;
    v83 = v28;
    if ( (v28 & 2) == 0 )
      v27 = &MiFreeThenFree;
    v84 = v27;
    v29 = *(_DWORD *)v27;
    while ( 2 )
    {
      v95 = v29;
      v30 = (union _SLIST_HEADER *)(v76 + *(_QWORD *)(a1 + 8LL * v29 + 6616));
      if ( LOWORD(v30->Alignment) )
      {
        PerfectColorHeadPage = (__int64)RtlpInterlockedPopEntrySList(v30);
        if ( PerfectColorHeadPage )
        {
          *(_QWORD *)(PerfectColorHeadPage + 16) = ZeroPte;
          if ( !v95 )
          {
            if ( (MiFlags & 0x80u) != 0 && (++dword_140C52AE0 & MmPageValidationFrequency) == 0 )
              MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((PerfectColorHeadPage + 0x220000000000LL) >> 4));
            goto LABEL_51;
          }
          if ( ZeroPte )
          {
            v48 = ZeroPte & 0xFFFFFFFFFFFFFC9FuLL;
LABEL_76:
            v47 = v48 | 0x80;
          }
          else
          {
            v47 = 128LL;
            if ( qword_140C50780 )
            {
              if ( (qword_140C50780 & 0x80) == 0 )
              {
                v48 = qword_140C50780;
                goto LABEL_76;
              }
              v47 = 144LL;
            }
          }
          *(_QWORD *)(PerfectColorHeadPage + 16) = v47;
LABEL_51:
          v31 = a1;
          *(_QWORD *)PerfectColorHeadPage = 0LL;
          goto LABEL_52;
        }
        v27 = v84;
      }
      v29 = *((_DWORD *)v27 + 1);
      if ( v95 != v29 )
        continue;
      break;
    }
    v31 = a1;
    PerfectColorHeadPage = MiGetPerfectColorHeadPage(
                             a1,
                             *(_DWORD *)(a1 + 8LL * *(int *)v27 + 2432) + 88 * v92,
                             v92,
                             *(_DWORD *)v27,
                             v83);
LABEL_52:
    if ( PerfectColorHeadPage == 1 )
      return -1LL;
    if ( PerfectColorHeadPage )
      goto LABEL_18;
    memset(&LockHandle, 0, sizeof(LockHandle));
    v32 = *(_QWORD *)(v31 + 16) + 24512LL * (v92 >> byte_140C506CC);
    v96 = 0;
    if ( (unsigned int)MmNumberOfChannels > 1 )
      v96 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v92 >> byte_140C506CD);
    v33 = 0LL;
    for ( i = 0LL; i <= 1; ++i )
    {
      v35 = v96;
      if ( (unsigned int)MmNumberOfChannels > 1 )
        v36 = *(_QWORD *)(v32 + 8 * (i + 2LL * v96) + 22720) + v33;
      else
        v36 = *(_QWORD *)(v32 + 8 * i + 22560) + v33;
      v37 = 0LL;
      v84 = (__int64 *)v36;
      v38 = (_QWORD *)(v32 + 8 * i);
      v86 = 0LL;
      v87 = v38;
      v39 = MiLargePageSizes;
      v40 = 0LL;
      v41 = v32;
      v42 = 3LL;
      do
      {
        v88 = *v39;
        if ( v96 == 4 )
        {
          v44 = *v38;
          v35 = 4LL;
        }
        else
        {
          v43 = v40 + 4 * (v35 + 4 * i);
          v44 = *(_QWORD *)(v32 + 8 * v43 + 48)
              + *(_QWORD *)(v32 + 8 * v43 + 56)
              + *(_QWORD *)(v32 + 8 * v43 + 72)
              + *(_QWORD *)(v32 + 8 * v43 + 304)
              + *(_QWORD *)(v32 + 8 * v43 + 312)
              + *(_QWORD *)(v32 + 8 * v43 + 328)
              + *(_QWORD *)(v32 + 8 * v43 + 64)
              + *(_QWORD *)(v32 + 8 * v43 + 320);
          v38 = v87;
          v37 = v86;
        }
        v38 += 134;
        ++v39;
        v37 += v88 * v44;
        v87 = v38;
        v41 += 1072LL;
        v86 = v37;
        v40 += 134LL;
        --v42;
      }
      while ( v42 );
      v33 = (unsigned __int64)v84 + v37;
    }
    v6 = v82;
    v7 = a3;
    v45 = a1;
    if ( v33 < 0x200 && (unsigned __int64)MiGetNodeStandbyPageCount(a1, v92 >> byte_140C506CC, v96, v39) >= 0x1000 )
    {
      v61 = (_QWORD *)(a1 + 16064);
      if ( !*(_QWORD *)(a1 + 16080) && (*(_DWORD *)(a1 + 4) & 1) == 0 )
      {
        v77 = 0;
        KeAcquireInStackQueuedSpinLock(&qword_140C51F00, &LockHandle);
        if ( !*(_QWORD *)(a1 + 16080)
          && (*(_DWORD *)(a1 + 4) & 1) == 0
          && (unsigned __int8)PsReferencePartitionSafe(*(_QWORD *)(a1 + 176), v62, v63) )
        {
          *(_QWORD *)(a1 + 16088) = a1;
          *(_QWORD *)(a1 + 16080) = MiRebalanceZeroFreeLists;
          v77 = 1;
          *v61 = 0LL;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        v98 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v68 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v69 = (v68 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v68;
              if ( v69 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                OldIrql = v98;
              }
            }
          }
        }
        __writecr8(OldIrql);
        if ( v77 )
          ExQueueWorkItemToPartition((ULONG_PTR)v61, 1, 0xFFFFFFFF, *(_QWORD *)(a1 + 176));
        v45 = a1;
      }
    }
    v97 = a3;
    if ( (a3 & 1) == 0 )
    {
      v46 = *(int *)(v45 + 16188);
      if ( v46 >= 0x10 )
        v46 = 16LL;
      PerfectColorHeadPage = MiDemoteLocalLargePage(v45, v92, a3, (unsigned int)dword_140C50738 * v46);
      if ( PerfectColorHeadPage )
        break;
    }
    v51 = MiRemovePageAnyColor(v45, v92, a3);
    PerfectColorHeadPage = v51;
    if ( v51 == 1 )
      return -1LL;
    if ( v51 )
      break;
    PerfectColorHeadPage = (__int64)MiGetPageSlist(v45, v92, a3);
    if ( PerfectColorHeadPage )
      break;
    v52 = a3;
    if ( (a3 & 0x4000) != 0 )
    {
      v52 = a3 & 0xFFFFBFFF;
      v97 = a3 & 0xBFFF;
    }
    v53 = MiRemovePageAnyColor(v45, v92, v52 | 0x40000);
    PerfectColorHeadPage = v53;
    if ( v53 == 1 )
      return -1LL;
    if ( v53 )
      break;
    if ( (v97 & 0x4000) != 0 )
    {
      PerfectColorHeadPage = (__int64)MiGetPageSlist(v45, v92, v97);
      if ( PerfectColorHeadPage )
        break;
    }
LABEL_100:
    FreeOrZeroPageAnyColor = MiGetFreeOrZeroPageAnyColor(v45, v92, v83);
    PerfectColorHeadPage = FreeOrZeroPageAnyColor;
    if ( FreeOrZeroPageAnyColor == 1 )
      return -1LL;
    if ( FreeOrZeroPageAnyColor )
      goto LABEL_18;
    v5 = a1;
    v70 = *(_QWORD *)(a1 + 16896);
    v71 = v70 - 1;
    if ( !v70 )
      v71 = 0LL;
    if ( !(unsigned int)MiPageAvailableEx(a1, v71, a3) )
      return -1LL;
    v10 = v92;
    v8 = v78 + 1;
    v78 = v8;
    if ( v8 == v89 )
    {
      v3 = v85;
LABEL_158:
      if ( (v7 & 0x4000) != 0 )
        return -1LL;
      if ( ++v4 == (unsigned __int16)KeNumberNodes || (v7 & 0x10) != 0 )
      {
        if ( (v7 & 1) == 0 )
        {
          v18 = v74;
          if ( (v7 & 0x30) == 0 || (unsigned int)MiCheckNodeChannelStandbyCount(v5, v6, v74) )
          {
            v72 = MiRemoveLowestPriorityStandbyPage(v5, 8LL, v7);
            if ( v72 != -1 )
            {
              PerfectColorHeadPage = 48 * v72 - 0x220000000000LL;
              goto LABEL_19;
            }
          }
        }
        return -1LL;
      }
      v11 = *(_DWORD *)(qword_140C506D8 + 4LL * (v4 + v6 * (unsigned __int16)KeNumberNodes));
      if ( v3 == 1 )
      {
        v8 = 0LL;
        v10 = v10 & dword_140C50738 | (v11 << byte_140C506CC);
        v92 = v10;
        goto LABEL_2;
      }
      goto LABEL_3;
    }
  }
  if ( PerfectColorHeadPage == 1 )
    return -1LL;
  if ( !PerfectColorHeadPage )
    goto LABEL_100;
LABEL_18:
  v18 = v74;
LABEL_19:
  *(_QWORD *)PerfectColorHeadPage = 0LL;
  v19 = dword_140C506C8;
  v20 = 0xAAAAAAAAAAAAAAABuLL * ((PerfectColorHeadPage + 0x220000000000LL) >> 4);
  if ( dword_140C506C4 > (unsigned int)dword_140C506C8
    || (v21 = (char *)qword_140C50708 + 16 * dword_140C506C4, v20 < *(_QWORD *)v21)
    || dword_140C506C4 != dword_140C506C8 && v20 >= *((_QWORD *)v21 + 2) )
  {
    v25 = 0;
    if ( dword_140C506C8 < 0 )
LABEL_185:
      KeBugCheckEx(0x1Au, 0x6201uLL, 0xAAAAAAAAAAAAAAABuLL * ((PerfectColorHeadPage + 0x220000000000LL) >> 4), 0LL, 0LL);
    while ( 1 )
    {
      v26 = (v25 + v19) >> 1;
      v21 = (char *)qword_140C50708 + 16 * v26;
      if ( v20 < *(_QWORD *)v21 )
      {
        if ( !v26 )
          KeBugCheckEx(
            0x1Au,
            0x6200uLL,
            0xAAAAAAAAAAAAAAABuLL * ((PerfectColorHeadPage + 0x220000000000LL) >> 4),
            (ULONG_PTR)qword_140C50708,
            0LL);
        v19 = v26 - 1;
      }
      else
      {
        if ( v26 == dword_140C506C8 || v20 < *((_QWORD *)v21 + 2) )
        {
          dword_140C506C4 = (v25 + v19) >> 1;
          break;
        }
        v25 = v26 + 1;
      }
      if ( v19 < v25 )
        goto LABEL_185;
    }
  }
  if ( *((_DWORD *)v21 + 2) == v6 )
  {
    if ( qword_140C50710 )
      v22 = MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * ((PerfectColorHeadPage + 0x220000000000LL) >> 4));
    else
      v22 = 0;
    if ( v22 != v18 )
    {
      v73 = v75;
      if ( !v75 )
        goto LABEL_175;
    }
    goto LABEL_26;
  }
  v73 = v75;
LABEL_175:
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x80u) == 0 )
    {
      v20 = MiSwapNumaStandbyPage(
              0xAAAAAAAAAAAAAAABuLL * ((PerfectColorHeadPage + 0x220000000000LL) >> 4),
              v6,
              v18,
              v7 | 0x10);
      PerfectColorHeadPage = 48 * v20 - 0x220000000000LL;
    }
    if ( (v7 & 0x10) != 0
      && *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((PerfectColorHeadPage + 0x220000000000LL) >> 4)) + 2) != v6
      || (v7 & 0x20) != 0 && (unsigned int)MiGetPfnChannel(PerfectColorHeadPage) != v18 && !v73 )
    {
      MiReleaseFreshPage(PerfectColorHeadPage);
      return -1LL;
    }
  }
LABEL_26:
  if ( (v7 & 0x200) != 0 )
  {
    v23 = 1;
  }
  else if ( (v7 & 0x400) != 0 )
  {
    v23 = 0;
  }
  else
  {
    if ( (v7 & 0x800) != 0 )
      v9 = 2;
    v23 = v9;
  }
  if ( (v7 & 0x100) != 0 && MiPfnZeroingNeeded(PerfectColorHeadPage, v23) )
  {
    MiZeroPhysicalPage(v20, (v7 & 0x8000) == 0, v23);
    *(_QWORD *)(PerfectColorHeadPage + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
  }
  if ( v23 != 3 && *(unsigned __int8 *)(PerfectColorHeadPage + 34) >> 6 != v23 )
    MiChangePageAttribute(PerfectColorHeadPage, v23, 0);
  return v20;
}
