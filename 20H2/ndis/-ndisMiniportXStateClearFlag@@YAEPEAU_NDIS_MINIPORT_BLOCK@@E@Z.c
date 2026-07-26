/*
 * XREFs of ?ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0019600
 * Callers:
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015AE8 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1C00193E8 (-ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOC.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019F2C (-ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisMiniportXStateClearFlag(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  unsigned __int8 v2; // dl
  bool v3; // zf

  v2 = ~a2;
  v3 = (v2 & a1->XState) == 0;
  a1->XState &= v2;
  if ( v3 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        0x43u,
        (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
        a1);
    return 1;
  }
  else
  {
    ndisUpdateMiniportFakeStatus(a1);
    return 0;
  }
}
