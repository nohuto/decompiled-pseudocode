/*
 * XREFs of ?pSpCreatePresent@@YGPAU_PRESENT@@PAUHDEV__@@PAUHWND__@@@Z @ 0x1DF39A
 * Callers:
 *     ?GreAddSpriteOverlapPresent@@YGHPAUHDEV__@@PAUHWND__@@@Z @ 0x1DB290 (-GreAddSpriteOverlapPresent@@YGHPAUHDEV__@@PAUHWND__@@@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

struct _PRESENT *__fastcall pSpCreatePresent(int a1, int a2)
{
  struct _PRESENT *result; // eax

  result = (struct _PRESENT *)PALLOCMEM2(8u, 1701998663, 1);
  if ( result )
  {
    *(_DWORD *)result = a2;
    *((_DWORD *)result + 1) = *(_DWORD *)(a1 + 116);
    *(_DWORD *)(a1 + 116) = result;
  }
  return result;
}
