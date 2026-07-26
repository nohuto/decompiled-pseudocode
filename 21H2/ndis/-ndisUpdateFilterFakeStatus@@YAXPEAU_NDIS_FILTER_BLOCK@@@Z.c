/*
 * XREFs of ?ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C001A1BC
 * Callers:
 *     ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1C0016384 (-ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@.c)
 *     ?ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C00197AC (-ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     ?ndisFilterXStateSetFlag@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C00258F0 (-ndisFilterXStateSetFlag@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00262CC (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qdL @ 0x1C003BC68 (WPP_RECORDER_SF_qdL.c)
 */

void __fastcall ndisUpdateFilterFakeStatus(struct _NDIS_FILTER_BLOCK *a1)
{
  char XState; // r8
  int v2; // edx

  XState = a1->XState;
  v2 = (XState & 1) != 0 ? -1071448033 : -1073741823;
  a1->FakeStatus = v2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      13,
      65,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)a1,
      XState,
      v2);
}
