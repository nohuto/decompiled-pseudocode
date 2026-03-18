/*
 * XREFs of ?ComputeLatency@InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAXAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@@Z @ 0x1801E2370
 * Callers:
 *     ??0InteractionFrameLatency@InteractionLatencyTelemetry@@QEAA@AEBUTELEMETRY_INTERACTION_FRAME_TIMES@@@Z @ 0x1801E1B68 (--0InteractionFrameLatency@InteractionLatencyTelemetry@@QEAA@AEBUTELEMETRY_INTERACTION_FRAME_TIM.c)
 * Callees:
 *     ?ComputeInputLatency@InteractionFrameLatency@InteractionLatencyTelemetry@@AEAAXAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_K@Z @ 0x1801E221C (-ComputeInputLatency@InteractionFrameLatency@InteractionLatencyTelemetry@@AEAAXAEBUtagTELEMETRY_.c)
 *     ?ComputeVailLatency@InteractionFrameLatency@InteractionLatencyTelemetry@@AEAAXAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@@Z @ 0x1801E2450 (-ComputeVailLatency@InteractionFrameLatency@InteractionLatencyTelemetry@@AEAAXAEBUTELEMETRY_INTE.c)
 */

void __fastcall InteractionLatencyTelemetry::InteractionFrameLatency::ComputeLatency(
        InteractionLatencyTelemetry::InteractionFrameLatency *this,
        const struct TELEMETRY_INTERACTION_FRAME_TIMES *a2)
{
  __int64 *v2; // rdi
  unsigned __int64 v5; // r8
  _DWORD *v6; // r10
  __int64 v7; // r11
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 v10; // rax

  v2 = (__int64 *)((char *)a2 + 144);
  if ( *(_QWORD *)a2 )
    InteractionLatencyTelemetry::InteractionFrameLatency::ComputeInputLatency(this, a2, *v2);
  if ( *((_QWORD *)a2 + 17) )
  {
    InteractionLatencyTelemetry::InteractionFrameLatency::ComputeVailLatency(this, a2);
    v5 = qword_1803D32C0;
  }
  else
  {
    v5 = qword_1803D32C0;
    v6 = (_DWORD *)((char *)this + 36);
    v7 = 4LL;
    v8 = qword_1803D32C0 / 0xF4240uLL;
    do
    {
      v9 = v2[1] - *v2;
      ++v2;
      *v6++ = v9 / v8;
      --v7;
    }
    while ( v7 );
  }
  v10 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
    v10 = *((_QWORD *)a2 + 18);
  *(_DWORD *)this = (*((_QWORD *)a2 + 22) - v10) / (v5 / 0x3E8);
}
