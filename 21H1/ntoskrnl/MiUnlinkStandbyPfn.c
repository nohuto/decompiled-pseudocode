/*
 * XREFs of MiUnlinkStandbyPfn @ 0x140300770
 * Callers:
 *     MmCopyToCachedPage @ 0x14027CC60 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x1402186F0 (MiIsPfnFileOnly.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiDiscardTransitionPteEx @ 0x140385624 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiUnlinkStandbyPfn(unsigned __int64 *a1, char a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdi
  char v7; // al
  unsigned __int8 v8; // al
  __int64 v9; // r9
  unsigned __int8 v10; // bp
  int v11; // ecx
  unsigned int v12; // eax
  unsigned __int64 ValidPte; // rbx
  int v14; // edi

  v4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  if ( qword_140C4DE80 )
  {
    if ( (v4 & 0x10) != 0 )
      v4 &= ~0x10uLL;
    else
      v4 &= ~qword_140C4DE80;
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
  v10 = *(_BYTE *)(v6 + 34);
  v11 = v10 >> 6;
  v12 = v8 >> 5;
  if ( v11 )
  {
    if ( v11 == 2 )
      v12 |= 0x18u;
  }
  else
  {
    v12 |= 8u;
  }
  ValidPte = MiMakeValidPte(0LL, v5, v12, v9);
  if ( (a2 & 4) == 0 || !MiIsPfnFileOnly(v6) )
  {
    *(_BYTE *)(v6 + 34) = v10 | 0x10;
    ValidPte |= 0x42uLL;
  }
  v14 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_140C4DF48) )
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
    MiWritePteShadow((__int64)a1, ValidPte);
  return 0LL;
}
