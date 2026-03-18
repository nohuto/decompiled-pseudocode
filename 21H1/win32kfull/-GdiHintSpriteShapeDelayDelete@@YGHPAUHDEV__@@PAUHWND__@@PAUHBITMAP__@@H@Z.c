/*
 * XREFs of ?GdiHintSpriteShapeDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@H@Z @ 0x1DAA49
 * Callers:
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x5BD44 (-vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     _GreHintSpriteShapeDelayDelete@24 @ 0x1CE666 (_GreHintSpriteShapeDelayDelete@24.c)
 * Callees:
 *     ?pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z @ 0x9F37A (-pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z.c)
 *     ?pSpGetMetaSpriteDelayDelete@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x1DF43D (-pSpGetMetaSpriteDelayDelete@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 *     ?pSpGetSpriteDelayDelete@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x1DF46A (-pSpGetSpriteDelayDelete@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 */

int __userpurge GdiHintSpriteShapeDelayDelete@<eax>(int a1@<ecx>, HDEV a2, HWND a3, HBITMAP a4, int a5)
{
  int v5; // edi
  struct _METASPRITE *v6; // eax
  struct _METASPRITE *v7; // ebx
  unsigned int v8; // esi
  _BYTE **v9; // eax
  _BYTE *v10; // ecx
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  _BYTE **v14; // ebx
  struct SPRITE *v15; // ebx
  int v16; // esi
  HWND v18; // [esp+0h] [ebp-28h]
  HBITMAP v19; // [esp+0h] [ebp-28h]
  HBITMAP v20; // [esp+0h] [ebp-28h]
  void *v21; // [esp+4h] [ebp-24h]
  int v22; // [esp+4h] [ebp-24h]
  int v23; // [esp+4h] [ebp-24h]
  _BYTE v24[4]; // [esp+Ch] [ebp-1Ch] BYREF
  int v25; // [esp+10h] [ebp-18h]
  int v26; // [esp+14h] [ebp-14h]
  int v27; // [esp+18h] [ebp-10h] BYREF
  int v28; // [esp+1Ch] [ebp-Ch]
  _DWORD **v29; // [esp+20h] [ebp-8h]
  int v30; // [esp+24h] [ebp-4h]

  v27 = a1;
  v5 = 0;
  v28 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v24, (struct PDEVOBJ *)&v27);
  v30 = 0;
  v25 = v27 + 64;
  v29 = *(_DWORD ***)(v27 + 104);
  if ( !v29 )
  {
    v15 = pSpGetSpriteDelayDelete(0, v18, v21);
    v16 = *(_DWORD *)v15;
    v28 = pSpHintSpriteShape((HSURF)a2, v15, 0, v20, v23);
    if ( (v16 & 0x200) == 0 && (*(_DWORD *)v15 & 0x200) != 0 )
    {
      v11 = 1;
LABEL_22:
      if ( v11 == 1 )
        _InterlockedIncrement(&glDelayedHintShape);
    }
    goto LABEL_24;
  }
  v6 = pSpGetMetaSpriteDelayDelete(0, v18, v21);
  v7 = v6;
  if ( !v6 || (v8 = 0, !v29) )
  {
LABEL_24:
    v5 = v28;
    goto LABEL_25;
  }
  v9 = (_BYTE **)((char *)v6 + 16);
  v29 = (_DWORD **)((char *)v7 + 16);
  while ( 1 )
  {
    v10 = *v9;
    v26 = *(_DWORD *)*v9 & 0x200;
    v28 = pSpHintSpriteShape((HSURF)a2, v10, 0, v19, v22);
    if ( !v28 )
      break;
    if ( v26 || (**v29 & 0x200) == 0 )
    {
      v11 = v30;
    }
    else
    {
      v11 = 1;
      v30 = 1;
    }
    ++v8;
    v9 = (_BYTE **)++v29;
    if ( v8 >= *(_DWORD *)(v25 + 40) )
    {
      v12 = *((_DWORD *)v7 + 2);
      if ( a2 )
        v13 = v12 | 0x40;
      else
        v13 = v12 & 0xFFFFFFBF;
      *((_DWORD *)v7 + 2) = v13;
      goto LABEL_22;
    }
  }
  if ( v8 )
  {
    v14 = (_BYTE **)((char *)v7 + 4 * v8 + 12);
    do
    {
      pSpHintSpriteShape(0, *v14--, 0, v19, v22);
      --v8;
    }
    while ( v8 );
  }
LABEL_25:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v24);
  return v5;
}
