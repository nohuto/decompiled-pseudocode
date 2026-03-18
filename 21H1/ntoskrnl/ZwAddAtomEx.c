/*
 * XREFs of ZwAddAtomEx @ 0x1403F3050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddAtomEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
