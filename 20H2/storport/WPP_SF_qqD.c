/*
 * XREFs of WPP_SF_qqD @ 0x1C0033520
 * Callers:
 *     RaUnitStartIo @ 0x1C0003A20 (RaUnitStartIo.c)
 *     RaUnitAsyncError @ 0x1C00073AC (RaUnitAsyncError.c)
 *     RaidUnitCompleteRequest @ 0x1C00079D0 (RaidUnitCompleteRequest.c)
 *     RaDriverScsiIrp @ 0x1C0009AE0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0009B80 (RaUnitScsiIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C000B100 (RaDriverDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C000B1A8 (RaUnitDeviceControlIrp.c)
 *     RaUnitPnpIrp @ 0x1C000BA18 (RaUnitPnpIrp.c)
 *     RaDriverPnpIrp @ 0x1C000BCA0 (RaDriverPnpIrp.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011EDC (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaDriverPowerIrp @ 0x1C00120C0 (RaDriverPowerIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0012168 (RaidAdapterPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C0012238 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C001231C (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C00124A8 (RaidUnitSetSystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0012770 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0012848 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0012A54 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterDevicePowerDownSrbComplete @ 0x1C0012BB0 (RaidAdapterDevicePowerDownSrbComplete.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0012C0C (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0012E48 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0013810 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0013FE0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaAdapterStartPowerIo @ 0x1C0014210 (RaAdapterStartPowerIo.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C0014F10 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C00154E0 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0015620 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C0015720 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0015800 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C00158B0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterPnpIrp @ 0x1C0015DB4 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015F54 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C001C77C (RaUnitRemoveDeviceIrp.c)
 *     RaidAdapterStartDevice @ 0x1C002F830 (RaidAdapterStartDevice.c)
 *     RaUnitStartResetIo @ 0x1C0048BF8 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C004A3C0 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C004ABC0 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaDriverCreateIrp @ 0x1C0072B60 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C0072C10 (RaDriverCloseIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C0075020 (RaDriverSystemControlIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C00781EC (RaidAdapterFilterResourceRequirementsIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qqD(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}
