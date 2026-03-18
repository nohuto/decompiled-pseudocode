/*
 * XREFs of StartScreenSaver @ 0x1C02245F0
 * Callers:
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 * Callees:
 *     SetTimerCoalescingTolerance @ 0x1C0108CC0 (SetTimerCoalescingTolerance.c)
 */

void __fastcall StartScreenSaver(int a1)
{
  __int64 v1; // rdi
  __int64 GlobalTickCount; // rbx
  __int64 v3; // rdx

  v1 = a1;
  if ( !gppiScreenSaver && (gPowerState & 1) == 0 )
  {
    GlobalTickCount = CInputGlobals::GetGlobalTickCount(gpInputGlobals, 1LL);
    if ( GlobalTickCount != CInputGlobals::GetLastInputTime(gpInputGlobals) )
    {
      if ( !gProtocolType && !gPowerTransitionsState[0] )
      {
        v3 = 2LL;
        goto LABEL_10;
      }
      if ( !(_DWORD)v1 || (*gpsi & 0x200) != 0 )
      {
        v3 = v1;
LABEL_10:
        if ( (int)PostWinlogonMessage(1024LL, v3) >= 0 )
        {
          CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 1LL);
          SetTimerCoalescingTolerance(3);
        }
      }
    }
  }
}
