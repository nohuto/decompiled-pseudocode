/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C00014A8
 * Callers:
 *     DeviceCreate @ 0x1C0001C90 (DeviceCreate.c)
 *     USBType1StateChangePin @ 0x1C00067C0 (USBType1StateChangePin.c)
 *     USBType1ChangePowerState @ 0x1C0006B50 (USBType1ChangePowerState.c)
 *     USBCaptureResetWorker @ 0x1C0006E30 (USBCaptureResetWorker.c)
 *     USBCaptureStateChangePin @ 0x1C0007630 (USBCaptureStateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C0007BE0 (USBCaptureChangePowerState.c)
 *     DeviceStart @ 0x1C00228C0 (DeviceStart.c)
 *     DeviceStop @ 0x1C0022F80 (DeviceStop.c)
 *     PinGoToLowPowerState @ 0x1C0024300 (PinGoToLowPowerState.c)
 *     PinGoToFullPowerState @ 0x1C0024400 (PinGoToFullPowerState.c)
 *     PinCreate @ 0x1C0024500 (PinCreate.c)
 *     PinSetDataFormat @ 0x1C0024A90 (PinSetDataFormat.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C002D9FC (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C002DF1C (USBHwSelectStreamingAudioInterface.c)
 *     USBHwDataPipeReset @ 0x1C002EB44 (USBHwDataPipeReset.c)
 *     USBType1RenderCreatePin @ 0x1C0033B20 (USBType1RenderCreatePin.c)
 *     USBCaptureStartTransfers @ 0x1C0033F84 (USBCaptureStartTransfers.c)
 *     USBCaptureCreatePin @ 0x1C0034090 (USBCaptureCreatePin.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012E90 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qd(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v12 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 0LL, a3, a5, v11, (__int64 *)va);
}
