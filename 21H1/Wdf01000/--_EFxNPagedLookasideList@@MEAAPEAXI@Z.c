/*
 * XREFs of ??_EFxNPagedLookasideList@@MEAAPEAXI@Z @ 0x1C0054500
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C00079A0 (--1FxObject@@UEAA@XZ.c)
 */

FxNPagedLookasideList *__fastcall FxNPagedLookasideList::`vector deleting destructor'(
        FxNPagedLookasideList *this,
        char a2,
        unsigned int a3)
{
  bool v3; // zf
  FX_POOL_TRACKER *p_LastTotalAllocates; // rcx

  v3 = this->m_MemoryObjectSize == 0;
  this->__vftable = (FxNPagedLookasideList_vtbl *)FxNPagedLookasideList::`vftable';
  if ( !v3 )
    ExDeleteNPagedLookasideList(&this->m_ObjectLookaside);
  this->__vftable = (FxNPagedLookasideList_vtbl *)FxLookasideList::`vftable';
  FxObject::~FxObject(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    p_LastTotalAllocates = (FX_POOL_TRACKER *)&this[-1].m_ObjectLookaside.L.LastTotalAllocates;
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      p_LastTotalAllocates = (FX_POOL_TRACKER *)this;
    FxPoolFree(p_LastTotalAllocates);
  }
  return this;
}
