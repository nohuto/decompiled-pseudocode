/*
 * XREFs of MiResolveProtoCombine @ 0x14036A884
 * Callers:
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiIsPteInStore @ 0x14023AE70 (MiIsPteInStore.c)
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     MiAllocateWsle @ 0x140272FE0 (MiAllocateWsle.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     MiGetContainingPageTable @ 0x14029C940 (MiGetContainingPageTable.c)
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiMakeTransitionPteValid @ 0x1403115D0 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x14034A220 (MiLockLeafPage.c)
 *     MiDiscardTransitionPteEx @ 0x140388734 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiResolveProtoCombine(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // r12
  __int64 v5; // r14
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 ContainingPageTable; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // r9
  char v23; // cl
  unsigned __int64 ValidPte; // rax
  char v26; // al
  unsigned __int64 TransitionPteValid; // rax
  int v28; // ecx
  unsigned __int64 v29; // rsi
  int v30; // r12d
  unsigned __int64 v31; // rbx
  __int64 v32; // r8
  bool v33; // zf
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-8h] BYREF
  int v40; // [rsp+A8h] [rbp+58h] BYREF

  v37 = 0LL;
  v3 = a1;
  if ( !MiLockProtoPoolPage((unsigned __int64)a3, 0LL) )
    return 0LL;
  v5 = 48 * MiGetContainingPageTable((unsigned __int64)a3) - 0x58000000000LL;
  v8 = MiLockLeafPage(a3, 0, v6, v7);
  if ( !v8 )
    goto LABEL_29;
  v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
  v36 = v9;
  if ( (v9 & 1) == 0 )
  {
    if ( (v9 & 0x400) == 0 && (v9 & 0x800) != 0 )
    {
      v10 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
      if ( (*(_BYTE *)(v8 + 34) & 0x20) == 0 )
      {
        if ( (unsigned int)MiUnlinkPageFromList(v8, 0) )
        {
          __incgsdword(0x2E98u);
          *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
          v26 = *(_BYTE *)(v8 + 34);
          ++*(_WORD *)(v8 + 32);
          *(_BYTE *)(v8 + 34) = v26 & 0xF8 | 6;
          TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)a3);
          v28 = *(_DWORD *)(v8 + 16);
          v29 = TransitionPteValid;
          v36 = TransitionPteValid;
          if ( (v28 & 0x400) == 0 && (unsigned int)MiIsPteInStore(v10, *(_QWORD *)(v8 + 16)) )
            v37 = MiCaptureDirtyBitToPfn(v8);
          v30 = 0;
          v31 = v29;
          if ( !MiPteInShadowRange((unsigned __int64)a3) )
            goto LABEL_24;
          if ( (unsigned int)MiPteHasShadow() )
          {
            v30 = 1;
            if ( !HIBYTE(word_140C4DE88) )
            {
              v33 = (v29 & 1) == 0;
              goto LABEL_36;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v33 = (v29 & 1) == 0;
LABEL_36:
            if ( !v33 )
              v31 = v29 | 0x8000000000000000uLL;
          }
LABEL_24:
          *a3 = v31;
          if ( v30 )
            MiWritePteShadow((__int64)a3, v31, v32);
          v3 = a1;
          goto LABEL_5;
        }
        MiDiscardTransitionPteEx(v8, 0LL);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_29:
    MiUnlockProtoPoolPage(v5, 0x11u);
    return 0LL;
  }
  v10 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
LABEL_5:
  *(_QWORD *)(v8 + 24) ^= (*(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v5, 0x11u);
  if ( v37 )
    MiReleasePageFileInfo(v10, v37, 1);
  v11 = v36;
  v12 = v36;
  if ( MiPteInShadowRange((unsigned __int64)&v36)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 |= 0x20uLL;
      v35 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v36 >> 3) & 0x1FF));
      if ( (v35 & 0x20) == 0 )
        v11 = v12;
      if ( (v35 & 0x42) != 0 )
        v11 |= 0x42uLL;
    }
    else
    {
      v11 = v36;
    }
  }
  v13 = (v11 >> 12) & 0xFFFFFFFFFLL;
  v14 = 48 * v13 - 0x58000000000LL;
  v37 = *(_QWORD *)(v14 + 16);
  ContainingPageTable = MiGetContainingPageTable(v3);
  v20 = v19 + 48 * ContainingPageTable;
  v40 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v40, v16, v17, v18);
    while ( *(__int64 *)(v20 + 24) < 0 );
  }
  *(_QWORD *)(v20 + 24) ^= (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v21 = (unsigned __int8)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v37) >> 5;
  v23 = *(_BYTE *)(v14 + 34) >> 6;
  if ( v23 != 1 )
  {
    if ( v23 )
    {
      if ( v23 == 2 )
        v21 |= 0x18u;
    }
    else
    {
      v21 |= 8u;
    }
  }
  ValidPte = MiMakeValidPte(v3, v13, v21, v22);
  if ( (unsigned int)MiAllocateWsle(a2, v3, (_QWORD *)(48 * v13 - 0x58000000000LL), 0, ValidPte, 0, 0LL) )
    return 1LL;
  MiLockAndDecrementShareCount(48 * v13 - 0x58000000000LL, 0);
  MiLockAndDecrementShareCount(v20, 0);
  return 0LL;
}
