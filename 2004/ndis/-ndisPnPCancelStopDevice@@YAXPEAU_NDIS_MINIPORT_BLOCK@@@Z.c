/*
 * XREFs of ?ndisPnPCancelStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005FDA8
 * Callers:
 *     ?ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00803E0 (-ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     ?ndisPnPCancelRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005FCB4 (-ndisPnPCancelRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisPnPCancelStopDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x53u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids);
  ndisPnPCancelRemoveDevice(a1);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x54u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids);
}
