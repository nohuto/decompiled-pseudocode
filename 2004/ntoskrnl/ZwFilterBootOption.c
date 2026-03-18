/*
 * XREFs of ZwFilterBootOption @ 0x1403F5220
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x1404FEE80 (IopInitializeInMemoryDumpData.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterBootOption(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
