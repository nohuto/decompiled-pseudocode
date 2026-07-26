/*
 * XREFs of ?ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C00197AC
 * Callers:
 *     ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1C00195F8 (-ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOC.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C001A1BC (-ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisFilterXStateClearFlag(struct _NDIS_FILTER_BLOCK *a1)
{
  bool v1; // zf

  v1 = (a1->XState & 0xFE) == 0;
  a1->XState &= ~1u;
  if ( v1 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        0x44u,
        (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
        a1);
    return 1;
  }
  else
  {
    ndisUpdateFilterFakeStatus(a1);
    return 0;
  }
}
