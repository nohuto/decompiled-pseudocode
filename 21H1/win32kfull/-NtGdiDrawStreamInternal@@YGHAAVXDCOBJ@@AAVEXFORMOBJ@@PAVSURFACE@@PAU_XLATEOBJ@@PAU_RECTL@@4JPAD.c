/*
 * XREFs of ?NtGdiDrawStreamInternal@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVSURFACE@@PAU_XLATEOBJ@@PAU_RECTL@@4JPADPAU_DRAWSTREAMINFO@@@Z @ 0x5E070
 * Callers:
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QBEHXZ @ 0x11CEA (-bDpiScaledSurface@DC@@QBEHXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QAEHAAVERECTL@@@Z @ 0x7988A (-bXform@EXFORMOBJ@@QAEHAAVERECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _bCvtPts1@12 @ 0xEE344 (_bCvtPts1@12.c)
 */

int __userpurge NtGdiDrawStreamInternal@<eax>(
        EXFORMOBJ *a1@<edx>,
        XDCOBJ *a2@<ecx>,
        struct XDCOBJ *a3,
        struct EXFORMOBJ *a4,
        struct SURFACE *a5,
        struct _XLATEOBJ *a6,
        struct _RECTL *a7,
        struct _RECTL *a8,
        int a9,
        char *a10,
        struct _DRAWSTREAMINFO *a11)
{
  LONG v11; // ebx
  LONG v12; // esi
  LONG v14; // ecx
  DC *v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  signed int v20; // eax
  signed int v21; // edx
  bool v22; // zf
  signed int v23; // edi
  LONG v24; // edi
  char *v25; // ecx
  int v26; // ecx
  struct ECLIPOBJ *v27; // ecx
  LONG v28; // ebx
  LONG v29; // esi
  int v30; // eax
  LONG v31; // eax
  int v32; // eax
  LONG v33; // edi
  XDCOBJ *v34; // edx
  int v35; // ebx
  int v36; // eax
  int (__stdcall *v37)(int, int, int, int, int, int *, unsigned int, struct _RECTL *, _DWORD *); // esi
  bool v38; // al
  struct _SURFOBJ *v39; // eax
  char *v40; // edi
  int v41; // esi
  int v43; // eax
  int v44; // edi
  XCLIPOBJ *v45; // esi
  DC *v46; // ecx
  struct REGION *v47; // eax
  LONG *p_top; // esi
  unsigned int v49; // ebx
  signed int v50; // eax
  LONG v51[4]; // [esp+Ch] [ebp-88h] BYREF
  struct EXFORMOBJ *v52; // [esp+1Ch] [ebp-78h]
  int v53; // [esp+20h] [ebp-74h]
  int v54; // [esp+24h] [ebp-70h] BYREF
  int v55; // [esp+28h] [ebp-6Ch]
  struct _RECTL *v56; // [esp+2Ch] [ebp-68h]
  struct _RECTL *v57; // [esp+30h] [ebp-64h]
  struct XDCOBJ *v58; // [esp+34h] [ebp-60h]
  int v59; // [esp+38h] [ebp-5Ch] BYREF
  int v60; // [esp+3Ch] [ebp-58h]
  int v61; // [esp+40h] [ebp-54h]
  XDCOBJ *v62; // [esp+44h] [ebp-50h]
  DC *v63; // [esp+48h] [ebp-4Ch]
  signed int v64; // [esp+4Ch] [ebp-48h]
  LONG v65; // [esp+50h] [ebp-44h]
  signed int v66; // [esp+54h] [ebp-40h]
  signed int v67; // [esp+58h] [ebp-3Ch]
  int v68; // [esp+5Ch] [ebp-38h]
  int v69; // [esp+60h] [ebp-34h]
  LONG v70; // [esp+64h] [ebp-30h]
  int v71; // [esp+68h] [ebp-2Ch]
  struct ECLIPOBJ *v72; // [esp+6Ch] [ebp-28h] BYREF
  LONG v73; // [esp+70h] [ebp-24h]
  LONG v74; // [esp+74h] [ebp-20h]
  LONG v75; // [esp+78h] [ebp-1Ch]
  ULONG iUniq; // [esp+7Ch] [ebp-18h] BYREF
  signed int flXlate; // [esp+80h] [ebp-14h]
  LONG v78; // [esp+84h] [ebp-10h]
  signed int cEntries; // [esp+88h] [ebp-Ch]

  v58 = a3;
  v52 = a4;
  v62 = a2;
  v11 = *((_DWORD *)a5 + 2);
  v56 = a7;
  v12 = *((_DWORD *)a5 + 3);
  v57 = a8;
  v53 = a9;
  v72 = *(struct ECLIPOBJ **)a5;
  v71 = (int)v72;
  v14 = *((_DWORD *)a5 + 1);
  iUniq = a6->iUniq;
  v67 = iUniq;
  flXlate = a6->flXlate;
  v64 = flXlate;
  v78 = *(_DWORD *)&a6->iSrcType;
  v65 = v78;
  cEntries = a6->cEntries;
  v66 = cEntries;
  v73 = v14;
  v74 = v11;
  v75 = v12;
  v15 = *(DC **)v62;
  v59 = 0;
  v60 = 0;
  v70 = v14;
  v16 = *((_DWORD *)v15 + 126);
  if ( ((*(_BYTE *)(v16 + 76) & 8) != 0 || *(_DWORD *)(v16 + 144)) && (*(_WORD *)(v16 + 66) & 0x200) != 0 )
    goto LABEL_83;
  v17 = *(_DWORD *)(v16 + 72);
  if ( (v17 & 0x800) != 0 )
  {
    v43 = UserSurfaceAccessCheck(*(_DWORD *)(v16 + 452));
  }
  else
  {
    if ( (v17 & 0x10000000) == 0 )
    {
      v18 = v71;
      goto LABEL_6;
    }
    v43 = UserScreenAccessCheck();
  }
  if ( !v43 )
  {
LABEL_83:
    EngSetLastError(5u);
    return 0;
  }
  v12 = v75;
  v11 = v74;
  v66 = cEntries;
  v65 = v78;
  v70 = v73;
  v18 = (int)v72;
  v64 = flXlate;
  v71 = (int)v72;
  v67 = iUniq;
LABEL_6:
  v19 = *(_DWORD *)(*(_DWORD *)a1 + 56);
  if ( (v19 & 1) == 0 )
    return 0;
  if ( (v19 & 2) != 0 )
  {
    if ( (v19 & 0x43) != 0x43 )
    {
      bCvtPts1(*(_DWORD *)a1, &v59, 1);
LABEL_10:
      v11 = v74;
      v12 = v75;
      v66 = cEntries;
      v65 = v78;
      v64 = flXlate;
      v70 = v73;
      v18 = (int)v72;
      v67 = iUniq;
      v71 = (int)v72;
    }
  }
  else if ( v57 < (struct _RECTL *)((char *)v56 + (int)v57) )
  {
    p_top = &v57[2].top;
    v49 = (unsigned int)v56 + (_DWORD)v57;
    while ( *(p_top - 9) == 9 )
    {
      EXFORMOBJ::bXform(a1, (struct ERECTL *)(p_top - 8));
      if ( DC::bDpiScaledSurface(*(DC **)v62) )
        *p_top &= ~0x20u;
      p_top += 15;
      if ( (unsigned int)(p_top - 9) >= v49 )
        goto LABEL_10;
    }
    return 0;
  }
  if ( (*(_BYTE *)(*(_DWORD *)a1 + 56) & 0x43) == 0x43 )
  {
    v21 = v65;
    v20 = v66;
  }
  else
  {
    bCvtPts1(*(_DWORD *)a1, &iUniq, 2);
    v20 = cEntries;
    v21 = v78;
    v12 = v75;
    v11 = v74;
    v70 = v73;
    v71 = (int)v72;
    v64 = flXlate;
    v67 = iUniq;
    v18 = (int)v72;
    v66 = cEntries;
    v65 = v78;
  }
  v22 = *((_DWORD *)a1 + 2) == 0;
  v23 = v67;
  if ( !v22 )
  {
    v23 = v67 + 1;
    ++v21;
    v67 = v23;
    iUniq = v23;
    v65 = v21;
    v78 = v21;
  }
  if ( v23 > v21 )
  {
    v67 = v21;
    v65 = v23;
    v78 = v23;
    v20 = v66;
    iUniq = v21;
  }
  if ( v64 > v20 )
  {
    v50 = v64;
    v64 = v66;
    flXlate = v66;
    v66 = v50;
    cEntries = v50;
  }
  if ( v18 == v11 )
    return 0;
  v24 = v70;
  if ( v70 == v12 )
    return 0;
  v63 = *(DC **)v62;
  v55 = *((_DWORD *)v63 + 126);
  v25 = (char *)v63 + 8 * (*((_DWORD *)v63 + 7) & 1);
  v59 += *((_DWORD *)v25 + 262);
  v60 += *((_DWORD *)v25 + 263);
  v26 = v71;
  v69 = (int)v63 + 8 * (*((_DWORD *)v63 + 7) & 1) + 1048;
  v61 = *(_DWORD *)v69;
  v70 = v61;
  v68 = v61 >> 31;
  if ( (unsigned __int64)(v61 + (__int64)v71 + 0x80000000LL) >> 32 )
    return 0;
  if ( (__PAIR64__(v68, v70) + v11 + 0x80000000) >> 32 )
    return 0;
  v68 = *(_DWORD *)(v69 + 4);
  v71 = v68 >> 31;
  if ( (unsigned __int64)(v68 + (__int64)v24 + 0x80000000LL) >> 32 )
    return 0;
  if ( (__PAIR64__(v71, v68) + v12 + 0x80000000) >> 32 )
    return 0;
  v27 = (struct ECLIPOBJ *)(v61 + v26);
  v72 = v27;
  v28 = *(_DWORD *)v69 + v11;
  v74 = v28;
  v73 = *(_DWORD *)(v69 + 4) + v24;
  v29 = *(_DWORD *)(v69 + 4) + v12;
  v75 = v29;
  v30 = *((_DWORD *)v63 + 7) & 1;
  v70 = v73;
  v71 = (int)v63 + 8 * v30 + 1048;
  v61 = *(_DWORD *)v71;
  v69 = v61;
  v68 = v61 >> 31;
  if ( (unsigned __int64)(v61 + (__int64)v67 + 0x80000000LL) >> 32 )
    return 0;
  if ( (__PAIR64__(v68, v69) + v65 + 0x80000000) >> 32 )
    return 0;
  v69 = *(_DWORD *)(v71 + 4);
  v68 = v69 >> 31;
  if ( (unsigned __int64)(v69 + (__int64)v64 + 0x80000000LL) >> 32 || (__PAIR64__(v68, v69) + v66 + 0x80000000) >> 32 )
    return 0;
  iUniq = v67 + v61;
  v78 = v65 + *(_DWORD *)v71;
  v69 = 0;
  flXlate = v64 + *(_DWORD *)(v71 + 4);
  v31 = v66 + *(_DWORD *)(v71 + 4);
  cEntries = v31;
  if ( (int)v27 > v67 + v61 || v28 < v78 || v70 > flXlate || v29 < v31 )
  {
    v44 = 1;
LABEL_75:
    v45 = (DC *)((char *)v63 + 1568);
    v69 = (int)v63 + 1568;
    if ( DC::prgnRao(v63) )
      v47 = DC::prgnRao(v46);
    else
      v47 = DC::prgnVisSnap(v46);
    XCLIPOBJ::vSetup(v45, v47, (struct ERECTL *)&v72, v44);
    v27 = (struct ECLIPOBJ *)*((_DWORD *)v45 + 1);
    v72 = v27;
    v33 = *((_DWORD *)v45 + 2);
    v73 = v33;
    v28 = *((_DWORD *)v45 + 3);
    v74 = v28;
    v29 = *((_DWORD *)v45 + 4);
    v75 = v29;
    goto LABEL_48;
  }
  v32 = *((_DWORD *)v63 + 258);
  if ( v32 > v67 + v61
    || *((_DWORD *)v63 + 260) < v78
    || *((_DWORD *)v63 + 259) > flXlate
    || (v33 = v70, *((_DWORD *)v63 + 261) < cEntries) )
  {
    v44 = 0;
    goto LABEL_75;
  }
  if ( v32 > (int)v27 )
  {
    v27 = (struct ECLIPOBJ *)*((_DWORD *)v63 + 258);
    v72 = v27;
  }
  if ( *((_DWORD *)v63 + 259) > v70 )
  {
    v33 = *((_DWORD *)v63 + 259);
    v73 = v33;
  }
  if ( *((_DWORD *)v63 + 260) < v28 )
  {
    v28 = *((_DWORD *)v63 + 260);
    v74 = v28;
  }
  if ( *((_DWORD *)v63 + 261) < v29 )
  {
    v29 = *((_DWORD *)v63 + 261);
    v75 = v29;
  }
  if ( v28 < (int)v27 )
    return 1;
  if ( v29 < v33 )
  {
    v33 = v29;
    v73 = v29;
  }
LABEL_48:
  if ( v27 == (struct ECLIPOBJ *)v28 || v33 == v29 )
    return 1;
  v34 = v62;
  if ( (*(_BYTE *)(*(_DWORD *)v62 + 24) & 0xE0) != 0 )
  {
    v51[0] = (LONG)v27;
    v51[1] = v33;
    v51[2] = v28;
    v51[3] = v29;
    XDCOBJ::vAccumulateTight(v62, v27, v51);
    v34 = v62;
  }
  v35 = v55;
  v36 = *(_DWORD *)(v55 + 28);
  ++*(_DWORD *)(v55 + 56);
  v37 = *(int (__stdcall **)(int, int, int, int, int, int *, unsigned int, struct _RECTL *, _DWORD *))(v36 + 2260);
  if ( !v37 )
    v37 = (int (__stdcall *)(int, int, int, int, int, int *, unsigned int, struct _RECTL *, _DWORD *))EngDrawStream;
  v38 = (*(_DWORD *)(*(_DWORD *)v34 + 24) & 0x200) != 0
     && v36
     && ((unsigned int)&loc_20000 & *(_DWORD *)(v36 + 24)) != 0;
  if ( *(int *)(v35 + 72) >= 0 && (!v38 || *(_WORD *)(v35 + 64) != 3) )
    v37 = (int (__stdcall *)(int, int, int, int, int, int *, unsigned int, struct _RECTL *, _DWORD *))EngDrawStream;
  v39 = (struct _SURFOBJ *)v58;
  v40 = (char *)v58 + 16;
  if ( v58 )
    v39 = (struct _SURFOBJ *)((char *)v58 + 16);
  v54 = 0;
  SURFREFVIEW::bMap((SURFREFVIEW *)&v54, v39);
  if ( !v54 )
    goto LABEL_95;
  if ( !v58 )
    v40 = 0;
  if ( v37(v35 + 16, (int)v40, v69, (int)v52, (int)&v72, &v59, (unsigned int)v56, v57, (_DWORD *)v53) )
    v41 = 1;
  else
LABEL_95:
    v41 = 0;
  SURFREFVIEW::bUnMap((SURFREFVIEW *)&v54);
  return v41;
}
