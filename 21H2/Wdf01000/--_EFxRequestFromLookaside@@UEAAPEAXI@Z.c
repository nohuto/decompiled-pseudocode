/*
 * XREFs of ??_EFxRequestFromLookaside@@UEAAPEAXI@Z @ 0x1C0005F60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C00070E0 (--1FxRequestBase@@MEAA@XZ.c)
 */

FxRequestBase *__fastcall FxRequestFromLookaside::`vector deleting destructor'(FxRequestBase *this, char a2)
{
  FxRequestBase *v4; // rcx

  FxRequestBase::~FxRequestBase(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxRequestBase *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
