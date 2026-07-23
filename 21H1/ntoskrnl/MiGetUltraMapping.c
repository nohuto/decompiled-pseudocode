/*
 * XREFs of MiGetUltraMapping @ 0x1402968A0
 * Callers:
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiWsleFree @ 0x140220E30 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14028FAA0 (MiDecrementAndInsertStandbyPages.c)
 *     MiMapPagesToZero @ 0x140296210 (MiMapPagesToZero.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 *     MiAllocateHyperSpace @ 0x1402FF124 (MiAllocateHyperSpace.c)
 *     MiZeroLargePage @ 0x14030B58C (MiZeroLargePage.c)
 *     MiDeleteUltraMapContext @ 0x140326628 (MiDeleteUltraMapContext.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403971C4 (MiInitializeNewUltraHugeContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AE258 (MiTimeSingleLargePageZeroWorker.c)
 *     MiZeroWithUltraSpace @ 0x1403EE508 (MiZeroWithUltraSpace.c)
 *     MiHugePageOperation @ 0x14052D458 (MiHugePageOperation.c)
 *     MmMapMdl @ 0x140531A90 (MmMapMdl.c)
 *     MiScrubNodeLargePageList @ 0x140551348 (MiScrubNodeLargePageList.c)
 *     MiCombinePte @ 0x140556E10 (MiCombinePte.c)
 *     MiScrubPage @ 0x14055E804 (MiScrubPage.c)
 *     MiCombineAllPhysicalMemory @ 0x1407134D0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeFlushTb @ 0x1402775A0 (KeFlushTb.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     RtlFindSetBitsAndClearEx @ 0x14031D6D0 (RtlFindSetBitsAndClearEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
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
  __int64 v17; // r9
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r11
  __int64 v20; // rbp
  unsigned __int64 ValidPte; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  ULONG64 SetBitsAndClear; // rax
  ULONG64 v26; // r13
  __int64 v27; // r9
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rdi
  __int64 *v31; // r14
  __int64 v32; // rbp
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rbx
  unsigned __int64 *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r8
  int v49; // eax
  bool v50; // zf
  unsigned __int64 v51; // r9
  unsigned __int64 i; // r8
  unsigned __int64 *v53; // rdx
  __int64 v54; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v58; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v60; // [rsp+70h] [rbp+8h]
  _QWORD *v61; // [rsp+70h] [rbp+8h]
  unsigned __int64 *v62; // [rsp+70h] [rbp+8h]

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
    v60 = (_QWORD *)v14;
    if ( a2 <= 1 )
    {
      v44 = 2 - a2;
      do
      {
        v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v44;
      }
      while ( v44 );
      v60 = (_QWORD *)v14;
    }
    v15 = ZeroPte;
    if ( MiPteInShadowRange(v14) )
    {
      if ( (unsigned int)MiPteHasShadow(v16, 0x8000000000000000uLL) )
      {
        if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
          v15 = v45 | ZeroPte;
        *v60 = v15;
        MiWritePteShadow(v60, v15);
LABEL_12:
        if ( (a4 & 2) == 0 )
        {
          if ( a2 != 1 )
          {
            v19 = v18 + 8;
            v61 = (_QWORD *)v19;
            if ( (v19 & 0xFFF) != 0 )
            {
              v20 = (__int64)(v19 << 25) >> 16 << 25 >> 16;
              ValidPte = MiMakeValidPte(v19, a1[2], 3087007748LL, v17);
              if ( MiPteInShadowRange((unsigned __int64)v61) )
              {
                if ( (unsigned int)MiPteHasShadow(v23, v22) )
                {
                  if ( !HIBYTE(word_140C4DF48) && (ValidPte & 1) != 0 )
                    ValidPte |= 0x8000000000000000uLL;
                  *v61 = ValidPte;
                  MiWritePteShadow(v61, ValidPte);
                  goto LABEL_17;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (ValidPte & 1) != 0 )
                {
                  ValidPte |= 0x8000000000000000uLL;
                }
              }
              *v61 = ValidPte;
LABEL_17:
              result = v20;
              *a1 = v12 + v20;
              return result;
            }
          }
          goto LABEL_39;
        }
        if ( a2 > 1 )
        {
          v41 = ZeroPte;
          v62 = (unsigned __int64 *)(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( MiPteInShadowRange((unsigned __int64)v62) )
          {
            if ( (unsigned int)MiPteHasShadow(v43, v42) )
            {
              if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
                v41 = ZeroPte | 0x8000000000000000uLL;
              *v62 = v41;
              MiWritePteShadow(v62, v41);
              goto LABEL_39;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v41 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *v62 = v41;
        }
LABEL_39:
        v4 -= v9;
        goto LABEL_19;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v15 = v45 | ZeroPte;
      }
    }
    v18 = (unsigned __int64)v60;
    *v60 = v15;
    goto LABEL_12;
  }
LABEL_19:
  KeAcquireInStackQueuedSpinLock(&qword_140C4EB30, &LockHandle);
  if ( !v4 )
    goto LABEL_20;
  v36 = (v4 - qword_140C4EB38) >> 30;
  v37 = ZeroPte;
  v38 = (unsigned __int64 *)(((v4 >> 27) & 0x1FFFF8) - 0x90482600000LL);
  if ( MiPteInShadowRange((unsigned __int64)v38) )
  {
    if ( (unsigned int)MiPteHasShadow(v40, v39) )
    {
      if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
        v37 = ZeroPte | 0x8000000000000000uLL;
      *v38 = v37;
      MiWritePteShadow(v38, v37);
      goto LABEL_35;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v37 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  *v38 = v37;
LABEL_35:
  _bittestandset64((signed __int64 *)qword_140C4EB60, v36);
LABEL_20:
  if ( (a4 & 2) == 0 )
  {
    while ( 1 )
    {
      SetBitsAndClear = RtlFindSetBitsAndClearEx(&BitMapHeader, 1uLL, HintIndex);
      v26 = SetBitsAndClear;
      if ( SetBitsAndClear != -1LL )
        break;
      KeFlushTb(0, 2u);
      v51 = 0LL;
      for ( i = BitMapHeader.SizeOfBitMap >> 6; v51 < i; *v53 |= v54 )
      {
        v53 = &BitMapHeader.Buffer[v51];
        v54 = *((_QWORD *)qword_140C4EB60 + v51++);
      }
      memset(qword_140C4EB60, 0, 4 * (((unsigned __int64)qword_140C4EB58 >> 5) + ((qword_140C4EB58 & 0x1F) != 0)));
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
          v27 = -1LL << (LockHandle.OldIrql + 1);
          v58 = ~(unsigned __int16)v27;
          v50 = (v58 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v58;
          if ( v50 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    v29 = qword_140C4EB38 + (v26 << 30);
    if ( (a4 & 1) == 0 )
      *a1 = v29 + (a3 << 12);
    if ( !a2 )
      return v29;
    v30 = ((v29 >> 27) & 0x1FFFF8) - 0x90482600000LL;
    v31 = (__int64 *)(a1 + 1);
    v32 = (a2 != 1) + 1LL;
    while ( 1 )
    {
      v33 = MiMakeValidPte(v30, *v31, 3087007748LL, v27);
      if ( MiPteInShadowRange(v30) )
      {
        if ( (unsigned int)MiPteHasShadow(v35, v34) )
        {
          if ( !HIBYTE(word_140C4DF48) && (v33 & 1) != 0 )
            v33 |= 0x8000000000000000uLL;
          *(_QWORD *)v30 = v33;
          MiWritePteShadow(v30, v33);
          goto LABEL_31;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v33 & 1) != 0 )
        {
          v33 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v30 = v33;
LABEL_31:
      ++v31;
      v30 = (__int64)(v30 << 25) >> 16;
      if ( !--v32 )
        return v29;
    }
  }
  *a1 = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v24 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v46 = KeGetCurrentIrql();
      if ( v46 <= 0xFu && LockHandle.OldIrql <= 0xFu && v46 >= 2u )
      {
        v47 = KeGetCurrentPrcb();
        v48 = v47->SchedulerAssist;
        v49 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v50 = (v49 & v48[5]) == 0;
        v48[5] &= v49;
        if ( v50 )
          KiRemoveSystemWorkPriorityKick(v47);
      }
    }
  }
  __writecr8(v24);
  return 0LL;
}
