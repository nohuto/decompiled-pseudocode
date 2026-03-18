/*
 * XREFs of ?vSpRemovePresent@@YGXPAUHDEV__@@PAU_PRESENT@@@Z @ 0x1E260D
 * Callers:
 *     _GreDeleteSpriteOverlapPresent@8 @ 0x7193A (_GreDeleteSpriteOverlapPresent@8.c)
 *     ?GreAddSpriteOverlapPresent@@YGHPAUHDEV__@@PAUHWND__@@@Z @ 0x1DB290 (-GreAddSpriteOverlapPresent@@YGHPAUHDEV__@@PAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpRemovePresent(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // ecx

  v2 = *(_DWORD *)(a1 + 116);
  if ( v2 == a2 )
  {
    *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 4);
  }
  else
  {
    while ( v2 )
    {
      v3 = (_DWORD *)(v2 + 4);
      v2 = *(_DWORD *)(v2 + 4);
      if ( v2 == a2 )
      {
        v2 = *(_DWORD *)(a2 + 4);
        *v3 = v2;
      }
    }
  }
}
