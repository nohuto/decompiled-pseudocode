/*
 * XREFs of ?GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z @ 0x1C0001938
 * Callers:
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXPEAUtagQMSG@@_N@Z @ 0x1C00017B0 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXPEAUtagQMSG@@_N@Z.c)
 *     ?LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z @ 0x1C013FF98 (-LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardInputTelemetry::GetKeyboardInputLatency(__int64 a1)
{
  return 1000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - a1) / gliQpcFreq.QuadPart;
}
