/*
 * XREFs of _DrawTextExWorker@28 @ 0x1B8194
 * Callers:
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     ?DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z @ 0x15C04A (-DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z.c)
 * Callees:
 *     _GreGetRandomRgn@12 @ 0x5D7A0 (_GreGetRandomRgn@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _GreSetTextAlign@8 @ 0xB66FA (_GreSetTextAlign@8.c)
 *     _GreGetTextAlign@4 @ 0xB687C (_GreGetTextAlign@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GreExtSelectClipRgnInternal@16 @ 0xF7316 (_GreExtSelectClipRgnInternal@16.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?AddEllipsisAndDrawLine@@YGHPAUHDC__@@HPAGHKPAUDRAWTEXTDATA@@H@Z @ 0x1B7AAC (-AddEllipsisAndDrawLine@@YGHPAUHDC__@@HPAGHKPAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_InitDrawTextInfo@@YGHPAUHDC__@@PAUtagRECT@@IPAUDRAWTEXTDATA@@PAUtagDRAWTEXTPARAMS@@@Z @ 0x1B7EEA (-DT_InitDrawTextInfo@@YGHPAUHDC__@@PAUtagRECT@@IPAUDRAWTEXTDATA@@PAUtagDRAWTEXTPARAMS@@@Z.c)
 */

int __fastcall DrawTextExWorker(HDC a1, unsigned __int16 *a2, unsigned int a3, LONG *a4, int a5, _DWORD *a6, int a7)
{
  int v7; // ebx
  HDC v8; // edi
  HDC v9; // ecx
  int TextAlign; // eax
  char v12; // cl
  HRGN RectRgn; // eax
  unsigned int v14; // ecx
  int v15; // esi
  int v16; // eax
  int v17; // esi
  LONG v18; // ecx
  struct DRAWTEXTDATA *v19; // [esp+0h] [ebp-84h]
  struct DRAWTEXTDATA *v20; // [esp+0h] [ebp-84h]
  struct tagDRAWTEXTPARAMS *v21; // [esp+4h] [ebp-80h]
  int v22; // [esp+4h] [ebp-80h]
  int v23; // [esp+24h] [ebp-60h]
  unsigned int v25; // [esp+2Ch] [ebp-58h]
  int v27; // [esp+30h] [ebp-54h]
  _BYTE v28[60]; // [esp+40h] [ebp-44h] BYREF

  v7 = 0;
  v8 = a1;
  v25 = a3;
  memset(v28, 0, sizeof(v28));
  v9 = (HDC)a5;
  v23 = 0;
  if ( !a2 )
    return 0;
  if ( a3 )
  {
    if ( a3 == -1 )
    {
      v25 = wcslen(a2);
      v9 = (HDC)a5;
    }
  }
  else if ( *a2 )
  {
    return 1;
  }
  if ( a6 && *a6 != 20 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  if ( !DT_InitDrawTextInfo(a4, v8, v9, (struct tagRECT *)v28, (unsigned int)a6, v19, v21) )
    return 0;
  *(_DWORD *)&v28[56] = -1;
  if ( ((unsigned int)&loc_20000 & a5) != 0 )
  {
    TextAlign = GreGetTextAlign(v8);
    v23 = GreSetTextAlign(v8, TextAlign | 0x100);
  }
  v12 = a5;
  if ( (a5 & 0x100) == 0 )
  {
    RectRgn = (HRGN)GreCreateRectRgn(0, 0, 0, 0);
    v7 = (int)RectRgn;
    if ( RectRgn )
    {
      if ( GreGetRandomRgn((int)v8, RectRgn, 1) != 1 )
      {
        GreDeleteObject(v7);
        v7 = -1;
      }
      v8 = a1;
      GreIntersectClipRect(a1, *a4, a4[1], a4[2], a4[3]);
    }
    v12 = a5;
  }
  v14 = v12 & 0xC;
  v15 = a4[1];
  if ( v14 == 4 )
  {
    v15 += (a4[3] - v15 - *(_DWORD *)&v28[28]) / 2;
  }
  else if ( v14 == 8 )
  {
    v15 = a4[3] - *(_DWORD *)&v28[28];
  }
  v16 = AddEllipsisAndDrawLine(
          v15,
          (int)v8,
          (HDC)a2,
          v25,
          (unsigned __int16 *)a5,
          (struct DRAWTEXTDATA *)v28,
          v14,
          v20,
          v22);
  v17 = *(_DWORD *)&v28[28] + v15;
  v27 = v16;
  if ( v7 )
  {
    if ( v7 == -1 )
    {
      GreExtSelectClipRgnInternal(v8, 0, 5, 1);
    }
    else
    {
      GreExtSelectClipRgnInternal(v8, (HRGN)v7, 5, 1);
      GreDeleteObject(v7);
    }
  }
  if ( ((unsigned int)&loc_20000 & a5) != 0 )
    GreSetTextAlign(v8, v23);
  if ( a6 )
    a6[4] = v27 & 0x7FFFFFFF;
  v18 = a4[1];
  if ( v17 == v18 )
    return 1;
  return v17 - v18;
}
