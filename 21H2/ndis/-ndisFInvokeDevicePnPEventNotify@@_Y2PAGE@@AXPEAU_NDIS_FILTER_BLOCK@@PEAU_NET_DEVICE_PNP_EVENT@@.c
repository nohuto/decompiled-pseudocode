/*
 * XREFs of ?ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1C00FB514
 * Callers:
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C0016240 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C0018D28 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisFInvokeDevicePnPEventNotify(struct _NDIS_FILTER_BLOCK *a1, struct _NET_DEVICE_PNP_EVENT *a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rbp
  _NDIS_DEVICE_PNP_EVENT DevicePnPEvent; // esi
  __int64 v6; // [rsp+30h] [rbp-28h]
  char v7[4]; // [rsp+30h] [rbp-28h]

  FilterDriver = a1->FilterDriver;
  DevicePnPEvent = a2->DevicePnPEvent;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = a2->DevicePnPEvent;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x6Cu,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)a1,
      *(_DWORD *)v7);
  }
  FilterDriver->DefaultFilterCharacteristics.DevicePnPEventNotifyHandler(a1->FilterModuleContext, a2);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v6) = DevicePnPEvent;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x6Du,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)a1,
      v6);
  }
}
