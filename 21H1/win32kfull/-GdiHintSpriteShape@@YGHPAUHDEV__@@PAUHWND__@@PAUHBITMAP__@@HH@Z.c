/*
 * XREFs of ?GdiHintSpriteShape@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@HH@Z @ 0x9F2D8
 * Callers:
 *     _GreHintSpriteShape@28 @ 0x23FC0 (_GreHintSpriteShape@28.c)
 *     _GreTransferDwmStateToSpriteState@8 @ 0xCF1B4 (_GreTransferDwmStateToSpriteState@8.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z @ 0x9F37A (-pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z.c)
 *     ?pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x9FC28 (-pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 *     ?pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x1DF410 (-pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YGXPAVSPRITE@@VERECTL@@@Z @ 0x1DFD02 (-vSpAddAndCompactDirtyRect@@YGXPAVSPRITE@@VERECTL@@@Z.c)
 */

int __userpurge GdiHintSpriteShape@<eax>(int a1@<ecx>, HDEV a2, struct SPRITE *a3, HBITMAP a4, int a5, int a6)
{
  int v6; // edi
  struct SPRITE *Sprite; // eax
  struct SPRITE *v8; // edi
  int v9; // esi
  struct _METASPRITE *MetaSprite; // eax
  struct _METASPRITE *v12; // ebx
  unsigned int v13; // esi
  _DWORD **v14; // ecx
  _DWORD *v15; // ecx
  int v16; // eax
  unsigned int v17; // eax
  int v18; // ebx
  HWND v19; // [esp+0h] [ebp-2Ch]
  HBITMAP v20; // [esp+0h] [ebp-2Ch]
  HBITMAP v21; // [esp+0h] [ebp-2Ch]
  void *v22; // [esp+4h] [ebp-28h]
  int v23; // [esp+4h] [ebp-28h]
  int v24; // [esp+4h] [ebp-28h]
  int v25; // [esp+Ch] [ebp-20h]
  int v26; // [esp+10h] [ebp-1Ch]
  _BYTE v27[4]; // [esp+14h] [ebp-18h] BYREF
  char *v28; // [esp+18h] [ebp-14h]
  int v29; // [esp+1Ch] [ebp-10h] BYREF
  int v30; // [esp+20h] [ebp-Ch]
  int v31; // [esp+24h] [ebp-8h]
  _DWORD *v32; // [esp+28h] [ebp-4h]

  v29 = a1;
  v6 = 0;
  v30 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v27, (struct PDEVOBJ *)&v29);
  v31 = 0;
  v25 = v29 + 64;
  v28 = *(char **)(v29 + 104);
  if ( !v28 )
  {
    Sprite = pSpGetSprite(0, v19, v22);
    v8 = Sprite;
    if ( Sprite )
    {
      v9 = *(_DWORD *)Sprite;
      v30 = pSpHintSpriteShape(a3, v20, v23);
      if ( (v9 & 0x200) == 0 && (*(_DWORD *)v8 & 0x200) != 0 )
        v31 = 1;
      if ( a4 && !ERECTL::bEmpty((struct SPRITE *)((char *)v8 + 44)) )
        vSpAddAndCompactDirtyRect(
          v8,
          *((_DWORD *)v8 + 11),
          *((_DWORD *)v8 + 12),
          *((_DWORD *)v8 + 13),
          *((_DWORD *)v8 + 14));
LABEL_7:
      if ( v31 == 1 )
        _InterlockedIncrement(&glDelayedHintShape);
    }
    goto LABEL_9;
  }
  MetaSprite = pSpGetMetaSprite(0, v19, v22);
  v12 = MetaSprite;
  if ( !MetaSprite || (v13 = 0, !v28) )
  {
LABEL_9:
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v27);
    return v30;
  }
  v14 = (_DWORD **)((char *)MetaSprite + 16);
  v28 = (char *)MetaSprite + 16;
  while ( 1 )
  {
    v32 = *v14;
    v26 = *v32 & 0x200;
    v30 = pSpHintSpriteShape(a3, v21, v24);
    if ( !v30 )
      break;
    if ( !v26 && (*v32 & 0x200) != 0 )
      v31 = 1;
    if ( a4 && !ERECTL::bEmpty((ERECTL *)(v32 + 11)) )
      vSpAddAndCompactDirtyRect(v32, *v15, v15[1], v15[2], v15[3]);
    ++v13;
    v14 = (_DWORD **)(v28 + 4);
    v28 += 4;
    if ( v13 >= *(_DWORD *)(v25 + 40) )
    {
      v16 = *((_DWORD *)v12 + 2);
      if ( a2 )
        v17 = v16 | 0x40;
      else
        v17 = v16 & 0xFFFFFFBF;
      *((_DWORD *)v12 + 2) = v17;
      goto LABEL_7;
    }
  }
  if ( v13 )
  {
    v18 = (int)v12 + 4 * v13 + 12;
    do
    {
      pSpHintSpriteShape(a3, v21, v24);
      v18 -= 4;
      --v13;
    }
    while ( v13 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v27);
  return v6;
}
