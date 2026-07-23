/*
 * XREFs of MiGetUltraMapping @ 0x14023D870
 * Callers:
 *     MiPfnShareCountIsZero @ 0x140235440 (MiPfnShareCountIsZero.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140236A50 (MiDecrementAndInsertStandbyPages.c)
 *     MiMapPagesToZero @ 0x14023D1E0 (MiMapPagesToZero.c)
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiWsleFree @ 0x1402B3AB0 (MiWsleFree.c)
 *     MiDeleteUltraMapContext @ 0x1402E1528 (MiDeleteUltraMapContext.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiAllocateHyperSpace @ 0x14033BA24 (MiAllocateHyperSpace.c)
 *     MiZeroLargePage @ 0x140349124 (MiZeroLargePage.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiInitializeNewUltraHugeContext @ 0x140397DD4 (MiInitializeNewUltraHugeContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403A7E38 (MiTimeSingleLargePageZeroWorker.c)
 *     MiZeroWithUltraSpace @ 0x1403EF868 (MiZeroWithUltraSpace.c)
 *     MiHugePageOperation @ 0x14052DAA8 (MiHugePageOperation.c)
 *     MmMapMdl @ 0x1405320E0 (MmMapMdl.c)
 *     MiScrubNodeLargePageList @ 0x140551998 (MiScrubNodeLargePageList.c)
 *     MiCombinePte @ 0x140557460 (MiCombinePte.c)
 *     MiScrubPage @ 0x14055EE54 (MiScrubPage.c)
 *     MiCombineAllPhysicalMemory @ 0x140715860 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeFlushTb @ 0x14021E550 (KeFlushTb.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     RtlFindSetBitsAndClearEx @ 0x14035B2C0 (RtlFindSetBitsAndClearEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
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
  ULONG64 v29; // r13
  __int64 v30; // r9
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rdi
  __int64 *v34; // r14
  __int64 v35; // rbp
  unsigned __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // rbx
  unsigned __int64 *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r8
  __int64 v53; // rdx
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  _DWORD *v56; // r8
  int v57; // eax
  bool v58; // zf
  unsigned __int64 v59; // r9
  unsigned __int64 i; // r8
  unsigned __int64 *v61; // rdx
  __int64 v62; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v66; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v68; // [rsp+70h] [rbp+8h]
  _QWORD *v69; // [rsp+70h] [rbp+8h]
  unsigned __int64 *v70; // [rsp+70h] [rbp+8h]

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
    v68 = (_QWORD *)v14;
    if ( a2 <= 1 )
    {
      v52 = 2 - a2;
      do
      {
        v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v52;
      }
      while ( v52 );
      v68 = (_QWORD *)v14;
    }
    v15 = ZeroPte;
    if ( MiPteInShadowRange(v14) )
    {
      if ( (unsigned int)MiPteHasShadow(v16, 0x8000000000000000uLL, v17, v18) )
      {
        if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
          v15 = v53 | ZeroPte;
        *v68 = v15;
        MiWritePteShadow(v68, v15);
LABEL_12:
        if ( (a4 & 2) == 0 )
        {
          if ( a2 != 1 )
          {
            v20 = v19 + 8;
            v69 = (_QWORD *)v20;
            if ( (v20 & 0xFFF) != 0 )
            {
              v21 = (__int64)(v20 << 25) >> 16 << 25 >> 16;
              ValidPte = MiMakeValidPte(v20, a1[2], 3087007748LL, v18);
              if ( MiPteInShadowRange((unsigned __int64)v69) )
              {
                if ( (unsigned int)MiPteHasShadow(v24, v23, v25, v26) )
                {
                  if ( !HIBYTE(word_140C4DE08) && (ValidPte & 1) != 0 )
                    ValidPte |= 0x8000000000000000uLL;
                  *v69 = ValidPte;
                  MiWritePteShadow(v69, ValidPte);
                  goto LABEL_17;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (ValidPte & 1) != 0 )
                {
                  ValidPte |= 0x8000000000000000uLL;
                }
              }
              *v69 = ValidPte;
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
          v47 = ZeroPte;
          v70 = (unsigned __int64 *)(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( MiPteInShadowRange((unsigned __int64)v70) )
          {
            if ( (unsigned int)MiPteHasShadow(v49, v48, v50, v51) )
            {
              if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
                v47 = ZeroPte | 0x8000000000000000uLL;
              *v70 = v47;
              MiWritePteShadow(v70, v47);
              goto LABEL_39;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v47 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *v70 = v47;
        }
LABEL_39:
        v4 -= v9;
        goto LABEL_19;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v15 = v53 | ZeroPte;
      }
    }
    v19 = (unsigned __int64)v68;
    *v68 = v15;
    goto LABEL_12;
  }
LABEL_19:
  KeAcquireInStackQueuedSpinLock(&qword_140C4E9F0, &LockHandle);
  if ( !v4 )
    goto LABEL_20;
  v40 = (v4 - qword_140C4E9F8) >> 30;
  v41 = ZeroPte;
  v42 = (unsigned __int64 *)(((v4 >> 27) & 0x1FFFF8) - 0x90482600000LL);
  if ( MiPteInShadowRange((unsigned __int64)v42) )
  {
    if ( (unsigned int)MiPteHasShadow(v44, v43, v45, v46) )
    {
      if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
        v41 = ZeroPte | 0x8000000000000000uLL;
      *v42 = v41;
      MiWritePteShadow(v42, v41);
      goto LABEL_35;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v41 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  *v42 = v41;
LABEL_35:
  _bittestandset64((signed __int64 *)qword_140C4EA20, v40);
LABEL_20:
  if ( (a4 & 2) == 0 )
  {
    while ( 1 )
    {
      SetBitsAndClear = RtlFindSetBitsAndClearEx(&BitMapHeader, 1uLL, HintIndex);
      v29 = SetBitsAndClear;
      if ( SetBitsAndClear != -1LL )
        break;
      KeFlushTb(0, 2u);
      v59 = 0LL;
      for ( i = BitMapHeader.SizeOfBitMap >> 6; v59 < i; *v61 |= v62 )
      {
        v61 = &BitMapHeader.Buffer[v59];
        v62 = *((_QWORD *)qword_140C4EA20 + v59++);
      }
      memset(qword_140C4EA20, 0, 4 * (((unsigned __int64)qword_140C4EA18 >> 5) + ((qword_140C4EA18 & 0x1F) != 0)));
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
          v30 = -1LL << (LockHandle.OldIrql + 1);
          v66 = ~(unsigned __int16)v30;
          v58 = (v66 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v66;
          if ( v58 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    v32 = qword_140C4E9F8 + (v29 << 30);
    if ( (a4 & 1) == 0 )
      *a1 = v32 + (a3 << 12);
    if ( !a2 )
      return v32;
    v33 = ((v32 >> 27) & 0x1FFFF8) - 0x90482600000LL;
    v34 = (__int64 *)(a1 + 1);
    v35 = (a2 != 1) + 1LL;
    while ( 1 )
    {
      v36 = MiMakeValidPte(v33, *v34, 3087007748LL, v30);
      if ( MiPteInShadowRange(v33) )
      {
        if ( (unsigned int)MiPteHasShadow(v38, v37, v39, v30) )
        {
          if ( !HIBYTE(word_140C4DE08) && (v36 & 1) != 0 )
            v36 |= 0x8000000000000000uLL;
          *(_QWORD *)v33 = v36;
          MiWritePteShadow(v33, v36);
          goto LABEL_31;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v36 & 1) != 0 )
        {
          v36 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v33 = v36;
LABEL_31:
      ++v34;
      v33 = (__int64)(v33 << 25) >> 16;
      if ( !--v35 )
        return v32;
    }
  }
  *a1 = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v27 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v54 = KeGetCurrentIrql();
      if ( v54 <= 0xFu && LockHandle.OldIrql <= 0xFu && v54 >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        v56 = v55->SchedulerAssist;
        v57 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v58 = (v57 & v56[5]) == 0;
        v56[5] &= v57;
        if ( v58 )
          KiRemoveSystemWorkPriorityKick(v55);
      }
    }
  }
  __writecr8(v27);
  return 0LL;
}
