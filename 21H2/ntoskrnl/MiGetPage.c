/*
 * XREFs of MiGetPage @ 0x1402B7F10
 * Callers:
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     MiTradeTransitionPage @ 0x140259688 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiGetSystemPage @ 0x14025EE78 (MiGetSystemPage.c)
 *     MiGetPoolPages @ 0x1402629AC (MiGetPoolPages.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402944B4 (MiCreateUltraThreadContextHelper.c)
 *     MiGetPageTablePages @ 0x140296CF0 (MiGetPageTablePages.c)
 *     MiGetPageChain @ 0x1402B7610 (MiGetPageChain.c)
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiAllocateKernelStackPages @ 0x1402E3050 (MiAllocateKernelStackPages.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiPfPutPagesInTransition @ 0x140306370 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x14032EDC0 (MiMakePageAvoidRead.c)
 *     MiAllocateMdlPagesByLists @ 0x140374264 (MiAllocateMdlPagesByLists.c)
 *     MiGetFileHashPage @ 0x14038D1B0 (MiGetFileHashPage.c)
 *     MiMakeOutswappedPageResident @ 0x14052BD00 (MiMakeOutswappedPageResident.c)
 *     MmAllocateNonChargedSecurePages @ 0x14053454C (MmAllocateNonChargedSecurePages.c)
 *     MiSwitchToTransition @ 0x14053A154 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14053D9AC (MiReplaceLockedPage.c)
 *     MiSplitDirectMapPage @ 0x14054237C (MiSplitDirectMapPage.c)
 *     MiPruneStandbyPages @ 0x140551014 (MiPruneStandbyPages.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x14055A378 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x14055ACA4 (MiHandleForkTransitionPte.c)
 *     MiAllocateTopLevelPage @ 0x1406A7B04 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x1406A8D58 (MiAllocateDriverPage.c)
 *     MiPfPrepareReadList @ 0x140706CF0 (MiPfPrepareReadList.c)
 *     MmAllocateIndependentPagesEx @ 0x140762BCC (MmAllocateIndependentPagesEx.c)
 *     MiFillPerSessionProtos @ 0x1408D8140 (MiFillPerSessionProtos.c)
 *     MiComputeOptimalZeroPath @ 0x140A558A8 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140A55B0C (MiInitializeCacheFlushing.c)
 *     MiAllocateDummyPage @ 0x140A56B98 (MiAllocateDummyPage.c)
 *     MxSwapPages @ 0x140A58120 (MxSwapPages.c)
 *     MiInitializeGapFrames @ 0x140A67B10 (MiInitializeGapFrames.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x140215A94 (MiGetFreeOrZeroPageAnyColor.c)
 *     MiGetPerfectColorHeadPage @ 0x140215F28 (MiGetPerfectColorHeadPage.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x14021614C (KxTryToAcquireQueuedSpinLock.c)
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402DAC10 (MiUnlinkFreeOrZeroedPage.c)
 *     MiPfnZeroingNeeded @ 0x1402DD3B0 (MiPfnZeroingNeeded.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiPageToChannel @ 0x140309E58 (MiPageToChannel.c)
 *     MiReturnFreeZeroPage @ 0x14030DDA0 (MiReturnFreeZeroPage.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiReplenishPageSlist @ 0x140323450 (MiReplenishPageSlist.c)
 *     MiCheckZeroFreeRebalance @ 0x140323AA0 (MiCheckZeroFreeRebalance.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385270 (MiRemoveLowestPriorityStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     MiArePageContentsZero @ 0x14054EE08 (MiArePageContentsZero.c)
 *     MiCheckNodeChannelStandbyCount @ 0x14054F01C (MiCheckNodeChannelStandbyCount.c)
 *     MiSwapNumaStandbyPage @ 0x140551610 (MiSwapNumaStandbyPage.c)
 *     MiPageAvailable @ 0x14055C1F4 (MiPageAvailable.c)
 */

__int64 __fastcall MiGetPage(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 *CurrentIrql; // r11
  __int64 v5; // r14
  unsigned int v6; // ebx
  int v7; // esi
  unsigned __int8 *SchedulerAssist; // r9
  unsigned int v9; // r15d
  unsigned int v10; // ebp
  unsigned int v11; // r12d
  unsigned int v12; // edi
  __int64 v13; // rdx
  unsigned int v14; // ecx
  bool v15; // zf
  __int64 *v16; // r12
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned int i; // r13d
  _SLIST_HEADER *v20; // rcx
  __int64 PerfectColorHeadPage; // r14
  __int64 v22; // r13
  unsigned int v23; // r13d
  int v24; // edx
  ULONG_PTR v25; // rdi
  char *v26; // rax
  int v27; // eax
  int v29; // r8d
  int v30; // ecx
  unsigned int v31; // edx
  __int64 v32; // rcx
  ULONG_PTR v33; // r12
  __int64 *v34; // r13
  __int64 v35; // r12
  __int64 *v36; // rdx
  unsigned int v37; // r8d
  int v38; // eax
  _SLIST_HEADER *v39; // rcx
  __int64 FreeOrZeroPageAnyColor; // rax
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  int v48; // ecx
  volatile signed __int64 *v49; // rcx
  signed __int8 v50; // al
  _DWORD *v51; // rdx
  unsigned __int8 *v53; // r8
  char *v54; // rax
  int v55; // r9d
  __int64 v56; // rdx
  int v57; // ecx
  volatile signed __int32 *v58; // r13
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  int v61; // eax
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r10
  int v64; // eax
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r10
  _DWORD *v67; // r9
  int v68; // eax
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r10
  _DWORD *v71; // r9
  int v72; // eax
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r10
  _DWORD *v75; // r9
  int v76; // eax
  unsigned __int8 v77; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v79; // r9
  int v80; // eax
  int v82; // eax
  __int64 v83; // rax
  BOOL v84; // esi
  unsigned int v85; // [rsp+30h] [rbp-A8h]
  unsigned int v86; // [rsp+34h] [rbp-A4h]
  volatile signed __int64 *v87; // [rsp+38h] [rbp-A0h]
  __int64 *v88; // [rsp+40h] [rbp-98h]
  unsigned __int8 *v89; // [rsp+48h] [rbp-90h]
  BOOL v90; // [rsp+50h] [rbp-88h]
  char v91; // [rsp+54h] [rbp-84h] BYREF
  char v92; // [rsp+55h] [rbp-83h] BYREF
  unsigned int v93; // [rsp+58h] [rbp-80h]
  int v94; // [rsp+5Ch] [rbp-7Ch] BYREF
  int v95; // [rsp+60h] [rbp-78h]
  __int64 *v96; // [rsp+68h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-68h] BYREF
  __int64 v98; // [rsp+88h] [rbp-50h]
  __int64 v99; // [rsp+90h] [rbp-48h]
  unsigned __int8 *v100; // [rsp+98h] [rbp-40h]
  unsigned int v102; // [rsp+E8h] [rbp+10h]
  unsigned int v103; // [rsp+F8h] [rbp+20h]
  int v104; // [rsp+F8h] [rbp+20h]

  v102 = a2;
  v3 = MmNumberOfChannels;
  CurrentIrql = &MiFreeThenFree;
  v5 = a1;
  v95 = MmNumberOfChannels;
  v6 = a2 >> byte_140C4DECC;
  v7 = 0;
  SchedulerAssist = 0LL;
  v9 = 1;
  v90 = 1;
  v85 = 0;
  v10 = a3;
  v11 = a2;
  v12 = a2 >> byte_140C4DECC;
  while ( 2 )
  {
    v89 = 0LL;
LABEL_3:
    v13 = *(_QWORD *)(v5 + 16) + 4544LL * v12;
    if ( !*(_QWORD *)(v13 + 4176) && (_DWORD)InitializationPhase )
    {
      if ( (unsigned int)MiPageAvailable(v5, v10, a3, SchedulerAssist) )
      {
        SchedulerAssist = v89;
        goto LABEL_193;
      }
      return -1LL;
    }
    if ( v3 > 1 )
    {
      SchedulerAssist = (unsigned __int8 *)(v13 + 4313);
      v89 = (unsigned __int8 *)(v13 + 4313);
      if ( v12 == v6 )
      {
        v53 = (unsigned __int8 *)(v13 + ((v10 & 8 | 0x21B2uLL) >> 1));
        v90 = (*(_DWORD *)(v13 + 4280) & 1) == 0;
        v89 = v53;
        SchedulerAssist = v53;
        if ( (v10 & 0x20) != 0 )
        {
          v89 = (unsigned __int8 *)(v13 + ((v10 & 8 | 0x21B2uLL) >> 1));
          if ( (*(_DWORD *)(v13 + 4280) & 1) != 0 )
          {
            v54 = &v92;
            v55 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v11 >> byte_140C4DECD);
            v91 = MiChannelMaximumPowerOf2Mask & (v11 >> byte_140C4DECD);
            v56 = v3;
            do
            {
              v57 = *v53;
              if ( v57 != v55 )
                *v54++ = v57;
              ++v53;
              --v56;
            }
            while ( v56 );
            SchedulerAssist = (unsigned __int8 *)&v91;
            v89 = (unsigned __int8 *)&v91;
          }
        }
        CurrentIrql = &MiFreeThenFree;
        v85 = *SchedulerAssist;
      }
    }
    LODWORD(a3) = v10 & 2;
    v100 = &SchedulerAssist[v3];
    v93 = a3;
    do
    {
      if ( SchedulerAssist )
      {
        v14 = v11 & dword_140C4DF38 | (v12 << byte_140C4DECC) | (*SchedulerAssist << byte_140C4DECD);
        v102 = v14;
      }
      else
      {
        v14 = v102;
      }
      v15 = (_DWORD)a3 == 0;
      v16 = &MiZeroThenZero;
      v17 = v14;
      if ( v15 )
        v16 = CurrentIrql;
      v99 = v14;
      v18 = 16LL * v14;
      v98 = v18;
      for ( i = *(_DWORD *)v16; ; i = *((_DWORD *)v16 + 1) )
      {
        v20 = (_SLIST_HEADER *)(v18 + *(_QWORD *)(v5 + 8LL * (int)i + 4200));
        if ( LOWORD(v20->Alignment) )
        {
          PerfectColorHeadPage = (__int64)RtlpInterlockedPopEntrySList(v20);
          if ( PerfectColorHeadPage )
          {
            *(_QWORD *)(PerfectColorHeadPage + 16) = ZeroPte;
            if ( !i )
            {
              if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E80C & MmPageValidationFrequency) == 0 )
                MiArePageContentsZero((PerfectColorHeadPage + 0x58000000000LL) / 48);
              goto LABEL_15;
            }
            if ( ZeroPte )
            {
              v45 = ZeroPte & 0xFFFFFFFFFFFFFC9FuLL;
            }
            else
            {
              v44 = 128LL;
              if ( !qword_140C4DF80 )
              {
LABEL_68:
                *(_QWORD *)(PerfectColorHeadPage + 16) = v44;
LABEL_15:
                *(_QWORD *)PerfectColorHeadPage = 0LL;
                goto LABEL_16;
              }
              if ( (qword_140C4DF80 & 0x80) != 0 )
              {
                v44 = 144LL;
                goto LABEL_68;
              }
              v45 = qword_140C4DF80;
            }
            v44 = v45 | 0x80;
            goto LABEL_68;
          }
          v18 = v98;
          v5 = a1;
        }
        if ( i == *((_DWORD *)v16 + 1) )
          break;
      }
      v103 = *(_DWORD *)v16;
      v31 = v103;
      memset(&LockHandle, 0, sizeof(LockHandle));
      v32 = *(_QWORD *)(v5 + 8LL * (int)v103 + 2176);
      v33 = *(_QWORD *)(v32 + 40 * v99 + 16);
      v34 = (__int64 *)(v32 + 40 * v99);
      v96 = v34;
      if ( v33 == 0xFFFFFFFFFLL )
      {
LABEL_45:
        PerfectColorHeadPage = 0LL;
        goto LABEL_16;
      }
      v48 = v10 & 1;
      while ( 2 )
      {
        PerfectColorHeadPage = 48 * v33 - 0x58000000000LL;
        if ( v48 )
        {
          v49 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          v87 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          if ( _interlockedbittestandset64((volatile signed __int32 *)(PerfectColorHeadPage + 24), 0x3FuLL) )
            goto LABEL_45;
          LOBYTE(CurrentIrql) = 17;
          v88 = CurrentIrql;
        }
        else
        {
          CurrentIrql = (__int64 *)KeGetCurrentIrql();
          v88 = CurrentIrql;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
          {
            SchedulerAssist = (unsigned __int8 *)KeGetCurrentPrcb()->SchedulerAssist;
            v17 = (unsigned int)(-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4 | *((_DWORD *)SchedulerAssist + 5);
            v31 = v103;
            *((_DWORD *)SchedulerAssist + 5) = v17;
          }
          v49 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          v50 = _interlockedbittestandset64((volatile signed __int32 *)(PerfectColorHeadPage + 24), 0x3FuLL);
          v87 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          if ( (v10 & 0x4000) != 0 )
          {
            v94 = 0;
            if ( v50 )
            {
              v58 = (volatile signed __int32 *)(PerfectColorHeadPage + 24);
              do
              {
                do
                  KeYieldProcessorEx(&v94);
                while ( *(__int64 *)v58 < 0 );
              }
              while ( _interlockedbittestandset64(v58, 0x3FuLL) );
              v34 = v96;
              v31 = v103;
              v49 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
              CurrentIrql = v88;
            }
          }
          else
          {
            v87 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
            if ( v50 )
            {
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v77 = KeGetCurrentIrql();
                  if ( v77 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v77 >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v79 = CurrentPrcb->SchedulerAssist;
                    v80 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
                    v15 = (v80 & v79[5]) == 0;
                    v79[5] &= v80;
                    if ( v15 )
                    {
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                      LOBYTE(CurrentIrql) = (_BYTE)v88;
                    }
                  }
                }
              }
              __writecr8((unsigned __int8)CurrentIrql);
              goto LABEL_45;
            }
          }
        }
        if ( (*(_BYTE *)(PerfectColorHeadPage + 34) & 7) != v31 )
        {
          _InterlockedAnd64(v49, 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_BYTE)CurrentIrql != 17 )
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v59 = KeGetCurrentIrql();
                if ( v59 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v59 >= 2u )
                {
                  v60 = KeGetCurrentPrcb();
                  SchedulerAssist = (unsigned __int8 *)v60->SchedulerAssist;
                  v61 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
                  v15 = (v61 & *((_DWORD *)SchedulerAssist + 5)) == 0;
                  v17 = (unsigned int)v61 & *((_DWORD *)SchedulerAssist + 5);
                  *((_DWORD *)SchedulerAssist + 5) = v17;
                  if ( v15 )
                  {
                    KiRemoveSystemWorkPriorityKick(v60);
                    CurrentIrql = v88;
                  }
                  v31 = v103;
                }
              }
            }
            __writecr8((unsigned __int8)CurrentIrql);
          }
          goto LABEL_107;
        }
        LockHandle.LockQueue.Next = 0LL;
        v51 = v34 + 4;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v34 + 4);
        if ( (v10 & 0x4000) != 0 )
        {
          KxAcquireQueuedSpinLock(&LockHandle, v51, v17, SchedulerAssist);
        }
        else if ( !(unsigned int)KxTryToAcquireQueuedSpinLock((signed __int64)&LockHandle, v51) )
        {
          _InterlockedAnd64(v87, 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_BYTE)v88 != 17 )
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v73 = KeGetCurrentIrql();
                if ( v73 <= 0xFu && (unsigned __int8)v88 <= 0xFu && v73 >= 2u )
                {
                  v74 = KeGetCurrentPrcb();
                  v75 = v74->SchedulerAssist;
                  v76 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v88 + 1));
                  v15 = (v76 & v75[5]) == 0;
                  v75[5] &= v76;
                  if ( v15 )
                    KiRemoveSystemWorkPriorityKick(v74);
                }
              }
            }
            __writecr8((unsigned __int8)v88);
          }
          goto LABEL_45;
        }
        if ( v33 != v34[2] )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          _InterlockedAnd64(v87, 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_BYTE)v88 != 17 )
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v62 = KeGetCurrentIrql();
                if ( v62 <= 0xFu && (unsigned __int8)v88 <= 0xFu && v62 >= 2u )
                {
                  v63 = KeGetCurrentPrcb();
                  SchedulerAssist = (unsigned __int8 *)v63->SchedulerAssist;
                  v64 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v88 + 1));
                  v15 = (v64 & *((_DWORD *)SchedulerAssist + 5)) == 0;
                  v17 = (unsigned int)v64 & *((_DWORD *)SchedulerAssist + 5);
                  *((_DWORD *)SchedulerAssist + 5) = v17;
                  if ( v15 )
                    KiRemoveSystemWorkPriorityKick(v63);
                }
              }
            }
            __writecr8((unsigned __int8)v88);
          }
          v31 = v103;
LABEL_107:
          v33 = v34[2];
          if ( v33 == 0xFFFFFFFFFLL )
            goto LABEL_45;
          v48 = v10 & 1;
          continue;
        }
        break;
      }
      if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v33) )
      {
        _InterlockedAnd64(v87, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v10 & 1) != 0 )
        {
          v22 = a1;
        }
        else
        {
          v15 = v34[2] == 0xFFFFFFFFFLL;
          v22 = a1;
          if ( !v15 )
            MiReplenishPageSlist(a1, v103, v102);
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( (_BYTE)v88 != 17 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v69 = KeGetCurrentIrql();
              if ( v69 <= 0xFu && (unsigned __int8)v88 <= 0xFu && v69 >= 2u )
              {
                v70 = KeGetCurrentPrcb();
                v71 = v70->SchedulerAssist;
                v72 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v88 + 1));
                v15 = (v72 & v71[5]) == 0;
                v71[5] &= v72;
                if ( v15 )
                  KiRemoveSystemWorkPriorityKick(v70);
              }
            }
          }
          __writecr8((unsigned __int8)v88);
        }
        goto LABEL_17;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      MiReturnFreeZeroPage(48 * v33 - 0x58000000000LL, 0LL);
      _InterlockedAnd64(v87, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_BYTE)v88 != 17 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v65 = KeGetCurrentIrql();
            if ( v65 <= 0xFu && (unsigned __int8)v88 <= 0xFu && v65 >= 2u )
            {
              v66 = KeGetCurrentPrcb();
              v67 = v66->SchedulerAssist;
              v68 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v88 + 1));
              v15 = (v68 & v67[5]) == 0;
              v67[5] &= v68;
              if ( v15 )
                KiRemoveSystemWorkPriorityKick(v66);
            }
          }
        }
        __writecr8((unsigned __int8)v88);
      }
      PerfectColorHeadPage = 1LL;
LABEL_16:
      v22 = a1;
LABEL_17:
      if ( PerfectColorHeadPage == 1 )
        return -1LL;
      if ( PerfectColorHeadPage )
      {
LABEL_19:
        v23 = v85;
LABEL_20:
        *(_QWORD *)PerfectColorHeadPage = 0LL;
        v24 = dword_140C4DEC8;
        v25 = (PerfectColorHeadPage + 0x58000000000LL) / 48;
        if ( dword_140C4DEC4 > (unsigned int)dword_140C4DEC8
          || (v26 = (char *)qword_140C4DF08 + 16 * dword_140C4DEC4, v25 < *(_QWORD *)v26)
          || dword_140C4DEC4 != dword_140C4DEC8 && v25 >= *((_QWORD *)v26 + 2) )
        {
          v29 = 0;
          if ( dword_140C4DEC8 < 0 )
LABEL_220:
            KeBugCheckEx(0x1Au, 0x6201uLL, (PerfectColorHeadPage + 0x58000000000LL) / 48, 0LL, 0LL);
          while ( 1 )
          {
            v30 = (v29 + v24) >> 1;
            v26 = (char *)qword_140C4DF08 + 16 * v30;
            if ( v25 < *(_QWORD *)v26 )
            {
              if ( !v30 )
                KeBugCheckEx(
                  0x1Au,
                  0x6200uLL,
                  (PerfectColorHeadPage + 0x58000000000LL) / 48,
                  (ULONG_PTR)qword_140C4DF08,
                  0LL);
              v24 = v30 - 1;
            }
            else
            {
              if ( v30 == dword_140C4DEC8 || v25 < *((_QWORD *)v26 + 2) )
              {
                dword_140C4DEC4 = (v29 + v24) >> 1;
                break;
              }
              v29 = v30 + 1;
            }
            if ( v24 < v29 )
              goto LABEL_220;
          }
        }
        if ( *((_DWORD *)v26 + 2) == v6 )
        {
          if ( qword_140C4DF10 )
            v27 = MiPageToChannel((PerfectColorHeadPage + 0x58000000000LL) / 48);
          else
            v27 = 0;
          if ( v27 != v23 )
          {
            v84 = v90;
            if ( !v90 )
            {
LABEL_210:
              if ( (v10 & 1) == 0 )
              {
                if ( (v10 & 0x80u) == 0 )
                {
                  v25 = MiSwapNumaStandbyPage((PerfectColorHeadPage + 0x58000000000LL) / 48, v6, v23, v10 | 0x10);
                  PerfectColorHeadPage = 48 * v25 - 0x58000000000LL;
                }
                if ( (v10 & 0x10) != 0
                  && *(_DWORD *)(MiSearchNumaNodeTable((PerfectColorHeadPage + 0x58000000000LL) / 48) + 8) != v6
                  || (v10 & 0x20) != 0 && (unsigned int)MiGetPfnChannel(PerfectColorHeadPage) != v23 && !v84 )
                {
                  MiReleaseFreshPage(PerfectColorHeadPage);
                  return -1LL;
                }
              }
            }
          }
          if ( (v10 & 0x200) == 0 )
          {
            if ( (v10 & 0x400) != 0 )
            {
              v9 = 0;
            }
            else
            {
              v9 = 3;
              if ( (v10 & 0x800) != 0 )
                v9 = 2;
            }
          }
          if ( (v10 & 0x100) != 0 && (unsigned int)MiPfnZeroingNeeded(PerfectColorHeadPage, v9) )
          {
            MiZeroPhysicalPage(v25, (v10 & 0x8000) == 0, v9);
            *(_QWORD *)(PerfectColorHeadPage + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
          }
          if ( v9 != 3 && *(unsigned __int8 *)(PerfectColorHeadPage + 34) >> 6 != v9 )
            MiChangePageAttribute(PerfectColorHeadPage, v9, 0LL);
          return v25;
        }
        v84 = v90;
        goto LABEL_210;
      }
      v35 = v98;
      v36 = &MiZeroThenZero;
      v37 = v10 & 0xFFFFFFFD;
      if ( !v93 )
        v37 = v10 | 2;
      v86 = v37;
      if ( (v37 & 2) == 0 )
        v36 = &MiFreeThenFree;
      v96 = v36;
      v38 = *(_DWORD *)v36;
      while ( 2 )
      {
        v104 = v38;
        v39 = (_SLIST_HEADER *)(v35 + *(_QWORD *)(v22 + 8LL * v38 + 4200));
        if ( LOWORD(v39->Alignment) )
        {
          PerfectColorHeadPage = (__int64)RtlpInterlockedPopEntrySList(v39);
          if ( PerfectColorHeadPage )
          {
            *(_QWORD *)(PerfectColorHeadPage + 16) = ZeroPte;
            if ( !v104 )
            {
              if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E80C & MmPageValidationFrequency) == 0 )
                MiArePageContentsZero((PerfectColorHeadPage + 0x58000000000LL) / 48);
              goto LABEL_55;
            }
            if ( ZeroPte )
            {
              v47 = ZeroPte & 0xFFFFFFFFFFFFFC9FuLL;
LABEL_73:
              v46 = v47 | 0x80;
            }
            else
            {
              v46 = 128LL;
              if ( qword_140C4DF80 )
              {
                if ( (qword_140C4DF80 & 0x80u) == 0LL )
                {
                  v47 = qword_140C4DF80;
                  goto LABEL_73;
                }
                v46 = 144LL;
              }
            }
            *(_QWORD *)(PerfectColorHeadPage + 16) = v46;
LABEL_55:
            v11 = v102;
            *(_QWORD *)PerfectColorHeadPage = 0LL;
            goto LABEL_56;
          }
          v36 = v96;
        }
        v38 = *((_DWORD *)v36 + 1);
        if ( v104 != v38 )
          continue;
        break;
      }
      v11 = v102;
      PerfectColorHeadPage = MiGetPerfectColorHeadPage(
                               v22,
                               *(_QWORD *)(v22 + 8LL * *(int *)v36 + 2176) + 40 * v99,
                               v102,
                               (_DWORD *)*(int *)v36,
                               v86);
LABEL_56:
      if ( PerfectColorHeadPage == 1 )
        return -1LL;
      if ( PerfectColorHeadPage )
        goto LABEL_19;
      MiCheckZeroFreeRebalance(v22, v11);
      FreeOrZeroPageAnyColor = MiGetFreeOrZeroPageAnyColor(v22, v11, v10);
      PerfectColorHeadPage = FreeOrZeroPageAnyColor;
      if ( FreeOrZeroPageAnyColor == 1 )
        return -1LL;
      if ( FreeOrZeroPageAnyColor )
        goto LABEL_19;
      v41 = MiGetFreeOrZeroPageAnyColor(v22, v11, v86);
      PerfectColorHeadPage = v41;
      if ( v41 == 1 )
        return -1LL;
      if ( v41 )
        goto LABEL_19;
      v5 = a1;
      if ( !(unsigned int)MiPageAvailable(a1, v10, v42, v43) )
        return -1LL;
      CurrentIrql = &MiFreeThenFree;
      a3 = v93;
      SchedulerAssist = v89 + 1;
      v89 = SchedulerAssist;
    }
    while ( SchedulerAssist != v100 );
    v3 = v95;
LABEL_193:
    if ( (v10 & 0x4000) == 0 )
    {
      if ( ++v7 != (unsigned __int16)KeNumberNodes && (v10 & 0x10) == 0 )
      {
        v12 = *(_DWORD *)(qword_140C4DED8 + 4LL * (v7 + v6 * (unsigned __int16)KeNumberNodes));
        if ( v3 == 1 )
        {
          SchedulerAssist = 0LL;
          v82 = v11 & dword_140C4DF38;
          v11 = v11 & dword_140C4DF38 | (v12 << byte_140C4DECC);
          v102 = v82 | (v12 << byte_140C4DECC);
          continue;
        }
        goto LABEL_3;
      }
      if ( (v10 & 1) == 0 )
      {
        v23 = v85;
        if ( (v10 & 0x30) == 0 || (unsigned int)MiCheckNodeChannelStandbyCount(v5, v6, v85, SchedulerAssist) )
        {
          v83 = MiRemoveLowestPriorityStandbyPage(v5, 8LL, v10, SchedulerAssist);
          if ( v83 != -1 )
          {
            PerfectColorHeadPage = 48 * v83 - 0x58000000000LL;
            goto LABEL_20;
          }
        }
      }
    }
    return -1LL;
  }
}
