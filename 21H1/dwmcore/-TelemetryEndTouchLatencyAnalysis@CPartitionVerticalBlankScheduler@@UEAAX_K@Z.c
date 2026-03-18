/*
 * XREFs of ?TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAX_K@Z @ 0x180025180
 * Callers:
 *     <none>
 * Callees:
 *     ?EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z @ 0x180024FD0 (-EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryEndTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2)
{
  LARGE_INTEGER *v2; // r8
  LARGE_INTEGER v3; // rbx
  LARGE_INTEGER v4; // r8
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (LARGE_INTEGER *)*((_QWORD *)this + 629);
  v3 = v2[36];
  v4 = *v2;
  v5 = 10000000 * (v3.QuadPart / (unsigned __int64)g_qpcFrequency.QuadPart)
     + 10000000 * (v3.QuadPart % (unsigned __int64)g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
  CTelemetryTouchLatencyAnalysis::EndAnalyzingInteraction(
    (CPartitionVerticalBlankScheduler *)((char *)this + 5952),
    a2,
    v4,
    &v5);
}
