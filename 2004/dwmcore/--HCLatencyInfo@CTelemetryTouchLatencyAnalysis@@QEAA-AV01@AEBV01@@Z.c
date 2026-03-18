/*
 * XREFs of ??HCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@AEBV01@@Z @ 0x18015E434
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0AEBUVAIL_TELEMETRY_TOUCH_INFO@1@@Z @ 0x180014338 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0AEBUVAIL_TELEMETRY_.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCLatencyInfo@1@I@Z @ 0x18015E5A0 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCL.c)
 * Callees:
 *     ?IsVailContainer@@YA_NXZ @ 0x180013B38 (-IsVailContainer@@YA_NXZ.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator+(_DWORD *a1, __int64 a2, char *a3)
{
  int v6; // eax
  signed __int64 v7; // r8
  int v8; // eax
  _DWORD *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)a2 = *a1 + *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 1);
  v7 = a3 - (char *)a1;
  v8 = a1[1] + v6;
  v9 = a1 + 7;
  *(_DWORD *)(a2 + 4) = v8;
  v10 = a2 - (_QWORD)a1;
  v11 = 4LL;
  do
  {
    *(_DWORD *)((char *)v9 + v10) = *v9 + *(_DWORD *)((char *)v9 + v7);
    ++v9;
    --v11;
  }
  while ( v11 );
  if ( IsVailContainer() )
  {
    *(_DWORD *)(a2 + 8) = a1[2] + *((_DWORD *)a3 + 2);
    *(_DWORD *)(a2 + 12) = a1[3] + *((_DWORD *)a3 + 3);
    *(_DWORD *)(a2 + 16) = a1[4] + *((_DWORD *)a3 + 4);
  }
  *(_DWORD *)(a2 + 20) = a1[5] + *((_DWORD *)a3 + 5);
  *(_DWORD *)(a2 + 24) = a1[6] + *((_DWORD *)a3 + 6);
  return a2;
}
