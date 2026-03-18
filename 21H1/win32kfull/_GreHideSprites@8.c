/*
 * XREFs of _GreHideSprites@8 @ 0xACF96
 * Callers:
 *     <none>
 * Callees:
 *     ?vSpHideSprites@@YGXPAUHDEV__@@H@Z @ 0xACFC2 (-vSpHideSprites@@YGXPAUHDEV__@@H@Z.c)
 */

void __stdcall GreHideSprites(int a1, int a2)
{
  unsigned int v2; // edi
  HDEV v3; // [esp+0h] [ebp-8h]
  int v4; // [esp+4h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 104) )
  {
    v2 = 0;
    do
    {
      vSpHideSprites(v3, v4);
      ++v2;
    }
    while ( v2 < *(_DWORD *)(a1 + 104) );
  }
  else
  {
    vSpHideSprites(v3, v4);
  }
}
