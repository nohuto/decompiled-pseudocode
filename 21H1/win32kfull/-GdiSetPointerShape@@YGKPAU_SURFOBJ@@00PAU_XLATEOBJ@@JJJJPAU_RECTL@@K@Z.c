/*
 * XREFs of ?GdiSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0x1DB0D0
 * Callers:
 *     _EngSetPointerShape@40 @ 0xD00A2 (_EngSetPointerShape@40.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vSpDeleteSprite@@YGXPAVSPRITE@@@Z @ 0x9ECB4 (-vSpDeleteSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YGPAVSPRITE@@PAUHDEV__@@PAU_RECTL@@PAUHWND__@@PAU_POINTL@@@Z @ 0x9F136 (-pSpCreateSprite@@YGPAVSPRITE@@PAUHDEV__@@PAU_RECTL@@PAUHWND__@@PAU_POINTL@@@Z.c)
 *     ?vSpRedrawSprite@@YGXPAVSPRITE@@@Z @ 0x9FD10 (-vSpRedrawSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     ?GdiMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@H@Z @ 0x1DAB6D (-GdiMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@H@Z.c)
 *     ?bSpUpdateCursor@@YGHPAVSPRITE@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@@Z @ 0x1DE69D (-bSpUpdateCursor@@YGHPAVSPRITE@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@@Z.c)
 */

int __userpurge GdiSetPointerShape@<eax>(
        int a1@<edx>,
        LONG a2@<ecx>,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *a5,
        struct _XLATEOBJ *a6,
        ULONG a7,
        struct _SURFOBJ *a8,
        struct _SURFOBJ *a9,
        unsigned int a10,
        struct _RECTL *a11,
        unsigned int a12)
{
  int v12; // ebx
  unsigned int v13; // edi
  _DWORD *v14; // esi
  int v15; // ecx
  _DWORD *v16; // ecx
  _DWORD *v17; // esi
  struct SPRITE *Sprite; // eax
  _DWORD *v19; // ecx
  bool v20; // zf
  int *v21; // edi
  int i; // edi
  struct _XLATEOBJ *v24; // [esp+0h] [ebp-98h]
  struct _POINTL *v25; // [esp+4h] [ebp-94h]
  unsigned int v26; // [esp+10h] [ebp-88h]
  int v28; // [esp+18h] [ebp-80h]
  _DWORD *v29; // [esp+1Ch] [ebp-7Ch] BYREF
  LONG v30; // [esp+20h] [ebp-78h]
  int v31; // [esp+24h] [ebp-74h] BYREF
  _BYTE v32[112]; // [esp+28h] [ebp-70h] BYREF

  v12 = 2;
  v13 = ((a10 >> 8) & 0xF) + 1;
  v30 = a2;
  v28 = 2;
  if ( (unsigned __int8)(a10 >> 12) )
    v26 = 0x3E8u / (unsigned __int8)(a10 >> 12);
  else
    v26 = 0;
  v14 = *(_DWORD **)(a2 + 12);
  v29 = v14;
  v31 = _ghsemSprite;
  GreAcquireSemaphore(_ghsemSprite);
  if ( a1 || a3 )
  {
    while ( v14[185] < v13 )
    {
      Sprite = pSpCreateSprite(0, (int)v14, 0, 0, (HWND)v24, v25);
      if ( !Sprite )
        break;
      if ( !v14[192] )
        v14[192] = Sprite;
      ++v14[185];
      v14[193] = Sprite;
    }
    while ( v14[185] > v13 )
    {
      v19 = (_DWORD *)v14[193];
      v14[193] = v19[4];
      vSpDeleteSprite(v19);
      --v14[185];
    }
    v20 = v14[192] == 0;
    v14[187] = v26;
    if ( !v20 )
    {
      v21 = (int *)v14[193];
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v32, (struct PDEVOBJ *)&v29);
      while ( v21 )
      {
        bSpUpdatePosition(0, v21, 0, 0, (int)v24, (int)v25);
        vSpRedrawSprite(v21);
        v21 = (int *)v21[4];
      }
      SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v32);
      for ( i = v14[193]; i; i = *(_DWORD *)(i + 16) )
      {
        if ( !bSpUpdateCursor((struct SPRITE *)a3, a4, a9, v24, (struct _RECTL *)v25) )
        {
          v28 = 0;
          break;
        }
      }
      v14[182] = (char *)a5 - (char *)a9->dhsurf;
      v12 = v28;
      v14[183] = (char *)a6 - (char *)a9->hsurf;
    }
    GdiMovePointer(a7, v30, a8, v15, 1, (struct _RECTL *)v24, (int)v25);
  }
  else
  {
    v16 = (_DWORD *)v14[193];
    v14[192] = 0;
    v14[193] = 0;
    v14[185] = 0;
    if ( v16 )
    {
      do
      {
        v17 = (_DWORD *)v16[4];
        vSpDeleteSprite(v16);
        v16 = v17;
      }
      while ( v17 );
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v31);
  return v12;
}
