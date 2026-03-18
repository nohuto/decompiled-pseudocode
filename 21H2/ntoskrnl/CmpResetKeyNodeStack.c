/*
 * XREFs of CmpResetKeyNodeStack @ 0x14065BCB0
 * Callers:
 *     CmpKeyEnumStackReset @ 0x14065BC50 (CmpKeyEnumStackReset.c)
 *     CmpSubtreeEnumeratorReset @ 0x14091D284 (CmpSubtreeEnumeratorReset.c)
 * Callees:
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 */

void __fastcall CmpResetKeyNodeStack(__int16 *a1)
{
  __int16 i; // di
  _QWORD *EntryAtLayerHeight; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  for ( i = 0; i <= *a1; ++i )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1);
    v4 = EntryAtLayerHeight;
    if ( EntryAtLayerHeight[2] )
    {
      v5 = *EntryAtLayerHeight;
      v6 = EntryAtLayerHeight + 3;
      if ( (*(_BYTE *)(*EntryAtLayerHeight + 140LL) & 1) != 0 )
        HvpReleaseCellFlat(v5, v6);
      else
        HvpReleaseCellPaged(v5, v6);
    }
    *(_OWORD *)v4 = 0LL;
    *((_OWORD *)v4 + 1) = 0LL;
    *((_DWORD *)v4 + 2) = -1;
    HvpGetCellContextReinitialize(v4 + 3);
  }
}
