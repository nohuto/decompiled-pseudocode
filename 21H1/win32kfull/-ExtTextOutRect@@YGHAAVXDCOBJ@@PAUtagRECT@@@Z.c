/*
 * XREFs of ?ExtTextOutRect@@YGHAAVXDCOBJ@@PAUtagRECT@@@Z @ 0x53A9C
 * Callers:
 *     ?GreBatchTextOutRect@@YGHAAVXDCOBJ@@PAU_BATCHTEXTOUTRECT@@K@Z @ 0x538FE (-GreBatchTextOutRect@@YGHAAVXDCOBJ@@PAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     _GreExtTextOutRect@8 @ 0x78BA6 (_GreExtTextOutRect@8.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?_SurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x53E0C (-_SurfaceAccessCheck@@YGHPAVSURFACE@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     ??_5ERECTL@@QAEXABU_RECTL@@@Z @ 0x93A0E (--_5ERECTL@@QAEXABU_RECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _bCvtPts1@12 @ 0xEE344 (_bCvtPts1@12.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 */

int __fastcall ExtTextOutRect(struct XDCOBJ *a1, int *a2)
{
  struct XDCOBJ *v2; // edi
  struct ECLIPOBJ *v3; // ecx
  int v4; // esi
  int v5; // ecx
  int v6; // ebx
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  XDCOBJ *v14; // edx
  struct ECLIPOBJ *v15; // ecx
  int v16; // esi
  int v17; // edi
  SURFOBJ *v18; // esi
  POINTL *v19; // edx
  XCLIPOBJ *v22; // esi
  DC *v23; // ecx
  struct REGION *v24; // eax
  int *v25; // esi
  int v26; // eax
  int *v27; // ebx
  int *v28; // esi
  void *v29; // [esp+14h] [ebp-58h]
  unsigned int v30; // [esp+18h] [ebp-54h]
  int v31; // [esp+20h] [ebp-4Ch]
  _DWORD *v32; // [esp+20h] [ebp-4Ch]
  int v33; // [esp+20h] [ebp-4Ch]
  unsigned int v34; // [esp+20h] [ebp-4Ch]
  BOOL v36; // [esp+28h] [ebp-44h]
  BRUSHOBJ *v37; // [esp+28h] [ebp-44h]
  CLIPOBJ *v39; // [esp+2Ch] [ebp-40h]
  int v40; // [esp+30h] [ebp-3Ch]
  int v41; // [esp+30h] [ebp-3Ch]
  _DWORD v42[2]; // [esp+34h] [ebp-38h] BYREF
  _DWORD v43[2]; // [esp+3Ch] [ebp-30h] BYREF
  int v44; // [esp+44h] [ebp-28h]
  int v45; // [esp+48h] [ebp-24h] BYREF
  int v46; // [esp+4Ch] [ebp-20h]
  int v47; // [esp+50h] [ebp-1Ch]
  int v48; // [esp+54h] [ebp-18h]
  int v49; // [esp+58h] [ebp-14h] BYREF
  int v50; // [esp+5Ch] [ebp-10h]
  int v51; // [esp+60h] [ebp-Ch]
  int v52; // [esp+64h] [ebp-8h]

  v2 = a1;
  v3 = *(struct ECLIPOBJ **)a1;
  if ( !v3 || (*((_DWORD *)v3 + 6) & 0x10000) != 0 )
    return 0;
  v4 = 1;
  v43[1] = *(_DWORD *)(*((_DWORD *)v3 + 255) + 228);
  v44 = *(_DWORD *)(*((_DWORD *)v3 + 255) + 148) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)v43, v2, 0x204u, 0x80000000);
  v40 = *(_DWORD *)(v43[0] + 56);
  if ( (v40 & 1) == 0 )
    return GreExtTextOutWLocked(
             0,
             2,
             (int)a2,
             0,
             0,
             0,
             *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)v2 + 1020) + 233),
             0,
             0,
             v29,
             v30);
  v5 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  v31 = a2[3];
  v48 = v31;
  v45 = v5;
  v46 = v6;
  v47 = v7;
  if ( (v40 & 0x43) != 0x43 )
  {
    bCvtPts1(v43[0], &v45, 2);
    v7 = v47;
    v5 = v45;
    v31 = v48;
    v6 = v46;
  }
  if ( v44 )
  {
    ++v5;
    ++v7;
    v45 = v5;
    v47 = v7;
  }
  if ( v5 > v7 )
  {
    v26 = v5;
    v5 = v7;
    v7 = v26;
    v45 = v5;
    v47 = v26;
  }
  v8 = v31;
  if ( v6 > v31 )
  {
    v8 = v6;
    v6 = v31;
    v46 = v31;
    v48 = v8;
  }
  if ( v5 == v7 || v6 == v8 )
    return v4;
  v9 = *(_DWORD *)v2;
  v10 = *(_DWORD *)(*(_DWORD *)v2 + 24);
  if ( (v10 & 0xE0) != 0 )
  {
    v11 = *(_DWORD *)v2;
    if ( (v10 & 0x20) != 0 )
    {
      ERECTL::operator|=(&v45);
      v11 = *(_DWORD *)v2;
    }
    v9 = v11;
    if ( *(char *)(v11 + 24) < 0 )
    {
      ERECTL::operator|=(&v45);
      v9 = *(_DWORD *)v2;
    }
  }
  v12 = *(_DWORD *)(v9 + 504);
  v41 = v12;
  if ( !v12 )
    return v4;
  if ( ((*(_BYTE *)(v12 + 76) & 8) != 0 || *(_DWORD *)(v12 + 144)) && (*(_WORD *)(v12 + 66) & 0x200) != 0
    || !_SurfaceAccessCheck((struct SURFACE *)v29) )
  {
    EngSetLastError(5u);
    return 0;
  }
  v32 = *(_DWORD **)v2;
  if ( ERECTL::bOffsetAdd((ERECTL *)&v45, (const struct _POINTL *)&v32[2 * (v32[7] & 1) + 262], 1) )
  {
    v39 = 0;
    v36 = 0;
    if ( v45 >= v32[258] && v47 <= v32[260] && v46 >= v32[259] )
      v36 = v48 <= v32[261];
    v13 = v32[130];
    if ( (v13 & 1) != 0 && (v13 & 2) == 0 )
    {
      v42[0] = 0;
      v42[1] = 0;
      v34 = 0;
      v27 = &v45;
      do
      {
        ltoef_c(*v27, v42);
        v28 = (int *)(*(_DWORD *)v2 + 524);
        v49 = *v28++;
        v50 = *v28++;
        v51 = *v28;
        v52 = v28[1];
        mulff3_c(v42, v42, &v49);
        if ( !eftol_c(v42, v27, 1) )
          break;
        ++v27;
        v2 = a1;
        ++v34;
      }
      while ( v34 < 4 );
      v2 = a1;
    }
    if ( !v36 )
    {
      v22 = (XCLIPOBJ *)(*(_DWORD *)v2 + 1568);
      v39 = (CLIPOBJ *)v22;
      v24 = DC::prgnRao(*(DC **)v2) ? DC::prgnRao(v23) : DC::prgnVisSnap(v23);
      XCLIPOBJ::vSetup(v22, v24, (struct ERECTL *)&v45, 2);
      v25 = (int *)((char *)v22 + 4);
      v45 = *v25++;
      v46 = *v25++;
      v47 = *v25;
      v48 = v25[1];
      if ( ERECTL::bEmpty((ERECTL *)&v45) )
        return 1;
    }
    v14 = a1;
    v15 = *(struct ECLIPOBJ **)a1;
    v16 = *(_DWORD *)a1 + 1460;
    v33 = *(_DWORD *)(*(_DWORD *)a1 + 1020);
    v37 = (BRUSHOBJ *)v16;
    v17 = *(_DWORD *)(v33 + 184);
    if ( (((unsigned __int8)v17 | *(_BYTE *)(*(_DWORD *)a1 + 236)) & 8) != 0 )
    {
      *(_DWORD *)(v33 + 184) = v17 & 0xFFFFFFF7;
      *(_DWORD *)(*(_DWORD *)a1 + 236) &= ~8u;
      EBRUSHOBJ::vInitBrush(
        v16,
        *(_DWORD *)a1,
        gpbrBackground,
        *(_DWORD *)(*(_DWORD *)a1 + 60),
        *(_DWORD *)(v41 + 88),
        v41,
        (*(_DWORD *)(*(_DWORD *)a1 + 48) >> 15) & 1);
      v14 = a1;
      v15 = *(struct ECLIPOBJ **)a1;
    }
    if ( (*((_BYTE *)v15 + 24) & 0xE0) != 0 && (*(_DWORD *)(v16 + 76) & 0x100) == 0 )
    {
      v49 = v45;
      v50 = v46;
      v51 = v47;
      v52 = v48;
      XDCOBJ::vAccumulateTight(v14, v15, (struct ERECTL *)&v49);
    }
    ++*(_DWORD *)(v41 + 56);
    v18 = (SURFOBJ *)(v41 + 16);
    v19 = (POINTL *)(*(_DWORD *)a1 + 1176);
    if ( (*(_BYTE *)(v41 + 72) & 1) != 0 )
      return (*(int (__stdcall **)(SURFOBJ *, _DWORD, _DWORD, CLIPOBJ *, _DWORD, int *, _DWORD, _DWORD, BRUSHOBJ *, POINTL *, int))(*(_DWORD *)(v41 + 28) + 1972))(
               v18,
               0,
               0,
               v39,
               0,
               &v45,
               0,
               0,
               v37,
               v19,
               61680);
    else
      return EngBitBlt(v18, 0, 0, v39, 0, (RECTL *)&v45, 0, 0, v37, v19, 61680);
  }
  return 0;
}
