/*
 * XREFs of ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C01B153C
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z @ 0x1C01B0F2C (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01D751C (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ConvertDmmToDisplayConfigScaling(int a1)
{
  if ( a1 <= 0 )
    goto LABEL_5;
  if ( a1 <= 5 )
    return (unsigned int)a1;
  if ( a1 != 255 )
  {
LABEL_5:
    if ( a1 == 253 )
    {
      WdLogSingleEntry1(1LL, 948LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Scaling != D3DKMDT_VPPS_PREFERRED",
        948LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  return 128LL;
}
