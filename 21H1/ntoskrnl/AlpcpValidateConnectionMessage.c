/*
 * XREFs of AlpcpValidateConnectionMessage @ 0x140648B40
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140648258 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x140648CA8 (AlpcpFormatConnectionRequest.c)
 * Callees:
 *     AlpcpValidateMessage @ 0x1406107A8 (AlpcpValidateMessage.c)
 */

__int64 __fastcall AlpcpValidateConnectionMessage(__int64 a1, unsigned __int16 *a2, char a3)
{
  if ( !a3 )
    return AlpcpValidateMessage(a2, 0);
  if ( *a2 > (unsigned __int64)(*(_QWORD *)(a1 + 272) - 40LL) )
    *a2 = *(_WORD *)(a1 + 272) - 40;
  return 0LL;
}
