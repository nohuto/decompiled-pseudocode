/*
 * XREFs of MiTrimSystemImagePages @ 0x1403251CC
 * Callers:
 *     MiSetPagingOfDriver @ 0x140324D70 (MiSetPagingOfDriver.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     MiGetContainingPageTable @ 0x140227150 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiMakeTransitionPte @ 0x14028D2E0 (MiMakeTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiTrimSystemImagePages(__int64 *a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rbp
  __int64 *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 TransitionPte; // rbx
  int v13; // ebx
  unsigned __int64 v14; // rax
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // zf
  __int64 v20; // rbx
  volatile signed __int32 *v21; // rdi
  char v22; // r11
  __int64 ContainingPageTable; // r15
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v28; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp+10h] BYREF
  int v30; // [rsp+70h] [rbp+18h] BYREF

  v30 = a3;
  v3 = 0LL;
  v5 = a1;
  if ( (unsigned __int64)a1 <= a2 )
  {
    while ( 1 )
    {
      v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
      if ( (v6 & 1) == 0 && (v6 & 0x400) != 0 )
        break;
LABEL_35:
      if ( (unsigned __int64)++v5 > a2 )
        return v3;
    }
    v29 = v6 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29) >> 12) & 0xFFFFFFFFFLL)
       - 0x58000000000LL;
    if ( (unsigned int)MI_PFN_IS_PROTO(v7, v8, v9) )
    {
      v10 = MiSwizzleInvalidPte((*(_QWORD *)(v7 + 8) << 16) | 0x400LL);
      TransitionPte = v10;
      if ( (*(_QWORD *)(v7 + 40) & 0x1000000000LL) == 0 && v11 > 0 )
        TransitionPte = v10 | 0x800;
    }
    else
    {
      v13 = (*(_DWORD *)(v7 + 16) >> 5) & 0x1F;
      v14 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29);
      TransitionPte = MiMakeTransitionPte((v14 >> 12) & 0xFFFFFFFFFLL, v13);
    }
    v15 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v5) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v15 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v19 = (TransitionPte & 1) == 0;
          goto LABEL_15;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v19 = (TransitionPte & 1) == 0;
LABEL_15:
        if ( !v19 )
          TransitionPte |= 0x8000000000000000uLL;
      }
    }
    *v5 = TransitionPte;
    if ( v15 )
      MiWritePteShadow((__int64)v5, TransitionPte);
    v20 = 0LL;
    v21 = (volatile signed __int32 *)(v7 + 24);
    v30 = 0;
    while ( _interlockedbittestandset64(v21, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v30, v16, v17, v18);
      while ( *(__int64 *)v21 < 0 );
    }
    *(_BYTE *)(v7 + 35) &= ~8u;
    if ( (v29 & 0x42) != 0 )
      v20 = MiCaptureDirtyBitToPfn(v7);
    if ( (unsigned int)MI_PFN_IS_PROTO(v7, v16, v17) )
      ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v5);
    else
      ContainingPageTable = -1LL;
    *(_BYTE *)(v7 + 35) = v22 & 0xF8 | 2;
    MiDecrementShareCount(v7);
    if ( ContainingPageTable != -1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v21, 0x7FFFFFFFFFFFFFFFuLL);
      v28 = 0;
      v21 = (volatile signed __int32 *)(48 * ContainingPageTable - 0x58000000000LL + 24);
      while ( _interlockedbittestandset64(v21, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v28, v24, v25, v26);
        while ( *(__int64 *)v21 < 0 );
      }
      MiDecrementShareCount(48 * ContainingPageTable - 0x58000000000LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)v21, 0x7FFFFFFFFFFFFFFFuLL);
    if ( v20 )
      MiReleasePageFileInfo(&MiSystemPartition, v20, 1LL);
    ++v3;
    goto LABEL_35;
  }
  return v3;
}
