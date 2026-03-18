/*
 * XREFs of ?bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL@@@Z @ 0x1DE86D
 * Callers:
 *     ?bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_RECTL@@@Z @ 0x9F6DC (-bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_REC.c)
 * Callees:
 *     ?vSpDirectDriverAccess@@YGXPAU_SPRITESTATE@@H@Z @ 0x3061A (-vSpDirectDriverAccess@@YGXPAU_SPRITESTATE@@H@Z.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?SrcSurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x794DE (-SrcSurfaceAccessCheck@@YGHPAVSURFACE@@@Z.c)
 *     ?bIsSourceBGRA@@YGHPAVSURFACE@@@Z @ 0x99BF2 (-bIsSourceBGRA@@YGHPAVSURFACE@@@Z.c)
 *     ?vSpDeleteShape@@YGXPAVSPRITE@@@Z @ 0x9EDE8 (-vSpDeleteShape@@YGXPAVSPRITE@@@Z.c)
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4@Z @ 0x1DDCF1 (-bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4.c)
 *     ?bSpUpdateAlpha@@YGHPAVSPRITE@@PAU_BLENDFUNCTION@@H@Z @ 0x1DE62C (-bSpUpdateAlpha@@YGHPAVSPRITE@@PAU_BLENDFUNCTION@@H@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YGXPAU_SURFOBJ@@KPAU_RECTL@@PAPAE@Z @ 0x1E2C63 (-vSpUpdatePerPixelAlphaFromColorKey@@YGXPAU_SURFOBJ@@KPAU_RECTL@@PAPAE@Z.c)
 *     ?bConvertDfbDcToDib@@YG_NPAVXDCOBJ@@@Z @ 0x220CE2 (-bConvertDfbDcToDib@@YG_NPAVXDCOBJ@@@Z.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YGHPAUHSURF__@@@Z @ 0x220DEC (-pConvertDfbSurfaceToDibPostNKAPC@@YGHPAUHSURF__@@@Z.c)
 */

int __userpurge bSpUpdateShape@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct SPRITE *a3,
        HDC a4,
        HDC a5,
        HDC a6,
        XLATEOBJ *a7,
        struct _BLENDFUNCTION *a8,
        struct _POINTL *a9,
        struct tagSIZE *a10,
        struct _RECTL *a11)
{
  int v11; // ebx
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // eax
  DC *v16; // ecx
  int v17; // edx
  int v18; // edx
  int v19; // eax
  signed int iUniq; // edx
  ULONG v21; // eax
  _DWORD *v22; // edi
  signed int v23; // ecx
  HDC v24; // eax
  _DWORD *v25; // eax
  int v26; // esi
  int v27; // eax
  HDC v28; // ecx
  struct PALETTE *v29; // eax
  int *v30; // ecx
  int v31; // eax
  int v32; // esi
  _DWORD *v33; // edi
  ULONG v34; // eax
  int *v35; // ecx
  int v36; // edx
  char v37; // dl
  int v38; // eax
  struct XDCOBJ *v40; // [esp+0h] [ebp-94h]
  struct _RECTL *v41; // [esp+0h] [ebp-94h]
  struct _RECTL *v42; // [esp+4h] [ebp-90h]
  unsigned __int8 **v43; // [esp+4h] [ebp-90h]
  int v44; // [esp+14h] [ebp-80h]
  int v45; // [esp+18h] [ebp-7Ch]
  int v46; // [esp+1Ch] [ebp-78h]
  struct PALETTE *v47; // [esp+20h] [ebp-74h]
  int v48; // [esp+24h] [ebp-70h]
  int v49; // [esp+2Ch] [ebp-68h] BYREF
  int v50; // [esp+30h] [ebp-64h] BYREF
  _DWORD *v51; // [esp+34h] [ebp-60h] BYREF
  signed int v52; // [esp+38h] [ebp-5Ch]
  int v53; // [esp+3Ch] [ebp-58h]
  DC *v54[3]; // [esp+40h] [ebp-54h] BYREF
  ULONG NearestIndexFromColorref; // [esp+4Ch] [ebp-48h]
  int v56; // [esp+50h] [ebp-44h]
  _DWORD *v57; // [esp+54h] [ebp-40h]
  int v58; // [esp+58h] [ebp-3Ch]
  HDC v59; // [esp+5Ch] [ebp-38h]
  HDC v60; // [esp+60h] [ebp-34h]
  _DWORD *flXlate; // [esp+64h] [ebp-30h] BYREF
  int *v62; // [esp+68h] [ebp-2Ch]
  HDC v63; // [esp+6Ch] [ebp-28h]
  _DWORD *v64; // [esp+70h] [ebp-24h] BYREF
  XLATEOBJ *pxlo; // [esp+74h] [ebp-20h] BYREF
  _DWORD *v66; // [esp+78h] [ebp-1Ch]
  ULONG v67; // [esp+7Ch] [ebp-18h] BYREF
  _DWORD *v68; // [esp+80h] [ebp-14h]
  signed int v69; // [esp+84h] [ebp-10h]
  char *v70; // [esp+88h] [ebp-Ch]

  v60 = (HDC)a3;
  v11 = 0;
  v59 = a4;
  v63 = a6;
  v13 = *(_DWORD **)(a2 + 12);
  pxlo = a7;
  v64 = (_DWORD *)*v13;
  v58 = a1;
  v62 = (int *)a2;
  v48 = 0;
  v70 = 0;
  NearestIndexFromColorref = 0;
  v49 = 0;
  v66 = v13;
  if ( a1 == 0x2000000 )
  {
    *(_DWORD *)(a2 + 60) = 0;
    *(_DWORD *)(a2 + 4) = 0x2000000;
    v14 = (int)*a8;
    *(_DWORD *)(a2 + 64) = 0;
    v11 = 1;
    *(_DWORD *)(a2 + 68) = v14;
    *(struct _BLENDFUNCTION *)(a2 + 72) = a8[1];
    *(_DWORD *)(a2 + 104) = v13[19];
    *(_DWORD *)(a2 + 108) = v13[20];
    return v11;
  }
  if ( a1 )
  {
    v15 = (int)v63;
  }
  else
  {
    a1 = *(_DWORD *)(a2 + 4);
    v15 = a2 + 140;
    v58 = a1;
    v63 = (HDC)(a2 + 140);
  }
  if ( pxlo && a8 && (v15 || (a1 & 2) == 0) )
  {
    memset(v54, 0, sizeof(v54));
    XDCOBJ::vLock((XDCOBJ *)v54, v59);
    if ( !v54[0] )
      goto LABEL_81;
    if ( XDCOBJ::bFullScreen(v54) )
      goto LABEL_81;
    if ( !SrcSurfaceAccessCheck(*((_DWORD **)v54[0] + 126)) )
      goto LABEL_81;
    v16 = v54[0];
    v17 = *((_DWORD *)v54[0] + 9);
    if ( v17 != *v66 && v17 != v64[4] )
      goto LABEL_81;
    if ( v60 )
    {
      v51 = 0;
      v52 = 0;
      v53 = 0;
      XDCOBJ::vLock((XDCOBJ *)&v51, v60);
      if ( !v51 || (v18 = v51[9], v18 != *((_DWORD *)v54[0] + 9)) || v18 != *v66 && v18 != v64[4] )
      {
        DCOBJ::~DCOBJ((DCOBJ *)&v51);
        goto LABEL_81;
      }
      v47 = (struct PALETTE *)v51[15];
      v19 = v51[255];
      v46 = *(_DWORD *)(v19 + 196);
      v45 = *(_DWORD *)(v19 + 204);
      v44 = v51[20];
      DCOBJ::~DCOBJ((DCOBJ *)&v51);
      v16 = v54[0];
    }
    else
    {
      v45 = 0xFFFFFF;
      v46 = 0;
      v44 = 0;
      v47 = ppalDefault;
    }
    iUniq = pxlo->iUniq;
    v21 = pxlo->iUniq + *(_DWORD *)a8;
    v67 = pxlo->iUniq;
    v69 = v21;
    flXlate = (_DWORD *)pxlo->flXlate;
    v68 = flXlate;
    v22 = (_DWORD *)*((_DWORD *)v16 + 126);
    v70 = (char *)flXlate + *(_DWORD *)&a8[1];
    v57 = v22;
    if ( !v22
      || iUniq < 0
      || (int)flXlate < 0
      || iUniq >= v69
      || (int)flXlate >= (int)v70
      || (v23 = v22[8], v69 > v23)
      || (int)v70 > v22[9] )
    {
LABEL_65:
      v11 = v48;
LABEL_81:
      DCOBJ::~DCOBJ((DCOBJ *)v54);
      return v11;
    }
    if ( a9 )
    {
      v53 = v22[9];
      v52 = v23;
      v50 = 0;
      v51 = 0;
      ERECTL::operator*=(&a9->x, &v50);
    }
    GreAcquireSemaphoreSharedInternal(v66[22]);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v66[22]);
    v24 = *(HDC *)(a2 + 88);
    v59 = v24;
    if ( v24 && (*((_DWORD *)v24 + 35) || ((_BYTE)v24[15] & 1) != 0) )
    {
      v60 = v24 + 38;
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v24 + 38));
      if ( (*(_DWORD *)a2 & 0x200) != 0 )
      {
        v50 = 0;
        v51 = 0;
        v52 = *((_DWORD *)v59 + 4);
        v53 = *((_DWORD *)v59 + 5);
        ERECTL::operator*=((int *)&v67, &v50);
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)v60);
    }
    v25 = (_DWORD *)v22[22];
    pxlo = 0;
    v26 = *((_DWORD *)v54[0] + 15);
    flXlate = v25;
    if ( v25 )
      INC_SHARE_REF_CNT(v25);
    EtwTraceGreLockReleaseSemaphore(L"hsem", v66[22]);
    GreReleaseSemaphoreInternal(v66[22]);
    v27 = v58;
    if ( v58 != 3 || *((_BYTE *)v63 + 3) )
    {
      v56 = 0;
    }
    else
    {
      v49 = *(_DWORD *)v63;
      HIBYTE(v49) = 1;
      v63 = (HDC)&v49;
      v58 = 2;
      v56 = 1;
      NearestIndexFromColorref = rgbFromColorref(gppalRGB, v26, a5);
      v27 = v58;
    }
    if ( v27 == 2 && (*((_BYTE *)v63 + 3) & 1) != 0 )
    {
      v60 = (HDC)6;
      v28 = (HDC)gppalRGB;
      v29 = ppalDefault;
    }
    else
    {
      v60 = 0;
      v28 = (HDC)v64[278];
      v29 = v47;
    }
    v59 = v28;
    if ( !EXLATEOBJ::bInitXlateObj((int *)&pxlo, 0, v44, flXlate, v28, v26, (int)v29, v45, v46, 0, 0) )
    {
LABEL_64:
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&flXlate);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
      goto LABEL_65;
    }
    v30 = v62;
    v31 = v58;
    v48 = 1;
    v62[1] = v58;
    v30[15] = v67;
    v30[16] = (int)v68;
    v30[17] = v69;
    v30[18] = (int)v70;
    if ( v31 == 4 )
    {
      *v30 |= 8u;
      v32 = 1;
LABEL_50:
      v33 = v57;
      goto LABEL_51;
    }
    if ( v31 == 1 )
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(flXlate, v26, a5, 1);
      v34 = XLATEOBJ_iXlate(pxlo, NearestIndexFromColorref);
      v35 = v62;
      *v62 &= ~8u;
      v35[36] = v34;
      v32 = v64[7] & 4;
      goto LABEL_71;
    }
    if ( v31 == 2 && bSpUpdateAlpha((int)v63, (int)v30, 0, (struct _BLENDFUNCTION *)v40, (int)v42) )
    {
      v37 = *(_BYTE *)(v36 + 3) & 1;
      if ( !v37 || bIsSourceBGRA(v57) )
      {
        if ( !v56 )
        {
          if ( v37 )
            v32 = v64[7] & 2;
          else
            v32 = v64[7] & 1;
LABEL_71:
          if ( v32 )
            goto LABEL_50;
LABEL_72:
          v33 = v57;
          if ( *((_WORD *)v57 + 32) || (*((_BYTE *)v57 + 66) & 0x20) != 0 )
          {
            if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v64) )
            {
              v38 = v33[19];
              if ( (v38 & 0x20) == 0 )
              {
                v33[19] = v38 | 0x20;
                pConvertDfbSurfaceToDibPostNKAPC((HSURF)v40);
              }
            }
            else
            {
              bConvertDfbDcToDib(v40);
            }
            v33 = (_DWORD *)*((_DWORD *)v54[0] + 126);
          }
LABEL_51:
          vSpDirectDriverAccess(v66, 0);
          bSpCreateShape(
            &gptlZero,
            v62,
            v33 != 0 ? (struct SPRITE *)(v33 + 4) : 0,
            (struct _POINTL *)pxlo,
            (struct _SURFOBJ *)&v67,
            (struct _XLATEOBJ *)v59,
            (struct _RECTL *)v60,
            (struct PALETTE *)(v32 == 0),
            &a9->x,
            (unsigned int)v40,
            v42);
          vSpDirectDriverAccess(v66, 1);
          v30 = v62;
          if ( v62[22] )
          {
            if ( v56 )
            {
              if ( (*(_BYTE *)v62 & 0x40) != 0 )
                v62[36] = NearestIndexFromColorref;
              else
                vSpUpdatePerPixelAlphaFromColorKey((struct _SURFOBJ *)a9, 0, v41, v43);
            }
            goto LABEL_64;
          }
          goto LABEL_63;
        }
      }
      else if ( !v56 )
      {
        v30 = v62;
        goto LABEL_63;
      }
      v32 = 0;
      goto LABEL_72;
    }
LABEL_63:
    vSpDeleteShape(v30);
    v48 = 0;
    v62[1] = 4;
    goto LABEL_64;
  }
  return v11;
}
