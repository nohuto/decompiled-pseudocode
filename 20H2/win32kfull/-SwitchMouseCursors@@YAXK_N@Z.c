/*
 * XREFs of ?SwitchMouseCursors@@YAXK_N@Z @ 0x1C01DA68C
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01D9BC4 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 *     ?ForceHidePenCursor@Feedback@@YAXH@Z @ 0x1C01DA12C (-ForceHidePenCursor@Feedback@@YAXH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall SwitchMouseCursors(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ecx
  __int64 v5; // rcx

  v4 = a1 - 2;
  if ( v4 )
  {
    v5 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
        _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 1u);
      else
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3, a4);
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0xFFFFF8FF);
      _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0x100u);
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0xFFFFF8FF);
    _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, ((unsigned __int8)a2 + 1) << 9);
  }
}
