/*
 * XREFs of ?GdiGetSpriteClipRgns@@YGHPAUHDEV__@@PAUHRGN__@@@Z @ 0x1DA9EC
 * Callers:
 *     ?InternalSpritesCollision@@YGHPAUHDEV__@@PAUHWND__@@PAUHRGN__@@@Z @ 0x1D3470 (-InternalSpritesCollision@@YGHPAUHDEV__@@PAUHWND__@@PAUHRGN__@@@Z.c)
 * Callees:
 *     ??1RGNOBJAPI@@QAE@XZ @ 0x24D20 (--1RGNOBJAPI@@QAE@XZ.c)
 *     ?bSpGetSpriteClipRgns@@YGHPAUHDEV__@@AAVRGNOBJAPI@@@Z @ 0x1DE1C0 (-bSpGetSpriteClipRgns@@YGHPAUHDEV__@@AAVRGNOBJAPI@@@Z.c)
 */

int __fastcall GdiGetSpriteClipRgns(int a1, HRGN a2)
{
  unsigned int v2; // ebx
  int SpriteClipRgns; // esi
  HDEV v6; // [esp+0h] [ebp-18h]
  struct RGNOBJAPI *v7; // [esp+4h] [ebp-14h]
  _DWORD v8[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v8, a2, 0);
  SpriteClipRgns = 1;
  if ( v8[0] )
  {
    if ( *(_DWORD *)(a1 + 104) )
    {
      do
      {
        SpriteClipRgns &= bSpGetSpriteClipRgns(v6, v7);
        ++v2;
      }
      while ( v2 < *(_DWORD *)(a1 + 104) );
    }
    else
    {
      SpriteClipRgns = bSpGetSpriteClipRgns(v6, v7);
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v8);
  return SpriteClipRgns;
}
