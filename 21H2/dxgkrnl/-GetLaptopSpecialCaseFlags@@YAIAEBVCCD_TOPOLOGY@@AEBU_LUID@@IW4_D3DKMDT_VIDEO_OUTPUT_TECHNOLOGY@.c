/*
 * XREFs of ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C02F0D58
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F0FB0 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall GetLaptopSpecialCaseFlags(
        const struct CCD_TOPOLOGY *a1,
        const struct _LUID *a2,
        int a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a4,
        const struct MONITORSCOUNT_CALLBACK_CONTEXT *a5)
{
  __int64 v5; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx

  v5 = *((_QWORD *)a1 + 8);
  if ( !v5 || *(_WORD *)(v5 + 20) != 1 || *((_DWORD *)a5 + 1) != 2 )
    return 0LL;
  PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a1, 0);
  if ( !PathDescriptor )
  {
    WdLogSingleEntry1(1LL, 3331LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pPath != NULL", 3331LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)PathDescriptor + 7) == a3
    && *((_DWORD *)PathDescriptor + 4) == a2->LowPart
    && *((_DWORD *)PathDescriptor + 5) == a2->HighPart )
  {
    return 0LL;
  }
  if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)PathDescriptor + 22)) )
    return 8LL;
  return IsInternalVideoOutput(a4);
}
