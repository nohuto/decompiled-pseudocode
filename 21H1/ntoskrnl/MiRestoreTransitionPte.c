/*
 * XREFs of MiRestoreTransitionPte @ 0x140352BF0
 * Callers:
 *     MiRelinkStandbyPage @ 0x14023F234 (MiRelinkStandbyPage.c)
 *     MiWriteCompletePfn @ 0x14028D170 (MiWriteCompletePfn.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiHandleInPageError @ 0x14031A1EC (MiHandleInPageError.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140381E20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPteEx @ 0x140385624 (MiDiscardTransitionPteEx.c)
 *     MiReuseStandbyPage @ 0x14054B870 (MiReuseStandbyPage.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x1402186F0 (MiIsPfnFileOnly.c)
 *     MiSetNonResidentPteHeat @ 0x140224C70 (MiSetNonResidentPteHeat.c)
 *     MI_IS_RESET_PTE @ 0x1402284A0 (MI_IS_RESET_PTE.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402F1320 (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     MI_CLEAR_RESET_PTE @ 0x1403121FC (MI_CLEAR_RESET_PTE.c)
 *     MiGetPagingFileOffset @ 0x140344E64 (MiGetPagingFileOffset.c)
 *     MiGetTopLevelPfn @ 0x14034D5B0 (MiGetTopLevelPfn.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     MiClearPfnImageVerified @ 0x140353638 (MiClearPfnImageVerified.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

void __fastcall MiRestoreTransitionPte(ULONG_PTR BugCheckParameter2, char a2)
{
  _QWORD *v4; // r14
  BOOL IsPfnFileOnly; // r12d
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 TopLevelPfn; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v29; // [rsp+70h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  IsPfnFileOnly = MiIsPfnFileOnly(BugCheckParameter2);
  MiClearPfnImageVerified(BugCheckParameter2, 12LL);
  if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2, v6, v7) )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x1000000000LL) != 0
      || (v8 = *(_QWORD *)(BugCheckParameter2 + 8), v8 <= 0) )
    {
      v9 = *(_QWORD *)(BugCheckParameter2 + 40);
      if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
        && !(unsigned int)MiGetPagingFileOffset(BugCheckParameter2 + 16)
        && MI_IS_RESET_PTE(*(_QWORD *)(BugCheckParameter2 + 16)) )
      {
        MI_CLEAR_RESET_PTE((__int64 *)(BugCheckParameter2 + 16));
        v9 = *(_QWORD *)(BugCheckParameter2 + 40);
      }
    }
    else
    {
      v9 = *(_QWORD *)(BugCheckParameter2 + 40);
      *(_QWORD *)(BugCheckParameter2 + 8) = v8 | 0x8000000000000000uLL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 4) == 0 )
    {
      if ( MI_IS_RESET_PTE(*(_QWORD *)(BugCheckParameter2 + 16)) )
        MI_CLEAR_RESET_PTE((__int64 *)(BugCheckParameter2 + 16));
      TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2, v10, v11, v12);
      v14 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      if ( TopLevelPfn != BugCheckParameter2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v14 + 1851) & 0x60) == 0x40 )
        _InterlockedIncrement64((volatile signed __int64 *)(v14 + 1872));
    }
    v9 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (v9 & 0xFFFFFFFFFLL) == (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48 )
      v4 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  v15 = *(_QWORD *)(qword_140C4E588 + 8 * ((v9 >> 39) & 0x3FF));
  v29 = *(_QWORD *)(BugCheckParameter2 + 16);
  MiSetNonResidentPteHeat((unsigned __int64 *)&v29, 0);
  if ( v4 )
  {
    v18 = 0LL;
  }
  else
  {
    v18 = 48 * (v9 & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v4 = (_QWORD *)(MiMapPageInHyperSpaceWorker(v9 & 0xFFFFFFFFFLL, v16, 0x80000000LL, v17)
                  + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  v19 = v29;
  if ( !MiPteInShadowRange((unsigned __int64)v4) )
    goto LABEL_31;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v19 & 1) != 0 )
      v19 |= 0x8000000000000000uLL;
LABEL_31:
    *v4 = v19;
    goto LABEL_32;
  }
  if ( !HIBYTE(word_140C4DF48) && (v19 & 1) != 0 )
    v19 |= 0x8000000000000000uLL;
  *v4 = v19;
  MiWritePteShadow((__int64)v4, v19);
LABEL_32:
  if ( v18 )
  {
    LOBYTE(v20) = 17;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v4, v20, 0x80000000);
  }
  if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2, v20, v21) )
  {
    v25 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v25 & 0x400) != 0 )
    {
      if ( qword_140C4DE80 && (v25 & 0x10) == 0 )
        v25 &= ~qword_140C4DE80;
      MiDereferenceControlAreaPfnList(*(_QWORD *)(v25 >> 16), v25 >> 16, v23, (_DWORD *)3);
    }
  }
  if ( v18 )
  {
    MiLockNestedPageAtDpcInline(v18, v22, v23, v24);
    MiDecrementShareCount(v18);
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
      _InterlockedIncrement((volatile signed __int32 *)(v15
                                                      + 4LL * (unsigned int)MiGetPfnPriority(BugCheckParameter2)
                                                      + 4280));
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
      if ( P )
      {
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = &qword_140C4E780;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_140C4E780);
        v26 = (unsigned __int64)P;
        if ( !P )
          goto LABEL_54;
        v27 = (__int64)P[2].Next & 0xFFF;
        if ( ((__int64)P[2].Next & 0xFFF) != 0 )
        {
          P[2].Next->Next = (_SLIST_ENTRY *)((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
          *(_QWORD *)(v26 + 32) += 8LL;
          v27 = *(_QWORD *)(v26 + 32) & 0xFFFLL;
        }
        if ( v27 < 0xC00 )
        {
          if ( v27 )
            v26 = 0LL;
          else
            *(_QWORD *)(v26 + 24) = MEMORY[0xFFFFF78000000320];
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
        else
        {
LABEL_54:
          v26 = (unsigned int)dword_140C4E768;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
      }
      else
      {
        v26 = (unsigned int)dword_140C4E768;
      }
      if ( v26 )
        KeInsertQueueDpc(&stru_140C4E908, 0LL, 0LL);
    }
  }
}
