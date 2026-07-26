/*
 * XREFs of ?ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E530
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C0061800 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0015E68 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017980 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001986C (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisPnPRemoveDeviceEx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0080354 (-ndisPnPRemoveDeviceEx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C008B114 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ?ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0094E38 (-ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00C5C2C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisWdfPreReleaseHardware(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v1; // edi
  bool v3; // zf

  v1 = 0;
  ndisLogMiniportEvent(a1, NdisMEvent_DeviceRemove);
  if ( (a1->Flags & 4) == 0 )
  {
    NdisTraceLoggingDeviceRemoved();
    ndisPowerSaveStop((__int64)a1, 2LL);
    ndisWaitForKernelObject(&a1->PowerD0CompleteEvent);
    if ( (a1->PnPFlags & 0x100) == 0 && a1->CurrentDevicePowerState > PowerDeviceD0 )
      v1 = ndisWakeUpDevice(a1);
    ndisReferenceMiniportNoCheck(a1, 0x1Eu);
  }
  if ( !a1->Ref.ReferenceCount )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v3 = a1->PnPDeviceState == NdisPnPDeviceRemoved;
  a1->OldPnPDeviceState = NdisPnPDeviceStarted;
  if ( !v3 )
    ndisPnPRemoveDeviceEx(a1);
  return v1;
}
