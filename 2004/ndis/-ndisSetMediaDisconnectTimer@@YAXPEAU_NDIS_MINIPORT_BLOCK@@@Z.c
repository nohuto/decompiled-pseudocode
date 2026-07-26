/*
 * XREFs of ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019E74
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C4B8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008C630 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C0104540 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C012A830 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012F258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     NdisSetTimer @ 0x1C0019EA0 (NdisSetTimer.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 */

void __fastcall ndisSetMediaDisconnectTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int PnPFlags; // ecx
  int v3; // edx

  PnPFlags = a1->PnPFlags;
  if ( (PnPFlags & 0x20) != 0 && (a1->WSyncFlags & 8) != 0 && (PnPFlags & 8) == 0 && ndisReferenceMiniport(a1, 0xBu) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        14,
        142,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
        (char)a1,
        a1->MediaDisconnectTimeOut);
    }
    a1->PnPFlags = a1->PnPFlags & 0xFFFFFDF7 | 8;
    NdisSetTimer(&a1->MediaDisconnectTimer, 1000 * a1->MediaDisconnectTimeOut);
  }
}
