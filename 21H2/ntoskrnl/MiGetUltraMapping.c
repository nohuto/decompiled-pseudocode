/*
 * XREFs of MiGetUltraMapping @ 0x1402D8F50
 * Callers:
 *     MiZeroLargePage @ 0x1402353D8 (MiZeroLargePage.c)
 *     MiDeleteUltraMapContext @ 0x140297984 (MiDeleteUltraMapContext.c)
 *     MiMapPagesToZero @ 0x1402D88C0 (MiMapPagesToZero.c)
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MiAllocateHyperSpace @ 0x1402E195C (MiAllocateHyperSpace.c)
 *     MiPfnShareCountIsZero @ 0x140330EE0 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x140332C20 (MiWsleFree.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140337130 (MiDecrementAndInsertStandbyPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiInitializeNewUltraHugeContext @ 0x14039A814 (MiInitializeNewUltraHugeContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0898 (MiTimeSingleLargePageZeroWorker.c)
 *     MiZeroWithUltraSpace @ 0x1403F5518 (MiZeroWithUltraSpace.c)
 *     MiHugePageOperation @ 0x1405331B8 (MiHugePageOperation.c)
 *     MmMapMdl @ 0x1405377F0 (MmMapMdl.c)
 *     MiScrubNodeLargePageList @ 0x140557078 (MiScrubNodeLargePageList.c)
 *     MiCombinePte @ 0x14055CB40 (MiCombinePte.c)
 *     MiScrubPage @ 0x140564534 (MiScrubPage.c)
 *     MiCombineAllPhysicalMemory @ 0x140727760 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     RtlFindSetBitsAndClearEx @ 0x14024B7F0 (RtlFindSetBitsAndClearEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeFlushTb @ 0x1402D4970 (KeFlushTb.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
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
  unsigned __int64 v16; // r11
  __int64 *v17; // r11
  __int64 v18; // rbp
  __int64 ValidPte; // rbx
  unsigned __int64 v20; // rbx
  ULONG64 SetBitsAndClear; // rax
  ULONG64 v22; // r13
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v24; // r13
  __int64 v25; // rdi
  _QWORD *v26; // r14
  __int64 v27; // rbp
  __int64 v28; // rbx
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rbx
  unsigned __int64 *v31; // rdi
  unsigned __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // rdx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r8
  int v38; // eax
  bool v39; // zf
  unsigned __int64 v40; // r9
  unsigned __int64 i; // r8
  unsigned __int64 *v42; // rdx
  __int64 v43; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v47; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v49; // [rsp+70h] [rbp+8h]
  __int64 *v50; // [rsp+70h] [rbp+8h]
  unsigned __int64 *v51; // [rsp+70h] [rbp+8h]

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
    v49 = (_QWORD *)v14;
    if ( a2 <= 1 )
    {
      v33 = 2 - a2;
      do
      {
        v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v33;
      }
      while ( v33 );
      v49 = (_QWORD *)v14;
    }
    v15 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v14) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
          v15 = v34 | ZeroPte;
        *v49 = v15;
        MiWritePteShadow((__int64)v49, v15);
LABEL_12:
        if ( (a4 & 2) == 0 )
        {
          if ( a2 != 1 )
          {
            v17 = (__int64 *)(v16 + 8);
            v50 = v17;
            if ( ((unsigned __int16)v17 & 0xFFF) != 0 )
            {
              v18 = (__int64)((_QWORD)v17 << 25) >> 16 << 25 >> 16;
              ValidPte = MiMakeValidPte(v17, a1[2], 3087007748LL);
              if ( (unsigned int)MiPteInShadowRange(v50) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  if ( !HIBYTE(word_140C4E048) && (ValidPte & 1) != 0 )
                    ValidPte |= 0x8000000000000000uLL;
                  *v50 = ValidPte;
                  MiWritePteShadow((__int64)v50, ValidPte);
                  goto LABEL_17;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (ValidPte & 1) != 0 )
                {
                  ValidPte |= 0x8000000000000000uLL;
                }
              }
              *v50 = ValidPte;
LABEL_17:
              result = v18;
              *a1 = v12 + v18;
              return result;
            }
          }
          goto LABEL_39;
        }
        if ( a2 > 1 )
        {
          v32 = ZeroPte;
          v51 = (unsigned __int64 *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( (unsigned int)MiPteInShadowRange(v51) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
                v32 = ZeroPte | 0x8000000000000000uLL;
              *v51 = v32;
              MiWritePteShadow((__int64)v51, v32);
              goto LABEL_39;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v32 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *v51 = v32;
        }
LABEL_39:
        v4 -= v9;
        goto LABEL_19;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v15 = v34 | ZeroPte;
      }
    }
    v16 = (unsigned __int64)v49;
    *v49 = v15;
    goto LABEL_12;
  }
LABEL_19:
  KeAcquireInStackQueuedSpinLock(&qword_140C4EC30, &LockHandle);
  if ( !v4 )
    goto LABEL_20;
  v29 = (v4 - qword_140C4EC38) >> 30;
  v30 = ZeroPte;
  v31 = (unsigned __int64 *)(((v4 >> 27) & 0x1FFFF8) - 0x90482600000LL);
  if ( (unsigned int)MiPteInShadowRange(v31) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
        v30 = ZeroPte | 0x8000000000000000uLL;
      *v31 = v30;
      MiWritePteShadow((__int64)v31, v30);
      goto LABEL_35;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v30 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  *v31 = v30;
LABEL_35:
  _bittestandset64((signed __int64 *)qword_140C4EC60, v29);
LABEL_20:
  if ( (a4 & 2) == 0 )
  {
    while ( 1 )
    {
      SetBitsAndClear = RtlFindSetBitsAndClearEx(&BitMapHeader, 1uLL, HintIndex);
      v22 = SetBitsAndClear;
      if ( SetBitsAndClear != -1LL )
        break;
      KeFlushTb(0, 2u);
      v40 = 0LL;
      for ( i = BitMapHeader.SizeOfBitMap >> 6; v40 < i; *v42 |= v43 )
      {
        v42 = &BitMapHeader.Buffer[v40];
        v43 = *((_QWORD *)qword_140C4EC60 + v40++);
      }
      memset(qword_140C4EC60, 0, 4 * (((unsigned __int64)qword_140C4EC58 >> 5) + ((qword_140C4EC58 & 0x1F) != 0)));
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
          v47 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v39 = (v47 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v47;
          if ( v39 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    v24 = qword_140C4EC38 + (v22 << 30);
    if ( (a4 & 1) == 0 )
      *a1 = v24 + (a3 << 12);
    if ( !a2 )
      return v24;
    v25 = ((v24 >> 27) & 0x1FFFF8) - 0x90482600000LL;
    v26 = a1 + 1;
    v27 = (a2 != 1) + 1LL;
    while ( 1 )
    {
      v28 = MiMakeValidPte(v25, *v26, 3087007748LL);
      if ( (unsigned int)MiPteInShadowRange(v25) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E048) && (v28 & 1) != 0 )
            v28 |= 0x8000000000000000uLL;
          *(_QWORD *)v25 = v28;
          MiWritePteShadow(v25, v28);
          goto LABEL_31;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v28 & 1) != 0 )
        {
          v28 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v25 = v28;
LABEL_31:
      ++v26;
      v25 = v25 << 25 >> 16;
      if ( !--v27 )
        return v24;
    }
  }
  *a1 = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v20 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && LockHandle.OldIrql <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v39 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v39 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
  }
  __writecr8(v20);
  return 0LL;
}
