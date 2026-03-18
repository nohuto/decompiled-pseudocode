/*
 * XREFs of ZwCreateTokenEx @ 0x1403F9A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateTokenEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
