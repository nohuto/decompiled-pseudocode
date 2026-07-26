/*
 * XREFs of ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002B064
 * Callers:
 *     ?ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0026974 (-ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002AF60 (-ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPO.c)
 *     NdisFSetAttributes @ 0x1C0039150 (NdisFSetAttributes.c)
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00686E0 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012C368 (-ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C01319B4 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisSetupUpwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002B120 (-ndisSetupUpwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupDownwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002B484 (-ndisSetupDownwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupNoFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003891C (-ndisSetupNoFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisSetupLwfMiniportHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x3Du,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      a1);
  if ( a1->LowestFilter )
  {
    ndisSetupDownwardHandlers(a1);
    ndisSetupUpwardHandlers(a1);
  }
  else
  {
    a1->ReceiveFilters = 0;
    ndisSetupNoFilterHandlers(a1);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x3Eu,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      a1);
}
