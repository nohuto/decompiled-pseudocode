/*
 * XREFs of PsGetJobEffectiveFreezeCount @ 0x14057F968
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x1405E6138 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x1405EC7F0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobEffectiveFreezeCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 856);
}
