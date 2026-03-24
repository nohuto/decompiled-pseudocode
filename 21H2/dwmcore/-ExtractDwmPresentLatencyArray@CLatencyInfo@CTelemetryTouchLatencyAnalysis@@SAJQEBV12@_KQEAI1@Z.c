/*
 * XREFs of ?ExtractDwmPresentLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z @ 0x18015D64C
 * Callers:
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x180160388 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractDwmPresentLatencyArray(
        const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *const a1,
        unsigned __int64 a2,
        unsigned int *const a3)
{
  unsigned __int64 v3; // r10
  unsigned int v4; // ebx
  unsigned int *v5; // rax
  unsigned int v6; // ecx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v3 = 0LL;
  v4 = 0;
  if ( !a1 )
  {
    v8 = 191;
LABEL_3:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, v8, 0LL);
    return v4;
  }
  if ( !a3 )
  {
    v8 = 192;
    goto LABEL_3;
  }
  if ( a2 - 1 > 4 )
  {
    v8 = 195;
    goto LABEL_3;
  }
  if ( a2 )
  {
    v5 = (unsigned int *)((char *)a1 + 40);
    do
    {
      v6 = *v5;
      v5 += 11;
      a3[v3++] = v6;
    }
    while ( v3 < a2 );
  }
  return v4;
}
