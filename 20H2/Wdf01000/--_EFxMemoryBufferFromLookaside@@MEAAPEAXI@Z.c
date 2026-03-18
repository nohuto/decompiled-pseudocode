/*
 * XREFs of ??_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z @ 0x1C0054110
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C00079A0 (--1FxObject@@UEAA@XZ.c)
 */

FxMemoryBufferFromPoolLookaside *__fastcall FxMemoryBufferFromLookaside::`vector deleting destructor'(
        FxMemoryBufferFromPoolLookaside *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxMemoryBufferFromPoolLookaside *v5; // rcx

  v3 = a2;
  this->FxMemoryBufferFromLookaside::FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromPoolLookaside_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `FxObject'};
  this->FxMemoryBufferFromLookaside::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxMemoryBufferFromPoolLookaside *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree((FX_POOL_TRACKER *)v5);
  }
  return this;
}
