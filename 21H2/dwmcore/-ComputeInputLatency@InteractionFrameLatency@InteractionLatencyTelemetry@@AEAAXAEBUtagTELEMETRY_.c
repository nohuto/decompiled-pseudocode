/*
 * XREFs of ?ComputeInputLatency@InteractionFrameLatency@InteractionLatencyTelemetry@@AEAAXAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_K@Z @ 0x1801E221C
 * Callers:
 *     ?ComputeLatency@InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAXAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@@Z @ 0x1801E2370 (-ComputeLatency@InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAXAEBUTELEMETRY_INTERACT.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18026C340 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall InteractionLatencyTelemetry::InteractionFrameLatency::ComputeInputLatency(
        InteractionLatencyTelemetry::InteractionFrameLatency *this,
        const struct tagTELEMETRY_POINTER_FRAME_TIMES *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rax

  v5 = *((_QWORD *)a2 + 1);
  if ( !v5 )
    v5 = *((_QWORD *)a2 + 2);
  v7 = qword_1803D32C0;
  v8 = qword_1803D32C0 / 0xF4240uLL;
  *((_DWORD *)this + 1) = (v5 - *(_QWORD *)a2) / (qword_1803D32C0 / 0xF4240uLL);
  if ( *((_QWORD *)a2 + 1) )
    *((_DWORD *)this + 2) = (*((_QWORD *)a2 + 2) - *((_QWORD *)a2 + 1)) / v8;
  v9 = (*((_QWORD *)a2 + 3) - *((_QWORD *)a2 + 2)) % v8;
  *((_DWORD *)this + 3) = (*((_QWORD *)a2 + 3) - *((_QWORD *)a2 + 2)) / v8;
  v10 = *((_QWORD *)a2 + 4);
  if ( !v10 )
  {
    v10 = *((_QWORD *)a2 + 5);
    if ( !v10 )
    {
      v10 = *((_QWORD *)a2 + 6);
      if ( !v10 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgs(0LL, v9);
        v10 = *((_QWORD *)a2 + 6);
        v7 = qword_1803D32C0;
      }
    }
  }
  v11 = v7 / 0xF4240;
  *((_DWORD *)this + 4) = (v10 - *((_QWORD *)a2 + 3)) / (v7 / 0xF4240);
  if ( *((_QWORD *)a2 + 4) )
  {
    v12 = *((_QWORD *)a2 + 5);
    if ( v12 )
      *((_DWORD *)this + 5) = (v12 - *((_QWORD *)a2 + 4)) / v11;
  }
  if ( *((_QWORD *)a2 + 5) )
  {
    v13 = *((_QWORD *)a2 + 6);
    if ( !v13 )
    {
      v13 = a3;
      if ( *((_QWORD *)a2 + 8) )
        v13 = *((_QWORD *)a2 + 8);
    }
    *((_DWORD *)this + 6) = (v13 - *((_QWORD *)a2 + 5)) / v11;
  }
  v14 = *((_QWORD *)a2 + 7);
  if ( v14 )
  {
    v15 = (v14 - *((_QWORD *)a2 + 6)) / v11;
    *((_DWORD *)this + 7) = v15;
  }
  else
  {
    LODWORD(v15) = *((_DWORD *)this + 7);
  }
  if ( (_DWORD)v15 )
    *((_DWORD *)this + 8) = (a3 - *((_QWORD *)a2 + 7)) / v11;
}
