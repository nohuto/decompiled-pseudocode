/*
 * XREFs of ZwAddBootEntry @ 0x1403F8EB0
 * Callers:
 *     BiAddBootEntry @ 0x140972A20 (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
