/*
 * XREFs of MiResolveProtoCombine @ 0x1403688A4
 * Callers:
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiAllocateWsle @ 0x1402A3CA0 (MiAllocateWsle.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     MiGetContainingPageTable @ 0x1402B9DD0 (MiGetContainingPageTable.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiLockAndDecrementShareCount @ 0x1402F5064 (MiLockAndDecrementShareCount.c)
 *     MiLockLeafPage @ 0x1402F6AF0 (MiLockLeafPage.c)
 *     MiIsPteInStore @ 0x140314E74 (MiIsPteInStore.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiMakeTransitionPteValid @ 0x1403405A0 (MiMakeTransitionPteValid.c)
 *     MiDiscardTransitionPteEx @ 0x140386594 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiResolveProtoCombine(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // r12
  __int64 v5; // r14
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 ContainingPageTable; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r11
  __int64 v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // r9
  char v24; // cl
  unsigned __int64 ValidPte; // rax
  char v27; // al
  unsigned __int64 TransitionPteValid; // rax
  int v29; // ecx
  unsigned __int64 v30; // rsi
  int v31; // r12d
  unsigned __int64 v32; // rbx
  __int64 v33; // r8
  bool v34; // zf
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-8h] BYREF
  int v41; // [rsp+A8h] [rbp+58h] BYREF

  v38 = 0LL;
  v3 = a1;
  if ( !MiLockProtoPoolPage((unsigned __int64)a3, 0LL) )
    return 0LL;
  v5 = 48 * MiGetContainingPageTable((unsigned __int64)a3) - 0x58000000000LL;
  v9 = MiLockLeafPage(a3, 0, v6, v7);
  if ( !v9 )
    goto LABEL_29;
  v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
  v37 = v10;
  if ( (v10 & 1) == 0 )
  {
    if ( (v10 & 0x400) == 0 && (v10 & 0x800) != 0 )
    {
      v11 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL));
      if ( (*(_BYTE *)(v9 + 34) & 0x20) == 0 )
      {
        if ( (unsigned int)MiUnlinkPageFromList(v9, 0) )
        {
          __incgsdword(0x2E98u);
          *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
          v27 = *(_BYTE *)(v9 + 34);
          ++*(_WORD *)(v9 + 32);
          *(_BYTE *)(v9 + 34) = v27 & 0xF8 | 6;
          TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)a3);
          v29 = *(_DWORD *)(v9 + 16);
          v30 = TransitionPteValid;
          v37 = TransitionPteValid;
          if ( (v29 & 0x400) == 0 && (unsigned int)MiIsPteInStore(v11, *(_QWORD *)(v9 + 16)) )
            v38 = MiCaptureDirtyBitToPfn(v9);
          v31 = 0;
          v32 = v30;
          if ( !MiPteInShadowRange((unsigned __int64)a3) )
            goto LABEL_24;
          if ( (unsigned int)MiPteHasShadow() )
          {
            v31 = 1;
            if ( !HIBYTE(word_140C4DE08) )
            {
              v34 = (v30 & 1) == 0;
              goto LABEL_36;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v34 = (v30 & 1) == 0;
LABEL_36:
            if ( !v34 )
              v32 = v30 | 0x8000000000000000uLL;
          }
LABEL_24:
          *a3 = v32;
          if ( v31 )
            MiWritePteShadow((__int64)a3, v32, v33);
          v3 = a1;
          goto LABEL_5;
        }
        MiDiscardTransitionPteEx(v9, 0LL);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_29:
    LOBYTE(v8) = 17;
    MiUnlockProtoPoolPage(v5, v8);
    return 0LL;
  }
  v11 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL));
LABEL_5:
  *(_QWORD *)(v9 + 24) ^= (*(_QWORD *)(v9 + 24) ^ (*(_QWORD *)(v9 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v5, 0x3FFFFFFFFFFFFF11LL);
  if ( v38 )
    MiReleasePageFileInfo(v11, v38, 1);
  v12 = v37;
  v13 = v37;
  if ( MiPteInShadowRange((unsigned __int64)&v37)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v12 & 1) != 0
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v12 |= 0x20uLL;
      v36 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v37 >> 3) & 0x1FF));
      if ( (v36 & 0x20) == 0 )
        v12 = v13;
      if ( (v36 & 0x42) != 0 )
        v12 |= 0x42uLL;
    }
    else
    {
      v12 = v37;
    }
  }
  v14 = (v12 >> 12) & 0xFFFFFFFFFLL;
  v15 = 48 * v14 - 0x58000000000LL;
  v38 = *(_QWORD *)(v15 + 16);
  ContainingPageTable = MiGetContainingPageTable(v3);
  v21 = v20 + 48 * ContainingPageTable;
  v41 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v41, v17, v18, v19);
    while ( *(__int64 *)(v21 + 24) < 0 );
  }
  *(_QWORD *)(v21 + 24) ^= (*(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v22 = (unsigned __int8)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v38) >> 5;
  v24 = *(_BYTE *)(v15 + 34) >> 6;
  if ( v24 != 1 )
  {
    if ( v24 )
    {
      if ( v24 == 2 )
        v22 |= 0x18u;
    }
    else
    {
      v22 |= 8u;
    }
  }
  ValidPte = MiMakeValidPte(v3, v14, v22, v23);
  if ( (unsigned int)MiAllocateWsle(a2, v3, 48 * v14 - 0x58000000000LL, 0, ValidPte, 0, 0LL) )
    return 1LL;
  MiLockAndDecrementShareCount(48 * v14 - 0x58000000000LL, 0);
  MiLockAndDecrementShareCount(v21, 0);
  return 0LL;
}
