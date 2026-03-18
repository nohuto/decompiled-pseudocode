/*
 * XREFs of ?SpStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1DC97B
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
 *     _OffStrokePath@40 @ 0x22F5F4 (_OffStrokePath@40.c)
 */

int __stdcall SpStrokePath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        MIX mix)
{
  FLOAT_LONG v8; // esi
  int v9; // edi
  SURFOBJ *v10; // ebx
  PATHOBJ *v11; // edi
  LONG y; // ebx
  LONG x; // edi
  LONG v14; // ebx
  LONG v15; // edi
  LONG *v16; // esi
  LONG *p_lDelta; // edi
  HSURF hsurf; // eax
  bool v19; // zf
  PKTHREAD (__stdcall *v20)(); // edi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v22; // eax
  PKTHREAD v23; // eax
  PKTHREAD v24; // eax
  PKTHREAD v25; // eax
  PKTHREAD v26; // eax
  PKTHREAD v27; // eax
  PKTHREAD v28; // eax
  PKTHREAD v29; // eax
  PKTHREAD v30; // eax
  CLIPOBJ *pco; // [esp+10h] [ebp-550h] BYREF
  SURFOBJ *pso; // [esp+14h] [ebp-54Ch] BYREF
  FLOAT_LONG v35; // [esp+18h] [ebp-548h]
  LINEATTRS *plineattrs; // [esp+1Ch] [ebp-544h]
  struct _PATHOBJ *v37; // [esp+20h] [ebp-540h]
  struct _POINTL v38; // [esp+24h] [ebp-53Ch] BYREF
  LONG *v39; // [esp+2Ch] [ebp-534h] BYREF
  XFORMOBJ *pxo; // [esp+30h] [ebp-530h]
  int v41; // [esp+34h] [ebp-52Ch]
  HDEV hdev; // [esp+38h] [ebp-528h] BYREF
  POINTL *pptlBrushOrg; // [esp+3Ch] [ebp-524h]
  BRUSHOBJ *pbo; // [esp+40h] [ebp-520h]
  _BYTE v45[16]; // [esp+44h] [ebp-51Ch] BYREF
  int v46; // [esp+54h] [ebp-50Ch]
  struct _PATHOBJ v47; // [esp+58h] [ebp-508h] BYREF
  int v48; // [esp+60h] [ebp-500h]
  _BYTE v49[16]; // [esp+88h] [ebp-4D8h] BYREF
  int v50; // [esp+98h] [ebp-4C8h]
  struct _RECTL v51[3]; // [esp+2B0h] [ebp-2B0h] BYREF
  int v52; // [esp+2E4h] [ebp-27Ch]

  pxo = a4;
  pbo = a5;
  pptlBrushOrg = a6;
  v38.x = 0;
  v38.y = 0;
  v8.e = (FLOATL)a7->elStyleState;
  plineattrs = a7;
  v9 = 1;
  pso = a1;
  pco = a3;
  v41 = 1;
  v35.e = v8.e;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v51, a1, a3, &a3->rclBounds);
  if ( ENUMUNDERLAYS::bEnum(v51, &pso, &v38, &pco) )
  {
    while ( 1 )
    {
      v37 = 0;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v47);
      v10 = pso;
      memset(v45, 0, sizeof(v45));
      v46 = 0;
      v11 = a2;
      if ( v52 == 1 && EPATHOBJ::bPreComputedFill((EPATHOBJ *)a2) && !v10[2].lDelta && ((int)v10[1].dhpdev & 1) == 0 )
      {
        if ( !v48 )
          goto LABEL_18;
        if ( !EPATHOBJ::bClone((EPATHOBJ *)&v47, (struct EPATHOBJ *)a2) )
          goto LABEL_18;
        y = v38.y;
        x = v38.x;
        CLIPOBJ_vOffset(pco, v38.x, v38.y);
        PATHOBJ_vOffset(&v47, x, y);
        hdev = pso->hdev;
        PRECOMPUTE::vInit(v45, &pso[-1].lDelta, &hdev, &v47, pco, pxo, plineattrs, mix, 0, 0);
        v14 = -y;
        v15 = -x;
        CLIPOBJ_vOffset(pco, v15, v14);
        PATHOBJ_vOffset(&v47, v15, v14);
        if ( !v46 )
        {
LABEL_18:
          PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v45);
          EPATHOBJ::vUnlock((EPATHOBJ *)&v47);
          if ( v50 )
            PopThreadGuardedObject(v49);
          goto LABEL_45;
        }
        v11 = &v47;
        v10 = pso;
        v37 = a2;
        a2 = &v47;
      }
      plineattrs->elStyleState = v8;
      PATHOBJ_vEnumStart(v11);
      v16 = 0;
      p_lDelta = 0;
      v39 = 0;
      if ( v10 )
      {
        hsurf = v10[1].hsurf;
        if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
        {
          p_lDelta = &v10[-1].lDelta;
          v16 = &v10[-1].lDelta;
          v39 = &v10[-1].lDelta;
          GreLockDisplayDevice(v10->hdev);
        }
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v39, &pco) )
        break;
      if ( v37 )
        a2 = v37;
      v19 = p_lDelta == 0;
LABEL_40:
      if ( !v19 )
        GreUnlockDisplayDevice(v16[7]);
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v45);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v47);
      if ( v50 )
        PopThreadGuardedObject(v49);
      v8.e = v35.e;
LABEL_45:
      if ( !ENUMUNDERLAYS::bEnum(v51, &pso, &v38, &pco) )
        return v41;
    }
    if ( v10->iType == 1 )
    {
      v20 = KeGetCurrentThread;
      if ( bAllowShareAccess(v10) )
      {
        CurrentThread = KeGetCurrentThread();
        if ( W32GetThreadWin32Thread(CurrentThread) )
        {
          v22 = KeGetCurrentThread();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v22) + 156) )
          {
            v23 = KeGetCurrentThread();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v23) + 52)
              || (v24 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v24) + 56)) )
            {
              v25 = KeGetCurrentThread();
              if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v25) + 156) + 20) & 0x20) != 0 )
              {
                v26 = KeGetCurrentThread();
                W32GetThreadWin32Thread(v26);
LABEL_35:
                if ( !OffStrokePath(v10, a2, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix) )
                  v41 = -1;
                if ( v37 )
                  a2 = v37;
                v19 = v16 == 0;
                goto LABEL_40;
              }
            }
          }
        }
      }
    }
    else
    {
      v20 = KeGetCurrentThread;
    }
    if ( v10->iType == 1 )
    {
      if ( bAllowShareAccess(v10) )
      {
        v27 = v20();
        if ( W32GetThreadWin32Thread(v27) )
        {
          v28 = v20();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v28) + 156) )
          {
            v29 = v20();
            if ( !*(_DWORD *)(W32GetThreadWin32Thread(v29) + 52) )
            {
              v30 = v20();
              W32GetThreadWin32Thread(v30);
            }
          }
        }
      }
    }
    goto LABEL_35;
  }
  return v9;
}
