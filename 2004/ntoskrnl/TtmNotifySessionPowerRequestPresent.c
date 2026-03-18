/*
 * XREFs of TtmNotifySessionPowerRequestPresent @ 0x1408FB978
 * Callers:
 *     PopNotifySessionUserPowerRequestAttributed @ 0x1408DE310 (PopNotifySessionUserPowerRequestAttributed.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x1408DE3D4 (PopNotifySessionUserPowerRequestsPresent.c)
 * Callees:
 *     TtmpInsertPowerRequestToSession @ 0x1408FC770 (TtmpInsertPowerRequestToSession.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1408FD140 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmiLogSessionPowerRequestAcknowledged @ 0x140900AE8 (TtmiLogSessionPowerRequestAcknowledged.c)
 */

__int64 __fastcall TtmNotifySessionPowerRequestPresent(int a1, int a2, int a3, int a4, __int64 a5, int a6, char a7)
{
  char updated; // al

  if ( a7 )
    updated = TtmpUpdatePowerRequestAttribute(a1, a2, a3, a4, a5, a6);
  else
    updated = TtmpInsertPowerRequestToSession(a1, a2, a3, a4, a5, a6);
  return TtmiLogSessionPowerRequestAcknowledged(a1, a2, a3, a4, a5, a6, a7, updated);
}
