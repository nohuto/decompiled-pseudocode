/*
 * XREFs of ?vInit@PRECOMPUTE@@QAEXPAVSURFACE@@PAVPDEVOBJ@@PAVEPATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1E584E
 * Callers:
 *     _EngLineTo@36 @ 0xBDF44 (_EngLineTo@36.c)
 *     ?SpFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1DB6EA (-SpFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1DC5A3 (-SpStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_.c)
 *     ?SpStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1DC97B (-SpStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@.c)
 *     ?bSimpleFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1E4616 (-bSimpleFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1E4859 (-bSimpleStroke@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@P.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1E4AC7 (-bSimpleStrokeAndFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUS.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0PATHSTACKOBJ@@QAE@XZ @ 0x1E4387 (--0PATHSTACKOBJ@@QAE@XZ.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x234F52 (-bComputeWidenedBounds@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 *     ?bWiden@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x235B22 (-bWiden@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 *     ?bPreComputeFast@PRECOMPUTE@@QAEHAAVEPATHOBJ@@0PAU_RECTL@@K@Z @ 0x23A136 (-bPreComputeFast@PRECOMPUTE@@QAEHAAVEPATHOBJ@@0PAU_RECTL@@K@Z.c)
 */

void __thiscall PRECOMPUTE::vInit(
        int *this,
        int a2,
        PDEVOBJ *a3,
        struct EPATHOBJ *a4,
        struct _RECTL *a5,
        struct _XFORMOBJ *a6,
        struct _LINEATTRS *a7,
        char a8,
        unsigned int a9,
        int a10)
{
  struct _RECTL *v10; // ebx
  struct EPATHOBJ *v11; // esi
  int *v12; // edi
  struct _RECTL *v13; // ecx
  LONG right; // edx
  EPATHOBJ *v15; // ecx
  struct _LINEATTRS *v16; // esi
  int v17; // ecx
  int v18; // ecx
  int *v19; // esi
  EPATHOBJ *v20; // ecx
  PRECOMPUTE *v21; // ecx
  PRECOMPUTE *v22; // ecx
  RGNOBJ *v23; // ecx
  EPATHOBJ *v24; // ecx
  int *v25; // esi
  EPATHOBJ *v26; // ecx
  PRECOMPUTE *v27; // ecx
  bool v28; // zf
  EPATHOBJ *v29; // ecx
  RGNOBJ *v30; // ecx
  EPATHOBJ *v31; // ecx
  struct _RECTL *v32; // eax
  struct _RECTL *v33; // [esp-4h] [ebp-308h]
  _BYTE v34[8]; // [esp+10h] [ebp-2F4h] BYREF
  int v35; // [esp+18h] [ebp-2ECh]
  int *v36; // [esp+5Ch] [ebp-2A8h]
  struct EPATHOBJ *v37; // [esp+60h] [ebp-2A4h]
  struct _XFORMOBJ *v38; // [esp+64h] [ebp-2A0h]
  int v39; // [esp+68h] [ebp-29Ch] BYREF
  struct _RECTL *p_top; // [esp+6Ch] [ebp-298h]
  struct _LINEATTRS *v41; // [esp+70h] [ebp-294h]
  int v42; // [esp+74h] [ebp-290h]
  int v43; // [esp+78h] [ebp-28Ch]
  int v44; // [esp+7Ch] [ebp-288h] BYREF
  int v45; // [esp+80h] [ebp-284h]
  unsigned int v46; // [esp+84h] [ebp-280h]
  int v47; // [esp+88h] [ebp-27Ch] BYREF
  LONG left; // [esp+8Ch] [ebp-278h]
  _BYTE v49[8]; // [esp+90h] [ebp-274h] BYREF
  int v50; // [esp+98h] [ebp-26Ch]
  _BYTE v51[16]; // [esp+C0h] [ebp-244h] BYREF
  int v52; // [esp+D0h] [ebp-234h]
  struct _RECTL v53; // [esp+2ECh] [ebp-18h] BYREF

  v38 = a6;
  v41 = a7;
  v46 = a9;
  v10 = 0;
  v11 = a4;
  v36 = this;
  memset(&v53, 0, sizeof(v53));
  v37 = a4;
  p_top = a5;
  v12 = this;
  *this = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  *((_DWORD *)a4 + 3) = 0;
  *((_DWORD *)a4 + 5) = 0;
  *((_DWORD *)a4 + 4) = 0;
  *((_DWORD *)a4 + 6) = 0;
  *((_DWORD *)a4 + 8) = 0;
  *((_DWORD *)a4 + 7) = 0;
  *((_DWORD *)a4 + 9) = 0;
  *((_DWORD *)a4 + 10) = 0;
  if ( (*(_DWORD *)(*(_DWORD *)a3 + 24) & 0x8000) != 0
    || !PDEVOBJ::bAllowShareAccess(a3)
    || *(_DWORD *)(a2 + 156)
    || (*(_BYTE *)(a2 + 76) & 1) != 0 )
  {
    v12[4] = (int)a4;
    return;
  }
  if ( !a10 )
  {
    if ( (v41->fl & 1) == 0 )
    {
LABEL_26:
      v12[4] = (int)v11;
LABEL_27:
      v18 = v12[4];
      if ( v18 )
      {
        *(_DWORD *)(v18 + 12) = *v12;
        *(_DWORD *)(v12[4] + 16) = v12[1];
        *(_DWORD *)(v12[4] + 20) = v12[2];
        *(_DWORD *)(v12[4] + 24) = v12[3];
      }
      return;
    }
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v49);
    if ( !v50
      || !EPATHOBJ::bClone(v31, a4)
      || (v49[0] & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)v49)
      || !EPATHOBJ::bWiden((EPATHOBJ *)v49, (struct EPATHOBJ *)v49, v38, v41) )
    {
      goto LABEL_137;
    }
    if ( LOBYTE(p_top[1].top) )
    {
      v53.top = 16 * p_top->right;
      v53.bottom = 16 * p_top[1].left;
      v32 = &v53;
      v37 = (struct EPATHOBJ *)&v53;
    }
    else
    {
      v32 = 0;
      v37 = 0;
    }
    left = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v47, (struct EPATHOBJ *)v49, v46, v32);
    if ( !v47 )
      goto LABEL_134;
    v28 = v46 == 2;
    v12[1] = v47;
    if ( !v28 )
    {
      v33 = (struct _RECTL *)v37;
      goto LABEL_131;
    }
LABEL_142:
    if ( left != 1 )
      goto LABEL_145;
    v30 = (RGNOBJ *)&v47;
LABEL_144:
    RGNOBJ::vDeleteRGNOBJ(v30);
LABEL_145:
    EPATHOBJ::vUnlock((EPATHOBJ *)v49);
    if ( v52 )
      PopThreadGuardedObject(v51);
    goto LABEL_26;
  }
  if ( a10 != 1 )
  {
    if ( a10 != 2 )
      goto LABEL_27;
    v13 = p_top;
    right = p_top->right;
    v53.top = 16 * right;
    left = p_top[1].left;
    v53.bottom = 16 * left;
    if ( (v41->fl & 1) != 0 && a8 != 13 )
    {
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v49);
      if ( v50 && EPATHOBJ::bClone(v15, a4) )
      {
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v34);
        if ( v35 )
        {
          v16 = v41;
          if ( EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v34, (struct EPATHOBJ *)v49, v38, v41) )
          {
            if ( EPATHOBJ::bWiden((EPATHOBJ *)v34, (struct EPATHOBJ *)v49, v38, v16)
              && ((v49[0] & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)v49)) )
            {
              p_top = 0;
              RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v39, (struct EPATHOBJ *)v34, 2u, 0);
              left = 0;
              RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v47, (struct EPATHOBJ *)v49, v46, 0);
              v17 = v39;
              if ( v39 && v47 )
              {
                v28 = left == 1;
                *v12 = v47;
                v12[3] = v17;
                if ( v28 )
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
                if ( p_top == (struct _RECTL *)1 )
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v39);
                PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v34);
                EPATHOBJ::vUnlock((EPATHOBJ *)v49);
                if ( v52 )
                  PopThreadGuardedObject(v51);
                v11 = v37;
                goto LABEL_26;
              }
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v39);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
              if ( left == 1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
              if ( p_top == (struct _RECTL *)1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v39);
            }
          }
        }
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v34);
      }
      goto LABEL_137;
    }
    if ( LOBYTE(p_top[1].top) != 3 && (*(_DWORD *)a4 & 0x4000) == 0 )
    {
      v19 = (int *)(*((_DWORD *)a4 + 2) + 28);
      p_top = 0;
      v42 = *v19++;
      v43 = *v19++;
      v44 = *v19;
      v45 = v19[1];
      if ( v13->top > v42 >> 4 || v13->bottom < (v44 + 15) >> 4 || right > v43 >> 4 || left < (v45 + 15) >> 4 )
        p_top = (struct _RECTL *)&v13->top;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v49);
      if ( !v50 )
        goto LABEL_137;
      v11 = v37;
      if ( !EPATHOBJ::bClone(v20, v37) )
        goto LABEL_137;
      if ( (v49[0] & 1) == 0 )
      {
        v12 = v36;
        goto LABEL_49;
      }
      if ( !EPATHOBJ::bFlatten((EPATHOBJ *)v49) )
        goto LABEL_137;
      left = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v47, (struct EPATHOBJ *)v49, v46, &v53);
      if ( v47 )
      {
        v28 = left == 1;
        v12 = v36;
        *v36 = v47;
        if ( v28 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
LABEL_49:
        if ( !PRECOMPUTE::bPreComputeFast(v21, (struct EPATHOBJ *)v49, v11, p_top, 1u) )
        {
          if ( *v12 )
          {
            REGION::vDeleteREGION((REGION *)*v12);
            *v12 = 0;
          }
          goto LABEL_137;
        }
        if ( (v41->fl & 1) != 0 && !EPATHOBJ::bWiden((EPATHOBJ *)v49, (struct EPATHOBJ *)v49, v38, v41)
          || !PRECOMPUTE::bPreComputeFast(v22, (struct EPATHOBJ *)v49, v11, p_top, 2u) )
        {
          if ( *((_DWORD *)v11 + 7) )
            Win32FreePool(*((_DWORD *)v11 + 7));
          if ( *v12 )
          {
            REGION::vDeleteREGION((REGION *)*v12);
            *v12 = 0;
          }
          *((_DWORD *)v11 + 7) = 0;
          *((_DWORD *)v11 + 8) = 0;
          goto LABEL_137;
        }
        v45 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v44, (struct EPATHOBJ *)v49, v46, &v53);
        if ( !v44 )
        {
          if ( *((_DWORD *)v11 + 7) )
            Win32FreePool(*((_DWORD *)v11 + 7));
          if ( *((_DWORD *)v11 + 10) )
            Win32FreePool(*((_DWORD *)v11 + 10));
          if ( *v12 )
          {
            REGION::vDeleteREGION((REGION *)*v12);
            *v12 = 0;
          }
          *((_DWORD *)v11 + 7) = 0;
          *((_DWORD *)v11 + 8) = 0;
          *((_DWORD *)v11 + 10) = 0;
          *((_DWORD *)v11 + 9) = 0;
          goto LABEL_78;
        }
        v28 = v46 == 2;
        v12[1] = v44;
        if ( !v28 )
        {
          left = 0;
          RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v47, (struct EPATHOBJ *)v49, 2u, &v53);
          if ( !v47 )
          {
            if ( *((_DWORD *)v11 + 7) )
              Win32FreePool(*((_DWORD *)v11 + 7));
            if ( *((_DWORD *)v11 + 10) )
              Win32FreePool(*((_DWORD *)v11 + 10));
            if ( *v12 )
            {
              REGION::vDeleteREGION((REGION *)*v12);
              *v12 = 0;
            }
            REGION::vDeleteREGION((REGION *)v12[1]);
            v28 = left == 1;
            v12[1] = 0;
            *((_DWORD *)v11 + 7) = 0;
            *((_DWORD *)v11 + 8) = 0;
            *((_DWORD *)v11 + 10) = 0;
            *((_DWORD *)v11 + 9) = 0;
            if ( v28 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
            goto LABEL_78;
          }
          v28 = left == 1;
          v12[2] = v47;
          if ( v28 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
        }
LABEL_117:
        if ( v45 != 1 )
          goto LABEL_145;
        v30 = (RGNOBJ *)&v44;
        goto LABEL_144;
      }
LABEL_134:
      if ( left == 1 )
      {
        v23 = (RGNOBJ *)&v47;
        goto LABEL_136;
      }
LABEL_137:
      EPATHOBJ::vUnlock((EPATHOBJ *)v49);
      v28 = v52 == 0;
      goto LABEL_138;
    }
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v49);
    if ( !v50
      || !EPATHOBJ::bClone(v24, a4)
      || (v49[0] & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)v49)
      || (v41->fl & 1) != 0 && !EPATHOBJ::bWiden((EPATHOBJ *)v49, (struct EPATHOBJ *)v49, v38, v41) )
    {
      goto LABEL_137;
    }
    left = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v47, (struct EPATHOBJ *)v49, v46, &v53);
    if ( !v47 )
      goto LABEL_134;
    v28 = v46 == 2;
    v12[1] = v47;
    if ( !v28 )
    {
      v33 = &v53;
LABEL_131:
      v45 = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v44, (struct EPATHOBJ *)v49, 2u, v33);
      if ( !v44 )
      {
        REGION::vDeleteREGION((REGION *)v12[1]);
        v28 = v45 == 1;
        v12[1] = 0;
        if ( v28 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
        goto LABEL_134;
      }
      v28 = v45 == 1;
      v12[2] = v44;
      if ( v28 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
      goto LABEL_142;
    }
    goto LABEL_142;
  }
  if ( LOBYTE(p_top[1].top) == 3 || (*(_DWORD *)a4 & 0x4000) != 0 )
  {
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v49);
    if ( !v50
      || !EPATHOBJ::bClone(v29, a4)
      || (v49[0] & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)v49)
      || v41 && !EPATHOBJ::bWiden((EPATHOBJ *)v49, (struct EPATHOBJ *)v49, v38, v41) )
    {
      goto LABEL_137;
    }
    v45 = 0;
    v53.top = 16 * p_top->right;
    v53.bottom = 16 * p_top[1].left;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v44, (struct EPATHOBJ *)v49, v46, &v53);
    if ( !v44 )
    {
LABEL_78:
      if ( v45 == 1 )
      {
        v23 = (RGNOBJ *)&v44;
LABEL_136:
        RGNOBJ::vDeleteRGNOBJ(v23);
        goto LABEL_137;
      }
      goto LABEL_137;
    }
    *v12 = v44;
    goto LABEL_117;
  }
  v25 = (int *)(*((_DWORD *)a4 + 2) + 28);
  v42 = *v25++;
  v43 = *v25++;
  v44 = *v25;
  v45 = v25[1];
  if ( p_top->top > v42 >> 4
    || p_top->bottom < (v44 + 15) >> 4
    || p_top->right > v43 >> 4
    || p_top[1].left < (v45 + 15) >> 4 )
  {
    v10 = (struct _RECTL *)&p_top->top;
  }
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v49);
  if ( v50 )
  {
    v11 = v37;
    if ( EPATHOBJ::bClone(v26, v37) )
    {
      if ( ((v49[0] & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)v49))
        && (!v41 || EPATHOBJ::bWiden((EPATHOBJ *)v49, (struct EPATHOBJ *)v49, v38, v41))
        && PRECOMPUTE::bPreComputeFast(v27, (struct EPATHOBJ *)v49, v37, v10, 1u) )
      {
        EPATHOBJ::vUnlock((EPATHOBJ *)v49);
        if ( v52 )
          PopThreadGuardedObject(v51);
        v12 = v36;
        goto LABEL_26;
      }
    }
  }
  EPATHOBJ::vUnlock((EPATHOBJ *)v49);
  v28 = v52 == 0;
LABEL_138:
  if ( !v28 )
    PopThreadGuardedObject(v51);
}
