/*
 * XREFs of MiGetPage @ 0x140274DF0
 * Callers:
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MiMigratePfn @ 0x140279DD0 (MiMigratePfn.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     MiGetPoolPages @ 0x140333D10 (MiGetPoolPages.c)
 *     MiCreateUltraThreadContextHelper @ 0x14033404C (MiCreateUltraThreadContextHelper.c)
 *     MiGetPageTablePages @ 0x140336880 (MiGetPageTablePages.c)
 *     MiAllocateKernelStackPages @ 0x140348E30 (MiAllocateKernelStackPages.c)
 *     MiTradeTransitionPage @ 0x140350BC0 (MiTradeTransitionPage.c)
 *     MiGetSystemPage @ 0x1403512C4 (MiGetSystemPage.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiAllocateMdlPagesByLists @ 0x140374584 (MiAllocateMdlPagesByLists.c)
 *     MiGetFileHashPage @ 0x14038C940 (MiGetFileHashPage.c)
 *     MiMakeOutswappedPageResident @ 0x140529FC0 (MiMakeOutswappedPageResident.c)
 *     MmAllocateNonChargedSecurePages @ 0x14053280C (MmAllocateNonChargedSecurePages.c)
 *     MiSwitchToTransition @ 0x140538414 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14053BC6C (MiReplaceLockedPage.c)
 *     MiSplitDirectMapPage @ 0x14054063C (MiSplitDirectMapPage.c)
 *     MiPruneStandbyPages @ 0x14054F304 (MiPruneStandbyPages.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x140558668 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x140558F94 (MiHandleForkTransitionPte.c)
 *     MiPfPrepareReadList @ 0x140680D90 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x1406ED7B8 (MiAllocateDriverPage.c)
 *     MiAllocateTopLevelPage @ 0x1406EDC28 (MiAllocateTopLevelPage.c)
 *     MmAllocateIndependentPagesEx @ 0x14075E21C (MmAllocateIndependentPagesEx.c)
 *     MiFillPerSessionProtos @ 0x1408DA820 (MiFillPerSessionProtos.c)
 *     MiComputeOptimalZeroPath @ 0x140A532A0 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140A53504 (MiInitializeCacheFlushing.c)
 *     MiAllocateDummyPage @ 0x140A54590 (MiAllocateDummyPage.c)
 *     MxSwapPages @ 0x140A55AFC (MxSwapPages.c)
 *     MiInitializeGapFrames @ 0x140A6961C (MiInitializeGapFrames.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiReplenishPageSlist @ 0x140230AA0 (MiReplenishPageSlist.c)
 *     MiCheckZeroFreeRebalance @ 0x1402310F0 (MiCheckZeroFreeRebalance.c)
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C4BE0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiPfnZeroingNeeded @ 0x1402C7380 (MiPfnZeroingNeeded.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiPageToChannel @ 0x1402F2478 (MiPageToChannel.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x140303F50 (MiGetFreeOrZeroPageAnyColor.c)
 *     MiZeroPhysicalPage @ 0x1403332D4 (MiZeroPhysicalPage.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiGetPerfectColorHeadPage @ 0x1403412FC (MiGetPerfectColorHeadPage.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x140341520 (KxTryToAcquireQueuedSpinLock.c)
 *     MiReturnFreeZeroPage @ 0x14034D2F0 (MiReturnFreeZeroPage.c)
 *     MiGetPfnChannel @ 0x14034E084 (MiGetPfnChannel.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384340 (MiRemoveLowestPriorityStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     MiArePageContentsZero @ 0x14054D0C8 (MiArePageContentsZero.c)
 *     MiCheckNodeChannelStandbyCount @ 0x14054D2DC (MiCheckNodeChannelStandbyCount.c)
 *     MiSwapNumaStandbyPage @ 0x14054F900 (MiSwapNumaStandbyPage.c)
 *     MiPageAvailable @ 0x14055A4E4 (MiPageAvailable.c)
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
  int i; // r13d
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
  int v31; // edx
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
  volatile __int64 *v51; // rdx
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
  __int64 v85; // rdx
  unsigned int v86; // [rsp+30h] [rbp-A8h]
  unsigned int v87; // [rsp+34h] [rbp-A4h]
  volatile signed __int64 *v88; // [rsp+38h] [rbp-A0h]
  __int64 *v89; // [rsp+40h] [rbp-98h]
  unsigned __int8 *v90; // [rsp+48h] [rbp-90h]
  BOOL v91; // [rsp+50h] [rbp-88h]
  char v92; // [rsp+54h] [rbp-84h] BYREF
  char v93; // [rsp+55h] [rbp-83h] BYREF
  unsigned int v94; // [rsp+58h] [rbp-80h]
  int v95; // [rsp+5Ch] [rbp-7Ch] BYREF
  int v96; // [rsp+60h] [rbp-78h]
  __int64 *v97; // [rsp+68h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-68h] BYREF
  __int64 v99; // [rsp+88h] [rbp-50h]
  __int64 v100; // [rsp+90h] [rbp-48h]
  unsigned __int8 *v101; // [rsp+98h] [rbp-40h]
  unsigned int v103; // [rsp+E8h] [rbp+10h]
  int v104; // [rsp+F8h] [rbp+20h]
  int v105; // [rsp+F8h] [rbp+20h]

  v103 = a2;
  v3 = MmNumberOfChannels;
  CurrentIrql = &MiFreeThenFree;
  v5 = a1;
  v96 = MmNumberOfChannels;
  v6 = a2 >> byte_140C4DD0C;
  v7 = 0;
  SchedulerAssist = 0LL;
  v9 = 1;
  v91 = 1;
  v86 = 0;
  v10 = a3;
  v11 = a2;
  v12 = a2 >> byte_140C4DD0C;
  while ( 2 )
  {
    v90 = 0LL;
LABEL_3:
    v13 = *(_QWORD *)(v5 + 16) + 4544LL * v12;
    if ( !*(_QWORD *)(v13 + 4176) && (_DWORD)InitializationPhase )
    {
      if ( (unsigned int)MiPageAvailable(v5, v10, a3, SchedulerAssist) )
      {
        SchedulerAssist = v90;
        goto LABEL_193;
      }
      return -1LL;
    }
    if ( v3 > 1 )
    {
      SchedulerAssist = (unsigned __int8 *)(v13 + 4313);
      v90 = (unsigned __int8 *)(v13 + 4313);
      if ( v12 == v6 )
      {
        v53 = (unsigned __int8 *)(v13 + ((v10 & 8 | 0x21B2uLL) >> 1));
        v91 = (*(_DWORD *)(v13 + 4280) & 1) == 0;
        v90 = v53;
        SchedulerAssist = v53;
        if ( (v10 & 0x20) != 0 )
        {
          v90 = (unsigned __int8 *)(v13 + ((v10 & 8 | 0x21B2uLL) >> 1));
          if ( (*(_DWORD *)(v13 + 4280) & 1) != 0 )
          {
            v54 = &v93;
            v55 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v11 >> byte_140C4DD0D);
            v92 = MiChannelMaximumPowerOf2Mask & (v11 >> byte_140C4DD0D);
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
            SchedulerAssist = (unsigned __int8 *)&v92;
            v90 = (unsigned __int8 *)&v92;
          }
        }
        CurrentIrql = &MiFreeThenFree;
        v86 = *SchedulerAssist;
      }
    }
    LODWORD(a3) = v10 & 2;
    v101 = &SchedulerAssist[v3];
    v94 = a3;
    do
    {
      if ( SchedulerAssist )
      {
        v14 = v11 & dword_140C4DD78 | (v12 << byte_140C4DD0C) | (*SchedulerAssist << byte_140C4DD0D);
        v103 = v14;
      }
      else
      {
        v14 = v103;
      }
      v15 = (_DWORD)a3 == 0;
      v16 = &MiZeroThenZero;
      v17 = v14;
      if ( v15 )
        v16 = CurrentIrql;
      v100 = v14;
      v18 = 16LL * v14;
      v99 = v18;
      for ( i = *(_DWORD *)v16; ; i = *((_DWORD *)v16 + 1) )
      {
        v20 = (_SLIST_HEADER *)(v18 + *(_QWORD *)(v5 + 8LL * i + 4200));
        if ( LOWORD(v20->Alignment) )
        {
          PerfectColorHeadPage = (__int64)RtlpInterlockedPopEntrySList(v20);
          if ( PerfectColorHeadPage )
          {
            *(_QWORD *)(PerfectColorHeadPage + 16) = ZeroPte;
            if ( !i )
            {
              if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E64C & MmPageValidationFrequency) == 0 )
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
              if ( !qword_140C4DDC0 )
              {
LABEL_68:
                *(_QWORD *)(PerfectColorHeadPage + 16) = v44;
LABEL_15:
                *(_QWORD *)PerfectColorHeadPage = 0LL;
                goto LABEL_16;
              }
              if ( (qword_140C4DDC0 & 0x80) != 0 )
              {
                v44 = 144LL;
                goto LABEL_68;
              }
              v45 = qword_140C4DDC0;
            }
            v44 = v45 | 0x80;
            goto LABEL_68;
          }
          v18 = v99;
          v5 = a1;
        }
        if ( i == *((_DWORD *)v16 + 1) )
          break;
      }
      v104 = *(_DWORD *)v16;
      v31 = v104;
      memset(&LockHandle, 0, sizeof(LockHandle));
      v32 = *(_QWORD *)(v5 + 8LL * v104 + 2176);
      v33 = *(_QWORD *)(v32 + 40 * v100 + 16);
      v34 = (__int64 *)(v32 + 40 * v100);
      v97 = v34;
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
          v88 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          if ( _interlockedbittestandset64((volatile signed __int32 *)(PerfectColorHeadPage + 24), 0x3FuLL) )
            goto LABEL_45;
          LOBYTE(CurrentIrql) = 17;
          v89 = CurrentIrql;
        }
        else
        {
          CurrentIrql = (__int64 *)KeGetCurrentIrql();
          v89 = CurrentIrql;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
          {
            SchedulerAssist = (unsigned __int8 *)KeGetCurrentPrcb()->SchedulerAssist;
            v17 = (unsigned int)(-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4 | *((_DWORD *)SchedulerAssist + 5);
            v31 = v104;
            *((_DWORD *)SchedulerAssist + 5) = v17;
          }
          v49 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          v50 = _interlockedbittestandset64((volatile signed __int32 *)(PerfectColorHeadPage + 24), 0x3FuLL);
          v88 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          if ( (v10 & 0x4000) != 0 )
          {
            v95 = 0;
            if ( v50 )
            {
              v58 = (volatile signed __int32 *)(PerfectColorHeadPage + 24);
              do
              {
                do
                  KeYieldProcessorEx(&v95);
                while ( *(__int64 *)v58 < 0 );
              }
              while ( _interlockedbittestandset64(v58, 0x3FuLL) );
              v34 = v97;
              v31 = v104;
              v49 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
              CurrentIrql = v89;
            }
          }
          else
          {
            v88 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
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
                      LOBYTE(CurrentIrql) = (_BYTE)v89;
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
                    CurrentIrql = v89;
                  }
                  v31 = v104;
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
          KxAcquireQueuedSpinLock((__int64)&LockHandle, v51);
        }
        else if ( !(unsigned int)KxTryToAcquireQueuedSpinLock(&LockHandle, v51, v17, SchedulerAssist) )
        {
          _InterlockedAnd64(v88, 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_BYTE)v89 != 17 )
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v73 = KeGetCurrentIrql();
                if ( v73 <= 0xFu && (unsigned __int8)v89 <= 0xFu && v73 >= 2u )
                {
                  v74 = KeGetCurrentPrcb();
                  v75 = v74->SchedulerAssist;
                  v76 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v89 + 1));
                  v15 = (v76 & v75[5]) == 0;
                  v75[5] &= v76;
                  if ( v15 )
                    KiRemoveSystemWorkPriorityKick(v74);
                }
              }
            }
            __writecr8((unsigned __int8)v89);
          }
          goto LABEL_45;
        }
        if ( v33 != v34[2] )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          _InterlockedAnd64(v88, 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_BYTE)v89 != 17 )
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v62 = KeGetCurrentIrql();
                if ( v62 <= 0xFu && (unsigned __int8)v89 <= 0xFu && v62 >= 2u )
                {
                  v63 = KeGetCurrentPrcb();
                  SchedulerAssist = (unsigned __int8 *)v63->SchedulerAssist;
                  v64 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v89 + 1));
                  v15 = (v64 & *((_DWORD *)SchedulerAssist + 5)) == 0;
                  v17 = (unsigned int)v64 & *((_DWORD *)SchedulerAssist + 5);
                  *((_DWORD *)SchedulerAssist + 5) = v17;
                  if ( v15 )
                    KiRemoveSystemWorkPriorityKick(v63);
                }
              }
            }
            __writecr8((unsigned __int8)v89);
          }
          v31 = v104;
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
        _InterlockedAnd64(v88, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v10 & 1) != 0 )
        {
          v22 = a1;
        }
        else
        {
          v15 = v34[2] == 0xFFFFFFFFFLL;
          v22 = a1;
          if ( !v15 )
            MiReplenishPageSlist(a1, v104, v103);
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( (_BYTE)v89 != 17 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v69 = KeGetCurrentIrql();
              if ( v69 <= 0xFu && (unsigned __int8)v89 <= 0xFu && v69 >= 2u )
              {
                v70 = KeGetCurrentPrcb();
                v71 = v70->SchedulerAssist;
                v72 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v89 + 1));
                v15 = (v72 & v71[5]) == 0;
                v71[5] &= v72;
                if ( v15 )
                  KiRemoveSystemWorkPriorityKick(v70);
              }
            }
          }
          __writecr8((unsigned __int8)v89);
        }
        goto LABEL_17;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      MiReturnFreeZeroPage(48 * v33 - 0x58000000000LL, 0LL);
      _InterlockedAnd64(v88, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_BYTE)v89 != 17 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v65 = KeGetCurrentIrql();
            if ( v65 <= 0xFu && (unsigned __int8)v89 <= 0xFu && v65 >= 2u )
            {
              v66 = KeGetCurrentPrcb();
              v67 = v66->SchedulerAssist;
              v68 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v89 + 1));
              v15 = (v68 & v67[5]) == 0;
              v67[5] &= v68;
              if ( v15 )
                KiRemoveSystemWorkPriorityKick(v66);
            }
          }
        }
        __writecr8((unsigned __int8)v89);
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
        v23 = v86;
LABEL_20:
        *(_QWORD *)PerfectColorHeadPage = 0LL;
        v24 = dword_140C4DD08;
        v25 = (PerfectColorHeadPage + 0x58000000000LL) / 48;
        if ( dword_140C4DD04 > (unsigned int)dword_140C4DD08
          || (v26 = (char *)qword_140C4DD48 + 16 * dword_140C4DD04, v25 < *(_QWORD *)v26)
          || dword_140C4DD04 != dword_140C4DD08 && v25 >= *((_QWORD *)v26 + 2) )
        {
          v29 = 0;
          if ( dword_140C4DD08 < 0 )
LABEL_220:
            KeBugCheckEx(0x1Au, 0x6201uLL, (PerfectColorHeadPage + 0x58000000000LL) / 48, 0LL, 0LL);
          while ( 1 )
          {
            v30 = (v29 + v24) >> 1;
            v26 = (char *)qword_140C4DD48 + 16 * v30;
            if ( v25 < *(_QWORD *)v26 )
            {
              if ( !v30 )
                KeBugCheckEx(
                  0x1Au,
                  0x6200uLL,
                  (PerfectColorHeadPage + 0x58000000000LL) / 48,
                  (ULONG_PTR)qword_140C4DD48,
                  0LL);
              v24 = v30 - 1;
            }
            else
            {
              if ( v30 == dword_140C4DD08 || v25 < *((_QWORD *)v26 + 2) )
              {
                dword_140C4DD04 = (v29 + v24) >> 1;
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
          if ( qword_140C4DD50 )
            v27 = MiPageToChannel((PerfectColorHeadPage + 0x58000000000LL) / 48);
          else
            v27 = 0;
          if ( v27 != v23 )
          {
            v84 = v91;
            if ( !v91 )
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
                  MiReleaseFreshPage(PerfectColorHeadPage, v85);
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
            MiZeroPhysicalPage(v25);
            *(_QWORD *)(PerfectColorHeadPage + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
          }
          if ( v9 != 3 && *(unsigned __int8 *)(PerfectColorHeadPage + 34) >> 6 != v9 )
            MiChangePageAttribute(PerfectColorHeadPage, v9, 0);
          return v25;
        }
        v84 = v91;
        goto LABEL_210;
      }
      v35 = v99;
      v36 = &MiZeroThenZero;
      v37 = v10 & 0xFFFFFFFD;
      if ( !v94 )
        v37 = v10 | 2;
      v87 = v37;
      if ( (v37 & 2) == 0 )
        v36 = &MiFreeThenFree;
      v97 = v36;
      v38 = *(_DWORD *)v36;
      while ( 2 )
      {
        v105 = v38;
        v39 = (_SLIST_HEADER *)(v35 + *(_QWORD *)(v22 + 8LL * v38 + 4200));
        if ( LOWORD(v39->Alignment) )
        {
          PerfectColorHeadPage = (__int64)RtlpInterlockedPopEntrySList(v39);
          if ( PerfectColorHeadPage )
          {
            *(_QWORD *)(PerfectColorHeadPage + 16) = ZeroPte;
            if ( !v105 )
            {
              if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E64C & MmPageValidationFrequency) == 0 )
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
              if ( qword_140C4DDC0 )
              {
                if ( (qword_140C4DDC0 & 0x80u) == 0LL )
                {
                  v47 = qword_140C4DDC0;
                  goto LABEL_73;
                }
                v46 = 144LL;
              }
            }
            *(_QWORD *)(PerfectColorHeadPage + 16) = v46;
LABEL_55:
            v11 = v103;
            *(_QWORD *)PerfectColorHeadPage = 0LL;
            goto LABEL_56;
          }
          v36 = v97;
        }
        v38 = *((_DWORD *)v36 + 1);
        if ( v105 != v38 )
          continue;
        break;
      }
      v11 = v103;
      PerfectColorHeadPage = MiGetPerfectColorHeadPage(
                               v22,
                               *(_DWORD *)(v22 + 8LL * *(int *)v36 + 2176) + 40 * (int)v100,
                               v103,
                               *(_DWORD *)v36,
                               v87);
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
      v41 = MiGetFreeOrZeroPageAnyColor(v22, v11, v87);
      PerfectColorHeadPage = v41;
      if ( v41 == 1 )
        return -1LL;
      if ( v41 )
        goto LABEL_19;
      v5 = a1;
      if ( !(unsigned int)MiPageAvailable(a1, v10, v42, v43) )
        return -1LL;
      CurrentIrql = &MiFreeThenFree;
      a3 = v94;
      SchedulerAssist = v90 + 1;
      v90 = SchedulerAssist;
    }
    while ( SchedulerAssist != v101 );
    v3 = v96;
LABEL_193:
    if ( (v10 & 0x4000) == 0 )
    {
      if ( ++v7 != (unsigned __int16)KeNumberNodes && (v10 & 0x10) == 0 )
      {
        v12 = *(_DWORD *)(qword_140C4DD18 + 4LL * (v7 + v6 * (unsigned __int16)KeNumberNodes));
        if ( v3 == 1 )
        {
          SchedulerAssist = 0LL;
          v82 = v11 & dword_140C4DD78;
          v11 = v11 & dword_140C4DD78 | (v12 << byte_140C4DD0C);
          v103 = v82 | (v12 << byte_140C4DD0C);
          continue;
        }
        goto LABEL_3;
      }
      if ( (v10 & 1) == 0 )
      {
        v23 = v86;
        if ( (v10 & 0x30) == 0 || (unsigned int)MiCheckNodeChannelStandbyCount(v5, v6, v86, SchedulerAssist) )
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
