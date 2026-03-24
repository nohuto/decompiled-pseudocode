/*
 * XREFs of ??_GFxDevice@@UEAAPEAXI@Z @ 0x1C00516E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C0051420 (--1FxDevice@@UEAA@XZ.c)
 */

FxDevice *__fastcall FxDevice::`scalar deleting destructor'(FxDevice *this, char a2)
{
  FxDevice *v4; // rcx

  FxDevice::~FxDevice(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxDevice *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
