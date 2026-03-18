/*
 * XREFs of ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C018E820
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C018E560 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0193E00 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::CalcManipulationInputInfoSize(CTouchProcessor *this, int a2)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rcx

  if ( !a2 || (v2 = 240LL * (unsigned int)(a2 - 1), v2 > 0xFFFFFFFF) || (v3 = v2 + 296, (unsigned int)v2 >= 0xFFFFFED8) )
    v3 = 0;
  v4 = v3 - 1;
  if ( (unsigned int)v4 <= 0x126 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  return v3;
}
