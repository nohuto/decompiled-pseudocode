/*
 * XREFs of _DrawFrameControl@16 @ 0x901FE
 * Callers:
 *     ?CreateDPIBitmapStrip@@YGHI@Z @ 0x90002 (-CreateDPIBitmapStrip@@YGHI@Z.c)
 *     ?xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z @ 0xC1B60 (-xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z @ 0x1A3360 (-zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z.c)
 *     _MNDrawArrow@12 @ 0x1A96CC (_MNDrawArrow@12.c)
 * Callees:
 *     _GreGetLayout@4 @ 0x566A8 (_GreGetLayout@4.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 *     _GreCreateFontIndirectW@8 @ 0x89CD6 (_GreCreateFontIndirectW@8.c)
 *     ?DrawGrip@@YGHPAUHDC__@@PAUtagRECT@@I@Z @ 0x8FDEE (-DrawGrip@@YGHPAUHDC__@@PAUtagRECT@@I@Z.c)
 *     ?DrawMenuMark@@YGHPAUHDC__@@PAUtagRECT@@II@Z @ 0x8FEF0 (-DrawMenuMark@@YGHPAUHDC__@@PAUtagRECT@@II@Z.c)
 *     ?DrawScrollArrow@@YGHPAUHDC__@@PAUtagRECT@@I@Z @ 0x8FFCE (-DrawScrollArrow@@YGHPAUHDC__@@PAUtagRECT@@I@Z.c)
 *     _GreSetBkMode@8 @ 0x90470 (_GreSetBkMode@8.c)
 *     _DrawPushButton@16 @ 0x904D2 (_DrawPushButton@16.c)
 *     ?DrawBox@@YGHPAUHDC__@@PAUtagRECT@@I@Z @ 0x907DA (-DrawBox@@YGHPAUHDC__@@PAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YGHPAUHDC__@@PAUtagRECT@@IG@Z @ 0x90C70 (-DrawIt@@YGHPAUHDC__@@PAUtagRECT@@IG@Z.c)
 *     ?GetCaptionChar@@YGGI@Z @ 0x9106C (-GetCaptionChar@@YGGI@Z.c)
 *     _GreSetTextAlign@8 @ 0xB66FA (_GreSetTextAlign@8.c)
 *     _GreGetTextAlign@4 @ 0xB687C (_GreGetTextAlign@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _GreSetGraphicsMode@8 @ 0x226087 (_GreSetGraphicsMode@8.c)
 */

BOOL __fastcall DrawFrameControl(HDC a1, int *a2, HDC a3, unsigned int a4)
{
  HDC v4; // esi
  unsigned int v5; // ebx
  int v6; // edi
  int FontIndirectW; // eax
  HDC v8; // esi
  BOOL v9; // edi
  unsigned __int16 CaptionChar; // ax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int *v15; // edi
  struct tagRECT *v16; // [esp+0h] [ebp-B0h]
  unsigned int v17; // [esp+0h] [ebp-B0h]
  unsigned int v18; // [esp+4h] [ebp-ACh]
  _DWORD v19[25]; // [esp+10h] [ebp-A0h] BYREF
  _DWORD v20[5]; // [esp+74h] [ebp-3Ch] BYREF
  int v21; // [esp+88h] [ebp-28h]
  int v22; // [esp+8Ch] [ebp-24h] BYREF
  int v23; // [esp+90h] [ebp-20h]
  int v24; // [esp+94h] [ebp-1Ch]
  int v25; // [esp+98h] [ebp-18h]
  int v26; // [esp+9Ch] [ebp-14h]
  int *v27; // [esp+A0h] [ebp-10h]
  int TextAlign; // [esp+A4h] [ebp-Ch]
  int v29; // [esp+A8h] [ebp-8h]
  HDC v30; // [esp+ACh] [ebp-4h]

  v30 = a1;
  v27 = a2;
  v26 = 0;
  v29 = 0;
  v22 = *a2;
  TextAlign = 0;
  v23 = a2[1];
  v24 = a2[2];
  v25 = a2[3];
  v4 = a1;
  if ( (GreGetLayout(a1) & 1) != 0 )
  {
    v29 = GreSetGraphicsMode(v4);
    if ( v29 )
    {
      TextAlign = GreGetTextAlign(v4);
      if ( (TextAlign & 6) != 6 )
        GreSetTextAlign(v4);
    }
  }
  v5 = a4;
  if ( *(_WORD *)(_gpsi + 6240) == 1 )
    v5 = a4 | 0x8000;
  if ( (v5 & 0x8000) != 0 )
    v5 |= 0x4000u;
  if ( a3 != (HDC)2 && a3 != (HDC)5 && (a3 != (HDC)4 || (v5 & 0x10) != 0) && (a3 != (HDC)3 || (v5 & 0x18) == 0) )
  {
    DrawPushButton(v4, v5, v5 & 0xC000 | (a3 != (HDC)3 ? 12288 : 0x2000));
    if ( (v5 & 0x2000) != 0 )
    {
      v15 = v27;
      *v27 = v22;
      *++v15 = v23;
      *++v15 = v24;
      v15[1] = v25;
      v4 = v30;
    }
    v26 = 1;
  }
  if ( GreSetBkMode(v4) )
  {
    v6 = v24 - v22;
    if ( v24 - v22 >= v25 - v23 )
      v6 = v25 - v23;
    if ( v6 > 0 )
    {
      memset(v19, 0, 0x5Cu);
      v19[0] = v6;
      v19[4] = 400;
      HIBYTE(v19[5]) = 2;
      v19[7] = *(_DWORD *)L"Marlett";
      v19[8] = *(_DWORD *)L"rlett";
      v19[9] = *(_DWORD *)L"ett";
      v19[10] = *(_DWORD *)L"t";
      FontIndirectW = GreCreateFontIndirectW((int)v19, 0);
      v8 = v30;
      v21 = FontIndirectW;
      v30 = (HDC)GreSelectFont(v30, FontIndirectW);
      if ( v26 )
      {
        v9 = 1;
        if ( a3 == (HDC)1 )
        {
          CaptionChar = GetCaptionChar((unsigned int)v16);
          DrawIt((HDC)v5, (struct tagRECT *)CaptionChar, v17, v18);
        }
        else if ( a3 == (HDC)3 )
        {
          DrawScrollArrow((HDC)v5, v16, v18);
        }
        else
        {
          v9 = a3 == (HDC)4;
        }
      }
      else
      {
        if ( a3 == (HDC)2 || a3 == (HDC)5 )
        {
          if ( (v5 & 0x18) != 0 )
          {
            if ( (v5 & 0x800) != 0 )
            {
              v9 = 1;
            }
            else
            {
              v12 = *v27;
              v13 = v27[1];
              v20[2] = v27[2] - *v27;
              v14 = v27[3];
              v20[0] = v12;
              v20[3] = v14 - v13;
              v9 = 1;
              v20[1] = v13;
              v20[4] = *(_DWORD *)(_gpsi + 4308);
              GrePolyPatBlt(v8, 0xF00021u, (struct XDCOBJ *)v20, 1u, v12);
            }
            DrawScrollArrow((HDC)(v5 & 0x1100 | (((v5 >> 3) & 1) == 0)), v16, v18);
            goto LABEL_20;
          }
          DrawMenuMark(&v22, v8, a3, (struct tagRECT *)v5, (unsigned int)v16, v18);
        }
        else if ( a3 == (HDC)4 )
        {
          DrawBox((HDC)v5, v16, v18);
        }
        else
        {
          DrawGrip(v27, v8, (HDC)v5, v16, v18);
        }
        v9 = 1;
      }
LABEL_20:
      if ( v29 )
      {
        GreSetGraphicsMode(v8);
        GreSetTextAlign(v8);
      }
      GreSetBkMode(v8);
      GreSelectFont(v8, (int)v30);
      GreDeleteObject(v21);
      return v9;
    }
  }
  if ( v29 )
  {
    GreSetGraphicsMode(v4);
    GreSetTextAlign(v4);
  }
  return 0;
}
