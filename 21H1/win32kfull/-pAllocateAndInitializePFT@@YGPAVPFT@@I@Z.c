/*
 * XREFs of ?pAllocateAndInitializePFT@@YGPAVPFT@@I@Z @ 0xE7EE0
 * Callers:
 *     ?bInitPrivatePFT@@YGHXZ @ 0x1D0823 (-bInitPrivatePFT@@YGHXZ.c)
 *     _bInitFontTables@0 @ 0x292DA4 (_bInitFontTables@0.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

struct PFT *__fastcall pAllocateAndInitializePFT(int a1)
{
  struct PFT *result; // eax

  result = (struct PFT *)PALLOCMEM2(4 * a1 + 24, 1952870471, 1);
  if ( result )
  {
    *((_DWORD *)result + 4) = 0;
    *((_DWORD *)result + 5) = 0;
    *((_DWORD *)result + 3) = a1;
  }
  return result;
}
