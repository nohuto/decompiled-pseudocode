/*
 * XREFs of WPP_RECORDER_SF_ddd @ 0x1C0009688
 * Callers:
 *     ValidateAcpiCStates @ 0x1C002996C (ValidateAcpiCStates.c)
 *     ValidateAcpiIdleDomain @ 0x1C0029B08 (ValidateAcpiIdleDomain.c)
 *     ValidateAcpiThrottleStates @ 0x1C0029CB4 (ValidateAcpiThrottleStates.c)
 *     ValidateCoordinatedDependencyOptionsPlatform @ 0x1C002A188 (ValidateCoordinatedDependencyOptionsPlatform.c)
 *     ValidateCoordinatedDependencyOptionsProcessor @ 0x1C002A2DC (ValidateCoordinatedDependencyOptionsProcessor.c)
 *     ValidatePepPerformanceSymmetry @ 0x1C002AC9C (ValidatePepPerformanceSymmetry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_ddd(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v11; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_ba3a613378173fc61268b8e1c1c8ad8d_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      va2,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_ba3a613378173fc61268b8e1c1c8ad8d_Traceguids, v8, (__int64 *)va);
}
