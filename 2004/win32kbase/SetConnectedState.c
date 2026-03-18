/*
 * XREFs of SetConnectedState @ 0x1C0061400
 * Callers:
 *     xxxRemoteConnect @ 0x1C011E780 (xxxRemoteConnect.c)
 * Callees:
 *     PowerConnectionEvent @ 0x1C006148C (PowerConnectionEvent.c)
 */

__int64 __fastcall SetConnectedState(int a1, int a2)
{
  __int64 result; // rax

  gbConnected = a1;
  if ( a2 != gbConnectCompleted )
  {
    gbConnectCompleted = a2;
    return PowerConnectionEvent();
  }
  return result;
}
