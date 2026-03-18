/*
 * XREFs of ??1InkDevice@@UAE@XZ @ 0x1B0320
 * Callers:
 *     ??_EInkDevice@@UAEPAXI@Z @ 0x1ABDB7 (--_EInkDevice@@UAEPAXI@Z.c)
 *     ?OnDeviceAttached@InkProcessor@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1ABE31 (-OnDeviceAttached@InkProcessor@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AAEXPAPAVInkDevice@@@Z @ 0x1AC42E (-UnlinkAndReleaseInkDevice@InkProcessor@@AAEXPAPAVInkDevice@@@Z.c)
 * Callees:
 *     ?UnInitialize@InkDevice@@UAEXXZ @ 0x1B12FF (-UnInitialize@InkDevice@@UAEXXZ.c)
 */

void __thiscall InkDevice::~InkDevice(InkDevice *this)
{
  *(_DWORD *)this = &InkDevice::`vftable'{for `Rim::RimBackedDeviceBase'};
  *((_DWORD *)this + 5) = &InkDevice::`vftable'{for `InkFeedbackProviderBase'};
  InkDevice::UnInitialize(this);
  *((_DWORD *)this + 5) = &InkFeedbackProviderBase::`vftable';
  *(_DWORD *)this = &Rim::RimBackedDeviceBase::`vftable';
  Rim::RimBackedDeviceBase::UnInitialize(this);
}
