/*
 * XREFs of ZwSetCachedSigningLevel @ 0x1403FB2B0
 * Callers:
 *     SPCallServerHandleFileIntegrityUpdate @ 0x140723F74 (SPCallServerHandleFileIntegrityUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
