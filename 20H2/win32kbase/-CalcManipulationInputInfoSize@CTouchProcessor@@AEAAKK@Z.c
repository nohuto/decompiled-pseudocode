/*
 * XREFs of ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C01865E0
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C0186320 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C018BBE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::CalcManipulationInputInfoSize(
        CTouchProcessor *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx

  if ( !(_DWORD)a2
    || (v4 = 240LL * (unsigned int)(a2 - 1), v4 > 0xFFFFFFFF)
    || (v5 = v4 + 296, (unsigned int)v4 >= 0xFFFFFED8) )
  {
    v5 = 0;
  }
  v6 = v5 - 1;
  if ( (unsigned int)v6 <= 0x126 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, a3, a4);
  return v5;
}
