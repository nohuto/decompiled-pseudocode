/*
 * XREFs of ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXPEAUtagQMSG@@_N@Z @ 0x1C00017B0
 * Callers:
 *     HandleDeferredInput @ 0x1C0001270 (HandleDeferredInput.c)
 * Callees:
 *     ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C0001818 (-_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z.c)
 *     ?GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z @ 0x1C0001938 (-GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z.c)
 *     ?LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z @ 0x1C013FF98 (-LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z.c)
 */

void __fastcall KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        struct tagQMSG *a2,
        char a3)
{
  unsigned int ThreadId; // eax
  bool v5; // bl
  unsigned int KeyboardInputLatency; // eax
  KeyboardInputTelemetry *v7; // rcx

  if ( a3 )
  {
    KeyboardInputTelemetry::LogHanging(*((struct tagTHREADINFO **)a2 + 13), *((_QWORD *)a2 + 16));
  }
  else
  {
    ThreadId = (unsigned int)PsGetThreadId(**((PETHREAD **)a2 + 13));
    if ( gKeyboardInputTelemetry )
    {
      if ( dword_1C024FA0C == ThreadId )
      {
        v5 = ((*((_DWORD *)a2 + 6) - 257) & 0xFFFFFFFB) == 0;
        KeyboardInputLatency = KeyboardInputTelemetry::GetKeyboardInputLatency(gKeyboardInputTelemetry);
        KeyboardInputTelemetry::_UpdateTelemetryBuffer(v7, v5, KeyboardInputLatency);
      }
    }
  }
}
