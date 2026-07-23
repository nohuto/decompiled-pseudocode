/*
 * XREFs of MiRestoreTransitionPte @ 0x140220210
 * Callers:
 *     MiHandleInPageError @ 0x1402201C4 (MiHandleInPageError.c)
 *     MiRelinkStandbyPage @ 0x14025FF78 (MiRelinkStandbyPage.c)
 *     MiWriteCompletePfn @ 0x1403309D0 (MiWriteCompletePfn.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385270 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPteEx @ 0x140388FE4 (MiDiscardTransitionPteEx.c)
 *     MiReuseStandbyPage @ 0x1405515A0 (MiReuseStandbyPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiClearPfnImageVerified @ 0x140220654 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_CLEAR_RESET_PTE @ 0x14024020C (MI_CLEAR_RESET_PTE.c)
 *     MiGetTopLevelPfn @ 0x140258490 (MiGetTopLevelPfn.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     MiDereferenceControlAreaPfnList @ 0x140284F70 (MiDereferenceControlAreaPfnList.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     MI_IS_RESET_PTE @ 0x1402E2570 (MI_IS_RESET_PTE.c)
 *     MiSetNonResidentPteHeat @ 0x1402E3000 (MiSetNonResidentPteHeat.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

void __fastcall MiRestoreTransitionPte(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  char v3; // r13
  _QWORD *v5; // r14
  int IsPfnFileOnly; // r12d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 TopLevelPfn; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a2;
  v5 = 0LL;
  IsPfnFileOnly = MiIsPfnFileOnly(BugCheckParameter2, a2, a3);
  MiClearPfnImageVerified(BugCheckParameter2);
  if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x1000000000LL) != 0
      || (v9 = *(_QWORD *)(BugCheckParameter2 + 8), v9 <= 0) )
    {
      v10 = *(_QWORD *)(BugCheckParameter2 + 40);
      if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
        && !(unsigned int)MiGetPagingFileOffset(BugCheckParameter2 + 16, v7, v8)
        && (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(BugCheckParameter2 + 16)) )
      {
        MI_CLEAR_RESET_PTE(BugCheckParameter2 + 16);
        v10 = *(_QWORD *)(BugCheckParameter2 + 40);
      }
    }
    else
    {
      v10 = *(_QWORD *)(BugCheckParameter2 + 40);
      *(_QWORD *)(BugCheckParameter2 + 8) = v9 | 0x8000000000000000uLL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 4) == 0 )
    {
      if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(BugCheckParameter2 + 16)) )
        MI_CLEAR_RESET_PTE(BugCheckParameter2 + 16);
      TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
      v12 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      if ( TopLevelPfn != BugCheckParameter2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v12 + 1851) & 0x60) == 0x40 )
        _InterlockedIncrement64((volatile signed __int64 *)(v12 + 1872));
    }
    v10 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (v10 & 0xFFFFFFFFFLL) == (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48 )
      v5 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  v13 = *(_QWORD *)(qword_140C4E688 + 8 * ((v10 >> 39) & 0x3FF));
  v26 = *(_QWORD *)(BugCheckParameter2 + 16);
  MiSetNonResidentPteHeat(&v26, 0LL);
  if ( v5 )
  {
    v15 = 0LL;
  }
  else
  {
    v15 = 48 * (v10 & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v5 = (_QWORD *)(MiMapPageInHyperSpaceWorker(v10 & 0xFFFFFFFFFLL, v14, 0x80000000LL)
                  + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  v16 = v26;
  if ( !(unsigned int)MiPteInShadowRange(v5) )
    goto LABEL_31;
  if ( !(unsigned int)MiPteHasShadow(v18, v17) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v16 & 1) != 0 )
      v16 |= 0x8000000000000000uLL;
LABEL_31:
    *v5 = v16;
    goto LABEL_32;
  }
  if ( !HIBYTE(word_140C4E048) && (v16 & 1) != 0 )
    v16 |= 0x8000000000000000uLL;
  *v5 = v16;
  MiWritePteShadow(v5);
LABEL_32:
  if ( v15 )
  {
    LOBYTE(v17) = 17;
    MiUnmapPageInHyperSpaceWorker(v5, v17, 0x80000000LL);
  }
  if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) )
  {
    v20 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v20 & 0x400) != 0 )
    {
      if ( qword_140C4DF80 && (v20 & 0x10) == 0 )
        v20 &= ~qword_140C4DF80;
      MiDereferenceControlAreaPfnList(*(_QWORD *)(v20 >> 16), v20 >> 16, v19, 3LL);
    }
  }
  if ( v15 )
  {
    MiLockNestedPageAtDpcInline(v15);
    MiDecrementShareCount(v15);
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( IsPfnFileOnly != 1 )
  {
    *(_QWORD *)(BugCheckParameter2 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    if ( (v3 & 1) != 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13
                                                      + 4LL * (unsigned int)MiGetPfnPriority(BugCheckParameter2)
                                                      + 4280));
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
      if ( P )
      {
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = &qword_140C4E880;
        KxAcquireQueuedSpinLock(&LockHandle, &qword_140C4E880, v21, v22);
        v23 = (unsigned __int64)P;
        if ( !P )
          goto LABEL_54;
        v24 = (__int64)P[2].Next & 0xFFF;
        if ( ((__int64)P[2].Next & 0xFFF) != 0 )
        {
          P[2].Next->Next = (_SLIST_ENTRY *)((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
          *(_QWORD *)(v23 + 32) += 8LL;
          v24 = *(_QWORD *)(v23 + 32) & 0xFFFLL;
        }
        if ( v24 < 0xC00 )
        {
          if ( v24 )
            v23 = 0LL;
          else
            *(_QWORD *)(v23 + 24) = MEMORY[0xFFFFF78000000320];
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
        else
        {
LABEL_54:
          v23 = (unsigned int)dword_140C4E868;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
      }
      else
      {
        v23 = (unsigned int)dword_140C4E868;
      }
      if ( v23 )
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
    }
  }
}
