/*
 * XREFs of ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C0013758
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C01BE07C (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C01BE360 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     BmlGetMonitorModePreference @ 0x1C01D0EB0 (BmlGetMonitorModePreference.c)
 *     BmlGetMonitorModeVSyncPreference @ 0x1C01D0F38 (BmlGetMonitorModeVSyncPreference.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C01E3518 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     BmlCompareMonitorRegions @ 0x1C03AAF7C (BmlCompareMonitorRegions.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DMMVIDEOSIGNALMODE::DivideAndRound(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax

  if ( !a2 )
    return -1LL;
  v3 = a1 % a2;
  v4 = a1 / a2;
  result = v4 + 1;
  if ( v3 < a2 - v3 )
    return v4;
  return result;
}
