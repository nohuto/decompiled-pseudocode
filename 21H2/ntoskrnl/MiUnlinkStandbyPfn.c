/*
 * XREFs of MiUnlinkStandbyPfn @ 0x14022EB40
 * Callers:
 *     MmCopyToCachedPage @ 0x14033C250 (MmCopyToCachedPage.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiDiscardTransitionPteEx @ 0x140388FE4 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiUnlinkStandbyPfn(__int64 *a1, char a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdi
  char v7; // al
  unsigned __int8 v8; // al
  unsigned __int8 v9; // bp
  int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 ValidPte; // rbx
  __int64 v14; // r8
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx

  v4 = MI_READ_PTE_LOCK_FREE(a1);
  if ( qword_140C4DF80 )
  {
    if ( (v4 & 0x10) != 0 )
      v4 &= ~0x10uLL;
    else
      v4 &= ~qword_140C4DF80;
  }
  v5 = (v4 >> 12) & 0xFFFFFFFFFLL;
  v6 = 48 * v5 - 0x58000000000LL;
  if ( (*(_BYTE *)(v6 + 34) & 0x20) != 0 )
    return 2LL;
  if ( !(unsigned int)MiUnlinkPageFromList(48 * v5 - 0x58000000000LL) )
  {
    MiDiscardTransitionPteEx(48 * v5 - 0x58000000000LL, 0LL);
    return 1LL;
  }
  v7 = *(_BYTE *)(v6 + 34);
  ++*(_WORD *)(v6 + 32);
  *(_BYTE *)(v6 + 34) = v7 & 0xF8 | 6;
  *(_QWORD *)(v6 + 24) = *(_QWORD *)(v6 + 24) & 0xC000000000000000uLL | 1;
  if ( (a2 & 2) != 0 && (unsigned int)MiGetPfnPriority(48 * v5 - 0x58000000000LL) > 2 )
    *(_BYTE *)(v6 + 35) = *(_BYTE *)(v6 + 35) & 0xF8 | 2;
  v8 = MI_READ_PTE_LOCK_FREE(v6 + 16);
  v9 = *(_BYTE *)(v6 + 34);
  v10 = v9 >> 6;
  v11 = v8 >> 5;
  if ( v10 )
  {
    if ( v10 == 2 )
      v11 |= 0x18u;
  }
  else
  {
    v11 |= 8u;
  }
  ValidPte = MiMakeValidPte(0LL, v5, v11);
  if ( (a2 & 4) == 0 || !(unsigned int)MiIsPfnFileOnly(v6, v12, v14) )
  {
    *(_BYTE *)(v6 + 34) = v9 | 0x10;
    ValidPte |= 0x42uLL;
  }
  v15 = 0;
  if ( (unsigned int)MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow(v17, v16) )
    {
      v15 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_13;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_13;
    }
    if ( (ValidPte & 1) != 0 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_13:
  *a1 = ValidPte;
  if ( v15 )
    MiWritePteShadow(a1);
  return 0LL;
}
