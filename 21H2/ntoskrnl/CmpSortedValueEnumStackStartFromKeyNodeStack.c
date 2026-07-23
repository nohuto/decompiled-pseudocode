/*
 * XREFs of CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087BA5C
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1404ED0C8 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1405F8E58 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14072A3C0 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x14087B888 (CmpSortedValueEnumStackEntryStart.c)
 *     CmpSortedValueEnumStackGetEntryAtLayerHeight @ 0x14087B9F4 (CmpSortedValueEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpSortedValueEnumStackStartFromKeyNodeStack(
        __int64 a1,
        __int16 *a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  __int16 v4; // bx
  __int16 v7; // di
  PVOID TransientPoolWithTag; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 *EntryAtLayerHeight; // rdi
  __int16 v14; // dx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _LOOKASIDE_LIST_EX *v18; // r9

  v4 = *a2;
  if ( (__int16)(*a2 + 1) > 2 )
  {
    v7 = v4 - 1;
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 32LL * (__int16)(v4 - 1), 0x39374D43u, a4);
    *(_QWORD *)(a1 + 80) = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    if ( v7 > 0 )
    {
      v10 = 0LL;
      v11 = (unsigned __int16)v7;
      do
      {
        v12 = *(_QWORD *)(a1 + 80);
        *(_OWORD *)(v10 + v12) = 0LL;
        *(_OWORD *)(v10 + v12 + 16) = 0LL;
        v10 += 32LL;
        --v11;
      }
      while ( v11 );
    }
  }
  for ( *(_WORD *)(a1 + 8) = v4; v4 >= 0; --v4 )
  {
    EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, v4);
    CmpSortedValueEnumStackGetEntryAtLayerHeight(a1, v14);
    v15 = EntryAtLayerHeight[2];
    if ( v15 )
    {
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, v15) == 1 )
        return 0LL;
      result = CmpSortedValueEnumStackEntryStart((__int64)v18, v17, v16, v18);
      if ( (int)result < 0 )
        return result;
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, EntryAtLayerHeight[2]) )
        return 0LL;
    }
  }
  return 0LL;
}
