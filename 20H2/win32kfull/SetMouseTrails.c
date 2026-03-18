/*
 * XREFs of SetMouseTrails @ 0x1C002AC88
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0028410 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     xxxRemoteReconnect @ 0x1C0156B10 (xxxRemoteReconnect.c)
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     SetPointer @ 0x1C002B0A0 (SetPointer.c)
 */

__int64 __fastcall SetMouseTrails(int a1)
{
  __int64 result; // rax

  SetPointer(0LL);
  LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = a1 != 0 ? a1 - 1 : 0;
  SetPointer(1LL);
  result = gProtocolType;
  if ( !gProtocolType )
  {
    result = LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) != 0;
    if ( (_DWORD)result != (WPP_MAIN_CB.SecurityDescriptor != 0LL) )
    {
      if ( LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
      {
        return PostMessage(*(_QWORD *)(*(_QWORD *)(gTermIO[2] + 464LL) + 24LL), 1025, 0, 0);
      }
      else
      {
        result = FindTimer(0LL, (__int64)WPP_MAIN_CB.SecurityDescriptor, 4u, 1, 0LL);
        WPP_MAIN_CB.SecurityDescriptor = 0LL;
      }
    }
  }
  return result;
}
