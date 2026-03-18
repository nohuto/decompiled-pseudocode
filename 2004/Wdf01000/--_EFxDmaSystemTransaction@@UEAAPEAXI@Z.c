/*
 * XREFs of ??_EFxDmaSystemTransaction@@UEAAPEAXI@Z @ 0x1C0031730
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00142D0 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxPackage *__fastcall FxDmaSystemTransaction::`vector deleting destructor'(
        FxPackage *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxPackage *v5; // rcx

  v3 = a2;
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxPackage *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree((FX_POOL_TRACKER *)v5);
  }
  return this;
}
