/*
 * XREFs of ZwInitiatePowerAction @ 0x1403F4350
 * Callers:
 *     PoShutdownBugCheck @ 0x1408E2F30 (PoShutdownBugCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwInitiatePowerAction(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
