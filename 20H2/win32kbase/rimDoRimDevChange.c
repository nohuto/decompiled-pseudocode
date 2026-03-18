/*
 * XREFs of rimDoRimDevChange @ 0x1C002575C
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0020EE0 (RIMDoOnPnpNotification.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0023E10 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMDeviceClassNotify @ 0x1C0026220 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C0026D30 (RIMOnPnpNotification.c)
 *     RIMCreateDev @ 0x1C0027880 (RIMCreateDev.c)
 *     RIMRemoveDevOfInputType @ 0x1C007574C (RIMRemoveDevOfInputType.c)
 *     RIMFreeSpecificDev @ 0x1C0075854 (RIMFreeSpecificDev.c)
 *     RIMVirtCreateDev @ 0x1C0150BC8 (RIMVirtCreateDev.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0155DF0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01579E4 (RIMIDERemoveInjectionDevice.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016C488 (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     RIMHandlePowerDeviceArrival @ 0x1C0021C50 (RIMHandlePowerDeviceArrival.c)
 *     rimDoRimDevChangeCallback @ 0x1C0025840 (rimDoRimDevChangeCallback.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0028B3C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     isChildPartition @ 0x1C0036370 (isChildPartition.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C018064C (RIMHandleTTMDeviceRemoval.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimDoRimDevChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // r9d

  v4 = a3;
  switch ( (_DWORD)a3 )
  {
    case 1:
      goto LABEL_5;
    case 2:
      *(_DWORD *)(a2 + 184) |= 0x10000000u;
      LOBYTE(v7) = 1;
      v8 = RIMHandlePowerDeviceArrival((_DWORD *)a2);
      LOBYTE(v10) = v8;
      if ( v8 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v11 = 14;
LABEL_24:
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v9, 1, v11, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids, v10);
      goto LABEL_6;
    case 3:
      v7 = (*(_DWORD *)(a2 + 184) & 0x10000000u) >> 28;
      if ( !(unsigned __int8)isChildPartition() && gbTtmEnabled )
        v10 = RIMHandleTTMDeviceRemoval(a2);
      else
        v10 = 0;
      if ( v10 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v11 = 15;
      goto LABEL_24;
  }
  if ( (unsigned int)(a3 - 4) <= 1 )
  {
LABEL_5:
    LOBYTE(v7) = 1;
    goto LABEL_6;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  LOBYTE(v7) = 0;
LABEL_6:
  InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)a2, v4);
  if ( (_BYTE)v7 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a2 + 32) + 80LL))(*(_QWORD *)(a2 + 32), v4);
    rimDoRimDevChangeCallback(a1, a2, v4);
  }
  if ( v4 == 3 )
    *(_DWORD *)(a2 + 184) &= ~0x10000000u;
}
