/*
 * XREFs of ?ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0014090
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0015258 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015354 (-ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00153C0 (WPP_RECORDER_SF_qqd.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C005F9F8 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C0066C98 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

void __fastcall ndisGenericWaitWakeCallback(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi

  Status = IoStatus->Status;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      26,
      (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
      (char)Context,
      Context[162],
      IoStatus->Status);
  if ( Status >= 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x1Bu,
        (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
        Context);
    if ( (byte_1C00E6081 & 8) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        (_DWORD)DeviceObject,
        (unsigned int)&WaitWakeComplete,
        (_DWORD)Context + 4008,
        (_DWORD)Context + 4008,
        *((_DWORD *)Context + 1014),
        Context[503],
        1);
    if ( (*((_DWORD *)Context + 31) & 0x800) != 0 || (unsigned int)(*((_DWORD *)Context + 967) - 2) > 2 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x1Du,
          (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
          Context);
      if ( byte_1C00E6083 < 0 )
        McTemplateK0jqxd_EtwWriteTransfer(
          (_DWORD)DeviceObject,
          (unsigned int)&WakeByMiniport,
          (_DWORD)Context + 4008,
          (_DWORD)Context + 4008,
          *((_DWORD *)Context + 1014),
          Context[503],
          1);
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x1Cu,
          (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
          Context);
      if ( (byte_1C00E6081 & 8) != 0 )
        McTemplateK0jqxd_EtwWriteTransfer(
          (_DWORD)DeviceObject,
          (unsigned int)&MiniportPoweringUp,
          (_DWORD)Context + 4008,
          (_DWORD)Context + 4008,
          *((_DWORD *)Context + 1014),
          Context[503],
          1);
      ndisRequestDevicePowerD0((struct _NDIS_MINIPORT_BLOCK *)Context, NdisMEventD0_D3DWake);
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        30,
        (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
        (char)Context,
        Status);
    if ( (byte_1C00E6082 & 0x40) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        (_DWORD)DeviceObject,
        (unsigned int)&WaitWakeIrpFailed,
        (_DWORD)Context + 4008,
        (_DWORD)Context + 4008,
        *((_DWORD *)Context + 1014),
        Context[503],
        Status,
        1,
        0);
  }
  ndisCompleteWaitWake((struct _NDIS_MINIPORT_BLOCK *)Context);
}
