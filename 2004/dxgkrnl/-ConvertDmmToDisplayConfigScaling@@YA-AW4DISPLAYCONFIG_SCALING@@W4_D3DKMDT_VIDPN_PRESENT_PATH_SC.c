/*
 * XREFs of ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C013513C
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C01349D8 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0144B98 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertDmmToDisplayConfigScaling(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( (int)a1 <= 0 )
    goto LABEL_5;
  if ( (int)a1 <= 5 )
    return (unsigned int)a1;
  if ( (_DWORD)a1 != 255 )
  {
LABEL_5:
    if ( (_DWORD)a1 == 253 )
    {
      v3 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v3 + 24) = 951LL;
      WdLogEvent5_WdAssertion(v3);
    }
  }
  return 128LL;
}
