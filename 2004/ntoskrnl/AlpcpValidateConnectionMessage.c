/*
 * XREFs of AlpcpValidateConnectionMessage @ 0x14062AF90
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x14062A6A8 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x14062B0F8 (AlpcpFormatConnectionRequest.c)
 * Callees:
 *     AlpcpValidateMessage @ 0x140688928 (AlpcpValidateMessage.c)
 */

__int64 __fastcall AlpcpValidateConnectionMessage(__int64 a1, _WORD *a2, char a3)
{
  if ( !a3 )
    return AlpcpValidateMessage(a2, 0LL);
  if ( (unsigned __int16)*a2 > (unsigned __int64)(*(_QWORD *)(a1 + 272) - 40LL) )
    *a2 = *(_WORD *)(a1 + 272) - 40;
  return 0LL;
}
