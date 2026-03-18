/*
 * XREFs of ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C0021C84
 * Callers:
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C0021C50 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C002D190 (imp_WdfRegistryQueryMultiString.c)
 * Callees:
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0014B44 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C0021CB4 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
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
