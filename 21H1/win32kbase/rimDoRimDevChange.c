/*
 * XREFs of rimDoRimDevChange @ 0x1C00A3168
 * Callers:
 *     RIMRemoveDevOfInputType @ 0x1C0056BCC (RIMRemoveDevOfInputType.c)
 *     RIMFreeSpecificDev @ 0x1C0056CA8 (RIMFreeSpecificDev.c)
 *     RIMDoOnPnpNotification @ 0x1C0059D84 (RIMDoOnPnpNotification.c)
 *     RIMDeviceClassNotify @ 0x1C009F050 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C00A0F20 (RIMOnPnpNotification.c)
 *     RIMCreateDev @ 0x1C00A1B30 (RIMCreateDev.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00A36E0 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMVirtCreateDev @ 0x1C0159498 (RIMVirtCreateDev.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C015E6A0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0160294 (RIMIDERemoveInjectionDevice.c)
 *     RIMVirtDeviceClassNotify @ 0x1C0174BE8 (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     RIMHandlePowerDeviceArrival @ 0x1C00485FC (RIMHandlePowerDeviceArrival.c)
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     rimDoRimDevChangeCallback @ 0x1C00A3100 (rimDoRimDevChangeCallback.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C00A324C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C018888C (RIMHandleTTMDeviceRemoval.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimDoRimDevChange(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // r9d

  switch ( a3 )
  {
    case 1u:
      goto LABEL_5;
    case 2u:
      *(_DWORD *)(a2 + 184) |= 0x10000000u;
      LOBYTE(v6) = 1;
      v7 = RIMHandlePowerDeviceArrival((_DWORD *)a2);
      LOBYTE(v9) = v7;
      if ( v7 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v10 = 14;
LABEL_24:
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v8, 1, v10, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids, v9);
      goto LABEL_6;
    case 3u:
      v6 = (*(_DWORD *)(a2 + 184) & 0x10000000u) >> 28;
      if ( !isChildPartition(a1, a2) && gbTtmEnabled )
        v9 = RIMHandleTTMDeviceRemoval(a2);
      else
        v9 = 0;
      if ( v9 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v10 = 15;
      goto LABEL_24;
  }
  if ( a3 - 4 <= 1 )
  {
LABEL_5:
    LOBYTE(v6) = 1;
    goto LABEL_6;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  LOBYTE(v6) = 0;
LABEL_6:
  InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)a2, a3);
  if ( (_BYTE)v6 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a2 + 32) + 80LL))(*(_QWORD *)(a2 + 32), a3);
    rimDoRimDevChangeCallback(a1, a2, a3);
  }
  if ( a3 == 3 )
    *(_DWORD *)(a2 + 184) &= ~0x10000000u;
}
