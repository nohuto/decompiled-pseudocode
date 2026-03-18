/*
 * XREFs of ??1FxCollection@@UEAA@XZ @ 0x1C0021F48
 * Callers:
 *     ??_EFxIoResList@@UEAAPEAXI@Z @ 0x1C001F2C0 (--_EFxIoResList@@UEAAPEAXI@Z.c)
 *     ??_GFxCmResList@@MEAAPEAXI@Z @ 0x1C0020CC0 (--_GFxCmResList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0006180 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C0021C50 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 */

void __fastcall FxCollection::~FxCollection(FxCollection *this)
{
  unsigned int v2; // edx

  this->__vftable = (FxCollection_vtbl *)FxIoResList::`vftable';
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxNonPagedObject::~FxNonPagedObject(this, v2);
}
