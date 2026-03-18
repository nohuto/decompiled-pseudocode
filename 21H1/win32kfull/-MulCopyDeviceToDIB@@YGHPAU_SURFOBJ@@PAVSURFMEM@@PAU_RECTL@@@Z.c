/*
 * XREFs of ?MulCopyDeviceToDIB@@YGHPAU_SURFOBJ@@PAVSURFMEM@@PAU_RECTL@@@Z @ 0x202783
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     ?MulAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x2019CF (-MulAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 *     ?MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x203EDB (-MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@.c)
 *     ?MulTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x204EF4 (-MulTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z.c)
 * Callees:
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x201F9D (-MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 */

int __userpurge MulCopyDeviceToDIB@<eax>(
        SURFMEM *a1@<edx>,
        struct _SURFOBJ *a2@<ecx>,
        struct _SURFOBJ *a3,
        struct SURFMEM *a4,
        struct _RECTL *a5)
{
  LONG *v5; // edx
  LONG v6; // eax
  int v7; // esi
  LONG v8; // edi
  LONG v9; // esi
  LONG x; // ecx
  LONG v11; // eax
  LONG v12; // esi
  LONG v13; // ebx
  LONG y; // eax
  int *v15; // ebx
  int *v16; // eax
  int v17; // ebx
  int v18; // eax
  struct _SURFOBJ *v19; // eax
  struct _SURFOBJ *v20; // eax
  struct _SURFOBJ *v22; // [esp-28h] [ebp-84h]
  _DWORD v23[6]; // [esp+Ch] [ebp-50h] BYREF
  DHSURF dhsurf; // [esp+24h] [ebp-38h]
  HSURF hsurf; // [esp+28h] [ebp-34h]
  struct _POINTL v26; // [esp+2Ch] [ebp-30h] BYREF
  struct _SURFOBJ *v27; // [esp+34h] [ebp-28h]
  struct _SURFOBJ *v28; // [esp+38h] [ebp-24h]
  SURFMEM *v29; // [esp+3Ch] [ebp-20h]
  LONG v30; // [esp+40h] [ebp-1Ch]
  struct _RECTL v31; // [esp+44h] [ebp-18h] BYREF

  v27 = a3;
  v29 = a1;
  dhsurf = a3->dhsurf;
  v28 = a2;
  v23[3] = 0;
  hsurf = a3->hsurf;
  v5 = a2 != 0 ? &a2[-1].lDelta : 0;
  v26.x = (LONG)a3->dhpdev;
  v6 = v5[7];
  v26.y = (LONG)a3->hdev;
  v7 = *(_DWORD *)(v6 + 1836);
  v8 = (LONG)dhsurf;
  if ( (int)dhsurf < v7 )
    v8 = *(_DWORD *)(v6 + 1836);
  v9 = (a2 != 0 ? &a2->sizlBitmap : (SIZEL *)32)->cx + v7;
  x = v26.x;
  if ( v26.x > v9 )
    x = v9;
  v11 = *(_DWORD *)(v6 + 1840);
  v12 = (LONG)hsurf;
  if ( (int)hsurf < v11 )
    v12 = v11;
  v13 = v11;
  y = v26.y;
  v30 = v5[9] + v13;
  if ( v26.y > v30 )
    y = v30;
  if ( v12 >= y || v8 >= x )
    return 1;
  v31.left = 0;
  v31.top = 0;
  v15 = (int *)v5[22];
  v31.bottom = y - v12;
  v23[2] = y - v12;
  v16 = v15;
  v31.right = x - v8;
  v26.x = v8;
  v26.y = v12;
  v23[1] = x - v8;
  v17 = 0;
  if ( v16 )
    v18 = *v16;
  else
    v18 = 0;
  v23[4] = v18;
  v23[0] = v5[15];
  v23[5] = v5[18] & 0x40000;
  SURFMEM::bCreateDIB(v29, (struct _DEVBITMAPINFO *)v23, 0, 0, 0, 0, 0, 0, 1, 0, 0);
  if ( *(_DWORD *)v29 )
  {
    v22 = v28;
    v19 = SURFACE::pSurfobj(*(SURFACE **)v29);
    if ( MulBitBlt(v19, v22, 0, 0, xloIdent, &v31, &v26, 0, 0, 0, 0xCCCCu) )
    {
      v20 = v27;
      v27->dhsurf = (DHSURF)((char *)v27->dhsurf - v8);
      v20->dhpdev = (DHPDEV)((char *)v20->dhpdev - v8);
      v20->hsurf = (HSURF)((char *)v20->hsurf - v12);
      v20->hdev = (HDEV)((char *)v20->hdev - v12);
      return 1;
    }
  }
  return v17;
}
