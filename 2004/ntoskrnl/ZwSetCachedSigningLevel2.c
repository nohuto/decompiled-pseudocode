/*
 * XREFs of ZwSetCachedSigningLevel2 @ 0x1403F6700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
