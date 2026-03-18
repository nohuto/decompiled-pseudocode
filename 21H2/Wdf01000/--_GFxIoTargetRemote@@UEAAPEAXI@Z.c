/*
 * XREFs of ??_GFxIoTargetRemote@@UEAAPEAXI@Z @ 0x1C0034720
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0006180 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxIoTargetRemote *__fastcall FxIoTargetRemote::`scalar deleting destructor'(FxIoTargetRemote *this, unsigned int a2)
{
  char v2; // bl
  FX_POOL_TRACKER *p_ShareAccess; // rcx

  v2 = a2;
  this->__vftable = (FxIoTargetRemote_vtbl *)FxIoTarget::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this, a2);
  if ( (v2 & 1) != 0 )
  {
    p_ShareAccess = (FX_POOL_TRACKER *)&this[-1].m_OpenParams.ShareAccess;
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      p_ShareAccess = (FX_POOL_TRACKER *)this;
    FxPoolFree(p_ShareAccess);
  }
  return this;
}
