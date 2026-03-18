/*
 * XREFs of RIMFreeDev @ 0x1C0150B40
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0020EE0 (RIMDoOnPnpNotification.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0023E10 (rimHandleAnyPnpRemovePendingDevices.c)
 *     rimOnPnpArrived @ 0x1C00240B8 (rimOnPnpArrived.c)
 *     RIMDeviceClassNotify @ 0x1C0026220 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C0026D30 (RIMOnPnpNotification.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0155430 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0155A90 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0155DF0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01579E4 (RIMIDERemoveInjectionDevice.c)
 *     RIMRemoveInjectionDevice @ 0x1C0158AB0 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C0158D2C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016C488 (RIMVirtDeviceClassNotify.c)
 *     RIMDiscoverSpecificDevice @ 0x1C0172450 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     RIMFreeSpecificDev @ 0x1C0075854 (RIMFreeSpecificDev.c)
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C00B5ABC (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFreeDev(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *i; // rdi
  __int64 v9; // rax

  RimTelemetry::ReportRimDevice(0, -__CFSHR__(*(_DWORD *)(a2 + 200), 8), (struct RIMDEV *const)a2);
  for ( i = (__int64 *)(a1 + 424); ; i = (__int64 *)(v9 + 40) )
  {
    v9 = *i;
    if ( !*i )
      break;
    if ( v9 == a2 )
    {
      if ( *(_QWORD *)(a2 + 248) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
      *i = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = 0LL;
      RIMFreeSpecificDev(a1, a2, v6, v7);
      return 0LL;
    }
  }
  return 0LL;
}
