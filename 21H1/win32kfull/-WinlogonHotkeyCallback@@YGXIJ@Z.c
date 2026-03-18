/*
 * XREFs of ?WinlogonHotkeyCallback@@YGXIJ@Z @ 0x147490
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingWinPHotKeyEvent@@YGXXZ @ 0x187218 (-TraceLoggingWinPHotKeyEvent@@YGXXZ.c)
 */

void __stdcall WinlogonHotkeyCallback(unsigned int a1, int a2)
{
  if ( a1 == 10 )
  {
    PostWinlogonMessage(1026, 15);
  }
  else
  {
    if ( a1 == 7 )
      TraceLoggingWinPHotKeyEvent();
    PostWinlogonMessage(1028, a1);
  }
}
