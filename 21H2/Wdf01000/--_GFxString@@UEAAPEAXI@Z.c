/*
 * XREFs of ??_GFxString@@UEAAPEAXI@Z @ 0x1C00274F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxString@@UEAA@XZ @ 0x1C0027530 (--1FxString@@UEAA@XZ.c)
 */

FxString *__fastcall FxString::`scalar deleting destructor'(FxString *this, char a2)
{
  FxString *v4; // rcx

  FxString::~FxString(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxString *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
