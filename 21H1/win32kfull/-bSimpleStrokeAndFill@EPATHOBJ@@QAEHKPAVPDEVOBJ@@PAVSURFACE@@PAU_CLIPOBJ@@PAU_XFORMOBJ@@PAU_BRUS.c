/*
 * XREFs of ?bSimpleStrokeAndFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1E4AC7
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ??1PRECOMPUTE@@QAE@XZ @ 0x1E4579 (--1PRECOMPUTE@@QAE@XZ.c)
 *     ?bSimpleFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1E4616 (-bSimpleFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1E4859 (-bSimpleStroke@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@P.c)
 *     ?bSubOverflow@@YGHJJ@Z @ 0x1E555E (-bSubOverflow@@YGHJJ@Z.c)
 *     ?vInit@PRECOMPUTE@@QAEXPAVSURFACE@@PAVPDEVOBJ@@PAVEPATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1E584E (-vInit@PRECOMPUTE@@QAEXPAVSURFACE@@PAVPDEVOBJ@@PAVEPATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_LINEA.c)
 *     _EngStrokeAndFillPath@40 @ 0x1E8174 (_EngStrokeAndFillPath@40.c)
 */

BOOL __thiscall EPATHOBJ::bSimpleStrokeAndFill(
        PATHOBJ *this,
        char a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        struct _CLIPOBJ *pco,
        struct _XFORMOBJ *pxo,
        struct _BRUSHOBJ *pboStroke,
        struct _LINEATTRS *plineattrs,
        struct _BRUSHOBJ *pboFill,
        struct _POINTL *pptlBrushOrg,
        int mixFill,
        FLONG flOptions)
{
  FLONG fl; // ebx
  int *v13; // ebx
  PATHOBJ *v14; // edi
  int v15; // esi
  struct SURFACE *v17; // ecx
  int v18; // ebx
  struct _LINEATTRS *v19; // edx
  int (__stdcall *v20)(char *, PATHOBJ *, struct _CLIPOBJ *, struct _XFORMOBJ *, struct _BRUSHOBJ *, struct _LINEATTRS *, struct _BRUSHOBJ *, struct _POINTL *, int, FLONG); // ecx
  int (__stdcall *v21)(char *, PATHOBJ *, struct _CLIPOBJ *, struct _XFORMOBJ *, struct _BRUSHOBJ *, struct _LINEATTRS *, struct _BRUSHOBJ *, struct _POINTL *, int, FLONG); // ecx
  LINEATTRS *v22; // eax
  int v23; // eax
  MIX v24; // edx
  PATHOBJ *v25; // edi
  int v26; // [esp+0h] [ebp-54h]
  int v27; // [esp+0h] [ebp-54h]
  int v28; // [esp+4h] [ebp-50h]
  int v29; // [esp+4h] [ebp-50h]
  _BYTE v30[4]; // [esp+10h] [ebp-44h] BYREF
  int v31; // [esp+14h] [ebp-40h]
  int v32; // [esp+18h] [ebp-3Ch]
  int v33; // [esp+1Ch] [ebp-38h]
  int v34; // [esp+20h] [ebp-34h]
  int v35; // [esp+24h] [ebp-30h]
  int v36; // [esp+28h] [ebp-2Ch]
  int v37; // [esp+2Ch] [ebp-28h]
  int v38; // [esp+30h] [ebp-24h]
  _BYTE v39[16]; // [esp+34h] [ebp-20h] BYREF
  PATHOBJ *ppo; // [esp+44h] [ebp-10h]
  int v41; // [esp+48h] [ebp-Ch]
  int v42; // [esp+4Ch] [ebp-8h]

  fl = this[1].fl;
  ppo = this;
  memset(v39, 0, sizeof(v39));
  v13 = (int *)(fl + 28);
  v35 = *v13;
  v36 = v13[1];
  v37 = v13[2];
  v38 = v13[3];
  v31 = *v13;
  v32 = v13[1];
  v33 = v13[2];
  v34 = v13[3];
  if ( bSubOverflow(v26, v28) )
    return 0;
  v31 = *v13;
  v32 = v13[1];
  v33 = v13[2];
  v34 = v13[3];
  v35 = *v13;
  v36 = v13[1];
  v37 = v13[2];
  v38 = v13[3];
  if ( bSubOverflow(v27, v29) )
    return 0;
  v31 = *v13;
  v32 = v13[1];
  v33 = v13[2];
  v34 = v13[3];
  v35 = *v13;
  v36 = v13[1];
  v37 = v13[2];
  v38 = v13[3];
  if ( v33 - v35 < 0 )
    return 0;
  v31 = *v13;
  v32 = v13[1];
  v33 = v13[2];
  v34 = v13[3];
  v35 = *v13;
  v36 = v13[1];
  v37 = v13[2];
  v38 = v13[3];
  if ( v34 - v36 < 0 )
    return 0;
  v14 = ppo;
  v15 = 0;
  if ( !ppo->cCurves )
    return 1;
  v17 = a4;
  v18 = 1;
  ++*((_DWORD *)a4 + 14);
  if ( *((char *)a4 + 72) < 0 )
  {
    PRECOMPUTE::vInit(v30, a4, a3, v14, pco, pxo, plineattrs, mixFill, flOptions, 2);
    if ( !v34 )
    {
      EngSetLastError(8u);
LABEL_33:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v30);
      return v15;
    }
    v19 = plineattrs;
    if ( (plineattrs->fl & 1) == 0 || (a2 & 2) != 0 )
    {
      if ( (v14->fl & 1) != 0 )
      {
        if ( (a2 & 1) != 0 )
        {
          if ( (*(_BYTE *)(v14[1].fl + 60) & 1) != 0 )
          {
            PushThreadGuardedObject(v39, v14, vCleanupPathStackObj);
            v19 = plineattrs;
          }
          v20 = *(int (__stdcall **)(char *, PATHOBJ *, struct _CLIPOBJ *, struct _XFORMOBJ *, struct _BRUSHOBJ *, struct _LINEATTRS *, struct _BRUSHOBJ *, struct _POINTL *, int, FLONG))(*(_DWORD *)a3 + 1964);
          if ( v20 )
            v42 = v20((char *)a4 + 16, v14, pco, pxo, pboStroke, v19, pboFill, pptlBrushOrg, mixFill, flOptions);
          else
            v42 = -1;
          if ( (*(_BYTE *)(v14[1].fl + 60) & 1) != 0 )
            PopThreadGuardedObject(v39);
          if ( v42 == 1 )
            goto LABEL_31;
          if ( v42 == -1 )
            goto LABEL_33;
        }
        if ( !EPATHOBJ::bFlatten((EPATHOBJ *)v14) )
          goto LABEL_33;
      }
      if ( (*(_BYTE *)(v14[1].fl + 60) & 1) != 0 )
        PushThreadGuardedObject(v39, v14, vCleanupPathStackObj);
      v21 = *(int (__stdcall **)(char *, PATHOBJ *, struct _CLIPOBJ *, struct _XFORMOBJ *, struct _BRUSHOBJ *, struct _LINEATTRS *, struct _BRUSHOBJ *, struct _POINTL *, int, FLONG))(*(_DWORD *)a3 + 1964);
      if ( v21 )
        v42 = v21((char *)a4 + 16, v14, pco, pxo, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, flOptions);
      else
        v42 = -1;
      if ( (*(_BYTE *)(v14[1].fl + 60) & 1) != 0 )
        PopThreadGuardedObject(v39);
      if ( v42 == 1 )
      {
LABEL_31:
        v15 = 1;
        goto LABEL_33;
      }
      if ( v42 == -1 )
        goto LABEL_33;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v30);
    v17 = a4;
  }
  v41 = (unsigned __int8)mixFill;
  v22 = plineattrs;
  v42 = 0;
  if ( (plineattrs->fl & 1) == 0 )
    goto LABEL_43;
  if ( v41 == 13 )
  {
    v23 = *(_DWORD *)(*((_DWORD *)v17 + 7) + 1424);
    if ( v23 == 1 || v23 == 2 )
      v42 = 1;
    v22 = plineattrs;
  }
  if ( !v42 )
    return EngStrokeAndFillPath(
             (SURFOBJ *)((char *)v17 + 16),
             v14,
             pco,
             pxo,
             pboStroke,
             v22,
             pboFill,
             pptlBrushOrg,
             mixFill,
             flOptions);
LABEL_43:
  v42 = mixFill;
  v24 = v41 | (v41 << 8);
  if ( ((int)pboFill[6].pvRbrush & 0x8000) != 0 )
    v24 = v42;
  v25 = ppo;
  if ( ((int)pboStroke[6].pvRbrush & 0x8000) == 0 )
    mixFill = v41 | (v41 << 8);
  if ( !EPATHOBJ::bSimpleFill(ppo, a2, a3, v17, pco, pboFill, pptlBrushOrg, v24, flOptions)
    || !EPATHOBJ::bSimpleStroke(v25, a2, a3, a4, pco, pxo, pboStroke, pptlBrushOrg, plineattrs, mixFill) )
  {
    return 0;
  }
  return v18;
}
