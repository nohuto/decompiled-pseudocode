/*
 * XREFs of PsGetProcessJob @ 0x14034A3E0
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x14062CBDC (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140685C20 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 1296);
}
