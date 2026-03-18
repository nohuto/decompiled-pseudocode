/*
 * XREFs of ??_EFxUsbDevice@@MEAAPEAXI@Z @ 0x1C007BE90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbDevice@@MEAA@XZ @ 0x1C007BD80 (--1FxUsbDevice@@MEAA@XZ.c)
 */

FxUsbDevice *__fastcall FxUsbDevice::`vector deleting destructor'(FxUsbDevice *this, unsigned int a2)
{
  char v2; // bl
  FxUsbDevice *v4; // rcx

  v2 = a2;
  FxUsbDevice::~FxUsbDevice(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxUsbDevice *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
