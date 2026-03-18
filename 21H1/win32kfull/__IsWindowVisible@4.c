/*
 * XREFs of __IsWindowVisible@4 @ 0xAB3AC
 * Callers:
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     ?xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z @ 0x1A17E9 (-xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall _IsWindowVisible(int a1)
{
  int v1; // eax

  if ( !a1 )
    return 1;
  while ( 1 )
  {
    v1 = *(_DWORD *)(a1 + 20);
    if ( (*(_BYTE *)(v1 + 23) & 0x10) == 0 && (*(_BYTE *)(v1 + 17) & 8) == 0 )
      break;
    if ( (*(_WORD *)(v1 + 30) & 0x3FFF) == 0x29D )
      return 1;
    a1 = *(_DWORD *)(a1 + 56);
  }
  return 0;
}
