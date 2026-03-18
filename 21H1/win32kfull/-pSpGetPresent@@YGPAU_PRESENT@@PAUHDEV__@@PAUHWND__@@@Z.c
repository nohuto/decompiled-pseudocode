/*
 * XREFs of ?pSpGetPresent@@YGPAU_PRESENT@@PAUHDEV__@@PAUHWND__@@@Z @ 0x719BA
 * Callers:
 *     _GreDeleteSpriteOverlapPresent@8 @ 0x7193A (_GreDeleteSpriteOverlapPresent@8.c)
 *     ?GreAddSpriteOverlapPresent@@YGHPAUHDEV__@@PAUHWND__@@@Z @ 0x1DB290 (-GreAddSpriteOverlapPresent@@YGHPAUHDEV__@@PAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

struct _PRESENT *__fastcall pSpGetPresent(int a1, int a2)
{
  struct _PRESENT *result; // eax

  result = 0;
  if ( a2 )
  {
    for ( result = *(struct _PRESENT **)(a1 + 116);
          result && *(_DWORD *)result != a2;
          result = (struct _PRESENT *)*((_DWORD *)result + 1) )
    {
      ;
    }
  }
  return result;
}
