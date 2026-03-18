/*
 * XREFs of ZwFilterBootOption @ 0x1403F9DF0
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x140502750 (IopInitializeInMemoryDumpData.c)
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterBootOption(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
