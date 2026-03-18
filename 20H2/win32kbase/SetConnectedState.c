/*
 * XREFs of SetConnectedState @ 0x1C00B83A0
 * Callers:
 *     xxxRemoteConnect @ 0x1C011C440 (xxxRemoteConnect.c)
 * Callees:
 *     PowerConnectionEvent @ 0x1C00B842C (PowerConnectionEvent.c)
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
