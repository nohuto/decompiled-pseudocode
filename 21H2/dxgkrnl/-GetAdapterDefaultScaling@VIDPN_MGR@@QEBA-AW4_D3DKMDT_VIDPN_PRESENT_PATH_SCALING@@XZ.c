/*
 * XREFs of ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C01D3BBC
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlPinPathContentScaling @ 0x1C01BDD7C (BmlPinPathContentScaling.c)
 *     BmlInternalTryPinningScaling @ 0x1C01BDED8 (BmlInternalTryPinningScaling.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C01D5E50 (DxgkGetAdapterDefaultScaling.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C01D6044 (_EnforceDriverModelScalingPolicy.c)
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C039B040 (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDPN_MGR::GetAdapterDefaultScaling(VIDPN_MGR *this)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *((_QWORD *)this + 1);
  if ( !v2 )
  {
    WdLogSingleEntry0(1LL);
    v2 = *((_QWORD *)this + 1);
  }
  result = 255LL;
  if ( *(int *)(*(_QWORD *)(v2 + 16) + 2692LL) >= 1105 )
    return 4LL;
  return result;
}
