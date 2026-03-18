/*
 * XREFs of MiTrimSystemImagePages @ 0x14030D320
 * Callers:
 *     MiSetPagingOfDriver @ 0x14030CEC4 (MiSetPagingOfDriver.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiDecrementShareCount @ 0x140290770 (MiDecrementShareCount.c)
 *     MiGetContainingPageTable @ 0x14029C940 (MiGetContainingPageTable.c)
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x1402B1DC0 (MiMakeTransitionPte.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
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
  int v11; // ebx
  unsigned __int64 v12; // rax
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // zf
  __int64 v19; // rbx
  volatile signed __int32 *v20; // rdi
  char v21; // r11
  __int64 ContainingPageTable; // r15
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v27; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp+10h] BYREF
  int v29; // [rsp+70h] [rbp+18h] BYREF

  v29 = a3;
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
    v28 = v6 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFLL)
       - 0x58000000000LL;
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
      v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28);
      TransitionPte = MiMakeTransitionPte((v12 >> 12) & 0xFFFFFFFFFLL, v11);
    }
    v13 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v5) )
    {
      if ( (unsigned int)MiPteHasShadow(v15, v14, v16, v17) )
      {
        v13 = 1;
        if ( !HIBYTE(word_140C4DE88) )
        {
          v18 = (TransitionPte & 1) == 0;
          goto LABEL_15;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v18 = (TransitionPte & 1) == 0;
LABEL_15:
        if ( !v18 )
          TransitionPte |= 0x8000000000000000uLL;
      }
    }
    *v5 = TransitionPte;
    if ( v13 )
      MiWritePteShadow(v5, TransitionPte);
    v19 = 0LL;
    v20 = (volatile signed __int32 *)(v7 + 24);
    v29 = 0;
    while ( _interlockedbittestandset64(v20, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v29, v14, v16, v17);
      while ( *(__int64 *)v20 < 0 );
    }
    *(_BYTE *)(v7 + 35) &= ~8u;
    if ( (v28 & 0x42) != 0 )
      v19 = MiCaptureDirtyBitToPfn(v7);
    if ( (unsigned int)MI_PFN_IS_PROTO(v7) )
      ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v5);
    else
      ContainingPageTable = -1LL;
    *(_BYTE *)(v7 + 35) = v21 & 0xF8 | 2;
    MiDecrementShareCount(v7);
    if ( ContainingPageTable != -1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v20, 0x7FFFFFFFFFFFFFFFuLL);
      v27 = 0;
      v20 = (volatile signed __int32 *)(48 * ContainingPageTable - 0x58000000000LL + 24);
      while ( _interlockedbittestandset64(v20, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v27, v23, v24, v25);
        while ( *(__int64 *)v20 < 0 );
      }
      MiDecrementShareCount(48 * ContainingPageTable - 0x58000000000LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)v20, 0x7FFFFFFFFFFFFFFFuLL);
    if ( v19 )
      MiReleasePageFileInfo(&MiSystemPartition, v19, 1LL);
    ++v3;
    goto LABEL_35;
  }
  return v3;
}
