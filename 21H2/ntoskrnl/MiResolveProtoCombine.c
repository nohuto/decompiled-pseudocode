/*
 * XREFs of MiResolveProtoCombine @ 0x14036AB34
 * Callers:
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiAllocateWsle @ 0x140211CC0 (MiAllocateWsle.c)
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiGetContainingPageTable @ 0x14023E450 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x140269CD0 (MiLockLeafPage.c)
 *     MiIsPteInStore @ 0x14028BE40 (MiIsPteInStore.c)
 *     MiMakeTransitionPteValid @ 0x1402B1F90 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x1402D5EE0 (MiLockAndDecrementShareCount.c)
 *     MiCaptureDirtyBitToPfn @ 0x14030FB10 (MiCaptureDirtyBitToPfn.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiDiscardTransitionPteEx @ 0x140388E94 (MiDiscardTransitionPteEx.c)
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
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 ContainingPageTable; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // rdi
  int v21; // eax
  char v22; // cl
  unsigned __int64 ValidPte; // rax
  __int64 v24; // r8
  char v26; // al
  __int64 TransitionPteValid; // rax
  int v28; // ecx
  unsigned __int64 v29; // rsi
  int v30; // r12d
  unsigned __int64 v31; // rbx
  __int64 v32; // r8
  bool v33; // zf
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-8h] BYREF
  int v41; // [rsp+A8h] [rbp+58h] BYREF

  v38 = 0LL;
  v3 = a1;
  if ( !MiLockProtoPoolPage((unsigned __int64)a3, 0LL) )
    return 0LL;
  v5 = 48 * MiGetContainingPageTable((unsigned __int64)a3) - 0x58000000000LL;
  v8 = MiLockLeafPage(a3, 0, v6, v7);
  if ( !v8 )
    goto LABEL_29;
  v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
  v37 = v9;
  if ( (v9 & 1) == 0 )
  {
    if ( (v9 & 0x400) == 0 && (v9 & 0x800) != 0 )
    {
      v10 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
      if ( (*(_BYTE *)(v8 + 34) & 0x20) == 0 )
      {
        if ( (unsigned int)MiUnlinkPageFromList(v8, 0) )
        {
          __incgsdword(0x2E98u);
          *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
          v26 = *(_BYTE *)(v8 + 34);
          ++*(_WORD *)(v8 + 32);
          *(_BYTE *)(v8 + 34) = v26 & 0xF8 | 6;
          TransitionPteValid = MiMakeTransitionPteValid((__int64)a3);
          v28 = *(_DWORD *)(v8 + 16);
          v29 = TransitionPteValid;
          v37 = TransitionPteValid;
          if ( (v28 & 0x400) == 0 && (unsigned int)MiIsPteInStore(v10, *(_QWORD *)(v8 + 16)) )
            v38 = MiCaptureDirtyBitToPfn(v8);
          v30 = 0;
          v31 = v29;
          if ( !MiPteInShadowRange((unsigned __int64)a3) )
            goto LABEL_24;
          if ( (unsigned int)MiPteHasShadow() )
          {
            v30 = 1;
            if ( !HIBYTE(word_140C4E008) )
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
  v10 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
LABEL_5:
  *(_QWORD *)(v8 + 24) ^= (*(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v5, 0x11u);
  if ( v38 )
    MiReleasePageFileInfo(v10, v38, 1);
  v11 = v37;
  v12 = v37;
  if ( MiPteInShadowRange((unsigned __int64)&v37)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 |= 0x20uLL;
      v35 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v37 >> 3) & 0x1FF));
      if ( (v35 & 0x20) == 0 )
        v11 = v12;
      if ( (v35 & 0x42) != 0 )
        v11 |= 0x42uLL;
    }
    else
    {
      v11 = v37;
    }
  }
  v13 = (v11 >> 12) & 0xFFFFFFFFFLL;
  v14 = 48 * v13 - 0x58000000000LL;
  v38 = *(_QWORD *)(v14 + 16);
  ContainingPageTable = MiGetContainingPageTable(v3);
  v20 = v19 + 48 * ContainingPageTable;
  v41 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v41, v16, v17, v18);
    while ( *(__int64 *)(v20 + 24) < 0 );
  }
  *(_QWORD *)(v20 + 24) ^= (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v21 = (unsigned __int8)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v38) >> 5;
  v22 = *(_BYTE *)(v14 + 34) >> 6;
  if ( v22 != 1 )
  {
    if ( v22 )
    {
      if ( v22 == 2 )
        v21 |= 0x18u;
    }
    else
    {
      v21 |= 8u;
    }
  }
  ValidPte = MiMakeValidPte(v3, v13, v21);
  if ( (unsigned int)MiAllocateWsle(a2, v3, (_QWORD *)(48 * v13 - 0x58000000000LL), 0, ValidPte, 0, 0LL) )
    return 1LL;
  MiLockAndDecrementShareCount(48 * v13 - 0x58000000000LL, 0LL, v24);
  MiLockAndDecrementShareCount(v20, 0LL, v36);
  return 0LL;
}
