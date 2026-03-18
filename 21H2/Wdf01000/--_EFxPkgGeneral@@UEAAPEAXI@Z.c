/*
 * XREFs of ??_EFxPkgGeneral@@UEAAPEAXI@Z @ 0x1C0033B10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxPkgGeneral@@UEAA@XZ @ 0x1C0033B50 (--1FxPkgGeneral@@UEAA@XZ.c)
 */

FxPkgGeneral *__fastcall FxPkgGeneral::`vector deleting destructor'(FxPkgGeneral *this, char a2)
{
  FxPkgGeneral *v4; // rcx

  FxPkgGeneral::~FxPkgGeneral(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxPkgGeneral *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
