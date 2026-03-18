/*
 * XREFs of MiResolveProtoCombine @ 0x140367EE4
 * Callers:
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiAllocateWsle @ 0x140211190 (MiAllocateWsle.c)
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     MiGetContainingPageTable @ 0x140227150 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiMakeTransitionPteValid @ 0x1403037D0 (MiMakeTransitionPteValid.c)
 *     MiIsPteInStore @ 0x1403441B4 (MiIsPteInStore.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 *     MiLockLeafPage @ 0x140352AD0 (MiLockLeafPage.c)
 *     MiDiscardTransitionPteEx @ 0x140385624 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiResolveProtoCombine(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // r12
  __int64 v5; // r14
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 ContainingPageTable; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r11
  __int64 v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // r9
  char v26; // cl
  unsigned __int64 ValidPte; // rax
  __int64 v28; // r8
  _DWORD *v29; // r9
  char v31; // al
  unsigned __int64 TransitionPteValid; // rax
  int v33; // ecx
  unsigned __int64 v34; // rsi
  int v35; // r12d
  unsigned __int64 v36; // rbx
  bool v37; // zf
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v39; // rax
  __int64 v40; // r8
  _DWORD *v41; // r9
  unsigned __int64 v42; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v43; // [rsp+48h] [rbp-8h] BYREF
  int v46; // [rsp+A8h] [rbp+58h] BYREF

  v43 = 0LL;
  v3 = a1;
  if ( !MiLockProtoPoolPage((unsigned __int64)a3, 0LL) )
    return 0LL;
  v5 = 48 * MiGetContainingPageTable((unsigned __int64)a3) - 0x58000000000LL;
  v9 = MiLockLeafPage(a3, 0, v6, v7);
  if ( !v9 )
    goto LABEL_29;
  v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
  v42 = v12;
  if ( (v12 & 1) == 0 )
  {
    if ( (v12 & 0x400) == 0 && (v12 & 0x800) != 0 )
    {
      v13 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL));
      if ( (*(_BYTE *)(v9 + 34) & 0x20) == 0 )
      {
        if ( (unsigned int)MiUnlinkPageFromList(v9, 0) )
        {
          __incgsdword(0x2E98u);
          *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
          v31 = *(_BYTE *)(v9 + 34);
          ++*(_WORD *)(v9 + 32);
          *(_BYTE *)(v9 + 34) = v31 & 0xF8 | 6;
          TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)a3);
          v33 = *(_DWORD *)(v9 + 16);
          v34 = TransitionPteValid;
          v42 = TransitionPteValid;
          if ( (v33 & 0x400) == 0 && (unsigned int)MiIsPteInStore(v13, *(_QWORD *)(v9 + 16)) )
            v43 = MiCaptureDirtyBitToPfn(v9);
          v35 = 0;
          v36 = v34;
          if ( !MiPteInShadowRange((unsigned __int64)a3) )
            goto LABEL_24;
          if ( (unsigned int)MiPteHasShadow() )
          {
            v35 = 1;
            if ( !HIBYTE(word_140C4DF48) )
            {
              v37 = (v34 & 1) == 0;
              goto LABEL_36;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v37 = (v34 & 1) == 0;
LABEL_36:
            if ( !v37 )
              v36 = v34 | 0x8000000000000000uLL;
          }
LABEL_24:
          *a3 = v36;
          if ( v35 )
            MiWritePteShadow((__int64)a3, v36);
          v3 = a1;
          goto LABEL_5;
        }
        MiDiscardTransitionPteEx(v9, 0LL);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_29:
    LOBYTE(v8) = 17;
    MiUnlockProtoPoolPage(v5, v8, v10, v11);
    return 0LL;
  }
  v13 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL));
LABEL_5:
  *(_QWORD *)(v9 + 24) ^= (*(_QWORD *)(v9 + 24) ^ (*(_QWORD *)(v9 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v5, 0x3FFFFFFFFFFFFF11LL, v10, v11);
  if ( v43 )
    MiReleasePageFileInfo(v13, v43, 1);
  v14 = v42;
  v15 = v42;
  if ( MiPteInShadowRange((unsigned __int64)&v42)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v14 & 1) != 0
    && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v14 |= 0x20uLL;
      v39 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v42 >> 3) & 0x1FF));
      if ( (v39 & 0x20) == 0 )
        v14 = v15;
      if ( (v39 & 0x42) != 0 )
        v14 |= 0x42uLL;
    }
    else
    {
      v14 = v42;
    }
  }
  v16 = (v14 >> 12) & 0xFFFFFFFFFLL;
  v17 = 48 * v16 - 0x58000000000LL;
  v43 = *(_QWORD *)(v17 + 16);
  ContainingPageTable = MiGetContainingPageTable(v3);
  v23 = v22 + 48 * ContainingPageTable;
  v46 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v46, v19, v20, v21);
    while ( *(__int64 *)(v23 + 24) < 0 );
  }
  *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v24 = (unsigned __int8)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v43) >> 5;
  v26 = *(_BYTE *)(v17 + 34) >> 6;
  if ( v26 != 1 )
  {
    if ( v26 )
    {
      if ( v26 == 2 )
        v24 |= 0x18u;
    }
    else
    {
      v24 |= 8u;
    }
  }
  ValidPte = MiMakeValidPte(v3, v16, v24, v25);
  if ( (unsigned int)MiAllocateWsle(a2, v3, 48 * v16 - 0x58000000000LL, 0, ValidPte, 0, 0LL) )
    return 1LL;
  MiLockAndDecrementShareCount(48 * v16 - 0x58000000000LL, 0LL, v28, v29);
  MiLockAndDecrementShareCount(v23, 0LL, v40, v41);
  return 0LL;
}
