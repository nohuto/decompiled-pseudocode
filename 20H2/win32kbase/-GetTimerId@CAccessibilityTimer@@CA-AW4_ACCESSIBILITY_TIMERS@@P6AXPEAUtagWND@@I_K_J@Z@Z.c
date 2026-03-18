/*
 * XREFs of ?GetTimerId@CAccessibilityTimer@@CA?AW4_ACCESSIBILITY_TIMERS@@P6AXPEAUtagWND@@I_K_J@Z@Z @ 0x1C01A31FC
 * Callers:
 *     ?SetTimer@CAccessibilityTimer@@SA?AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z @ 0x1C01A3300 (-SetTimer@CAccessibilityTimer@@SA-AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CAccessibilityTimer::GetTimerId(
        void (__fastcall *a1)(struct tagWND *a1),
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 1;
  if ( (char *)a1 != (char *)FKActivationTimer )
  {
    if ( (char *)a1 == (char *)xxxFKRepeatRateTimer )
    {
      return 2;
    }
    else if ( a1 == FKBounceKeyTimer )
    {
      return 3;
    }
    else if ( (char *)a1 == (char *)xxxFKAcceptanceDelayTimer )
    {
      return 4;
    }
    else if ( (char *)a1 == (char *)xxxMKMoveAccelCursorTimer )
    {
      return 5;
    }
    else if ( (char *)a1 == (char *)xxxMKMoveConstCursorTimer )
    {
      return 6;
    }
    else if ( (char *)a1 == (char *)xxxToggleKeysTimer )
    {
      return 7;
    }
    else if ( a1 == xxxAccessTimeOutTimer )
    {
      return 8;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    }
  }
  return v4;
}
