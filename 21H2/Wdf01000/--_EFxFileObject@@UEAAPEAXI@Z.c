/*
 * XREFs of ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0003BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0006180 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxFileObject *__fastcall FxFileObject::`vector deleting destructor'(FxFileObject *this, char a2)
{
  FxFileObject *v4; // rcx

  this->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)FxFileObject::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxFileObject::`vftable'{for `IFxHasCallbacks'};
  FxNonPagedObject::~FxNonPagedObject(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxFileObject *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}
