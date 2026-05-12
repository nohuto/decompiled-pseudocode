/*
 * XREFs of WPP_SF_qqDD @ 0x1C0032180
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0007DD0 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C000B8F8 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C000C248 (RaidAdapterDeviceControlIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C000EEA8 (RaidAdapterPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C000EF78 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C000F05C (RaidUnitSetPowerIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C0013AB4 (RaidAdapterPnpIrp.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C002BF00 (RaidAdapterMiniportProcessServiceRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qqDD(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  __int64 v6; // [rsp+A0h] [rbp+28h] BYREF
  va_list va1; // [rsp+A0h] [rbp+28h]
  __int64 v8; // [rsp+A8h] [rbp+30h] BYREF
  va_list va2; // [rsp+A8h] [rbp+30h]
  va_list va3; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v8 = va_arg(va3, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           (__int64 *)va2,
           4LL,
           va3,
           4LL,
           0LL);
}
