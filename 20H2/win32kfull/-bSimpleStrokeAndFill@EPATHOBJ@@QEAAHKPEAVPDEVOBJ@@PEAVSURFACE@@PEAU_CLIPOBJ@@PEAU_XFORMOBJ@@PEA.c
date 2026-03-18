/*
 * XREFs of ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C01526A8
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013B974 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C013AD50 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C013AF70 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C013C088 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C013C1F4 (-bSubOverflow@@YAHJJ@Z.c)
 *     EngStrokeAndFillPath @ 0x1C0140B60 (EngStrokeAndFillPath.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014F5D4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

BOOL __fastcall EPATHOBJ::bSimpleStrokeAndFill(
        PATHOBJ *ppo,
        unsigned int a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  __m128i *v12; // r10
  MIX v13; // r13d
  char v15; // r12
  __m128i *v17; // r10
  int v18; // ebx
  PDEVOBJ *v19; // r8
  __int64 v20; // r9
  __m128i *v21; // r10
  struct PDEVOBJ *v22; // r11
  int v23; // eax
  int v24; // edi
  CLIPOBJ *v25; // r14
  int v26; // r12d
  __int64 (__fastcall *v27)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  BOOL v29; // edx
  MIX v30; // edx
  __int64 (__fastcall *v31)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  int v32; // r14d
  _OWORD v33[2]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v34[32]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-48h]

  v12 = (__m128i *)ppo[1];
  v13 = mixFill;
  memset(v33, 0, sizeof(v33));
  v15 = a2;
  v18 = 0;
  if ( bSubOverflow(_mm_cvtsi128_si32(_mm_srli_si128(v12[3], 8)), v12[3].m128i_i32[0])
    || bSubOverflow(_mm_srli_si128(v17[48LL], 8).m128i_i32[1], HIDWORD(v17[3].m128i_i64[0]))
    || _mm_cvtsi128_si32(_mm_srli_si128(v21[3], 8)) - v21[3].m128i_i32[0] < 0
    || (int)(_mm_srli_si128(v21[48LL], 8).m128i_i32[1] - HIDWORD(v21[3].m128i_i64[0])) < 0 )
  {
    return 0;
  }
  if ( !ppo->cCurves )
    return 1;
  v23 = *(_DWORD *)(v20 + 112);
  v24 = 1;
  ++*(_DWORD *)(v20 + 92);
  if ( (v23 & 0x80u) != 0 )
  {
    v25 = pco;
    PRECOMPUTE::vInit(
      (__int64)v34,
      a4,
      v19,
      (struct EPATHOBJ *)ppo,
      (__int64)pco,
      pxo,
      plineattrs,
      mixFill,
      flOptions,
      2);
    if ( !v35 )
    {
      EngSetLastError(8u);
      goto LABEL_18;
    }
    if ( (plineattrs->fl & 1) == 0 || (v15 & 2) != 0 )
    {
      v26 = -1;
      if ( (ppo->fl & 1) != 0 )
      {
        if ( (a2 & 1) != 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
            PushThreadGuardedObject(v33, ppo, vCleanupPathStackObj);
          v31 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2816LL);
          if ( v31 )
            v32 = v31((char *)a4 + 24, ppo, pco, pxo, pboStroke, plineattrs, pbo, pptlBrushOrg, mixFill, flOptions);
          else
            v32 = -1;
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
            PopThreadGuardedObject(v33);
          if ( v32 == 1 )
            goto LABEL_17;
          if ( v32 == -1 )
            goto LABEL_18;
          v25 = pco;
        }
        if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
          goto LABEL_18;
      }
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
        PushThreadGuardedObject(v33, ppo, vCleanupPathStackObj);
      v27 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2816LL);
      if ( v27 )
        v26 = v27((char *)a4 + 24, ppo, v25, pxo, pboStroke, plineattrs, pbo, pptlBrushOrg, mixFill, flOptions);
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
        PopThreadGuardedObject(v33);
      if ( v26 == 1 )
      {
LABEL_17:
        v18 = 1;
LABEL_18:
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v34);
        return v18;
      }
      if ( v26 == -1 )
        goto LABEL_18;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v34);
    v22 = a3;
  }
  v29 = 0;
  if ( (plineattrs->fl & 1) == 0 )
    goto LABEL_20;
  if ( (unsigned __int8)mixFill == 13 )
    v29 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a4 + 6) + 2140LL) - 1) <= 1;
  if ( !v29 )
    return EngStrokeAndFillPath(
             (SURFOBJ *)((char *)a4 + 24),
             ppo,
             pco,
             pxo,
             pboStroke,
             plineattrs,
             pbo,
             pptlBrushOrg,
             mixFill,
             flOptions);
LABEL_20:
  v30 = mixFill;
  if ( (pbo[5].iSolidColor & 0x8000) == 0 )
    v30 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( (pboStroke[5].iSolidColor & 0x8000) == 0 )
    v13 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( !EPATHOBJ::bSimpleFill(ppo, a2, v22, a4, pco, pbo, pptlBrushOrg, v30, flOptions)
    || !EPATHOBJ::bSimpleStroke(ppo, a2, a3, a4, pco, pxo, pboStroke, pptlBrushOrg, plineattrs, v13) )
  {
    return 0;
  }
  return v24;
}
