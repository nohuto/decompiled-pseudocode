/*
 * XREFs of ?ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007FEC0
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001B340 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C0012BE8 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0015E68 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017980 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisPnPQueryRemoveDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C005F7BC (-ndisPnPQueryRemoveDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisPnPIrpQueryRemove(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        bool *a5)
{
  int v7; // edi
  struct _IRP *v8; // rdx

  v7 = -1073741823;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      9u,
      0x21u,
      (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  ndisLogMiniportEvent(a2, NdisMEvent_DeviceQueryRemove);
  if ( !a2->PagingPathCount )
  {
    ndisPowerSaveStop((__int64)a2, 1LL);
    ndisWaitForKernelObject(&a2->PowerD0CompleteEvent);
    if ( (a2->PnPFlags & 0x100) != 0 )
      v7 = -1073740537;
    else
      v7 = ndisPnPQueryRemoveDevice(a2, v8);
    if ( v7 >= 0 )
    {
      a2->OldPnPDeviceState = a2->PnPDeviceState;
      a2->PnPDeviceState = NdisPnPDeviceQueryRemoved;
    }
  }
  a3->IoStatus.Status = v7;
  *a5 = v7 >= 0;
  return (unsigned int)v7;
}
