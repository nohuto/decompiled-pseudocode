/*
 * XREFs of RIMFreeDev @ 0x1C0159410
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0059D84 (RIMDoOnPnpNotification.c)
 *     rimOnPnpArrived @ 0x1C0059E98 (rimOnPnpArrived.c)
 *     RIMDeviceClassNotify @ 0x1C009F050 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C00A0F20 (RIMOnPnpNotification.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00A36E0 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C015DCE0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C015E340 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C015E6A0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0160294 (RIMIDERemoveInjectionDevice.c)
 *     RIMRemoveInjectionDevice @ 0x1C0161360 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C01615DC (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMVirtDeviceClassNotify @ 0x1C0174BE8 (RIMVirtDeviceClassNotify.c)
 *     RIMDiscoverSpecificDevice @ 0x1C017ABB0 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C0047F70 (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     RIMFreeSpecificDev @ 0x1C0056CA8 (RIMFreeSpecificDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFreeDev(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *i; // rdi
  __int64 v6; // rax

  RimTelemetry::ReportRimDevice(0, -__CFSHR__(*(_DWORD *)(a2 + 200), 8), (struct RIMDEV *const)a2);
  for ( i = (__int64 *)(a1 + 424); ; i = (__int64 *)(v6 + 40) )
  {
    v6 = *i;
    if ( !*i )
      break;
    if ( v6 == a2 )
    {
      if ( *(_QWORD *)(a2 + 248) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
      *i = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = 0LL;
      RIMFreeSpecificDev(a1, a2);
      return 0LL;
    }
  }
  return 0LL;
}
