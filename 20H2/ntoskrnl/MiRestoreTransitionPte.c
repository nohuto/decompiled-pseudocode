/*
 * XREFs of MiRestoreTransitionPte @ 0x140346AA0
 * Callers:
 *     MiRelinkStandbyPage @ 0x140265740 (MiRelinkStandbyPage.c)
 *     MiWriteCompletePfn @ 0x1402A93D0 (MiWriteCompletePfn.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiHandleInPageError @ 0x1403284DC (MiHandleInPageError.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384340 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPteEx @ 0x140388734 (MiDiscardTransitionPteEx.c)
 *     MiReuseStandbyPage @ 0x14054F890 (MiReuseStandbyPage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiGetPagingFileOffset @ 0x1402397FC (MiGetPagingFileOffset.c)
 *     MiGetPfnPriority @ 0x140279DB0 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x14027A540 (MiIsPfnFileOnly.c)
 *     KeInsertQueueDpc @ 0x14027F670 (KeInsertQueueDpc.c)
 *     MiDecrementShareCount @ 0x140290770 (MiDecrementShareCount.c)
 *     MiDereferenceControlAreaPfnList @ 0x140300800 (MiDereferenceControlAreaPfnList.c)
 *     MiLockNestedPageAtDpcInline @ 0x14030DC80 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MI_CLEAR_RESET_PTE @ 0x14032060C (MI_CLEAR_RESET_PTE.c)
 *     MiGetTopLevelPfn @ 0x140341C10 (MiGetTopLevelPfn.c)
 *     MI_IS_RESET_PTE @ 0x140348D80 (MI_IS_RESET_PTE.c)
 *     MiSetNonResidentPteHeat @ 0x140349540 (MiSetNonResidentPteHeat.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     MiClearPfnImageVerified @ 0x140349B58 (MiClearPfnImageVerified.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
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
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  IsPfnFileOnly = MiIsPfnFileOnly(BugCheckParameter2);
  MiClearPfnImageVerified(BugCheckParameter2, 12LL);
  if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x1000000000LL) != 0
      || (v6 = *(_QWORD *)(BugCheckParameter2 + 8), v6 <= 0) )
    {
      v7 = *(_QWORD *)(BugCheckParameter2 + 40);
      if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
        && !(unsigned int)MiGetPagingFileOffset(BugCheckParameter2 + 16)
        && (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(BugCheckParameter2 + 16)) )
      {
        MI_CLEAR_RESET_PTE((__int64 *)(BugCheckParameter2 + 16));
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
      if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(BugCheckParameter2 + 16)) )
        MI_CLEAR_RESET_PTE((__int64 *)(BugCheckParameter2 + 16));
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
  v13 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((v7 >> 39) & 0x3FF));
  v25 = *(_QWORD *)(BugCheckParameter2 + 16);
  MiSetNonResidentPteHeat(&v25, 0LL);
  if ( v4 )
  {
    v15 = 0LL;
  }
  else
  {
    v15 = 48 * (v7 & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v4 = (_QWORD *)(MiMapPageInHyperSpaceWorker(v7 & 0xFFFFFFFFFLL, v14, 0x80000000LL)
                  + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  v16 = v25;
  if ( !MiPteInShadowRange((unsigned __int64)v4) )
    goto LABEL_31;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v16 & 1) != 0 )
      v16 |= 0x8000000000000000uLL;
LABEL_31:
    *v4 = v16;
    goto LABEL_32;
  }
  if ( !HIBYTE(word_140C4DE88) && (v16 & 1) != 0 )
    v16 |= 0x8000000000000000uLL;
  *v4 = v16;
  MiWritePteShadow((__int64)v4, v16, v17);
LABEL_32:
  if ( v15 )
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v4, 0x11u, 0x80000000);
  if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) )
  {
    v21 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v21 & 0x400) != 0 )
    {
      if ( qword_140C4DDC0 && (v21 & 0x10) == 0 )
        v21 &= ~qword_140C4DDC0;
      MiDereferenceControlAreaPfnList(*(_QWORD *)(v21 >> 16), v21 >> 16, v19, 3LL);
    }
  }
  if ( v15 )
  {
    MiLockNestedPageAtDpcInline(v15, v18, v19, v20);
    MiDecrementShareCount(v15);
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
        LockHandle.LockQueue.Lock = &qword_140C4E6C0;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_140C4E6C0);
        v22 = (unsigned __int64)P;
        if ( !P )
          goto LABEL_54;
        v23 = (__int64)P[2].Next & 0xFFF;
        if ( ((__int64)P[2].Next & 0xFFF) != 0 )
        {
          P[2].Next->Next = (_SLIST_ENTRY *)((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
          *(_QWORD *)(v22 + 32) += 8LL;
          v23 = *(_QWORD *)(v22 + 32) & 0xFFFLL;
        }
        if ( v23 < 0xC00 )
        {
          if ( v23 )
            v22 = 0LL;
          else
            *(_QWORD *)(v22 + 24) = MEMORY[0xFFFFF78000000320];
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
        else
        {
LABEL_54:
          v22 = (unsigned int)dword_140C4E6A8;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
      }
      else
      {
        v22 = (unsigned int)dword_140C4E6A8;
      }
      if ( v22 )
        KeInsertQueueDpc(&stru_140C4E848, 0LL, 0LL);
    }
  }
}
