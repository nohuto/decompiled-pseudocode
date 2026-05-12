/*
 * XREFs of WPP_SF_qqD @ 0x1C00326A0
 * Callers:
 *     RaUnitStartIo @ 0x1C0005020 (RaUnitStartIo.c)
 *     RaDriverPnpIrp @ 0x1C0008320 (RaDriverPnpIrp.c)
 *     RaUnitPnpIrp @ 0x1C00083C0 (RaUnitPnpIrp.c)
 *     RaidUnitCompleteRequest @ 0x1C00089E0 (RaidUnitCompleteRequest.c)
 *     RaDriverScsiIrp @ 0x1C000A820 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C000A8C0 (RaUnitScsiIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C000BE40 (RaDriverDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C000BEE8 (RaUnitDeviceControlIrp.c)
 *     RaUnitAsyncError @ 0x1C000C438 (RaUnitAsyncError.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C00109DC (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaDriverPowerIrp @ 0x1C0010BC0 (RaDriverPowerIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0010C68 (RaidAdapterPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C0010D38 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C0010E1C (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0010FA8 (RaidUnitSetSystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0011224 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C00112FC (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0011508 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterDevicePowerDownSrbComplete @ 0x1C0011660 (RaidAdapterDevicePowerDownSrbComplete.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C00116BC (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00118F8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterPowerDownDevice @ 0x1C00122BC (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0012A80 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaAdapterStartPowerIo @ 0x1C0012CB0 (RaAdapterStartPowerIo.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C00139B0 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C0013F80 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C00140C0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C0014170 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0014250 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0014300 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterPnpIrp @ 0x1C0015924 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015AC4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C001BADC (RaUnitRemoveDeviceIrp.c)
 *     RaidAdapterStartDevice @ 0x1C002E9CC (RaidAdapterStartDevice.c)
 *     RaUnitStartResetIo @ 0x1C0047DE8 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00495B0 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0049DB0 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaDriverCreateIrp @ 0x1C0071690 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C0071740 (RaDriverCloseIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C0074110 (RaDriverSystemControlIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0076D18 (RaidAdapterFilterResourceRequirementsIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
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
