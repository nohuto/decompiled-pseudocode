/*
 * XREFs of ?ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003CFE0
 * Callers:
 *     ?ndisMIndicatePMHardwareCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008FBEC (-ndisMIndicatePMHardwareCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012EB78 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0070B8C (McTemplateK0jqxqq_EtwWriteTransfer.c)
 */

unsigned __int8 __fastcall ndisCheckMiniportWakeUpCapable(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp; // eax
  int v3; // ecx

  MinLinkChangeWakeUp = a1->PMHardwareCapabilities.MinLinkChangeWakeUp;
  v3 = 2;
  if ( ((unsigned int)(MinLinkChangeWakeUp - 2) <= 2
     || (unsigned int)(a1->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2
     || (unsigned int)(a1->PMHardwareCapabilities.MinPatternWakeUp - 2) <= 2
     || (a1->PMHardwareCapabilities.Flags & 6) != 0)
    && a1->DeviceCaps.SystemWake
    && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2
    && (*((_DWORD *)&a1->DeviceCaps + 1) & 0x3800) != 0 )
  {
    a1->PnPFlags |= 0x4000000u;
    return 1;
  }
  else
  {
    a1->PnPFlags &= ~0x4000000u;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x79u,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
        a1);
    if ( (byte_1C00E6082 & 8) != 0 )
      McTemplateK0jqxqq_EtwWriteTransfer(
        v3,
        (unsigned int)&InitializeAdapterInfo,
        (_DWORD)a1 + 4008,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value,
        3,
        0);
    return 0;
  }
}
