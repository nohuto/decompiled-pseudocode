/*
 * XREFs of _CloseFNTCache@0 @ 0xD73B0
 * Callers:
 *     _xxxLW_LoadFonts@4 @ 0xD6E2E (_xxxLW_LoadFonts@4.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     _EngCloseFNTCache@0 @ 0xD742A (_EngCloseFNTCache@0.c)
 */

void __stdcall CloseFNTCache()
{
  int v0; // [esp+0h] [ebp-4h] BYREF

  v0 = _ghsemFntCache;
  GreAcquireSemaphore(_ghsemFntCache);
  EngCloseFNTCache();
  SEMOBJ::vUnlock((SEMOBJ *)&v0);
}
