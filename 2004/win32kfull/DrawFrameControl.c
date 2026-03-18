/*
 * XREFs of DrawFrameControl @ 0x1C00623A8
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C0062134 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014A314 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0245FD4 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     MNDrawArrow @ 0x1C024D6B4 (MNDrawArrow.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C001D8A0 (GreCreateFontIndirectW.c)
 *     GreGetTextAlign @ 0x1C005D2C8 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C005D450 (GreSetTextAlign.c)
 *     ?DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C005FB74 (-DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?GetCaptionChar@@YAGI@Z @ 0x1C0060348 (-GetCaptionChar@@YAGI@Z.c)
 *     DrawPushButton @ 0x1C0061854 (DrawPushButton.c)
 *     GrePolyPatBlt @ 0x1C0062084 (GrePolyPatBlt.c)
 *     GreSelectFont @ 0x1C0062690 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C00626AC (GreSetBkMode.c)
 *     GreGetLayout @ 0x1C0062728 (GreGetLayout.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0062C10 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0063270 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C0112300 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C011BD78 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     GreSetGraphicsMode @ 0x1C02BFEA4 (GreSetGraphicsMode.c)
 */

__int64 __fastcall DrawFrameControl(HDC a1, struct tagRECT *a2, unsigned int a3, int a4)
{
  int v8; // r15d
  int TextAlign; // r12d
  unsigned int v10; // r14d
  int v11; // ecx
  unsigned int v12; // edi
  __int16 v13; // r9
  int v14; // r13d
  __int64 FontIndirectW; // r13
  unsigned __int16 CaptionChar; // ax
  char v18; // r8
  LONG top; // edx
  int v20; // eax
  int v21; // eax
  RECT v22; // [rsp+30h] [rbp-69h] BYREF
  __int64 v23; // [rsp+40h] [rbp-59h]
  _DWORD v24[4]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v25; // [rsp+58h] [rbp-41h]
  _DWORD v26[36]; // [rsp+60h] [rbp-39h] BYREF
  int v28; // [rsp+110h] [rbp+77h]

  v28 = 0;
  v8 = 0;
  TextAlign = 0;
  v10 = 1;
  v22 = *a2;
  if ( (GreGetLayout(a1) & 1) != 0 )
  {
    v8 = GreSetGraphicsMode(a1);
    if ( v8 )
    {
      TextAlign = GreGetTextAlign(a1);
      if ( (TextAlign & 6) != 6 )
        GreSetTextAlign(a1, TextAlign ^ 2);
    }
  }
  v11 = a4 | 0x8000;
  if ( *(_WORD *)(gpsi + 6996LL) != 1 )
    v11 = a4;
  v12 = v11 | 0x4000;
  if ( (v11 & 0x8000) == 0 )
    v12 = v11;
  if ( a3 != 2 && a3 != 5 && (a3 != 4 || (v12 & 0x10) != 0) && (a3 != 3 || (v12 & 0x18) == 0) )
  {
    v13 = 12288;
    if ( a3 == 3 )
      v13 = 0x2000;
    DrawPushButton(a1, &v22, v12, v12 & 0xC000 | v13);
    if ( (v12 & 0x2000) != 0 )
      *a2 = v22;
    v28 = 1;
  }
  if ( (unsigned int)GreSetBkMode(a1) )
  {
    v14 = v22.right - v22.left;
    if ( v22.right - v22.left >= v22.bottom - v22.top )
      v14 = v22.bottom - v22.top;
    if ( v14 > 0 )
    {
      memset(v26, 0, 0x5CuLL);
      v26[0] = v14;
      v26[4] = 400;
      *(_OWORD *)&v26[7] = *(_OWORD *)L"Marlett";
      HIBYTE(v26[5]) = 2;
      FontIndirectW = GreCreateFontIndirectW((__int64)v26, 0);
      v23 = GreSelectFont(a1, FontIndirectW);
      if ( v28 )
      {
        if ( a3 == 1 )
        {
          CaptionChar = GetCaptionChar(v12);
          DrawIt(a1, &v22, v12, CaptionChar);
          goto LABEL_22;
        }
        if ( a3 != 3 )
        {
          if ( a3 != 4 )
            v10 = 0;
          goto LABEL_22;
        }
        v18 = v12;
      }
      else
      {
        if ( a3 != 2 && a3 != 5 )
        {
          if ( a3 == 4 )
            DrawBox(a1, &v22, v12);
          else
            DrawGrip(a1, a2, v12);
LABEL_22:
          if ( v8 )
          {
            GreSetGraphicsMode(a1);
            GreSetTextAlign(a1, TextAlign);
          }
          GreSetBkMode(a1);
          GreSelectFont(a1, v23);
          GreDeleteObject(FontIndirectW);
          return v10;
        }
        if ( (v12 & 0x18) == 0 )
        {
          DrawMenuMark(a1, &v22, a3, v12);
          goto LABEL_22;
        }
        if ( (v12 & 0x800) == 0 )
        {
          top = a2->top;
          v20 = a2->right - a2->left;
          v24[0] = a2->left;
          v24[2] = v20;
          v21 = a2->bottom - top;
          v24[1] = top;
          v24[3] = v21;
          v25 = *(_QWORD *)(gpsi + 4728LL);
          GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v24, 1u);
        }
        v18 = ((v12 >> 3) & 1) == 0;
      }
      DrawScrollArrow(a1, &v22, v18);
      goto LABEL_22;
    }
  }
  if ( v8 )
  {
    GreSetGraphicsMode(a1);
    GreSetTextAlign(a1, TextAlign);
  }
  return 0LL;
}
