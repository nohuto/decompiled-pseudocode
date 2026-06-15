/*
 * XREFs of sub_1800EA4B8 @ 0x1800EA4B8
 * Callers:
 *     sub_180076DE0 @ 0x180076DE0 (sub_180076DE0.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall sub_1800EA4B8(__int64 a1)
{
  RPC_STATUS result; // eax

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    return RpcRevertToSelf();
  }
  return result;
}
