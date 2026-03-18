/*
 * XREFs of SetMouseTrails @ 0x1C004C4B8
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00492E0 (xxxUpdatePerUserSystemParameters.c)
 *     xxxRemoteReconnect @ 0x1C01541B0 (xxxRemoteReconnect.c)
 * Callees:
 *     SetPointer @ 0x1C004D9F0 (SetPointer.c)
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 */

__int64 __fastcall SetMouseTrails(int a1)
{
  __int64 result; // rax

  SetPointer(0LL);
  LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) = a1 != 0 ? a1 - 1 : 0;
  SetPointer(1LL);
  result = gProtocolType;
  if ( !gProtocolType )
  {
    result = LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) != 0;
    if ( (_DWORD)result != (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount != 0LL) )
    {
      if ( LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) )
      {
        return PostMessage(*(_QWORD *)(*(_QWORD *)(gTermIO[2] + 456LL) + 24LL), 1025LL, 0LL, 0LL);
      }
      else
      {
        result = FindTimer(0, WPP_MAIN_CB.ActiveThreadCount, 4, 1, 0LL);
        *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = 0LL;
      }
    }
  }
  return result;
}
