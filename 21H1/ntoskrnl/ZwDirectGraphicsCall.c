/*
 * XREFs of ZwDirectGraphicsCall @ 0x1403F3E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDirectGraphicsCall(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
