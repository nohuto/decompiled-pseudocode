/*
 * XREFs of ?GdiZorderSprite@@YGXPAUHDEV__@@PAUHWND__@@1@Z @ 0x9FBC6
 * Callers:
 *     _GreZorderSprite@16 @ 0x244DA (_GreZorderSprite@16.c)
 * Callees:
 *     ?pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x9FC28 (-pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 *     ?vSpZorderSprite@@YGXPAUHDEV__@@PAVSPRITE@@1@Z @ 0x9FC56 (-vSpZorderSprite@@YGXPAUHDEV__@@PAVSPRITE@@1@Z.c)
 *     ?pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x1DF410 (-pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 *     ?vSpZorderMetaSprite@@YGXPAUHDEV__@@PAU_METASPRITE@@1@Z @ 0x1E3374 (-vSpZorderMetaSprite@@YGXPAUHDEV__@@PAU_METASPRITE@@1@Z.c)
 */

void __userpurge GdiZorderSprite(int a1@<edx>, int a2@<ecx>, HDEV a3, HWND a4, HWND a5)
{
  int v5; // ebx
  HWND v6; // eax
  HWND Sprite; // eax
  HWND MetaSprite; // eax
  HDEV v9; // [esp-4h] [ebp-28h]
  HDEV v10; // [esp-4h] [ebp-28h]
  HDEV v11; // [esp-4h] [ebp-28h]
  HWND v12; // [esp+0h] [ebp-24h]
  void *v13; // [esp+0h] [ebp-24h]
  struct SPRITE *v14; // [esp+0h] [ebp-24h]
  void *v15; // [esp+0h] [ebp-24h]
  struct SPRITE *v16; // [esp+0h] [ebp-24h]
  void *v17; // [esp+0h] [ebp-24h]
  struct _METASPRITE *v18; // [esp+0h] [ebp-24h]
  void *v19; // [esp+4h] [ebp-20h]
  struct SPRITE *v20; // [esp+4h] [ebp-20h]
  struct SPRITE *v21; // [esp+4h] [ebp-20h]
  struct _METASPRITE *v22; // [esp+4h] [ebp-20h]
  _BYTE v23[4]; // [esp+10h] [ebp-14h] BYREF
  int v24; // [esp+14h] [ebp-10h]
  _DWORD v25[2]; // [esp+18h] [ebp-Ch] BYREF
  unsigned int v26; // [esp+20h] [ebp-4h]

  v24 = a2;
  v25[0] = a2;
  v5 = a2 + 64;
  v25[1] = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v23, (struct PDEVOBJ *)v25);
  if ( *(_DWORD *)(v5 + 40) )
  {
    v26 = 0;
    do
    {
      Sprite = (HWND)pSpGetSprite(0, v12, v19);
      pSpGetSprite(0, Sprite, v15);
      vSpZorderSprite(v10, v16, v21);
      ++v26;
    }
    while ( v26 < *(_DWORD *)(v5 + 40) );
    MetaSprite = (HWND)pSpGetMetaSprite(0, v12, v19);
    pSpGetMetaSprite(0, MetaSprite, v17);
    vSpZorderMetaSprite(v11, v18, v22);
  }
  else
  {
    v6 = (HWND)pSpGetSprite(0, v12, v19);
    pSpGetSprite(0, v6, v13);
    vSpZorderSprite(v9, v14, v20);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v23);
}
