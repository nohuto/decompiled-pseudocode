/*
 * XREFs of MiTrimSystemImagePages @ 0x14023CB80
 * Callers:
 *     MiSetPagingOfDriver @ 0x14025BABC (MiSetPagingOfDriver.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x140339700 (MiMakeTransitionPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiTrimSystemImagePages(__int64 *a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rbp
  __int64 *v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 TransitionPte; // rbx
  unsigned int v11; // ebx
  unsigned __int64 v12; // rax
  int v13; // edi
  bool v14; // zf
  __int64 v15; // rbx
  volatile signed __int32 *v16; // rdi
  char v17; // r11
  __int64 ContainingPageTable; // r15
  int v20; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp+10h] BYREF
  int v22; // [rsp+70h] [rbp+18h] BYREF

  v22 = a3;
  v3 = 0LL;
  v5 = a1;
  if ( (unsigned __int64)a1 <= a2 )
  {
    while ( 1 )
    {
      v6 = MI_READ_PTE_LOCK_FREE(v5);
      if ( (v6 & 1) == 0 && (v6 & 0x400) != 0 )
        break;
LABEL_35:
      if ( (unsigned __int64)++v5 > a2 )
        return v3;
    }
    v21 = v6 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v21) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (unsigned int)MI_PFN_IS_PROTO(v7) )
    {
      v8 = MiSwizzleInvalidPte((*(_QWORD *)(v7 + 8) << 16) | 0x400LL);
      TransitionPte = v8;
      if ( (*(_QWORD *)(v7 + 40) & 0x1000000000LL) == 0 && v9 > 0 )
        TransitionPte = v8 | 0x800;
    }
    else
    {
      v11 = (*(_DWORD *)(v7 + 16) >> 5) & 0x1F;
      v12 = MI_READ_PTE_LOCK_FREE(&v21);
      TransitionPte = MiMakeTransitionPte((v12 >> 12) & 0xFFFFFFFFFLL, v11);
    }
    v13 = 0;
    if ( (unsigned int)MiPteInShadowRange(v5) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v13 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v14 = (TransitionPte & 1) == 0;
          goto LABEL_15;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v14 = (TransitionPte & 1) == 0;
LABEL_15:
        if ( !v14 )
          TransitionPte |= 0x8000000000000000uLL;
      }
    }
    *v5 = TransitionPte;
    if ( v13 )
      MiWritePteShadow((__int64)v5, TransitionPte);
    v15 = 0LL;
    v16 = (volatile signed __int32 *)(v7 + 24);
    v22 = 0;
    while ( _interlockedbittestandset64(v16, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v22);
      while ( *(__int64 *)v16 < 0 );
    }
    *(_BYTE *)(v7 + 35) &= ~8u;
    if ( (v21 & 0x42) != 0 )
      v15 = MiCaptureDirtyBitToPfn(v7);
    if ( (unsigned int)MI_PFN_IS_PROTO(v7) )
      ContainingPageTable = MiGetContainingPageTable(v5);
    else
      ContainingPageTable = -1LL;
    *(_BYTE *)(v7 + 35) = v17 & 0xF8 | 2;
    MiDecrementShareCount(v7);
    if ( ContainingPageTable != -1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
      v20 = 0;
      v16 = (volatile signed __int32 *)(48 * ContainingPageTable - 0x58000000000LL + 24);
      while ( _interlockedbittestandset64(v16, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v20);
        while ( *(__int64 *)v16 < 0 );
      }
      MiDecrementShareCount(48 * ContainingPageTable - 0x58000000000LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
    if ( v15 )
      MiReleasePageFileInfo(&MiSystemPartition, v15, 1LL);
    ++v3;
    goto LABEL_35;
  }
  return v3;
}
