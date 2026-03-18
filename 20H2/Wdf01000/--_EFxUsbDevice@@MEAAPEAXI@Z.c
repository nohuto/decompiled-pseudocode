/*
 * XREFs of ??_EFxUsbDevice@@MEAAPEAXI@Z @ 0x1C006ED30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbDevice@@MEAA@XZ @ 0x1C006EC40 (--1FxUsbDevice@@MEAA@XZ.c)
 */

FxUsbDevice *__fastcall FxUsbDevice::`vector deleting destructor'(FxUsbDevice *this, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  FxUsbDevice *v5; // rcx

  v3 = a2;
  FxUsbDevice::~FxUsbDevice(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxUsbDevice *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree((FX_POOL_TRACKER *)v5);
  }
  return this;
}
