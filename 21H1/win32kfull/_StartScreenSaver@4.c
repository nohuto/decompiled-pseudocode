/*
 * XREFs of _StartScreenSaver@4 @ 0x1857D7
 * Callers:
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 * Callees:
 *     _SetTimerCoalescingTolerance@4 @ 0xAF316 (_SetTimerCoalescingTolerance@4.c)
 */

void __stdcall StartScreenSaver(int a1)
{
  __int64 GlobalTickCount; // kr00_8
  int v2; // eax

  if ( !_gppiScreenSaver && (_gPowerState[0] & 1) == 0 )
  {
    GlobalTickCount = CInputGlobals::GetGlobalTickCount(_gpInputGlobals, 1);
    if ( GlobalTickCount != CInputGlobals::GetLastInputTime(_gpInputGlobals) )
    {
      if ( !_gProtocolType && !_gPowerTransitionsState[0] )
      {
        v2 = PostWinlogonMessage(1024, 2);
        goto LABEL_10;
      }
      if ( !a1 || (*_gpsi & 0x200) != 0 )
      {
        v2 = PostWinlogonMessage(1024, a1);
LABEL_10:
        if ( v2 >= 0 )
        {
          CInputGlobals::UpdateGlobalTickCount(_gpInputGlobals, 1);
          SetTimerCoalescingTolerance(3);
        }
      }
    }
  }
}
