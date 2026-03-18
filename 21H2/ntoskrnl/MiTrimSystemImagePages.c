/*
 * XREFs of MiTrimSystemImagePages @ 0x1402D92AC
 * Callers:
 *     MiSetPagingOfDriver @ 0x1402D8F30 (MiSetPagingOfDriver.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiMakeTransitionPte @ 0x1402E4D28 (MiMakeTransitionPte.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetContainingPageTable @ 0x14033AC10 (MiGetContainingPageTable.c)
 *     MiCaptureDirtyBitToPfn @ 0x14033C2A0 (MiCaptureDirtyBitToPfn.c)
 */

__int64 __fastcall MiTrimSystemImagePages(__int64 *a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r12
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v8; // rbp
  unsigned int v9; // ebx
  unsigned __int64 v10; // rax
  __int64 TransitionPte; // rbx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  volatile signed __int32 *v17; // rdi
  char v18; // r14
  __int64 ContainingPageTable; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  bool v26; // zf
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
      v6 = MI_READ_PTE_LOCK_FREE(v5);
      if ( (v6 & 1) == 0 && (v6 & 0x400) != 0 )
        break;
LABEL_3:
      if ( (unsigned __int64)++v5 > a2 )
        return v3;
    }
    v28 = v6 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v28) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( *(__int64 *)(v8 + 40) < 0 )
    {
      TransitionPte = MiSwizzleInvalidPte((*(_QWORD *)(v8 + 8) << 16) | 0x400LL);
      if ( v23 >= 0 && (v24 & 0x10000000000LL) == 0 && v23 )
        TransitionPte |= 0x800uLL;
    }
    else
    {
      v9 = (*(_DWORD *)(v8 + 16) >> 5) & 0x1F;
      v10 = MI_READ_PTE_LOCK_FREE(&v28);
      TransitionPte = MiMakeTransitionPte((v10 >> 12) & 0xFFFFFFFFFFLL, v9);
    }
    v12 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v5) )
    {
LABEL_9:
      *v5 = TransitionPte;
      if ( v12 )
        MiWritePteShadow((__int64)v5, TransitionPte);
      v16 = 0LL;
      v17 = (volatile signed __int32 *)(v8 + 24);
      v29 = 0;
      while ( _interlockedbittestandset64(v17, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v29);
        while ( *(__int64 *)v17 < 0 );
      }
      *(_BYTE *)(v8 + 35) &= ~8u;
      v18 = *(_BYTE *)(v8 + 35);
      if ( (v28 & 0x42) != 0 )
      {
        v25 = MiCaptureDirtyBitToPfn(v8);
        v18 = *(_BYTE *)(v8 + 35);
        v16 = v25;
      }
      if ( *(__int64 *)(v8 + 40) < 0 )
        ContainingPageTable = MiGetContainingPageTable(v5);
      else
        ContainingPageTable = -1LL;
      *(_BYTE *)(v8 + 35) = v18 & 0xF8 | 2;
      MiDecrementShareCount(v8, v13, v14, v15);
      if ( ContainingPageTable != -1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
        v27 = 0;
        v17 = (volatile signed __int32 *)(48 * ContainingPageTable - 0x220000000000LL + 24);
        while ( _interlockedbittestandset64(v17, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v27);
          while ( *(__int64 *)v17 < 0 );
        }
        MiDecrementShareCount(48 * ContainingPageTable - 0x220000000000LL, v20, v21, v22);
      }
      _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
      if ( v16 )
        MiReleasePageFileInfo(&MiSystemPartition, v16, 1LL);
      ++v3;
      goto LABEL_3;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v12 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_9;
      v26 = (TransitionPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v26 = (TransitionPte & 1) == 0;
    }
    if ( !v26 )
      TransitionPte |= 0x8000000000000000uLL;
    goto LABEL_9;
  }
  return v3;
}
