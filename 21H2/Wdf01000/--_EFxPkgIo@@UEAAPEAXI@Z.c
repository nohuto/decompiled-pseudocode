/*
 * XREFs of ??_EFxPkgIo@@UEAAPEAXI@Z @ 0x1C00339A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x1C00339E0 (--1FxPkgIo@@UEAA@XZ.c)
 */

FxPkgIo *__fastcall FxPkgIo::`vector deleting destructor'(FxPkgIo *this, char a2)
{
  FxPkgIo *v4; // rcx

  FxPkgIo::~FxPkgIo(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxPkgIo *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
