/*
 * XREFs of ZwDrawText @ 0x1403F9D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDrawText(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
