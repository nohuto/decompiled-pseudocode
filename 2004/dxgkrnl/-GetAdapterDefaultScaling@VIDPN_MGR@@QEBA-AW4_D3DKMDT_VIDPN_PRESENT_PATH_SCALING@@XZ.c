/*
 * XREFs of ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C0146A70
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0135160 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlPinPathContentScaling @ 0x1C013B380 (BmlPinPathContentScaling.c)
 *     BmlInternalTryPinningScaling @ 0x1C013B4E4 (BmlInternalTryPinningScaling.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C01457D0 (DxgkGetAdapterDefaultScaling.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C01459F8 (_EnforceDriverModelScalingPolicy.c)
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C02DC8B8 (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDPN_MGR::GetAdapterDefaultScaling(VIDPN_MGR *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rax

  v3 = *((_QWORD *)this + 1);
  if ( !v3 )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v5);
    v3 = *((_QWORD *)this + 1);
  }
  result = 255LL;
  if ( *(int *)(*(_QWORD *)(v3 + 16) + 2596LL) >= 1105 )
    return 4LL;
  return result;
}
