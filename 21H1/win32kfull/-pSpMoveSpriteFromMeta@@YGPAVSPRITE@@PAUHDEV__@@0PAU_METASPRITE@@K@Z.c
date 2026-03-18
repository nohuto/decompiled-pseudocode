/*
 * XREFs of ?pSpMoveSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@K@Z @ 0x1DF497
 * Callers:
 *     _vSpDynamicModeChange@8 @ 0x9EE36 (_vSpDynamicModeChange@8.c)
 * Callees:
 *     ?vSpDeleteSprite@@YGXPAVSPRITE@@@Z @ 0x9ECB4 (-vSpDeleteSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z @ 0x9F37A (-pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z.c)
 */

struct SPRITE *__userpurge pSpMoveSpriteFromMeta@<eax>(
        int a1@<edx>,
        HDEV a2,
        HDEV a3,
        struct _METASPRITE *a4,
        unsigned int a5)
{
  HDEV v7; // edx
  int v8; // eax
  HDEV v9; // ebx
  int v10; // edi
  HDEV v11; // eax
  _BYTE *v12; // ecx
  HDEV v13; // eax
  HBITMAP v15; // [esp+0h] [ebp-10h]
  int v16; // [esp+4h] [ebp-Ch]
  int v17; // [esp+Ch] [ebp-4h]
  HDEV v18; // [esp+18h] [ebp+8h]

  v7 = a3;
  v17 = a1;
  v8 = *((_DWORD *)a2 + (_DWORD)a3 + 4);
  if ( v8 )
    *(_DWORD *)(v8 + 8) = 0;
  v9 = 0;
  v10 = *(_DWORD *)a2 != 0 ? v8 : 0;
  if ( *((_DWORD *)a2 + 3) )
  {
    v11 = a2 + 4;
    v18 = a2 + 4;
    do
    {
      if ( v9 != v7 || !v10 )
      {
        v12 = *(_BYTE **)v11;
        if ( (**(_BYTE **)v11 & 0x40) != 0 )
        {
          pSpHintSpriteShape(0, v12, 0, v15, v16);
          v12 = *(_BYTE **)v18;
        }
        vSpDeleteSprite(v12);
        v11 = v18;
        v7 = a3;
      }
      v9 = (HDEV)((char *)v9 + 1);
      v18 = ++v11;
    }
    while ( (unsigned int)v9 < *((_DWORD *)a2 + 3) );
    a1 = v17;
  }
  v13 = *(HDEV *)(a1 + 112);
  if ( v13 == a2 )
  {
    *(_DWORD *)(struct HDEV__ *)(a1 + 112) = a2[1];
  }
  else
  {
    while ( *((HDEV *)v13 + 1) != a2 )
      v13 = (HDEV)*((_DWORD *)v13 + 1);
    v13[1] = a2[1];
  }
  Win32FreePool(a2);
  return (struct SPRITE *)v10;
}
