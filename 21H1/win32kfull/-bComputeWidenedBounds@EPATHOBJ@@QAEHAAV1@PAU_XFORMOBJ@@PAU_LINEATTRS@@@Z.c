/*
 * XREFs of ?bComputeWidenedBounds@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x234F52
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     ?vInit@PRECOMPUTE@@QAEXPAVSURFACE@@PAVPDEVOBJ@@PAVEPATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1E584E (-vInit@PRECOMPUTE@@QAEXPAVSURFACE@@PAVPDEVOBJ@@PAVEPATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_LINEA.c)
 *     _EngStrokeAndFillPath@40 @ 0x1E8174 (_EngStrokeAndFillPath@40.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 *     _NtGdiWidenPath@4 @ 0x211EC9 (_NtGdiWidenPath@4.c)
 * Callees:
 *     _LongLongToLong@12 @ 0xC28DA (_LongLongToLong@12.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _ftoef_c@8 @ 0xEEEB1 (_ftoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     ?bIs31Bits@@YGHJ@Z @ 0x2353F5 (-bIs31Bits@@YGHJ@Z.c)
 */

int __fastcall EPATHOBJ::bComputeWidenedBounds(
        EPATHOBJ *this,
        int a2,
        struct EPATHOBJ *a3,
        struct _XFORMOBJ *a4,
        int a5)
{
  struct _LINEATTRS *v5; // edi
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // esi
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // esi
  unsigned int v15; // ecx
  int v16; // esi
  struct _LINEATTRS *v17; // edx
  int result; // eax
  __int64 v19; // rax
  struct _LINEATTRS *v20; // esi
  __int64 v21; // rax
  int v22; // edi
  _DWORD *v23; // edi
  _DWORD *v24; // eax
  int v25; // ebx
  int v26; // ecx
  int v27; // eax
  int v28; // edx
  int v29; // esi
  int v30; // ebx
  int v31; // edx
  LONG *v32; // [esp+0h] [ebp-44h]
  LONG *v33; // [esp+0h] [ebp-44h]
  LONG *v34; // [esp+0h] [ebp-44h]
  LONG *v35; // [esp+0h] [ebp-44h]
  int v36; // [esp+0h] [ebp-44h]
  int v37; // [esp+0h] [ebp-44h]
  int v38; // [esp+0h] [ebp-44h]
  int v39; // [esp+0h] [ebp-44h]
  int v40; // [esp+0h] [ebp-44h]
  int v41; // [esp+0h] [ebp-44h]
  LONG *v42; // [esp+0h] [ebp-44h]
  LONG *v43; // [esp+0h] [ebp-44h]
  LONG *v44; // [esp+0h] [ebp-44h]
  LONG *v45; // [esp+0h] [ebp-44h]
  int v46; // [esp+0h] [ebp-44h]
  int v47; // [esp+0h] [ebp-44h]
  int v48; // [esp+0h] [ebp-44h]
  int v49; // [esp+0h] [ebp-44h]
  int v50; // [esp+Ch] [ebp-38h] BYREF
  int v51; // [esp+10h] [ebp-34h]
  int v52; // [esp+14h] [ebp-30h]
  int v53; // [esp+18h] [ebp-2Ch]
  int v54[2]; // [esp+1Ch] [ebp-28h] BYREF
  int v55; // [esp+24h] [ebp-20h] BYREF
  int v56; // [esp+28h] [ebp-1Ch]
  int v57; // [esp+2Ch] [ebp-18h] BYREF
  int v58; // [esp+30h] [ebp-14h]
  struct EPATHOBJ *v59; // [esp+34h] [ebp-10h]
  int v60; // [esp+38h] [ebp-Ch]
  int v61; // [esp+3Ch] [ebp-8h] BYREF
  int v62; // [esp+40h] [ebp-4h] BYREF
  struct EPATHOBJ *v63; // [esp+4Ch] [ebp+8h]
  struct _XFORMOBJ *v64; // [esp+50h] [ebp+Ch]

  v5 = (struct _LINEATTRS *)a5;
  ftoef_c((unsigned int)this, a2, *(_DWORD *)(a5 + 12), v54);
  v61 = 0;
  eftol_c(v54, &v61, 1);
  v50 = v61;
  v51 = v61;
  v52 = v61;
  v53 = -v61;
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)a4, (struct _VECTORL *)&v50, (struct _VECTORFX *)&v50, 2u) )
    return 0;
  v7 = v50;
  v8 = v50;
  a5 = 0;
  v62 = 0;
  if ( v50 < 0 )
    v8 = -v50;
  v9 = v52;
  v10 = v52;
  if ( v52 < 0 )
    v10 = -v52;
  if ( v8 <= v10 )
  {
    if ( v52 < 0 )
      v9 = -v52;
    v7 = v9;
  }
  else if ( v50 < 0 )
  {
    v7 = -v50;
  }
  if ( LongLongToLong((v7 >> 1) + 16LL, v32) < 0 )
    return 0;
  v11 = v51;
  v12 = v51;
  if ( v51 < 0 )
    v12 = -v51;
  v13 = v53;
  v14 = v53;
  if ( v53 < 0 )
    v14 = -v53;
  if ( v12 <= v14 )
  {
    if ( v53 < 0 )
      v13 = -v53;
    v11 = v13;
  }
  else if ( v51 < 0 )
  {
    v11 = -v51;
  }
  if ( LongLongToLong((v11 >> 1) + 16LL, v33) < 0 )
    return 0;
  if ( v5->iEndCap == 1 )
  {
    if ( LongLongToLong(a5 + (__int64)(a5 >> 1), v34) < 0 )
      return 0;
    if ( LongLongToLong(v62 + (__int64)(v62 >> 1), v35) < 0 )
      return 0;
    if ( !bIs31Bits(v36) )
      return 0;
    v16 = v62;
    if ( !bIs31Bits(v37) )
      return 0;
  }
  else
  {
    v17 = (struct _LINEATTRS *)a5;
    v16 = v62;
  }
  if ( v5->iJoin == 2 )
  {
    ftoef_c(v15, (int)v17, v5->eMiterLimit, &v57);
    LODWORD(v19) = &v55;
    ltoef_c(v19, a5, &v55);
    mulff3_c(&v55, &v55, &v57);
    v20 = (struct _LINEATTRS *)a5;
    if ( !eftol_c(&v55, &a5, 1) )
      return 0;
    if ( a5 < (int)v20 )
      return 0;
    LODWORD(v21) = &v55;
    ltoef_c(v21, v62, &v55);
    mulff3_c(&v55, &v55, &v57);
    v22 = v62;
    if ( !eftol_c(&v55, &v62, 1) )
      return 0;
    v16 = v62;
    if ( v62 < v22 || !bIs31Bits((int)v34) || !bIs31Bits(v38) )
      return 0;
  }
  v23 = (_DWORD *)*((_DWORD *)this + 2);
  v24 = (_DWORD *)*((_DWORD *)a3 + 2);
  v25 = v24[9];
  v63 = (struct EPATHOBJ *)v24[7];
  v59 = v63;
  v26 = v24[8];
  v27 = v24[10];
  v60 = v26;
  v56 = v26;
  v58 = v25;
  v61 = v27;
  v64 = (struct _XFORMOBJ *)v27;
  if ( !bIs31Bits((int)v34) )
    return 0;
  if ( !bIs31Bits(v39) )
    return 0;
  if ( !bIs31Bits(v40) )
    return 0;
  if ( !bIs31Bits(v41) )
    return 0;
  a5 = v28 >> 31;
  v62 = v28;
  if ( LongLongToLong((LONGLONG)v63 - v28, v42) < 0 )
    return 0;
  if ( LongLongToLong(__PAIR64__(a5, v62) + v25, v43) < 0 )
    return 0;
  if ( LongLongToLong(v60 - (__int64)v16, v44) < 0 )
    return 0;
  if ( LongLongToLong(v16 + (__int64)v61, v45) < 0 )
    return 0;
  if ( !bIs31Bits(v46) )
    return 0;
  v29 = v58;
  if ( !bIs31Bits(v47) )
    return 0;
  v30 = v56;
  if ( !bIs31Bits(v48) || !bIs31Bits(v49) )
    return 0;
  v23[10] = v64;
  v23[7] = v31;
  result = 1;
  v23[9] = v29;
  v23[8] = v30;
  return result;
}
