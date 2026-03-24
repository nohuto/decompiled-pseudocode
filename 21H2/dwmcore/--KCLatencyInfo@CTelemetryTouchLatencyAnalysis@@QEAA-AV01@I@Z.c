/*
 * XREFs of ??KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@I@Z @ 0x18015CBF8
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18002340C (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x180160388 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 * Callees:
 *     ?IsVailContainer@@YA_NXZ @ 0x180023CFC (-IsVailContainer@@YA_NXZ.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator/(_DWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v7; // eax
  int *v8; // rcx
  int v9; // eax
  char *v10; // r9
  __int64 v11; // r8

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)a2 = *a1 / a3;
  v7 = a1[1];
  v8 = (int *)(a2 + 28);
  v9 = v7 / a3;
  v10 = (char *)a1 - a2;
  v11 = 4LL;
  *(_DWORD *)(a2 + 4) = v9;
  do
  {
    *v8 = *(int *)((char *)v8 + (_QWORD)v10) / a3;
    ++v8;
    --v11;
  }
  while ( v11 );
  if ( IsVailContainer() )
  {
    *(_DWORD *)(a2 + 8) = a1[2] / a3;
    *(_DWORD *)(a2 + 12) = a1[3] / a3;
    *(_DWORD *)(a2 + 16) = a1[4] / a3;
  }
  *(_DWORD *)(a2 + 20) = a1[5] / a3;
  *(_DWORD *)(a2 + 24) = a1[6] / a3;
  return a2;
}
