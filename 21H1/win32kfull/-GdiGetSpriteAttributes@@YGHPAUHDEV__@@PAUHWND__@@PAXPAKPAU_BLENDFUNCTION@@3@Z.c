/*
 * XREFs of ?GdiGetSpriteAttributes@@YGHPAUHDEV__@@PAUHWND__@@PAXPAKPAU_BLENDFUNCTION@@3@Z @ 0x9F268
 * Callers:
 *     _GreGetSpriteAttributes@28 @ 0x20186 (_GreGetSpriteAttributes@28.c)
 * Callees:
 *     ?pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x9FC28 (-pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 *     ?pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x1DF410 (-pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 */

int __userpurge GdiGetSpriteAttributes@<eax>(
        int a1@<ecx>,
        HDEV a2,
        HWND a3,
        _DWORD *a4,
        unsigned int *a5,
        struct _BLENDFUNCTION *a6,
        unsigned int *a7)
{
  int v7; // edi
  struct HWND__ *Sprite; // esi
  struct _METASPRITE *MetaSprite; // eax
  HWND v11; // [esp+0h] [ebp-10h]
  void *v12; // [esp+4h] [ebp-Ch]
  _BYTE v13[4]; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h] BYREF

  v14 = a1;
  v7 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v13, (struct PDEVOBJ *)&v14);
  if ( *(_DWORD *)(v14 + 104) )
  {
    MetaSprite = pSpGetMetaSprite(0, v11, v12);
    if ( !MetaSprite )
      goto LABEL_5;
    Sprite = (struct HWND__ *)*((_DWORD *)MetaSprite + 4);
  }
  else
  {
    Sprite = (struct HWND__ *)pSpGetSprite(0, v11, v12);
  }
  if ( Sprite )
  {
    v7 = 1;
    *(_DWORD *)a3 = Sprite[43];
    *a4 = *((_DWORD *)Sprite + 42);
    *a5 = *((_DWORD *)Sprite + 41);
  }
LABEL_5:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v13);
  return v7;
}
