/*
 * XREFs of ?vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F73AF
 * Callers:
 *     ?PanAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x1F56EE (-PanAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 *     ?PanBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1F57FD (-PanBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 *     ?PanGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0x1F5F1D (-PanGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_.c)
 *     ?PanMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@@Z @ 0x1F61B4 (-PanMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@@Z.c)
 *     ?PanStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x1F62D2 (-PanStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@.c)
 *     ?PanStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1F63F9 (-PanStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU.c)
 *     ?PanStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1F652F (-PanStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL.c)
 *     ?PanTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x1F67CE (-PanTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PA.c)
 *     ?PanTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x1F68ED (-PanTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __userpurge vPanningUpdate(
        __int64 a1@<edx:eax>,
        _DWORD *a2@<ecx>,
        struct _PANDEV *a3,
        struct _RECTL *a4,
        struct _CLIPOBJ *a5)
{
  _DWORD *v5; // ebx
  int v6; // esi
  int right; // esi
  int v8; // edi
  int bottom; // ecx
  int v10; // edi
  _DWORD *v11; // ebx
  HSEMAPHORE v12; // esi
  int v13; // [esp+10h] [ebp-24h] BYREF
  int v14; // [esp+14h] [ebp-20h] BYREF
  _DWORD *v15; // [esp+18h] [ebp-1Ch] BYREF
  struct _RECTL v16; // [esp+1Ch] [ebp-18h] BYREF

  v15 = a2;
  memset(&v16, 0, sizeof(v16));
  v5 = (_DWORD *)HIDWORD(a1);
  if ( a3 && *((_BYTE *)a3 + 20) )
  {
    LODWORD(a1) = *((_DWORD *)a3 + 1);
    if ( (int)a1 <= *(_DWORD *)HIDWORD(a1) )
      LODWORD(a1) = *(_DWORD *)HIDWORD(a1);
    HIDWORD(a1) = *((_DWORD *)a3 + 2);
    v6 = v5[1];
    v16.left = a1;
    if ( SHIDWORD(a1) <= v6 )
      HIDWORD(a1) = v6;
    right = *((_DWORD *)a3 + 3);
    v8 = v5[2];
    v16.top = HIDWORD(a1);
    if ( right >= v8 )
      right = v8;
    bottom = *((_DWORD *)a3 + 4);
    v10 = v5[3];
    v16.right = right;
    if ( bottom >= v10 )
      bottom = v10;
    v16.bottom = bottom;
  }
  else
  {
    v16 = *(struct _RECTL *)HIDWORD(a1);
    bottom = v16.bottom;
    right = v16.right;
    a1 = *(_QWORD *)&v16.left;
  }
  if ( (int)a1 < right && SHIDWORD(a1) < bottom )
  {
    v11 = v15;
    v12 = (HSEMAPHORE)v15[19];
    EngAcquireSemaphore(v12);
    v13 = v15[17];
    v14 = v15[16];
    v15 = (_DWORD *)v15[15];
    RGNOBJ::vSet((RGNOBJ *)&v13, &v16);
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v14, (struct RGNOBJ *)&v15, (struct RGNOBJ *)&v13, 0xEu) )
      RGNOBJ::vSet((RGNOBJ *)&v14);
    v11[16] = v15;
    v11[15] = v14;
    v11[18] = 1;
    if ( v12 )
      EngReleaseSemaphore(v12);
  }
}
