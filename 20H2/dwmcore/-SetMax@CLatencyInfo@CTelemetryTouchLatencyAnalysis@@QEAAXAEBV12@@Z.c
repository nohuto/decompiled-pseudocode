/*
 * XREFs of ?SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z @ 0x180160698
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0AEBUVAIL_TELEMETRY_TOUCH_INFO@1@@Z @ 0x180003EA8 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0AEBUVAIL_TELEMETRY_.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCLatencyInfo@1@I@Z @ 0x18015C790 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCL.c)
 * Callees:
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x180004A54 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x180004ABC (-IsVailContainer@@YA_NXZ.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::CLatencyInfo::SetMax(
        CTelemetryTouchLatencyAnalysis::CLatencyInfo *this,
        const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *a2)
{
  unsigned int v2; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax

  v2 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    if ( v2 <= *(_DWORD *)a2 )
      v2 = *(_DWORD *)a2;
    *(_DWORD *)this = v2;
    v5 = *((_DWORD *)this + 1);
    if ( v5 <= *((_DWORD *)a2 + 1) )
      v5 = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 1) = v5;
    v6 = *((_DWORD *)this + 7);
    if ( v6 <= *((_DWORD *)a2 + 7) )
      v6 = *((_DWORD *)a2 + 7);
    *((_DWORD *)this + 7) = v6;
    v7 = *((_DWORD *)this + 8);
    if ( v7 <= *((_DWORD *)a2 + 8) )
      v7 = *((_DWORD *)a2 + 8);
    *((_DWORD *)this + 8) = v7;
    v8 = *((_DWORD *)this + 9);
    if ( v8 <= *((_DWORD *)a2 + 9) )
      v8 = *((_DWORD *)a2 + 9);
    *((_DWORD *)this + 9) = v8;
    v9 = *((_DWORD *)this + 10);
    if ( v9 <= *((_DWORD *)a2 + 10) )
      v9 = *((_DWORD *)a2 + 10);
    *((_DWORD *)this + 10) = v9;
    if ( IsVailContainer() )
    {
      v10 = *((_DWORD *)this + 2);
      if ( v10 <= *((_DWORD *)a2 + 2) )
        v10 = *((_DWORD *)a2 + 2);
      *((_DWORD *)this + 2) = v10;
      v11 = *((_DWORD *)this + 3);
      if ( v11 <= *((_DWORD *)a2 + 3) )
        v11 = *((_DWORD *)a2 + 3);
      *((_DWORD *)this + 3) = v11;
      v12 = *((_DWORD *)this + 4);
      if ( v12 <= *((_DWORD *)a2 + 4) )
        v12 = *((_DWORD *)a2 + 4);
      *((_DWORD *)this + 4) = v12;
    }
    v13 = *((_DWORD *)this + 5);
    if ( v13 <= *((_DWORD *)a2 + 5) )
      v13 = *((_DWORD *)a2 + 5);
    *((_DWORD *)this + 5) = v13;
    v14 = *((_DWORD *)this + 6);
    if ( v14 <= *((_DWORD *)a2 + 6) )
      v14 = *((_DWORD *)a2 + 6);
    *((_DWORD *)this + 6) = v14;
  }
  else
  {
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(this, a2);
  }
}
