/*
 * XREFs of ??0InteractiveControlDevice@@QAE@XZ @ 0x1B16BD
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE299 (-OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

InteractiveControlDevice *__thiscall InteractiveControlDevice::InteractiveControlDevice(InteractiveControlDevice *this)
{
  union _LARGE_INTEGER PerformanceFrequency; // [esp+Ch] [ebp-8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 1;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  *((union _LARGE_INTEGER *)this + 25) = PerformanceFrequency;
  *((_DWORD *)this + 69) = -1;
  *((_WORD *)this + 154) = 5;
  *((_WORD *)this + 155) = 3;
  *((_DWORD *)this + 3) = (char *)this + 8;
  *((_DWORD *)this + 2) = (char *)this + 8;
  *((_DWORD *)this + 68) = 1;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 76) = 0;
  memset((char *)this + 40, 0, 0x9Cu);
  *((_DWORD *)this + 4) = 0;
  return this;
}
