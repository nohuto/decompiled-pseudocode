/*
 * XREFs of _EngTransparentBlt@32 @ 0xCAC46
 * Callers:
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     ?SpTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0xCA866 (-SpTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z.c)
 *     ?PanTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x1F68ED (-PanTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z.c)
 *     ?RedirTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x1FC284 (-RedirTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z.c)
 *     ?MulTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x204EF4 (-MulTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z.c)
 *     _NtGdiEngTransparentBlt@32 @ 0x219BED (_NtGdiEngTransparentBlt@32.c)
 * Callees:
 *     ?psSetupDstSurface@@YGPAVSURFACE@@PAV1@PAU_RECTL@@AAVSURFMEM@@HH@Z @ 0x5304E (-psSetupDstSurface@@YGPAVSURFACE@@PAV1@PAU_RECTL@@AAVSURFMEM@@HH@Z.c)
 *     ?psSetupTransparentSrcSurface@@YGPAVSURFACE@@PAV1@0PAU_RECTL@@PAU_XLATEOBJ@@1AAVSURFMEM@@KK@Z @ 0x5317A (-psSetupTransparentSrcSurface@@YGPAVSURFACE@@PAV1@0PAU_RECTL@@PAU_XLATEOBJ@@1AAVSURFMEM@@KK@Z.c)
 *     _zzzSetCaretPos@8 @ 0x820C0 (_zzzSetCaretPos@8.c)
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?_EnableShellWindowManagementBehavior@@YGHKK@Z @ 0xE9D9A (-_EnableShellWindowManagementBehavior@@YGHKK@Z.c)
 *     _CitSetInfo@8 @ 0xEDF0C (_CitSetInfo@8.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _zzzUnhookWindowsHook@8 @ 0x152D39 (_zzzUnhookWindowsHook@8.c)
 *     __ScaleSystemMetricForDPIWithoutCache@8 @ 0x15539C (__ScaleSystemMetricForDPIWithoutCache@8.c)
 *     __SetThreadQueueMergeSetting@8 @ 0x16D8DF (__SetThreadQueueMergeSetting@8.c)
 *     _RemoteShadowStart@8 @ 0x187CE0 (_RemoteShadowStart@8.c)
 *     ?GreTransparentBltPS@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3K@Z @ 0x1F17C8 (-GreTransparentBltPS@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3K@Z.c)
 */

BOOL __stdcall EngTransparentBlt(
        SURFOBJ *psoDst,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG iTransColor,
        ULONG ulReserved)
{
  int v8; // ebx
  HDEV v9; // ecx
  int (__stdcall *v10)(SURFOBJ *, struct _SURFOBJ *, _DWORD, struct _SURFOBJ *, struct _SURFOBJ *, RECTL *, RECTL *, _DWORD, struct _RECTL **, _DWORD, int); // ecx
  LONG *v12; // ecx
  SURFOBJ *v13; // edi
  struct SURFACE *v14; // eax
  struct _SURFOBJ *v15; // esi
  struct _CLIPOBJ *p_hsurf; // esi
  RECTL *p_rclBounds; // esi
  struct _SURFOBJ *v18; // eax
  int v19; // eax
  struct _RECTL *v20; // ecx
  struct _RECTL *left; // edx
  LONG right; // edx
  HDEV v23; // ecx
  int v24; // eax
  void (__stdcall *v25)(int, int); // eax
  int v26; // eax
  unsigned int v27; // [esp+0h] [ebp-274h]
  struct _RECTL *v28; // [esp+0h] [ebp-274h]
  int v29; // [esp+0h] [ebp-274h]
  unsigned int v30; // [esp+4h] [ebp-270h]
  unsigned int v31; // [esp+4h] [ebp-270h]
  struct _XLATEOBJ v32; // [esp+10h] [ebp-264h] BYREF
  unsigned int v33; // [esp+24h] [ebp-250h]
  int v34; // [esp+28h] [ebp-24Ch]
  SURFACE *v35; // [esp+2Ch] [ebp-248h] BYREF
  char v36; // [esp+30h] [ebp-244h]
  int v37; // [esp+34h] [ebp-240h]
  struct _RECTL *v38; // [esp+38h] [ebp-23Ch] BYREF
  int v39; // [esp+3Ch] [ebp-238h] BYREF
  struct SURFACE *v40; // [esp+40h] [ebp-234h]
  LONG v41; // [esp+44h] [ebp-230h]
  unsigned int v42; // [esp+48h] [ebp-22Ch]
  struct _SURFOBJ *i; // [esp+4Ch] [ebp-228h]
  struct _SURFOBJ *v44; // [esp+50h] [ebp-224h]
  SURFOBJ *v45; // [esp+54h] [ebp-220h]
  HDEV hdev; // [esp+58h] [ebp-21Ch] BYREF
  struct _RECTL *v47; // [esp+5Ch] [ebp-218h]
  struct _SURFOBJ *v48; // [esp+60h] [ebp-214h]
  RECTL *v49; // [esp+64h] [ebp-210h]
  _DWORD v50[28]; // [esp+68h] [ebp-20Ch] BYREF
  ULONG v51; // [esp+D8h] [ebp-19Ch]
  unsigned int iBitmapFormat; // [esp+DCh] [ebp-198h]
  struct _RECTL *v53; // [esp+E0h] [ebp-194h]
  _DWORD v54[81]; // [esp+E4h] [ebp-190h] BYREF
  RECTL v55; // [esp+228h] [ebp-4Ch] BYREF
  struct _RECTL v56; // [esp+238h] [ebp-3Ch] BYREF
  struct _CLIPOBJ v57; // [esp+248h] [ebp-2Ch] BYREF
  int v58; // [esp+270h] [ebp-4h]

  v45 = psoDst;
  v44 = psoSrc;
  v48 = (struct _SURFOBJ *)pco;
  i = (struct _SURFOBJ *)pxlo;
  v49 = prclSrc;
  v47 = (struct _RECTL *)iTransColor;
  v8 = 0;
  if ( !psoDst->iType && !psoSrc->iType
    || ulReserved
    || prclDst->right - prclDst->left != prclSrc->right - v49->left
    || prclDst->bottom - prclDst->top != v49->bottom - v49->top )
  {
    v42 = psoDst != 0 ? (unsigned int)&psoDst[-1].lDelta : 0;
    v57.iUniq = prclDst->left;
    v57.rclBounds.left = prclDst->top;
    v57.rclBounds.top = prclDst->right;
    v57.rclBounds.right = prclDst->bottom;
    v56 = *v49;
    hdev = psoDst->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDst, 0, 0);
    hdev = v44->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, v44, 0, 0);
    v32.pulXlate = (ULONG *)v48;
    v32.iUniq = 0;
    LOBYTE(v32.flXlate) = 0;
    *(_DWORD *)&v32.iSrcType = 0;
    v12 = psSetupTransparentSrcSurface(
            v42,
            v44 != 0 ? &v44[-1].lDelta : 0,
            (XLATEOBJ **)&v57,
            0,
            &v56,
            &v32,
            (struct _RECTL *)1,
            (int)v47,
            v27,
            v30);
    hdev = (HDEV)v12;
    if ( !v12 )
    {
LABEL_18:
      SURFMEM::~SURFMEM((SURFMEM *)&v32);
      return v8;
    }
    if ( v57.iUniq == v57.rclBounds.top )
    {
      v8 = 1;
      goto LABEL_18;
    }
    v44 = (struct _SURFOBJ *)(v12 + 4);
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v33 = v42;
    v32.cEntries = v42;
    v55.left = v57.iUniq;
    v55.top = v57.rclBounds.left;
    v55.right = v57.rclBounds.top;
    v55.bottom = v57.rclBounds.right;
    v13 = v45;
    if ( *(_WORD *)(v42 + 64) && *((char *)v45->hdev + 24) < 0 )
    {
      v8 = GreTransparentBltPS(v48, i, &v57, (struct _XLATEOBJ *)&v56, v47, v28, v31);
LABEL_17:
      SURFMEM::~SURFMEM((SURFMEM *)&v35);
      goto LABEL_18;
    }
    v14 = psSetupDstSurface(&v57, v42, &v35, 0, (struct SURFMEM *)1, (int)v28, v31);
    v40 = v14;
    if ( !v14 )
      goto LABEL_17;
    if ( v14 == (struct SURFACE *)v42 )
    {
      v15 = v48;
    }
    else
    {
      v13 = (SURFOBJ *)((char *)v14 + 16);
      v45 = (SURFOBJ *)((char *)v14 + 16);
      v15 = 0;
      v48 = 0;
    }
    v49 = 0;
    v50[13] = 0;
    v53 = v47;
    v50[7] = v44->lDelta;
    v50[8] = v13->lDelta;
    v50[14] = hdev;
    memset(v54, 0, sizeof(v54));
    if ( v15 && LOBYTE(v15->sizlBitmap.cy) )
    {
      if ( LOBYTE(v15->sizlBitmap.cy) != 1 )
      {
        if ( LOBYTE(v15->sizlBitmap.cy) == 3 )
        {
          v49 = (RECTL *)1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v15, 0, 0, 4u, 0x14u);
        }
        goto LABEL_31;
      }
      p_hsurf = (struct _CLIPOBJ *)&v15->hsurf;
    }
    else
    {
      p_hsurf = &v57;
    }
    v54[0] = 1;
    v54[1] = p_hsurf->iUniq;
    p_rclBounds = &p_hsurf->rclBounds;
    v54[2] = p_rclBounds->left;
    p_rclBounds = (RECTL *)((char *)p_rclBounds + 4);
    v54[3] = p_rclBounds->left;
    v54[4] = p_rclBounds->top;
    v49 = 0;
    v13 = v45;
    v15 = v48;
LABEL_31:
    v18 = i;
    if ( !i )
      v18 = (struct _SURFOBJ *)xloIdent;
    v50[0] = v18;
    v50[3] = 1;
    v50[6] = 1;
    iBitmapFormat = v13->iBitmapFormat;
    v51 = v44->iBitmapFormat;
    if ( !v49 )
      goto LABEL_35;
    while ( 1 )
    {
      v49 = (RECTL *)XCLIPOBJ::bEnum((XCLIPOBJ *)v15, 0x144u, (char *)v54, 0);
LABEL_35:
      if ( (v51 > 6 || iBitmapFormat > 6) && v54[0] )
        break;
      for ( i = 0; (unsigned int)i < v54[0]; i = (struct _SURFOBJ *)((char *)i + 1) )
      {
        v19 = 2 * (_DWORD)i;
        if ( v54[4 * (_DWORD)i + 1] < (int)v57.iUniq )
          v54[4 * (_DWORD)i + 1] = v57.iUniq;
        if ( v54[2 * v19 + 3] > v57.rclBounds.top )
          v54[2 * v19 + 3] = v57.rclBounds.top;
        v20 = (struct _RECTL *)v54[2 * v19 + 2];
        v47 = v20;
        left = (struct _RECTL *)v57.rclBounds.left;
        if ( (int)v20 < v57.rclBounds.left )
        {
          v54[2 * v19 + 2] = v57.rclBounds.left;
          v20 = left;
          v47 = left;
        }
        right = v54[2 * v19 + 4];
        v41 = right;
        if ( right > v57.rclBounds.right )
        {
          right = v57.rclBounds.right;
          v54[2 * v19 + 4] = v57.rclBounds.right;
          v41 = right;
        }
        if ( (int)v20 < right )
        {
          v23 = (HDEV)v54[2 * v19 + 1];
          hdev = v23;
          v24 = v54[2 * v19 + 3];
          v34 = v24;
          if ( (int)v23 < v24 )
          {
            v50[4] = v24 - (_DWORD)hdev;
            v50[5] = v41 - (_DWORD)v47;
            v50[9] = (char *)v23 + v56.left - v57.iUniq;
            v50[10] = v56.left - v57.iUniq + v34;
            v50[11] = hdev;
            v50[12] = v47;
            v50[1] = (char *)v44->pvScan0 + ((_DWORD)v47 + v56.top - v57.rclBounds.left) * v44->lDelta;
            v50[2] = (char *)v13->pvScan0 + (_DWORD)v47 * v13->lDelta;
            if ( (*(_BYTE *)(v50[0] + 4) & 1) != 0 && v51 == iBitmapFormat )
              v25 = (void (__stdcall *)(int, int))funcs_CB180[7 * v51];
            else
              v25 = (void (__stdcall *)(int, int))*(&funcs_CB180[7 * v51] + iBitmapFormat);
            v58 = 0;
            v25((int)v50, v29);
            v58 = -2;
            v15 = v48;
          }
        }
      }
      if ( !v49 )
      {
        if ( (struct SURFACE *)v42 != v40 )
        {
          v26 = *(_DWORD *)(v42 + 28);
          v39 = 0;
          v40 = 0;
          if ( (*(_DWORD *)(v42 + 72) & 0x400) != 0 )
            (*(void (__stdcall **)(ULONG, SURFOBJ *, ULONG *, XLATEOBJ *const, RECTL *, int *))(v26 + 1976))(
              v32.cEntries != 0 ? v32.cEntries + 16 : 0,
              v13,
              v32.pulXlate,
              xloIdent,
              &v55,
              &v39);
          else
            EngCopyBits(
              v32.cEntries != 0 ? (SURFOBJ *)(v32.cEntries + 16) : 0,
              v13,
              (CLIPOBJ *)v32.pulXlate,
              xloIdent,
              &v55,
              (POINTL *)&v39);
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v35);
        SURFMEM::~SURFMEM((SURFMEM *)&v32);
        return 1;
      }
    }
    goto LABEL_17;
  }
  v9 = psoDst->hdev;
  if ( !v9 )
    v9 = v44->hdev;
  v38 = v47;
  v40 = 0;
  v39 = 0;
  v10 = (int (__stdcall *)(SURFOBJ *, struct _SURFOBJ *, _DWORD, struct _SURFOBJ *, struct _SURFOBJ *, RECTL *, RECTL *, _DWORD, struct _RECTL **, _DWORD, int))*((_DWORD *)v9 + 493);
  if ( v10 )
    return v10(v45, v44, 0, v48, i, prclDst, v49, 0, &v38, 0, 52394);
  else
    return 0;
}
