/*
 * XREFs of ZwModifyBootEntry @ 0x1403FA430
 * Callers:
 *     BiModifyBootEntry @ 0x1409750D8 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwModifyBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
