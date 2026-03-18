/*
 * XREFs of PsGetJobEffectiveFreezeCount @ 0x14057B8F8
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x14060DAB0 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14064A78C (AlpcpDispatchConnectionRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobEffectiveFreezeCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 856);
}
