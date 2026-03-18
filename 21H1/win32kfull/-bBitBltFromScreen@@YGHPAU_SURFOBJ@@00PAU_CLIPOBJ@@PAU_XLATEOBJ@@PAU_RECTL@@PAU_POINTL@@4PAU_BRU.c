/*
 * XREFs of ?bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x2054D5
 * Callers:
 *     ?MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x201F9D (-MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     _OffBitBlt@56 @ 0xE9E3E (_OffBitBlt@56.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1MULTISURF@@QAE@XZ @ 0x1DA696 (--1MULTISURF@@QAE@XZ.c)
 *     ??0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z @ 0x20150E (--0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaRedirectionBitmap@@YGHPAU_SURFOBJ@@@Z @ 0x201818 (-IsMetaRedirectionBitmap@@YGHPAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z @ 0x20182C (-LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QAEXJ@Z @ 0x205465 (-StoreElement@MULTIBRUSH@@QAEXJ@Z.c)
 *     ?bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x205F5F (-bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QAEHXZ @ 0x2062FC (-bNextSurface@MSURF@@QAEHXZ.c)
 *     ?vInit@MULTISURF@@AAEXPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x206708 (-vInit@MULTISURF@@AAEXPAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     _OffCopyBits@36 @ 0x22EF0F (_OffCopyBits@36.c)
 */

int __userpurge bBitBltFromScreen@<eax>(
        struct _SURFOBJ *a1@<edx>,
        struct _SURFOBJ *a2@<ecx>,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _SURFOBJ *a5,
        struct _RECTL *a6,
        struct _XLATEOBJ *a7,
        struct _RECTL *a8,
        struct _POINTL *a9,
        struct _POINTL *a10,
        struct _BRUSHOBJ *a11,
        struct _POINTL *a12,
        unsigned int a13)
{
  int v13; // ebx
  int dhpdev; // ecx
  ULONG v15; // eax
  struct _SURFOBJ *v17; // esi
  int i; // eax
  int v19; // edx
  struct _SURFOBJ *v20; // edi
  int v21; // esi
  int pvBits; // edx
  int cjBits; // ecx
  int dhsurf; // edi
  int v25; // esi
  FLONG flXlate; // eax
  int v27; // eax
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // ecx
  int v29; // eax
  _DWORD v30[7]; // [esp+Ch] [ebp-130h] BYREF
  int v31; // [esp+28h] [ebp-114h]
  int v32; // [esp+2Ch] [ebp-110h]
  int v33; // [esp+30h] [ebp-10Ch]
  struct _SURFOBJ *v34; // [esp+34h] [ebp-108h]
  struct _CLIPOBJ *v35; // [esp+38h] [ebp-104h]
  BRUSHOBJ *pbo; // [esp+3Ch] [ebp-100h]
  FLONG v37; // [esp+40h] [ebp-FCh]
  ULONG v38; // [esp+44h] [ebp-F8h]
  struct _XLATEOBJ *v39; // [esp+48h] [ebp-F4h]
  int iUniq; // [esp+4Ch] [ebp-F0h] BYREF
  FLONG v41; // [esp+50h] [ebp-ECh]
  struct _SURFOBJ *v42; // [esp+54h] [ebp-E8h]
  int v43; // [esp+58h] [ebp-E4h] BYREF
  int v44; // [esp+5Ch] [ebp-E0h]
  struct _RECTL *v45; // [esp+60h] [ebp-DCh]
  struct _SURFOBJ *v46; // [esp+64h] [ebp-D8h]
  int v47; // [esp+68h] [ebp-D4h]
  int v48; // [esp+6Ch] [ebp-D0h]
  int v49; // [esp+70h] [ebp-CCh]
  int cy; // [esp+74h] [ebp-C8h]
  _BYTE v51[28]; // [esp+78h] [ebp-C4h] BYREF
  int v52; // [esp+94h] [ebp-A8h]
  char v53; // [esp+98h] [ebp-A4h]
  int v54; // [esp+9Ch] [ebp-A0h]
  int v55; // [esp+B8h] [ebp-84h]
  int v56; // [esp+BCh] [ebp-80h]
  _BYTE v57[48]; // [esp+C8h] [ebp-74h] BYREF
  int v58; // [esp+F8h] [ebp-44h]
  int v59; // [esp+FCh] [ebp-40h]
  int v60; // [esp+100h] [ebp-3Ch]
  int v61; // [esp+104h] [ebp-38h]
  int left; // [esp+114h] [ebp-28h] BYREF
  LONG top; // [esp+118h] [ebp-24h]
  LONG right; // [esp+11Ch] [ebp-20h]
  LONG bottom; // [esp+120h] [ebp-1Ch]
  struct _RECTL v66; // [esp+124h] [ebp-18h] BYREF

  v46 = a1;
  v42 = a2;
  v34 = a5;
  v31 = (int)a3;
  v39 = a7;
  v32 = (int)a8;
  pbo = (BRUSHOBJ *)a9;
  v13 = 0;
  v33 = (int)a10;
  left = 0;
  v45 = a6;
  top = 0;
  v35 = a4;
  iUniq = 0;
  v41 = 0;
  right = 0;
  v49 = 1;
  bottom = 0;
  dhpdev = (int)a1->dhpdev;
  v15 = a6->left - a7->iUniq;
  v37 = a6->top - a7->flXlate;
  v47 = dhpdev;
  v38 = v15;
  v66.left = a6->left;
  v66.top = a6->top;
  v66.right = a6->right;
  v66.bottom = a6->bottom;
  if ( a4 && a4->iDComplexity )
  {
    if ( !bIntersect(&a4->rclBounds, &v66, &v66) )
      return 1;
    dhpdev = v47;
    v15 = v38;
  }
  v66.left -= v15;
  v66.right -= v15;
  v66.top -= v37;
  v66.bottom -= v37;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v30,
    pbo,
    *(_DWORD *)(dhpdev + 8),
    (struct _VDEV *)dhpdev,
    *(struct _SURFOBJ **)(dhpdev + 24),
    ((unsigned __int16)a11 ^ (unsigned __int16)((unsigned int)a11 >> 4)) & 0xF0F);
  if ( !v30[0] )
    return v13;
  v17 = v42;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  MULTISURF::vInit((MULTISURF *)v51, v42, v45);
  for ( i = MSURF::bFindSurface((MSURF *)v57, v46, 0, &v66); i; i = MSURF::bNextSurface((MSURF *)v57) )
  {
    v19 = v58;
    v48 = v59;
    if ( (*(_DWORD *)(*(_DWORD *)(v59 + 12) + 1120) & 0x8000000) == 0 && !IsMetaRedirectionBitmap((int)v17) )
    {
      v20 = (struct _SURFOBJ *)v56;
      v44 = v56;
LABEL_13:
      v21 = 0;
      v43 = 0;
      cy = (int)v34;
      if ( *(_DWORD *)(v19 + 16) )
      {
        cy = v20[1].sizlBitmap.cy;
        if ( !cy )
        {
          if ( !v34 )
            goto LABEL_20;
          if ( v34->iUniq )
          {
            cy = v34->iUniq;
            goto LABEL_23;
          }
          if ( ((int)v34->hsurf & 1) != 0 )
          {
LABEL_20:
            if ( v20 == v42 )
              cy = v46[1].sizlBitmap.cy;
          }
          else
          {
            v21 = 1;
          }
        }
        if ( !v21 )
        {
LABEL_23:
          if ( v34 )
            v47 = v34->sizlBitmap.cy;
          else
            v47 = 0;
          if ( v34 )
            pvBits = (int)v34->pvBits;
          else
            pvBits = 0;
          if ( v34 )
            cjBits = v34->cjBits;
          else
            cjBits = 0;
          if ( v34 )
            dhsurf = (int)v34[1].dhsurf;
          else
            dhsurf = 0;
          if ( v34 )
            v25 = *(_DWORD *)&v34->iType;
          else
            v25 = 0;
          if ( EXLATEOBJ::bInitXlateObj(
                 &v43,
                 v25,
                 dhsurf,
                 *(_DWORD **)(v48 + 72),
                 (_DWORD *)cy,
                 (int)ppalDefault,
                 (int)ppalDefault,
                 cjBits,
                 pvBits,
                 v47,
                 0x2000) )
          {
            v19 = v58;
            cy = v43;
            v48 = v59;
            goto LABEL_40;
          }
        }
        v49 = 0;
      }
      else
      {
LABEL_40:
        if ( *(_BYTE *)(v60 + 20) )
        {
          iUniq = *(_DWORD *)(v60 + 4);
          v41 = *(_DWORD *)(v60 + 8);
          left = v38 + *(_DWORD *)(v60 + 4);
          right = v38 + *(_DWORD *)(v60 + 12);
          top = v37 + *(_DWORD *)(v60 + 8);
          bottom = v37 + *(_DWORD *)(v60 + 16);
        }
        else
        {
          left = v45->left;
          iUniq = v39->iUniq;
          flXlate = v39->flXlate;
          top = v45->top;
          v41 = flXlate;
          right = v45->right;
          bottom = v45->bottom;
        }
        if ( a11 == (struct _BRUSHOBJ *)52428 )
        {
          v27 = OffCopyBits(v44, v61, v48, v35, cy, (int)&left, (int)&iUniq);
          v49 &= v27;
        }
        else
        {
          MULTIBRUSH::LoadElement((MULTIBRUSH *)v30, (struct _DISPSURF *)v19, (struct SURFACE *)(v48 - 16));
          if ( (*(_BYTE *)(v59 + 56) & 1) != 0 )
            v28 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_DWORD *)(v58 + 40) + 1972);
          else
            v28 = EngBitBlt;
          v29 = OffBitBlt(
                  (int (__stdcall *)(int, int, int, struct _CLIPOBJ *, int, _DWORD *, int *, int, int, int *, int))v28,
                  &gptlZero.x,
                  v44,
                  (_DWORD *)v61,
                  v59,
                  v31,
                  v35,
                  cy,
                  &left,
                  &iUniq,
                  v32,
                  (int)pbo,
                  (int *)v33,
                  (int)a11);
          v49 &= v29;
          MULTIBRUSH::StoreElement((MULTIBRUSH *)v30, *(_DWORD *)(v58 + 8));
        }
      }
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v43);
      v17 = v42;
      continue;
    }
    if ( v55 )
    {
      v20 = *(struct _SURFOBJ **)(*(_DWORD *)(v55 + 4) + 4 * *(_DWORD *)(v19 + 8));
      v44 = (int)v20;
      if ( v20 )
        goto LABEL_13;
    }
  }
  v13 = v49;
  MULTISURF::~MULTISURF((MULTISURF *)v51);
  return v13;
}
