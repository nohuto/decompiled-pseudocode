/*
 * XREFs of ??0InkDevice@@QAE@XZ @ 0x1B02CB
 * Callers:
 *     ?OnDeviceAttached@InkProcessor@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1ABE31 (-OnDeviceAttached@InkProcessor@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??0RimBackedDeviceBase@Rim@@IAE@XZ @ 0x1A1414 (--0RimBackedDeviceBase@Rim@@IAE@XZ.c)
 */

InkDevice *__thiscall InkDevice::InkDevice(InkDevice *this)
{
  InkDevice *result; // eax

  Rim::RimBackedDeviceBase::RimBackedDeviceBase(this);
  *((_DWORD *)this + 11) = "InkDevice";
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 9) = (char *)this + 32;
  *((_DWORD *)this + 8) = (char *)this + 32;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 0;
  *(_DWORD *)this = &InkDevice::`vftable'{for `Rim::RimBackedDeviceBase'};
  *((_DWORD *)this + 5) = &InkDevice::`vftable'{for `InkFeedbackProviderBase'};
  memset((char *)this + 56, 0, 0x2Cu);
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  result = this;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 12) = 0;
  return result;
}
