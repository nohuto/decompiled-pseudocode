/*
 * XREFs of ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C0061914
 * Callers:
 *     imp_WdfRegistryQueryMultiString @ 0x1C005E480 (imp_WdfRegistryQueryMultiString.c)
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C00618B0 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 * Callees:
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C00618E4 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C0061944 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 */

int __fastcall FxCollectionInternal::Remove(FxCollectionInternal *this, unsigned int Index)
{
  _LIST_ENTRY **Entry; // rax
  FxCollectionInternal *v3; // r9

  Entry = FxCollectionInternal::FindEntry(this, Index);
  if ( Entry )
    return FxCollectionInternal::RemoveEntry(v3, (FxCollectionEntry *)Entry);
  else
    return -1073741275;
}
