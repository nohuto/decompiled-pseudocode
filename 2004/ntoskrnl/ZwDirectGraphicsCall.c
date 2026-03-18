/*
 * XREFs of ZwDirectGraphicsCall @ 0x1403F50E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDirectGraphicsCall(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
