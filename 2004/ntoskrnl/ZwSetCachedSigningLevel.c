/*
 * XREFs of ZwSetCachedSigningLevel @ 0x1403F66E0
 * Callers:
 *     SPCallServerHandleFileIntegrityUpdate @ 0x140715FB4 (SPCallServerHandleFileIntegrityUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
