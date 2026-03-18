/*
 * XREFs of ??_EFxWmiProvider@@UEAAPEAXI@Z @ 0x1C003DFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00142D0 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxWmiProvider *__fastcall FxWmiProvider::`vector deleting destructor'(
        FxWmiProvider *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxWmiProvider *v5; // rcx

  v3 = a2;
  this->__vftable = (FxWmiProvider_vtbl *)FxWmiProvider::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxWmiProvider *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree((FX_POOL_TRACKER *)v5);
  }
  return this;
}
