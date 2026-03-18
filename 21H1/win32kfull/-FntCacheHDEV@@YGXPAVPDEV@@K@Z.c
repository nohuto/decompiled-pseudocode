/*
 * XREFs of ?FntCacheHDEV@@YGXPAVPDEV@@K@Z @ 0xE6180
 * Callers:
 *     _bEnableFontDriver@8 @ 0xE6112 (_bEnableFontDriver@8.c)
 *     _FontDriverQueryRoutine@24 @ 0x293EED (_FontDriverQueryRoutine@24.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

void __fastcall FntCacheHDEV(struct PDEV **a1, int a2)
{
  int v4; // [esp+8h] [ebp-4h] BYREF

  v4 = _ghsemFntCache;
  GreAcquireSemaphore(_ghsemFntCache);
  if ( (dword_274064 & 3) != 0 && dword_274068 && a2 )
    (&gaFntPDev)[a2] = a1;
  SEMOBJ::vUnlock((SEMOBJ *)&v4);
}
