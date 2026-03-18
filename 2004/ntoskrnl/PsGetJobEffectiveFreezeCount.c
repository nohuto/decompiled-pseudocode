/*
 * XREFs of PsGetJobEffectiveFreezeCount @ 0x14057BF38
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x14062CBDC (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140685C20 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobEffectiveFreezeCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 856);
}
