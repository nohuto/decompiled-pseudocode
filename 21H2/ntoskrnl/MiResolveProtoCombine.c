/*
 * XREFs of MiResolveProtoCombine @ 0x14036ACE4
 * Callers:
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiIsPteInStore @ 0x140208FE0 (MiIsPteInStore.c)
 *     MiMakeTransitionPteValid @ 0x140230140 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     MiAllocateWsle @ 0x1402B65C0 (MiAllocateWsle.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiDiscardTransitionPteEx @ 0x140388FE4 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiResolveProtoCombine(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r12
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 ContainingPageTable; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r11
  __int64 v18; // rdi
  int v19; // eax
  char v20; // cl
  unsigned __int64 ValidPte; // rax
  char v23; // al
  __int64 TransitionPteValid; // rax
  int v25; // ecx
  unsigned __int64 v26; // rsi
  int v27; // r12d
  unsigned __int64 v28; // rbx
  bool v29; // zf
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v31; // rax
  __int64 v32; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-8h] BYREF
  int v36; // [rsp+A8h] [rbp+58h] BYREF

  v33 = 0LL;
  v3 = a1;
  if ( !MiLockProtoPoolPage((unsigned __int64)a3, 0LL) )
    return 0LL;
  v5 = 48 * MiGetContainingPageTable((unsigned __int64)a3) - 0x58000000000LL;
  v6 = MiLockLeafPage(a3, 0LL);
  if ( !v6 )
    goto LABEL_29;
  v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
  v32 = v7;
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x400) == 0 && (v7 & 0x800) != 0 )
    {
      v8 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v6 + 40) >> 39) & 0x3FFLL));
      if ( (*(_BYTE *)(v6 + 34) & 0x20) == 0 )
      {
        if ( (unsigned int)MiUnlinkPageFromList(v6, 0) )
        {
          __incgsdword(0x2E98u);
          *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
          v23 = *(_BYTE *)(v6 + 34);
          ++*(_WORD *)(v6 + 32);
          *(_BYTE *)(v6 + 34) = v23 & 0xF8 | 6;
          TransitionPteValid = MiMakeTransitionPteValid((__int64)a3);
          v25 = *(_DWORD *)(v6 + 16);
          v26 = TransitionPteValid;
          v32 = TransitionPteValid;
          if ( (v25 & 0x400) == 0 && (unsigned int)MiIsPteInStore(v8, *(_QWORD *)(v6 + 16)) )
            v33 = MiCaptureDirtyBitToPfn(v6);
          v27 = 0;
          v28 = v26;
          if ( !MiPteInShadowRange((unsigned __int64)a3) )
            goto LABEL_24;
          if ( (unsigned int)MiPteHasShadow() )
          {
            v27 = 1;
            if ( !HIBYTE(word_140C4E048) )
            {
              v29 = (v26 & 1) == 0;
              goto LABEL_36;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v29 = (v26 & 1) == 0;
LABEL_36:
            if ( !v29 )
              v28 = v26 | 0x8000000000000000uLL;
          }
LABEL_24:
          *a3 = v28;
          if ( v27 )
            MiWritePteShadow((__int64)a3, v28);
          v3 = a1;
          goto LABEL_5;
        }
        MiDiscardTransitionPteEx(v6, 0LL);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_29:
    MiUnlockProtoPoolPage(v5, 0x11u);
    return 0LL;
  }
  v8 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v6 + 40) >> 39) & 0x3FFLL));
LABEL_5:
  *(_QWORD *)(v6 + 24) ^= (*(_QWORD *)(v6 + 24) ^ (*(_QWORD *)(v6 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v5, 0x11u);
  if ( v33 )
    MiReleasePageFileInfo(v8, v33, 1);
  v9 = v32;
  v10 = v32;
  if ( MiPteInShadowRange((unsigned __int64)&v32)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v9 |= 0x20uLL;
      v31 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v32 >> 3) & 0x1FF));
      if ( (v31 & 0x20) == 0 )
        v9 = v10;
      if ( (v31 & 0x42) != 0 )
        v9 |= 0x42uLL;
    }
    else
    {
      v9 = v32;
    }
  }
  v11 = (v9 >> 12) & 0xFFFFFFFFFLL;
  v12 = 48 * v11 - 0x58000000000LL;
  v33 = *(_QWORD *)(v12 + 16);
  ContainingPageTable = MiGetContainingPageTable(v3);
  v18 = v17 + 48 * ContainingPageTable;
  v36 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v36, v14, v15, v16);
    while ( *(__int64 *)(v18 + 24) < 0 );
  }
  *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = (unsigned __int8)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v33) >> 5;
  v20 = *(_BYTE *)(v12 + 34) >> 6;
  if ( v20 != 1 )
  {
    if ( v20 )
    {
      if ( v20 == 2 )
        v19 |= 0x18u;
    }
    else
    {
      v19 |= 8u;
    }
  }
  ValidPte = MiMakeValidPte(v3, v11, v19);
  if ( (unsigned int)MiAllocateWsle(a2, v3, (_QWORD *)(48 * v11 - 0x58000000000LL), 0, ValidPte, 0, 0LL) )
    return 1LL;
  MiLockAndDecrementShareCount(48 * v11 - 0x58000000000LL, 0);
  MiLockAndDecrementShareCount(v18, 0);
  return 0LL;
}
