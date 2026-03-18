/*
 * XREFs of ?SwitchMouseCursors@@YGXK_N@Z @ 0x148BA8
 * Callers:
 *     ?ContactVisualizationWorker@@YGHKPAXKHK@Z @ 0x14834D (-ContactVisualizationWorker@@YGHKPAXKHK@Z.c)
 *     ?ForceHidePenCursor@Feedback@@YGXH@Z @ 0x148792 (-ForceHidePenCursor@Feedback@@YGXH@Z.c)
 * Callees:
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

void __fastcall SwitchMouseCursors(int a1, unsigned __int8 a2)
{
  int v2; // ecx
  int v3; // ecx
  unsigned int v4; // eax

  v2 = a1 - 2;
  if ( !v2 )
  {
    _InterlockedAnd(&Feedback::gdwPointerCursorOps, 0xFFFFF8FF);
    v4 = (a2 + 1) << 9;
    goto LABEL_8;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    _InterlockedAnd(&Feedback::gdwPointerCursorOps, 0xFFFFF8FF);
    v4 = 256;
LABEL_8:
    _InterlockedOr(&Feedback::gdwPointerCursorOps, v4);
    return;
  }
  if ( v3 == 1 )
    _InterlockedOr(&Feedback::gdwPointerCursorOps, 1u);
  else
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
}
