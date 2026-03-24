/*
 * XREFs of MiTrimSystemImagePages @ 0x1402BE540
 * Callers:
 *     MiSetPagingOfDriver @ 0x14026DB1C (MiSetPagingOfDriver.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x14023E450 (MiGetContainingPageTable.c)
 *     MiDecrementShareCount @ 0x1402401C0 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x14030FB10 (MiCaptureDirtyBitToPfn.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x14032E9B0 (MiMakeTransitionPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiTrimSystemImagePages(__int64 *a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rbp
  __int64 *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 TransitionPte; // rbx
  unsigned int v11; // ebx
  unsigned __int64 v12; // rax
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // zf
  unsigned __int64 v18; // rbx
  volatile signed __int32 *v19; // rdi
  char v20; // r11
  __int64 ContainingPageTable; // r15
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v26; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp+10h] BYREF
  int v28; // [rsp+70h] [rbp+18h] BYREF

  v28 = a3;
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
    v27 = v6 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v27) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
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
      v12 = MI_READ_PTE_LOCK_FREE(&v27);
      TransitionPte = MiMakeTransitionPte((v12 >> 12) & 0xFFFFFFFFFLL, v11);
    }
    v13 = 0;
    if ( (unsigned int)MiPteInShadowRange(v5, v9) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v13 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v17 = (TransitionPte & 1) == 0;
          goto LABEL_15;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v17 = (TransitionPte & 1) == 0;
LABEL_15:
        if ( !v17 )
          TransitionPte |= 0x8000000000000000uLL;
      }
    }
    *v5 = TransitionPte;
    if ( v13 )
      MiWritePteShadow((__int64)v5, TransitionPte, v15);
    v18 = 0LL;
    v19 = (volatile signed __int32 *)(v7 + 24);
    v28 = 0;
    while ( _interlockedbittestandset64(v19, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v28, v14, v15, v16);
      while ( *(__int64 *)v19 < 0 );
    }
    *(_BYTE *)(v7 + 35) &= ~8u;
    if ( (v27 & 0x42) != 0 )
      v18 = MiCaptureDirtyBitToPfn(v7);
    if ( (unsigned int)MI_PFN_IS_PROTO(v7) )
      ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v5);
    else
      ContainingPageTable = -1LL;
    *(_BYTE *)(v7 + 35) = v20 & 0xF8 | 2;
    MiDecrementShareCount(v7);
    if ( ContainingPageTable != -1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v19, 0x7FFFFFFFFFFFFFFFuLL);
      v26 = 0;
      v19 = (volatile signed __int32 *)(48 * ContainingPageTable - 0x58000000000LL + 24);
      while ( _interlockedbittestandset64(v19, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v26, v22, v23, v24);
        while ( *(__int64 *)v19 < 0 );
      }
      MiDecrementShareCount(48 * ContainingPageTable - 0x58000000000LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)v19, 0x7FFFFFFFFFFFFFFFuLL);
    if ( v18 )
      MiReleasePageFileInfo((__int64)&MiSystemPartition, v18, 1);
    ++v3;
    goto LABEL_35;
  }
  return v3;
}
