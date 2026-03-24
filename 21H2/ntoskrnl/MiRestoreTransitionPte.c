/*
 * XREFs of MiRestoreTransitionPte @ 0x1402A2DD0
 * Callers:
 *     MiRelinkStandbyPage @ 0x140271FD8 (MiRelinkStandbyPage.c)
 *     MiHandleInPageError @ 0x1402A2D84 (MiHandleInPageError.c)
 *     MiWriteCompletePfn @ 0x140325C80 (MiWriteCompletePfn.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385120 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPteEx @ 0x140388E94 (MiDiscardTransitionPteEx.c)
 *     MiReuseStandbyPage @ 0x140551360 (MiReuseStandbyPage.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402185D0 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x140218D60 (MiIsPfnFileOnly.c)
 *     KeInsertQueueDpc @ 0x14021FD40 (KeInsertQueueDpc.c)
 *     MI_IS_RESET_PTE @ 0x14023DD20 (MI_IS_RESET_PTE.c)
 *     MiSetNonResidentPteHeat @ 0x14023E7B0 (MiSetNonResidentPteHeat.c)
 *     MiDecrementShareCount @ 0x1402401C0 (MiDecrementShareCount.c)
 *     MiDereferenceControlAreaPfnList @ 0x140263AA0 (MiDereferenceControlAreaPfnList.c)
 *     MiGetTopLevelPfn @ 0x14026A4F0 (MiGetTopLevelPfn.c)
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
 *     MiGetPagingFileOffset @ 0x1402712A0 (MiGetPagingFileOffset.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiClearPfnImageVerified @ 0x1402A3214 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_CLEAR_RESET_PTE @ 0x1402C1D6C (MI_CLEAR_RESET_PTE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

void __fastcall MiRestoreTransitionPte(ULONG_PTR BugCheckParameter2, char a2)
{
  _QWORD *v4; // r14
  BOOL IsPfnFileOnly; // r12d
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 TopLevelPfn; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rsi
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+70h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  IsPfnFileOnly = MiIsPfnFileOnly(BugCheckParameter2);
  MiClearPfnImageVerified(BugCheckParameter2);
  if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x1000000000LL) != 0
      || (v6 = *(_QWORD *)(BugCheckParameter2 + 8), v6 <= 0) )
    {
      v7 = *(_QWORD *)(BugCheckParameter2 + 40);
      if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
        && !(unsigned int)MiGetPagingFileOffset(BugCheckParameter2 + 16)
        && MI_IS_RESET_PTE(*(_QWORD *)(BugCheckParameter2 + 16)) )
      {
        MI_CLEAR_RESET_PTE(BugCheckParameter2 + 16);
        v7 = *(_QWORD *)(BugCheckParameter2 + 40);
      }
    }
    else
    {
      v7 = *(_QWORD *)(BugCheckParameter2 + 40);
      *(_QWORD *)(BugCheckParameter2 + 8) = v6 | 0x8000000000000000uLL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 4) == 0 )
    {
      if ( MI_IS_RESET_PTE(*(_QWORD *)(BugCheckParameter2 + 16)) )
        MI_CLEAR_RESET_PTE(BugCheckParameter2 + 16);
      TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2, v8, v9, v10);
      v12 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      if ( TopLevelPfn != BugCheckParameter2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v12 + 1851) & 0x60) == 0x40 )
        _InterlockedIncrement64((volatile signed __int64 *)(v12 + 1872));
    }
    v7 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (v7 & 0xFFFFFFFFFLL) == (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48 )
      v4 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  v13 = *(_QWORD *)(qword_140C4E648 + 8 * ((v7 >> 39) & 0x3FF));
  v30 = *(_QWORD *)(BugCheckParameter2 + 16);
  MiSetNonResidentPteHeat(&v30, 0);
  if ( v4 )
  {
    v16 = 0LL;
  }
  else
  {
    v16 = 48 * (v7 & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v4 = (_QWORD *)(MiMapPageInHyperSpaceWorker(v7 & 0xFFFFFFFFFLL, v14, 0x80000000LL, v15)
                  + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  v17 = v30;
  if ( !(unsigned int)MiPteInShadowRange(v4, v14) )
    goto LABEL_31;
  if ( !(unsigned int)MiPteHasShadow(v19, v18, v20, v21) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v17 & 1) != 0 )
      v17 |= 0x8000000000000000uLL;
LABEL_31:
    *v4 = v17;
    goto LABEL_32;
  }
  if ( !HIBYTE(word_140C4E008) && (v17 & 1) != 0 )
    v17 |= 0x8000000000000000uLL;
  *v4 = v17;
  MiWritePteShadow(v4, v17);
LABEL_32:
  if ( v16 )
  {
    LOBYTE(v18) = 17;
    MiUnmapPageInHyperSpaceWorker(v4, v18, 0x80000000LL);
  }
  if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) )
  {
    v25 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v25 & 0x400) != 0 )
    {
      if ( qword_140C4DF40 && (v25 & 0x10) == 0 )
        v25 &= ~qword_140C4DF40;
      MiDereferenceControlAreaPfnList(*(_QWORD *)(v25 >> 16), v25 >> 16, v23, 3LL);
    }
  }
  if ( v16 )
  {
    MiLockNestedPageAtDpcInline(v16, v22, v23, v24);
    MiDecrementShareCount(v16);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( !IsPfnFileOnly )
  {
    *(_QWORD *)(BugCheckParameter2 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    if ( (a2 & 1) != 0 )
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
        LockHandle.LockQueue.Lock = &qword_140C4E840;
        KxAcquireQueuedSpinLock(&LockHandle, &qword_140C4E840, v26);
        v27 = (unsigned __int64)P;
        if ( !P )
          goto LABEL_54;
        v28 = (__int64)P[2].Next & 0xFFF;
        if ( ((__int64)P[2].Next & 0xFFF) != 0 )
        {
          P[2].Next->Next = (_SLIST_ENTRY *)((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
          *(_QWORD *)(v27 + 32) += 8LL;
          v28 = *(_QWORD *)(v27 + 32) & 0xFFFLL;
        }
        if ( v28 < 0xC00 )
        {
          if ( v28 )
            v27 = 0LL;
          else
            *(_QWORD *)(v27 + 24) = MEMORY[0xFFFFF78000000320];
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
        else
        {
LABEL_54:
          v27 = (unsigned int)dword_140C4E828;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
      }
      else
      {
        v27 = (unsigned int)dword_140C4E828;
      }
      if ( v27 )
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
    }
  }
}
