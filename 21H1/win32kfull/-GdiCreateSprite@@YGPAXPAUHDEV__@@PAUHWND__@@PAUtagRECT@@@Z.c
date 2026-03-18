/*
 * XREFs of ?GdiCreateSprite@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@@Z @ 0x9F0D4
 * Callers:
 *     ?GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG@Z @ 0x1F714 (-GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG.c)
 *     _GreTransferDwmStateToSpriteState@8 @ 0xCF1B4 (_GreTransferDwmStateToSpriteState@8.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vSpDeleteSprite@@YGXPAVSPRITE@@@Z @ 0x9ECB4 (-vSpDeleteSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YGPAVSPRITE@@PAUHDEV__@@PAU_RECTL@@PAUHWND__@@PAU_POINTL@@@Z @ 0x9F136 (-pSpCreateSprite@@YGPAVSPRITE@@PAUHDEV__@@PAU_RECTL@@PAUHWND__@@PAU_POINTL@@@Z.c)
 */

struct SPRITE *__userpurge GdiCreateSprite@<eax>(HDEV a1@<edx>, _DWORD *a2@<ecx>, HDEV a3, HWND a4, struct tagRECT *a5)
{
  struct SPRITE *v6; // esi
  int v7; // ecx
  struct SPRITE *v9; // ebx
  _DWORD *v10; // ecx
  unsigned int v11; // edi
  int v12; // ecx
  struct _RECTL *v13; // eax
  int v14; // ecx
  struct SPRITE *Sprite; // eax
  int v16; // eax
  _DWORD **v17; // esi
  HWND v18; // [esp+0h] [ebp-28h]
  struct _POINTL *v19; // [esp+4h] [ebp-24h]
  _DWORD *v20; // [esp+10h] [ebp-18h] BYREF
  _DWORD *v21; // [esp+14h] [ebp-14h]
  HDEV v22; // [esp+18h] [ebp-10h]
  int v23; // [esp+1Ch] [ebp-Ch] BYREF
  int v24; // [esp+20h] [ebp-8h] BYREF
  int v25; // [esp+24h] [ebp-4h]

  v20 = a2;
  v22 = a1;
  v6 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v23, (struct PDEVOBJ *)&v20);
  v21 = v20;
  v7 = v20[26];
  if ( v7 )
  {
    v9 = (struct SPRITE *)PALLOCMEM2(4 * v7 + 20, 1836086087, 0);
    if ( v9 )
    {
      v10 = v21;
      v11 = 0;
      if ( v21[26] )
      {
        while ( 1 )
        {
          v12 = v10[27];
          v13 = 0;
          v24 = 0;
          v25 = 0;
          v14 = *(_DWORD *)(v12 + 4 * v11);
          if ( a3 )
          {
            v24 = *(_DWORD *)a3 - *(_DWORD *)(v14 + 1836);
            v25 = *((_DWORD *)a3 + 1) - *(_DWORD *)(v14 + 1840);
            v13 = (struct _RECTL *)&v24;
          }
          Sprite = pSpCreateSprite(v22, v13, v18, v19);
          if ( !Sprite )
            break;
          v10 = v21;
          *((_DWORD *)v9 + v11++ + 4) = Sprite;
          *((_DWORD *)Sprite + 2) = v9;
          if ( v11 >= v10[26] )
            goto LABEL_10;
        }
        if ( v11 )
        {
          v17 = (_DWORD **)((char *)v9 + 4 * v11 + 12);
          do
          {
            vSpDeleteSprite(*v17--);
            --v11;
          }
          while ( v11 );
          v6 = 0;
        }
        Win32FreePool(v9);
      }
      else
      {
LABEL_10:
        *(_DWORD *)v9 = v22;
        v16 = v10[26];
        *((_DWORD *)v9 + 2) = 0;
        v6 = v9;
        *((_DWORD *)v9 + 3) = v16;
        *((_DWORD *)v9 + 1) = v10[28];
        v10[28] = v9;
      }
    }
  }
  else
  {
    v6 = pSpCreateSprite(a1, 0, v18, v19);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v23);
  return v6;
}
