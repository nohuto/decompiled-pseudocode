/*
 * XREFs of ??_GFxSystemWorkItem@@UEAAPEAXI@Z @ 0x1C0055E50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C0055DD0 (--1FxSystemWorkItem@@UEAA@XZ.c)
 */

FxSystemWorkItem *__fastcall FxSystemWorkItem::`scalar deleting destructor'(
        FxSystemWorkItem *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxSystemWorkItem *v5; // rcx

  v3 = a2;
  FxSystemWorkItem::~FxSystemWorkItem(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxSystemWorkItem *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree((FX_POOL_TRACKER *)v5);
  }
  return this;
}
