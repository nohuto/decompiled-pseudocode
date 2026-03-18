/*
 * XREFs of DrawFrameControl @ 0x1C0036FB0
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C0036D3C (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014CB44 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0244D34 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     MNDrawArrow @ 0x1C024C0AC (MNDrawArrow.c)
 * Callees:
 *     GreSetTextAlign @ 0x1C002F63C (GreSetTextAlign.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C00372BC (GreSetBkMode.c)
 *     DrawPushButton @ 0x1C0037338 (DrawPushButton.c)
 *     GrePolyPatBlt @ 0x1C0037B68 (GrePolyPatBlt.c)
 *     ?GetCaptionChar@@YAGI@Z @ 0x1C0037FDC (-GetCaptionChar@@YAGI@Z.c)
 *     ?DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C003879C (-DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     GreGetLayout @ 0x1C00417CC (GreGetLayout.c)
 *     GreCreateFontIndirectW @ 0x1C008F8E0 (GreCreateFontIndirectW.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C008FBB4 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C00913B8 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C0113820 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     GreGetTextAlign @ 0x1C011C378 (GreGetTextAlign.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C011CD38 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     GreSetGraphicsMode @ 0x1C02BE944 (GreSetGraphicsMode.c)
 */

__int64 __fastcall DrawFrameControl(HDC a1, struct tagRECT *a2, unsigned int a3, int a4)
{
  int v8; // r15d
  int TextAlign; // r12d
  unsigned int v10; // r14d
  int v11; // ecx
  unsigned int v12; // edi
  int v13; // r13d
  __int64 FontIndirectW; // r13
  unsigned __int16 CaptionChar; // ax
  unsigned int v17; // r8d
  LONG top; // edx
  int v19; // eax
  int v20; // eax
  RECT v21; // [rsp+30h] [rbp-69h] BYREF
  __int64 v22; // [rsp+40h] [rbp-59h]
  LONG left; // [rsp+48h] [rbp-51h]
  LONG v24; // [rsp+4Ch] [rbp-4Dh]
  int v25; // [rsp+50h] [rbp-49h]
  int v26; // [rsp+54h] [rbp-45h]
  __int64 v27; // [rsp+58h] [rbp-41h]
  _DWORD v28[36]; // [rsp+60h] [rbp-39h] BYREF
  int v30; // [rsp+110h] [rbp+77h]

  v30 = 0;
  v8 = 0;
  TextAlign = 0;
  v10 = 1;
  v21 = *a2;
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
    DrawPushButton(a1);
    if ( (v12 & 0x2000) != 0 )
      *a2 = v21;
    v30 = 1;
  }
  if ( (unsigned int)GreSetBkMode(a1) )
  {
    v13 = v21.right - v21.left;
    if ( v21.right - v21.left >= v21.bottom - v21.top )
      v13 = v21.bottom - v21.top;
    if ( v13 > 0 )
    {
      memset(v28, 0, 0x5CuLL);
      v28[0] = v13;
      v28[4] = 400;
      *(_OWORD *)&v28[7] = *(_OWORD *)L"Marlett";
      HIBYTE(v28[5]) = 2;
      FontIndirectW = GreCreateFontIndirectW(v28, 0LL);
      v22 = GreSelectFont(a1, FontIndirectW);
      if ( v30 )
      {
        if ( a3 == 1 )
        {
          CaptionChar = GetCaptionChar(v12);
          DrawIt(a1, &v21, v12, CaptionChar);
          goto LABEL_20;
        }
        if ( a3 != 3 )
        {
          if ( a3 != 4 )
            v10 = 0;
          goto LABEL_20;
        }
        v17 = v12;
      }
      else
      {
        if ( a3 != 2 && a3 != 5 )
        {
          if ( a3 == 4 )
            DrawBox(a1, &v21, v12);
          else
            DrawGrip(a1, a2, v12);
LABEL_20:
          if ( v8 )
          {
            GreSetGraphicsMode(a1);
            GreSetTextAlign(a1, TextAlign);
          }
          GreSetBkMode(a1);
          GreSelectFont(a1, v22);
          GreDeleteObject(FontIndirectW);
          return v10;
        }
        if ( (v12 & 0x18) == 0 )
        {
          DrawMenuMark(a1, &v21, a3, v12);
          goto LABEL_20;
        }
        if ( (v12 & 0x800) == 0 )
        {
          top = a2->top;
          v19 = a2->right - a2->left;
          left = a2->left;
          v25 = v19;
          v20 = a2->bottom - top;
          v24 = top;
          v26 = v20;
          v27 = *(_QWORD *)(gpsi + 4728LL);
          GrePolyPatBlt(a1);
        }
        v17 = v12 & 0x1100 | (((v12 >> 3) & 1) == 0);
      }
      DrawScrollArrow(a1, &v21, v17);
      goto LABEL_20;
    }
  }
  if ( v8 )
  {
    GreSetGraphicsMode(a1);
    GreSetTextAlign(a1, TextAlign);
  }
  return 0LL;
}
