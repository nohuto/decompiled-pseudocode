/*
 * XREFs of ZwDeleteBootEntry @ 0x1403F4FC0
 * Callers:
 *     BiDeleteBootEntry @ 0x14096E31C (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
