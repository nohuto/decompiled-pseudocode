/*
 * XREFs of ?SpFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1DB6EA
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z @ 0x66A00 (-bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18 (-CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z.c)
 *     ?bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z @ 0xCAC18 (-bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z @ 0xE51B4 (-bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bPreComputedFill@EPATHOBJ@@QBEHXZ @ 0x1DCEDD (-bPreComputedFill@EPATHOBJ@@QBEHXZ.c)
 *     ??0PATHSTACKOBJ@@QAE@XZ @ 0x1E4387 (--0PATHSTACKOBJ@@QAE@XZ.c)
 *     ??1PRECOMPUTE@@QAE@XZ @ 0x1E4579 (--1PRECOMPUTE@@QAE@XZ.c)
 *     ?vInit@PRECOMPUTE@@QAEXPAVSURFACE@@PAVPDEVOBJ@@PAVEPATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1E584E (-vInit@PRECOMPUTE@@QAEXPAVSURFACE@@PAVPDEVOBJ@@PAVEPATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_LINEA.c)
 *     ?PATHOBJ_vOffset@@YIXPAU_PATHOBJ@@JJ@Z @ 0x22EE45 (-PATHOBJ_vOffset@@YIXPAU_PATHOBJ@@JJ@Z.c)
 *     _OffFillPath@36 @ 0x22F0D3 (_OffFillPath@36.c)
 */

int __stdcall SpFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        MIX mix,
        FLONG flOptions)
{
  struct _PATHOBJ *v7; // esi
  int v8; // edi
  SURFOBJ *v9; // ebx
  LONG y; // edi
  LONG x; // esi
  LONG v12; // edi
  LONG v13; // esi
  LONG *v14; // esi
  LONG *p_lDelta; // edi
  HSURF hsurf; // eax
  bool v17; // zf
  PKTHREAD (__stdcall *v18)(); // edi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v20; // eax
  PKTHREAD v21; // eax
  PKTHREAD v22; // eax
  PKTHREAD v23; // eax
  PKTHREAD v24; // eax
  PKTHREAD v25; // eax
  PKTHREAD v26; // eax
  PKTHREAD v27; // eax
  PKTHREAD v28; // eax
  struct _PATHOBJ *v30; // [esp+10h] [ebp-548h]
  CLIPOBJ *pco; // [esp+14h] [ebp-544h] BYREF
  struct _PATHOBJ *v32; // [esp+18h] [ebp-540h]
  SURFOBJ *pso; // [esp+1Ch] [ebp-53Ch] BYREF
  struct _POINTL v34; // [esp+20h] [ebp-538h] BYREF
  LONG *v35; // [esp+28h] [ebp-530h] BYREF
  int v36; // [esp+2Ch] [ebp-52Ch]
  HDEV hdev; // [esp+30h] [ebp-528h] BYREF
  POINTL *pptlBrushOrg; // [esp+34h] [ebp-524h]
  BRUSHOBJ *pbo; // [esp+38h] [ebp-520h]
  _BYTE v40[16]; // [esp+3Ch] [ebp-51Ch] BYREF
  int v41; // [esp+4Ch] [ebp-50Ch]
  struct _PATHOBJ v42; // [esp+50h] [ebp-508h] BYREF
  int v43; // [esp+58h] [ebp-500h]
  _BYTE v44[16]; // [esp+80h] [ebp-4D8h] BYREF
  int v45; // [esp+90h] [ebp-4C8h]
  struct _RECTL v46[3]; // [esp+2A8h] [ebp-2B0h] BYREF
  int v47; // [esp+2DCh] [ebp-27Ch]

  pbo = a4;
  v7 = ppo;
  pptlBrushOrg = a5;
  v34.x = 0;
  v34.y = 0;
  v8 = 1;
  pso = a1;
  v30 = ppo;
  pco = a3;
  v36 = 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v46, a1, a3, &a3->rclBounds);
  if ( ENUMUNDERLAYS::bEnum(v46, &pso, &v34, &pco) )
  {
    while ( 1 )
    {
      v32 = 0;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v42);
      v9 = pso;
      memset(v40, 0, sizeof(v40));
      v41 = 0;
      if ( v47 != 1 || !EPATHOBJ::bPreComputedFill((EPATHOBJ *)v7) || v9[2].lDelta || ((int)v9[1].dhpdev & 1) != 0 )
        goto LABEL_10;
      if ( !v43 || !EPATHOBJ::bClone((EPATHOBJ *)&v42, (struct EPATHOBJ *)v7) )
      {
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v40);
        EPATHOBJ::vUnlock((EPATHOBJ *)&v42);
        if ( v45 )
          PopThreadGuardedObject(v44);
        goto LABEL_45;
      }
      y = v34.y;
      x = v34.x;
      CLIPOBJ_vOffset(pco, v34.x, v34.y);
      PATHOBJ_vOffset(&v42, x, y);
      hdev = v9->hdev;
      PRECOMPUTE::vInit(v40, &v9[-1].lDelta, &hdev, &v42, pco, 0, 0, mix, flOptions, 1);
      v12 = -y;
      v13 = -x;
      CLIPOBJ_vOffset(pco, v13, v12);
      PATHOBJ_vOffset(&v42, v13, v12);
      if ( v41 )
        break;
LABEL_42:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v40);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v42);
      if ( v45 )
        PopThreadGuardedObject(v44);
      v7 = v30;
LABEL_45:
      if ( !ENUMUNDERLAYS::bEnum(v46, &pso, &v34, &pco) )
        return v36;
    }
    v7 = &v42;
    v32 = v30;
    v30 = &v42;
LABEL_10:
    PATHOBJ_vEnumStart(v7);
    v14 = 0;
    p_lDelta = 0;
    v35 = 0;
    if ( v9 )
    {
      hsurf = v9[1].hsurf;
      if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
      {
        p_lDelta = &v9[-1].lDelta;
        v14 = &v9[-1].lDelta;
        v35 = &v9[-1].lDelta;
        GreLockDisplayDevice(v9->hdev);
      }
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v35, &pco) )
    {
      if ( v32 )
        v30 = v32;
      v17 = p_lDelta == 0;
LABEL_40:
      if ( !v17 )
        GreUnlockDisplayDevice(v14[7]);
      goto LABEL_42;
    }
    if ( v9->iType == 1 )
    {
      v18 = KeGetCurrentThread;
      if ( bAllowShareAccess(v9) )
      {
        CurrentThread = KeGetCurrentThread();
        if ( W32GetThreadWin32Thread(CurrentThread) )
        {
          v20 = KeGetCurrentThread();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v20) + 156) )
          {
            v21 = KeGetCurrentThread();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v21) + 52)
              || (v22 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v22) + 56)) )
            {
              v23 = KeGetCurrentThread();
              if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v23) + 156) + 20) & 0x40) != 0 )
              {
                v24 = KeGetCurrentThread();
                W32GetThreadWin32Thread(v24);
LABEL_35:
                if ( !OffFillPath(v9, v30, pco, pbo, pptlBrushOrg, mix, flOptions) )
                  v36 = -1;
                if ( v32 )
                  v30 = v32;
                v17 = v14 == 0;
                goto LABEL_40;
              }
            }
          }
        }
      }
    }
    else
    {
      v18 = KeGetCurrentThread;
    }
    if ( v9->iType == 1 )
    {
      if ( bAllowShareAccess(v9) )
      {
        v25 = v18();
        if ( W32GetThreadWin32Thread(v25) )
        {
          v26 = v18();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v26) + 156) )
          {
            v27 = v18();
            if ( !*(_DWORD *)(W32GetThreadWin32Thread(v27) + 52) )
            {
              v28 = v18();
              W32GetThreadWin32Thread(v28);
            }
          }
        }
      }
    }
    goto LABEL_35;
  }
  return v8;
}
