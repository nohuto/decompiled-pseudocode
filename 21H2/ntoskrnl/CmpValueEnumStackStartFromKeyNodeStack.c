/*
 * XREFs of CmpValueEnumStackStartFromKeyNodeStack @ 0x140200068
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1402260D0 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14065AAAC (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140921F64 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpValueEnumStackEntryInitialize @ 0x1402264A8 (CmpValueEnumStackEntryInitialize.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14069F434 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14069F45C (CmpGetEffectiveKeyNodeSemantics.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKeyNodeStack(__int64 a1, __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  PVOID PoolWithTag; // rax
  __int64 v7; // rsi
  __int16 v8; // di
  __int64 EntryAtLayerHeight; // r15
  ULONG_PTR *v10; // rax
  ULONG_PTR *v11; // rsi
  __int64 v12; // rdx
  ULONG_PTR v13; // rcx
  ULONG_PTR v14; // r9
  ULONG_PTR v15; // rdx
  __int64 CellFlat; // rax

  v2 = 0;
  if ( *a2 >= 2 )
  {
    LOWORD(v5) = *a2 - 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * (__int16)v5, 0x30374D43u);
    *(_QWORD *)(a1 + 80) = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v7 = 0LL;
    v5 = (unsigned __int16)v5;
    do
    {
      CmpValueEnumStackEntryInitialize(v7 + *(_QWORD *)(a1 + 80));
      v7 += 32LL;
      --v5;
    }
    while ( v5 );
  }
  v8 = *a2;
  for ( *(_WORD *)(a1 + 12) = *a2; v8 >= 0; --v8 )
  {
    EntryAtLayerHeight = CmpValueEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)v8);
    v10 = (ULONG_PTR *)CmpKeyNodeStackGetEntryAtLayerHeight(a2);
    v11 = v10;
    if ( v10[2] )
    {
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v10) == 1 )
        break;
      v14 = v13;
      if ( (*(_BYTE *)(v12 + 2) & 0x40) == 0 && *(_DWORD *)(v12 + 36) )
      {
        *(_QWORD *)EntryAtLayerHeight = v13;
        *(_DWORD *)(EntryAtLayerHeight + 24) = *(_DWORD *)(v12 + 36);
        v15 = *(unsigned int *)(v12 + 40);
        if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v13, v15);
        else
          CellFlat = HvpGetCellPaged(v13);
        *(_QWORD *)(EntryAtLayerHeight + 8) = CellFlat;
        v14 = *v11;
      }
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v14) )
        break;
    }
  }
  return v2;
}
