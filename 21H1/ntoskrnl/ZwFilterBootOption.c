/*
 * XREFs of ZwFilterBootOption @ 0x1403F3F90
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x1404FE830 (IopInitializeInMemoryDumpData.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterBootOption(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
