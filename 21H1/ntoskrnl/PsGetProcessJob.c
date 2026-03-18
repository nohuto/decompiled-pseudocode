/*
 * XREFs of PsGetProcessJob @ 0x14030D0F0
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x14060DAB0 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14064A78C (AlpcpDispatchConnectionRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 1296);
}
