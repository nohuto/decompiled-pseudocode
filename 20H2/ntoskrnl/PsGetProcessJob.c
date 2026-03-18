/*
 * XREFs of PsGetProcessJob @ 0x14031B630
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x1405E6138 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x1405EC7F0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 1296);
}
