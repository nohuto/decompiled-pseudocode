/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0001258
 * Callers:
 *     DeviceCreate @ 0x1C0001C90 (DeviceCreate.c)
 *     DeviceRemove @ 0x1C0001FE0 (DeviceRemove.c)
 *     USBCaptureProcessPin @ 0x1C00073F0 (USBCaptureProcessPin.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D28C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     DeviceStart @ 0x1C00228C0 (DeviceStart.c)
 *     DeviceStop @ 0x1C0022F80 (DeviceStop.c)
 *     DeviceSurpriseRemoval @ 0x1C0023180 (DeviceSurpriseRemoval.c)
 *     PinCreate @ 0x1C0024500 (PinCreate.c)
 *     PinClose @ 0x1C0024920 (PinClose.c)
 *     PinProcess @ 0x1C00249C0 (PinProcess.c)
 *     USBType1RenderCreatePin @ 0x1C0033B20 (USBType1RenderCreatePin.c)
 *     USBType1RenderClosePin @ 0x1C0033D10 (USBType1RenderClosePin.c)
 *     USBType1SurpriseRemove @ 0x1C0033DC0 (USBType1SurpriseRemove.c)
 *     USBCaptureCreatePin @ 0x1C0034090 (USBCaptureCreatePin.c)
 *     USBCaptureClosePin @ 0x1C0034430 (USBCaptureClosePin.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012E90 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 0LL, a3, a5, v11, va);
}
