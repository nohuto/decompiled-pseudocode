/*
 * XREFs of MiUnlinkStandbyPfn @ 0x1402B07E0
 * Callers:
 *     MmCopyToCachedPage @ 0x140331500 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x1402185D0 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x140218D60 (MiIsPfnFileOnly.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiDiscardTransitionPteEx @ 0x140388E94 (MiDiscardTransitionPteEx.c)
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
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  v4 = MI_READ_PTE_LOCK_FREE(a1);
  if ( qword_140C4DF40 )
  {
    if ( (v4 & 0x10) != 0 )
      v4 &= ~0x10uLL;
    else
      v4 &= ~qword_140C4DF40;
  }
  v5 = (v4 >> 12) & 0xFFFFFFFFFLL;
  v6 = 48 * v5 - 0x58000000000LL;
  if ( (*(_BYTE *)(v6 + 34) & 0x20) != 0 )
    return 2LL;
  if ( !(unsigned int)MiUnlinkPageFromList(48 * v5 - 0x58000000000LL, 0) )
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
  if ( (a2 & 4) == 0 || !MiIsPfnFileOnly(v6) )
  {
    *(_BYTE *)(v6 + 34) = v9 | 0x10;
    ValidPte |= 0x42uLL;
  }
  v14 = 0;
  if ( (unsigned int)MiPteInShadowRange(a1, v12) )
  {
    if ( (unsigned int)MiPteHasShadow(v16, v15, v17, v18) )
    {
      v14 = 1;
      if ( HIBYTE(word_140C4E008) )
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
  if ( v14 )
    MiWritePteShadow(a1, ValidPte);
  return 0LL;
}
