/*
 * XREFs of MiRestoreTransitionPte @ 0x1402F6C10
 * Callers:
 *     MiWriteCompletePfn @ 0x140234120 (MiWriteCompletePfn.c)
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MiRelinkStandbyPage @ 0x1402D1FBC (MiRelinkStandbyPage.c)
 *     MiHandleInPageError @ 0x140357D0C (MiHandleInPageError.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140382660 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPteEx @ 0x140386594 (MiDiscardTransitionPteEx.c)
 *     MiReuseStandbyPage @ 0x14054BEC0 (MiReuseStandbyPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeInsertQueueDpc @ 0x140214C00 (KeInsertQueueDpc.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiGetPfnPriority @ 0x1402AAA70 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x1402AB200 (MiIsPfnFileOnly.c)
 *     MiSetNonResidentPteHeat @ 0x1402B78F0 (MiSetNonResidentPteHeat.c)
 *     MI_IS_RESET_PTE @ 0x1402BB120 (MI_IS_RESET_PTE.c)
 *     MiGetTopLevelPfn @ 0x1402D5600 (MiGetTopLevelPfn.c)
 *     MiDecrementShareCount @ 0x1402F7060 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiClearPfnImageVerified @ 0x1402F7658 (MiClearPfnImageVerified.c)
 *     MiGetPagingFileOffset @ 0x140315B24 (MiGetPagingFileOffset.c)
 *     MiDereferenceControlAreaPfnList @ 0x14032D0C0 (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
 *     MI_CLEAR_RESET_PTE @ 0x14034F9EC (MI_CLEAR_RESET_PTE.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
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
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp+8h] BYREF

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
  v13 = *(_QWORD *)(qword_140C4E448 + 8 * ((v7 >> 39) & 0x3FF));
  v26 = *(_QWORD *)(BugCheckParameter2 + 16);
  MiSetNonResidentPteHeat(&v26, 0);
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
  v16 = v26;
  if ( !MiPteInShadowRange((unsigned __int64)v4) )
    goto LABEL_31;
  if ( !(unsigned int)MiPteHasShadow(v18, v17, v19, v20) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v16 & 1) != 0 )
      v16 |= 0x8000000000000000uLL;
LABEL_31:
    *v4 = v16;
    goto LABEL_32;
  }
  if ( !HIBYTE(word_140C4DE08) && (v16 & 1) != 0 )
    v16 |= 0x8000000000000000uLL;
  *v4 = v16;
  MiWritePteShadow(v4, v16);
LABEL_32:
  if ( v15 )
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v4, 0x11u, 0x80000000);
  if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) )
  {
    v22 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v22 & 0x400) != 0 )
    {
      if ( qword_140C4DD40 && (v22 & 0x10) == 0 )
        v22 &= ~qword_140C4DD40;
      MiDereferenceControlAreaPfnList(*(_QWORD *)(v22 >> 16), v22 >> 16, v21, 3LL);
    }
  }
  if ( v15 )
  {
    MiLockNestedPageAtDpcInline(v15);
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
        LockHandle.LockQueue.Lock = &qword_140C4E640;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_140C4E640);
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
          v23 = (unsigned int)dword_140C4E628;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
      }
      else
      {
        v23 = (unsigned int)dword_140C4E628;
      }
      if ( v23 )
        KeInsertQueueDpc(&stru_140C4E7C8, 0LL, 0LL);
    }
  }
}
