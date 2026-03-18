/*
 * XREFs of ZwAddBootEntry @ 0x1403F3070
 * Callers:
 *     BiAddBootEntry @ 0x14096B8B0 (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
