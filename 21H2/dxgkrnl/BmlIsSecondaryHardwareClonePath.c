/*
 * XREFs of BmlIsSecondaryHardwareClonePath @ 0x1C01B205C
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C01BD718 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     BmlFunctionalizePath @ 0x1C01BD8FC (BmlFunctionalizePath.c)
 *     _BmlGetPathModeListForPath @ 0x1C03ABDDC (_BmlGetPathModeListForPath.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlIsSecondaryHardwareClonePath(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r10d

  v3 = 0;
  if ( !a2 )
    return 0;
  while ( *(_DWORD *)(*(_QWORD *)(120LL * v3 + a1 + 16) + 24LL) != *(_DWORD *)(*(_QWORD *)(120LL * a2 + a1 + 16) + 24LL) )
  {
    if ( ++v3 >= a2 )
      return 0;
  }
  if ( a3 )
    *a3 = v3;
  return 1;
}
