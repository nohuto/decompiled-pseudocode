/*
 * XREFs of ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C00E071C
 * Callers:
 *     NtGdiGetWidthTable @ 0x1C00DEA40 (NtGdiGetWidthTable.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00D82CC (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00DB280 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C00DB598 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00DE240 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C00DE85C (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00E0BDC (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00E0E70 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C00E0F20 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0113EA0 (EngUnmapFontFileFD.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0145A70 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RFONTOBJ::bGetWidthTable(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int16 *a6)
{
  unsigned __int16 *v6; // r10
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned __int16 *v10; // r11
  __int64 v11; // rcx
  unsigned int v12; // r15d
  const unsigned __int16 *v13; // rdi
  unsigned int v14; // r13d
  unsigned int v15; // ecx
  unsigned int v16; // r12d
  unsigned int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64, __int64, unsigned int *, unsigned __int16 *, unsigned int); // rdi
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  __int64 i; // r12
  unsigned int v27; // eax
  unsigned __int16 *v28; // rbx
  struct _GLYPHPOS *v29; // r13
  __int64 v30; // rcx
  _DWORD *v31; // rax
  struct GPRUN *v32; // rsi
  _DWORD *v33; // r10
  __int64 v34; // rdi
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *LinkMetricsPlus; // r8
  unsigned int v37; // edx
  __int16 v38; // r9
  unsigned __int16 *v39; // rsi
  unsigned int *v40; // r8
  char *v41; // rdi
  unsigned __int16 v42; // ax
  ULONG_PTR *v44; // rdi
  __int64 v45; // rsi
  int v46; // eax
  __int64 v47; // rcx
  unsigned __int16 *v48; // rdi
  unsigned __int16 v49; // [rsp+40h] [rbp-C0h]
  __int16 v50; // [rsp+40h] [rbp-C0h]
  unsigned int v51; // [rsp+44h] [rbp-BCh]
  int v52; // [rsp+48h] [rbp-B8h] BYREF
  int v53; // [rsp+4Ch] [rbp-B4h]
  unsigned int *v54; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v55; // [rsp+58h] [rbp-A8h]
  unsigned __int16 *v56; // [rsp+60h] [rbp-A0h]
  unsigned int v57; // [rsp+68h] [rbp-98h]
  int v58; // [rsp+6Ch] [rbp-94h]
  unsigned int v59; // [rsp+70h] [rbp-90h]
  char *v60; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v61; // [rsp+80h] [rbp-80h]
  struct XDCOBJ *v62; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v63; // [rsp+90h] [rbp-70h]
  struct _GLYPHPOS v64; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR *v65; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v66; // [rsp+B8h] [rbp-48h]
  __int64 v67; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v68[72]; // [rsp+D0h] [rbp-30h] BYREF

  v6 = a6;
  v7 = 1;
  v8 = *(_QWORD *)this;
  v62 = a2;
  v10 = a4;
  v63 = a4;
  v59 = a3;
  LODWORD(a2) = 1;
  v11 = *(_QWORD *)(v8 + 96);
  v61 = a6;
  v53 = 1;
  memset(&v64, 0, sizeof(v64));
  if ( !*(_QWORD *)(v11 + 3112) )
  {
    v12 = a5;
    if ( a5 )
    {
      v47 = a5;
      v48 = a6;
      while ( v47 )
      {
        *v48++ = -1;
        --v47;
      }
    }
    a2 = 0LL;
    v53 = 0;
    goto LABEL_15;
  }
  v12 = a5;
  v13 = a4;
  v55 = a6;
  v14 = a5;
  v56 = a4;
  if ( a3 < a5 )
    v14 = a3;
  v15 = a5;
  v52 = a5;
  if ( a5 )
  {
    while ( 1 )
    {
      v16 = 70;
      if ( v14 )
      {
        if ( v14 < 0x46 )
          v16 = v14;
        v17 = 0;
      }
      else
      {
        v17 = 2;
        if ( v15 < 0x46 )
          v16 = v15;
      }
      v57 = v17;
      RFONTOBJ::vXlatGlyphArray(this, v13, v16, v68, v17, 0);
      v18 = *(_QWORD *)this;
      v19 = *(_QWORD *)(*(_QWORD *)this + 112LL);
      v67 = *(_QWORD *)(*(_QWORD *)this + 128LL);
      v20 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *, unsigned __int16 *, unsigned int))(*(_QWORD *)(v67 + 88) + 3112LL);
      ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v65, (struct PFFOBJ *)&v67);
      v21 = v20(v19, v18, 1LL, v68, v55, v16);
      v7 = 1;
      v58 = v21;
      if ( v66 )
      {
        v44 = v65;
        v45 = v66;
        do
        {
          EngUnmapFontFileFD(*v44++);
          --v45;
        }
        while ( v45 );
      }
      v22 = *(_QWORD *)this;
      v23 = *(_DWORD *)(*(_QWORD *)this + 712LL);
      if ( v58 == -1 )
        break;
      if ( (v23 & 0x40) != 0 )
      {
        v37 = 0;
        *(_DWORD *)(v22 + 712) = v23 & 0xFFFFFFBF;
        v51 = 0;
        v38 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 116LL);
        v50 = v38;
        if ( v16 )
        {
          v39 = v55;
          v40 = v68;
          v41 = (char *)((char *)v56 - (char *)v55);
          v54 = v68;
          v60 = (char *)((char *)v56 - (char *)v55);
          while ( 1 )
          {
            if ( *v40 != *(_DWORD *)(*(_QWORD *)this + 460LL) )
              goto LABEL_39;
            v42 = *(unsigned __int16 *)((char *)v39 + (_QWORD)v41);
            if ( v42 == v38 )
              goto LABEL_39;
            if ( v57 == 2 )
              goto LABEL_43;
            if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v42) )
            {
              if ( !*(_DWORD *)(*(_QWORD *)this + 708LL) )
                break;
              v46 = *(unsigned __int16 *)((char *)v39 + (_QWORD)v41);
              if ( (unsigned __int16)v46 < gqlTTSystem )
                break;
              if ( (unsigned __int16)v46 > (unsigned __int16)word_1C033C8A2 )
                break;
              v41 = v60;
              if ( ((0x80000000 >> ((v46 - gqlTTSystem) % 32)) & *(_DWORD *)(qword_1C033C8A8
                                                                           + 4LL * ((v46 - gqlTTSystem) / 32))) == 0 )
                break;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)1, &v64, &v56[v51], v62, 0LL) )
              return 0xFFFFFFFFLL;
            v37 = v51;
            v40 = v54;
            *v39 = WORD2(v64.pgdf[1].ppo);
LABEL_39:
            v38 = v50;
            ++v37;
            ++v40;
            v51 = v37;
            ++v39;
            v54 = v40;
            if ( v37 >= v16 )
              goto LABEL_11;
          }
          v40 = v54;
          v37 = v51;
LABEL_43:
          v53 = 0;
          *v39 = -1;
          goto LABEL_39;
        }
      }
LABEL_11:
      a2 = (struct XDCOBJ *)(v58 & (unsigned int)v53);
      v15 = v52 - v16;
      v24 = 2LL * v16;
      v53 &= v58;
      v55 = (unsigned __int16 *)((char *)v55 + v24);
      v13 = &v56[v24 / 2];
      v56 = (unsigned __int16 *)((char *)v56 + v24);
      v25 = v14 - v16;
      v52 -= v16;
      if ( !v14 )
        v25 = 0;
      v14 = v25;
      if ( !v15 )
      {
        a3 = v59;
        v6 = v61;
        v10 = v63;
LABEL_15:
        if ( !(_DWORD)a2 )
        {
          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
          {
            v27 = v12;
            if ( a3 < v12 )
              v27 = a3;
            if ( (unsigned int)i >= v27 )
              break;
            if ( v6[i] == 0xFFFF )
            {
              v28 = &v10[i];
              v29 = &v64;
              if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) )
              {
                if ( !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
                  return 0xFFFFFFFFLL;
                v6 = v61;
              }
              v30 = *(_QWORD *)this;
              v56 = v28;
              v31 = *(_DWORD **)(v30 + 480);
              if ( *v31 )
              {
                v55 = v28 + 1;
                v32 = (struct GPRUN *)(v31 + 4);
                if ( v28 < v28 + 1 )
                {
                  v33 = v31 + 5;
                  v60 = (char *)(v31 + 5);
                  while ( 1 )
                  {
                    v49 = *v28;
                    v34 = (unsigned int)*v28 - *(_DWORD *)v32;
                    v52 = *v28;
                    if ( (unsigned int)v34 < *v33 )
                    {
                      _mm_lfence();
                      LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v32 + 1) + 8 * v34);
                    }
                    else
                    {
                      Run = RFONTOBJ::gprunFindRun(this, v49);
                      v32 = Run;
                      v34 = (unsigned int)(v52 - *(_DWORD *)Run);
                      v60 = (char *)Run + 4;
                      if ( (unsigned int)v34 >= *((_DWORD *)Run + 1) )
                      {
                        v52 = 0;
                        LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, v62, 0LL, v28, v56, 1u, &v52, 0);
                        if ( !LinkMetricsPlus )
                          return 0xFFFFFFFFLL;
                      }
                      else
                      {
                        _mm_lfence();
                        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v34);
                      }
                    }
                    if ( !LinkMetricsPlus )
                    {
                      if ( !(unsigned int)RFONTOBJ::bInsertMetrics(
                                            this,
                                            (struct _GLYPHDATA **)(*((_QWORD *)v32 + 1) + 8 * v34)) )
                        return 0xFFFFFFFFLL;
                      LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v32 + 1) + 8 * v34);
                    }
                    ++v28;
                    v33 = v60;
                    v29->hg = LinkMetricsPlus->hg;
                    v29->pgdf = &LinkMetricsPlus->gdf;
                    ++v29;
                    if ( v28 >= v55 )
                      goto LABEL_30;
                  }
                }
              }
              else
              {
                v64.pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
LABEL_30:
                v6 = v61;
              }
              v7 = 1;
              a3 = v59;
              v6[i] = WORD2(v64.pgdf[1].ppo);
            }
            v10 = v63;
          }
          LODWORD(a2) = v53;
        }
        goto LABEL_45;
      }
    }
    *(_DWORD *)(v22 + 712) = v23 & 0xFFFFFFBF;
    return 0xFFFFFFFFLL;
  }
  else
  {
LABEL_45:
    if ( v12 == a3 )
    {
      if ( (_DWORD)a2 == -1 )
        return (unsigned int)-1;
      return v7;
    }
    else
    {
      return (unsigned int)a2;
    }
  }
}
