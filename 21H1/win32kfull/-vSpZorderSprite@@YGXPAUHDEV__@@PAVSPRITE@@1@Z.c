/*
 * XREFs of ?vSpZorderSprite@@YGXPAUHDEV__@@PAVSPRITE@@1@Z @ 0x9FC56
 * Callers:
 *     ?GdiZorderSprite@@YGXPAUHDEV__@@PAUHWND__@@1@Z @ 0x9FBC6 (-GdiZorderSprite@@YGXPAUHDEV__@@PAUHWND__@@1@Z.c)
 *     ?GdiMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@H@Z @ 0x1DAB6D (-GdiMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@H@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     ?vSpRedrawSprite@@YGXPAVSPRITE@@@Z @ 0x9FD10 (-vSpRedrawSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YGXPAUHDEV__@@@Z @ 0xA00C0 (-vSpRemoveAllSpriteOverlapPresents@@YGXPAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YGXPAU_SPRITESTATE@@@Z @ 0xA0662 (-vSpComputeSpriteRanges@@YGXPAU_SPRITESTATE@@@Z.c)
 *     ?vSpRenumberZOrder@@YGXPAU_SPRITESTATE@@@Z @ 0xA0A14 (-vSpRenumberZOrder@@YGXPAU_SPRITESTATE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __userpurge vSpZorderSprite(int a1@<edx>, int a2@<ecx>, HDEV a3, struct SPRITE *a4, struct SPRITE *a5)
{
  _DWORD *v5; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  struct _SPRITESTATE *v14; // [esp+0h] [ebp-84h]
  HDEV v15; // [esp+0h] [ebp-84h]
  struct _SPRITESTATE *v16; // [esp+0h] [ebp-84h]
  struct SPRITE *v17; // [esp+0h] [ebp-84h]
  _BYTE v18[112]; // [esp+Ch] [ebp-78h] BYREF
  int v19; // [esp+7Ch] [ebp-8h]
  int v20; // [esp+80h] [ebp-4h] BYREF

  v19 = a2;
  v5 = (_DWORD *)(a2 + 64);
  v20 = a2;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v18, (struct PDEVOBJ *)&v20);
  v7 = v5[1];
  if ( a1 && v7 )
  {
    if ( v7 == a1 )
    {
      v5[1] = *(_DWORD *)(v7 + 16);
      v8 = *(_DWORD *)(v7 + 16);
      if ( v8 )
        *(_DWORD *)(v8 + 20) = 0;
      else
        v5[2] = 0;
      v9 = a1 + 16;
      *(_DWORD *)(v7 + 16) = 0;
      *(_DWORD *)(v7 + 20) = 0;
      v10 = *(_DWORD *)(a1 + 16);
    }
    else
    {
      v9 = a1 + 16;
      v12 = *(_DWORD *)(a1 + 20);
      if ( v5[2] == a1 )
        v5[2] = v12;
      else
        *(_DWORD *)(*(_DWORD *)v9 + 20) = v12;
      *(_DWORD *)(*(_DWORD *)(a1 + 20) + 16) = *(_DWORD *)v9;
      v10 = 0;
      *(_DWORD *)v9 = 0;
      *(_DWORD *)(a1 + 20) = 0;
    }
    if ( !v10 && !*(_DWORD *)(a1 + 20) )
    {
      if ( a3 )
      {
        *(_DWORD *)(struct HDEV__ *)v9 = a3[4];
        v13 = *((_DWORD *)a3 + 4);
        if ( v13 )
          *(_DWORD *)(v13 + 20) = a1;
        *((_DWORD *)a3 + 4) = a1;
        *(_DWORD *)(a1 + 20) = a3;
        if ( (HDEV)v5[2] == a3 )
          v5[2] = a1;
      }
      else
      {
        *(_DWORD *)v9 = v5[1];
        v11 = v5[1];
        if ( v11 )
          *(_DWORD *)(v11 + 20) = a1;
        else
          v5[2] = a1;
        v5[1] = a1;
      }
      vSpRenumberZOrder(v14);
      vSpRemoveAllSpriteOverlapPresents(v15);
      ++giSpriteUniqueness;
      v5[21] = 0;
      vSpComputeSpriteRanges(v16);
      vSpRedrawSprite(v17);
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v18);
}
