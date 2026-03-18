/*
 * XREFs of ?SpStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1DC5A3
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
 *     _OffStrokeAndFillPath@48 @ 0x22F539 (_OffStrokeAndFillPath@48.c)
 */

int __stdcall SpStrokeAndFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        MIX mixFill,
        FLONG flOptions)
{
  struct _PATHOBJ *v10; // esi
  int v11; // edi
  SURFOBJ *v12; // ebx
  LONG y; // edi
  LONG x; // esi
  LONG v15; // edi
  LONG v16; // esi
  LONG *v17; // esi
  LONG *p_lDelta; // edi
  HSURF hsurf; // eax
  bool v20; // zf
  PKTHREAD (__stdcall *v21)(); // edi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v23; // eax
  PKTHREAD v24; // eax
  PKTHREAD v25; // eax
  PKTHREAD v26; // eax
  PKTHREAD v27; // eax
  PKTHREAD v28; // eax
  PKTHREAD v29; // eax
  PKTHREAD v30; // eax
  PKTHREAD v31; // eax
  struct _PATHOBJ *v33; // [esp+Ch] [ebp-554h]
  CLIPOBJ *pco; // [esp+10h] [ebp-550h] BYREF
  struct _PATHOBJ *v35; // [esp+14h] [ebp-54Ch]
  SURFOBJ *pso; // [esp+18h] [ebp-548h] BYREF
  struct _POINTL v37; // [esp+1Ch] [ebp-544h] BYREF
  LONG *v38; // [esp+24h] [ebp-53Ch] BYREF
  LINEATTRS *plineattrs; // [esp+28h] [ebp-538h]
  XFORMOBJ *pxo; // [esp+2Ch] [ebp-534h]
  int v41; // [esp+30h] [ebp-530h]
  HDEV hdev; // [esp+34h] [ebp-52Ch] BYREF
  POINTL *pptlBrushOrg; // [esp+38h] [ebp-528h]
  BRUSHOBJ *pboFill; // [esp+3Ch] [ebp-524h]
  BRUSHOBJ *pboStroke; // [esp+40h] [ebp-520h]
  _BYTE v46[16]; // [esp+44h] [ebp-51Ch] BYREF
  int v47; // [esp+54h] [ebp-50Ch]
  struct _PATHOBJ v48; // [esp+58h] [ebp-508h] BYREF
  int v49; // [esp+60h] [ebp-500h]
  _BYTE v50[16]; // [esp+88h] [ebp-4D8h] BYREF
  int v51; // [esp+98h] [ebp-4C8h]
  struct _RECTL v52[3]; // [esp+2B0h] [ebp-2B0h] BYREF
  int v53; // [esp+2E4h] [ebp-27Ch]

  pxo = a4;
  pboStroke = a5;
  plineattrs = a6;
  pboFill = a7;
  v10 = ppo;
  pptlBrushOrg = a8;
  v37.x = 0;
  v37.y = 0;
  v11 = 1;
  pso = a1;
  v33 = ppo;
  pco = a3;
  v41 = 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v52, a1, a3, &a3->rclBounds);
  if ( ENUMUNDERLAYS::bEnum(v52, &pso, &v37, &pco) )
  {
    while ( 1 )
    {
      v35 = 0;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v48);
      v12 = pso;
      memset(v46, 0, sizeof(v46));
      v47 = 0;
      if ( v53 != 1
        || !v10[3].fl && !EPATHOBJ::bPreComputedFill((EPATHOBJ *)v10)
        || v12[2].lDelta
        || ((int)v12[1].dhpdev & 1) != 0 )
      {
        goto LABEL_11;
      }
      if ( !v49 || !EPATHOBJ::bClone((EPATHOBJ *)&v48, (struct EPATHOBJ *)v10) )
      {
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v46);
        EPATHOBJ::vUnlock((EPATHOBJ *)&v48);
        if ( v51 )
          PopThreadGuardedObject(v50);
        goto LABEL_46;
      }
      y = v37.y;
      x = v37.x;
      CLIPOBJ_vOffset(pco, v37.x, v37.y);
      PATHOBJ_vOffset(&v48, x, y);
      hdev = v12->hdev;
      PRECOMPUTE::vInit(v46, &v12[-1].lDelta, &hdev, &v48, pco, pxo, plineattrs, mixFill, flOptions, 2);
      v15 = -y;
      v16 = -x;
      CLIPOBJ_vOffset(pco, v16, v15);
      PATHOBJ_vOffset(&v48, v16, v15);
      if ( v47 )
        break;
LABEL_43:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v46);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v48);
      if ( v51 )
        PopThreadGuardedObject(v50);
      v10 = v33;
LABEL_46:
      if ( !ENUMUNDERLAYS::bEnum(v52, &pso, &v37, &pco) )
        return v41;
    }
    v10 = &v48;
    v35 = v33;
    v33 = &v48;
LABEL_11:
    PATHOBJ_vEnumStart(v10);
    v17 = 0;
    p_lDelta = 0;
    v38 = 0;
    if ( v12 )
    {
      hsurf = v12[1].hsurf;
      if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
      {
        p_lDelta = &v12[-1].lDelta;
        v17 = &v12[-1].lDelta;
        v38 = &v12[-1].lDelta;
        GreLockDisplayDevice(v12->hdev);
      }
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v38, &pco) )
    {
      if ( v35 )
        v33 = v35;
      v20 = p_lDelta == 0;
LABEL_41:
      if ( !v20 )
        GreUnlockDisplayDevice(v17[7]);
      goto LABEL_43;
    }
    if ( v12->iType == 1 )
    {
      v21 = KeGetCurrentThread;
      if ( bAllowShareAccess(v12) )
      {
        CurrentThread = KeGetCurrentThread();
        if ( W32GetThreadWin32Thread(CurrentThread) )
        {
          v23 = KeGetCurrentThread();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v23) + 156) )
          {
            v24 = KeGetCurrentThread();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v24) + 52)
              || (v25 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v25) + 56)) )
            {
              v26 = KeGetCurrentThread();
              if ( *(char *)(*(_DWORD *)(W32GetThreadWin32Thread(v26) + 156) + 20) < 0 )
              {
                v27 = KeGetCurrentThread();
                W32GetThreadWin32Thread(v27);
LABEL_36:
                if ( !OffStrokeAndFillPath(
                        v12,
                        v33,
                        pco,
                        pxo,
                        pboStroke,
                        plineattrs,
                        pboFill,
                        pptlBrushOrg,
                        mixFill,
                        flOptions) )
                  v41 = -1;
                if ( v35 )
                  v33 = v35;
                v20 = v17 == 0;
                goto LABEL_41;
              }
            }
          }
        }
      }
    }
    else
    {
      v21 = KeGetCurrentThread;
    }
    if ( v12->iType == 1 )
    {
      if ( bAllowShareAccess(v12) )
      {
        v28 = v21();
        if ( W32GetThreadWin32Thread(v28) )
        {
          v29 = v21();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v29) + 156) )
          {
            v30 = v21();
            if ( !*(_DWORD *)(W32GetThreadWin32Thread(v30) + 52) )
            {
              v31 = v21();
              W32GetThreadWin32Thread(v31);
            }
          }
        }
      }
    }
    goto LABEL_36;
  }
  return v11;
}
