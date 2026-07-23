/*
 * XREFs of MiGetUltraMapping @ 0x1402C2F20
 * Callers:
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MiPfnShareCountIsZero @ 0x1402A98E0 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x1402AB620 (MiWsleFree.c)
 *     MiDecrementAndInsertStandbyPages @ 0x1402AF7F0 (MiDecrementAndInsertStandbyPages.c)
 *     MiMapPagesToZero @ 0x1402C2890 (MiMapPagesToZero.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiAllocateHyperSpace @ 0x14030E5C4 (MiAllocateHyperSpace.c)
 *     MiZeroLargePage @ 0x140319D50 (MiZeroLargePage.c)
 *     MiDeleteUltraMapContext @ 0x1403338F0 (MiDeleteUltraMapContext.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiInitializeNewUltraHugeContext @ 0x14039A254 (MiInitializeNewUltraHugeContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AA828 (MiTimeSingleLargePageZeroWorker.c)
 *     MiZeroWithUltraSpace @ 0x1403F3CD8 (MiZeroWithUltraSpace.c)
 *     MiHugePageOperation @ 0x140531478 (MiHugePageOperation.c)
 *     MmMapMdl @ 0x140535AB0 (MmMapMdl.c)
 *     MiScrubNodeLargePageList @ 0x140555368 (MiScrubNodeLargePageList.c)
 *     MiCombinePte @ 0x14055AE30 (MiCombinePte.c)
 *     MiScrubPage @ 0x140562824 (MiScrubPage.c)
 *     MiCombineAllPhysicalMemory @ 0x140723820 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     KeFlushTb @ 0x1402EA180 (KeFlushTb.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     RtlFindSetBitsAndClearEx @ 0x14032BD20 (RtlFindSetBitsAndClearEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall MiGetUltraMapping(unsigned __int64 *a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rdi
  __int64 v9; // r13
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 result; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // r11
  __int64 v21; // rbp
  unsigned __int64 ValidPte; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rbx
  ULONG64 SetBitsAndClear; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  ULONG64 v31; // r13
  __int64 v32; // r9
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // rdi
  __int64 *v36; // r14
  __int64 v37; // rbp
  unsigned __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned __int64 v42; // r13
  unsigned __int64 v43; // rbx
  unsigned __int64 *v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r8
  __int64 v55; // rdx
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r10
  _DWORD *v58; // r8
  int v59; // eax
  bool v60; // zf
  unsigned __int64 v61; // r9
  unsigned __int64 i; // r8
  unsigned __int64 *v63; // rdx
  __int64 v64; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v68; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v70; // [rsp+70h] [rbp+8h]
  _QWORD *v71; // [rsp+70h] [rbp+8h]
  unsigned __int64 *v72; // [rsp+70h] [rbp+8h]

  v4 = *a1;
  v9 = MiUltraMapSizes[a2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v4 )
  {
    if ( a2 == 1 )
    {
      v10 = v9 << 9;
    }
    else
    {
      if ( !a2 )
        goto LABEL_39;
      v10 = 0x200000LL;
    }
    v11 = v10 - 1;
    v12 = a3 << 12;
    if ( (a3 << 12) + (v4 & (v10 - 1)) > v10 )
    {
      v4 = ~v11 & (v10 + v4 - 1);
      *a1 = v4;
    }
    if ( (v11 & v4) != 0 && (a4 & 2) == 0 )
    {
      *a1 = v12 + v4;
      return v4;
    }
    v14 = (((v4 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v70 = (_QWORD *)v14;
    if ( a2 <= 1 )
    {
      v54 = 2 - a2;
      do
      {
        v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v54;
      }
      while ( v54 );
      v70 = (_QWORD *)v14;
    }
    v15 = ZeroPte;
    if ( MiPteInShadowRange(v14) )
    {
      if ( (unsigned int)MiPteHasShadow(v16, 0x8000000000000000uLL, v17, v18) )
      {
        if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
          v15 = v55 | ZeroPte;
        *v70 = v15;
        MiWritePteShadow(v70, v15);
LABEL_12:
        if ( (a4 & 2) == 0 )
        {
          if ( a2 != 1 )
          {
            v20 = v19 + 8;
            v71 = (_QWORD *)v20;
            if ( (v20 & 0xFFF) != 0 )
            {
              v21 = (__int64)(v20 << 25) >> 16 << 25 >> 16;
              ValidPte = MiMakeValidPte(v20, a1[2], 3087007748LL, v18);
              if ( MiPteInShadowRange((unsigned __int64)v71) )
              {
                if ( (unsigned int)MiPteHasShadow(v24, v23, v25, v26) )
                {
                  if ( !HIBYTE(word_140C4DE88) && (ValidPte & 1) != 0 )
                    ValidPte |= 0x8000000000000000uLL;
                  *v71 = ValidPte;
                  MiWritePteShadow(v71, ValidPte);
                  goto LABEL_17;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (ValidPte & 1) != 0 )
                {
                  ValidPte |= 0x8000000000000000uLL;
                }
              }
              *v71 = ValidPte;
LABEL_17:
              result = v21;
              *a1 = v12 + v21;
              return result;
            }
          }
          goto LABEL_39;
        }
        if ( a2 > 1 )
        {
          v49 = ZeroPte;
          v72 = (unsigned __int64 *)(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( MiPteInShadowRange((unsigned __int64)v72) )
          {
            if ( (unsigned int)MiPteHasShadow(v51, v50, v52, v53) )
            {
              if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
                v49 = ZeroPte | 0x8000000000000000uLL;
              *v72 = v49;
              MiWritePteShadow(v72, v49);
              goto LABEL_39;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v49 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *v72 = v49;
        }
LABEL_39:
        v4 -= v9;
        goto LABEL_19;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v15 = v55 | ZeroPte;
      }
    }
    v19 = (unsigned __int64)v70;
    *v70 = v15;
    goto LABEL_12;
  }
LABEL_19:
  KeAcquireInStackQueuedSpinLock(&qword_140C4EA70, &LockHandle);
  if ( !v4 )
    goto LABEL_20;
  v42 = (v4 - qword_140C4EA78) >> 30;
  v43 = ZeroPte;
  v44 = (unsigned __int64 *)(((v4 >> 27) & 0x1FFFF8) - 0x90482600000LL);
  if ( MiPteInShadowRange((unsigned __int64)v44) )
  {
    if ( (unsigned int)MiPteHasShadow(v46, v45, v47, v48) )
    {
      if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
        v43 = ZeroPte | 0x8000000000000000uLL;
      *v44 = v43;
      MiWritePteShadow(v44, v43);
      goto LABEL_35;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v43 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  *v44 = v43;
LABEL_35:
  _bittestandset64((signed __int64 *)qword_140C4EAA0, v42);
LABEL_20:
  if ( (a4 & 2) == 0 )
  {
    while ( 1 )
    {
      SetBitsAndClear = RtlFindSetBitsAndClearEx(&BitMapHeader, 1uLL, HintIndex);
      v31 = SetBitsAndClear;
      if ( SetBitsAndClear != -1LL )
        break;
      KeFlushTb(0LL, 2LL, v29, v30);
      v61 = 0LL;
      for ( i = BitMapHeader.SizeOfBitMap >> 6; v61 < i; *v63 |= v64 )
      {
        v63 = &BitMapHeader.Buffer[v61];
        v64 = *((_QWORD *)qword_140C4EAA0 + v61++);
      }
      memset(qword_140C4EAA0, 0, 4 * (((unsigned __int64)qword_140C4EA98 >> 5) + ((qword_140C4EA98 & 0x1F) != 0)));
    }
    HintIndex = SetBitsAndClear + 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v32 = -1LL << (LockHandle.OldIrql + 1);
          v68 = ~(unsigned __int16)v32;
          v60 = (v68 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v68;
          if ( v60 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    v34 = qword_140C4EA78 + (v31 << 30);
    if ( (a4 & 1) == 0 )
      *a1 = v34 + (a3 << 12);
    if ( !a2 )
      return v34;
    v35 = ((v34 >> 27) & 0x1FFFF8) - 0x90482600000LL;
    v36 = (__int64 *)(a1 + 1);
    v37 = (a2 != 1) + 1LL;
    while ( 1 )
    {
      v38 = MiMakeValidPte(v35, *v36, 3087007748LL, v32);
      if ( MiPteInShadowRange(v35) )
      {
        if ( (unsigned int)MiPteHasShadow(v40, v39, v41, v32) )
        {
          if ( !HIBYTE(word_140C4DE88) && (v38 & 1) != 0 )
            v38 |= 0x8000000000000000uLL;
          *(_QWORD *)v35 = v38;
          MiWritePteShadow(v35, v38);
          goto LABEL_31;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v38 & 1) != 0 )
        {
          v38 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v35 = v38;
LABEL_31:
      ++v36;
      v35 = (__int64)(v35 << 25) >> 16;
      if ( !--v37 )
        return v34;
    }
  }
  *a1 = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v27 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v56 = KeGetCurrentIrql();
      if ( v56 <= 0xFu && LockHandle.OldIrql <= 0xFu && v56 >= 2u )
      {
        v57 = KeGetCurrentPrcb();
        v58 = v57->SchedulerAssist;
        v59 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v60 = (v59 & v58[5]) == 0;
        v58[5] &= v59;
        if ( v60 )
          KiRemoveSystemWorkPriorityKick(v57);
      }
    }
  }
  __writecr8(v27);
  return 0LL;
}
