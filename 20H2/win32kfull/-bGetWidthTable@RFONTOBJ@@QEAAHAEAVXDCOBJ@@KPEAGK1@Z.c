/*
 * XREFs of ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0060730
 * Callers:
 *     NtGdiGetWidthTable @ 0x1C005EBE0 (NtGdiGetWidthTable.c)
 * Callees:
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C0060BF0 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0060E84 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0060F30 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0061704 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0062610 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C0064878 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00659FC (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C0070A70 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0114BE0 (EngUnmapFontFileFD.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01480A0 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
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
  unsigned __int16 v34; // r9
  __int64 v35; // rdi
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *LinkMetricsPlus; // r8
  unsigned int v38; // edx
  __int16 v39; // r9
  unsigned __int16 *v40; // rsi
  unsigned int *v41; // r8
  char *v42; // rdi
  unsigned __int16 v43; // ax
  ULONG_PTR *v45; // rdi
  __int64 v46; // rsi
  int v47; // eax
  __int64 v48; // rcx
  unsigned __int16 *v49; // rdi
  unsigned __int16 v50; // [rsp+40h] [rbp-C0h]
  __int16 v51; // [rsp+40h] [rbp-C0h]
  unsigned int v52; // [rsp+44h] [rbp-BCh]
  int v53; // [rsp+48h] [rbp-B8h] BYREF
  int v54; // [rsp+4Ch] [rbp-B4h]
  unsigned int *v55; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v56; // [rsp+58h] [rbp-A8h]
  unsigned __int16 *v57; // [rsp+60h] [rbp-A0h]
  unsigned int v58; // [rsp+68h] [rbp-98h]
  int v59; // [rsp+6Ch] [rbp-94h]
  unsigned int v60; // [rsp+70h] [rbp-90h]
  char *v61; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v62; // [rsp+80h] [rbp-80h]
  struct XDCOBJ *v63; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v64; // [rsp+90h] [rbp-70h]
  struct _GLYPHPOS v65; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR *v66; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v67; // [rsp+B8h] [rbp-48h]
  __int64 v68; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v69[72]; // [rsp+D0h] [rbp-30h] BYREF

  v6 = a6;
  v7 = 1;
  v8 = *(_QWORD *)this;
  v63 = a2;
  v10 = a4;
  v64 = a4;
  v60 = a3;
  LODWORD(a2) = 1;
  v11 = *(_QWORD *)(v8 + 96);
  v62 = a6;
  v54 = 1;
  memset(&v65, 0, sizeof(v65));
  if ( !*(_QWORD *)(v11 + 3112) )
  {
    v12 = a5;
    if ( a5 )
    {
      v48 = a5;
      v49 = a6;
      while ( v48 )
      {
        *v49++ = -1;
        --v48;
      }
    }
    a2 = 0LL;
    v54 = 0;
    goto LABEL_15;
  }
  v12 = a5;
  v13 = a4;
  v56 = a6;
  v14 = a5;
  v57 = a4;
  if ( a3 < a5 )
    v14 = a3;
  v15 = a5;
  v53 = a5;
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
      v58 = v17;
      RFONTOBJ::vXlatGlyphArray(this, v13, v16, v69, v17, 0);
      v18 = *(_QWORD *)this;
      v19 = *(_QWORD *)(*(_QWORD *)this + 112LL);
      v68 = *(_QWORD *)(*(_QWORD *)this + 128LL);
      v20 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *, unsigned __int16 *, unsigned int))(*(_QWORD *)(v68 + 88) + 3112LL);
      ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v66, (struct PFFOBJ *)&v68);
      v21 = v20(v19, v18, 1LL, v69, v56, v16);
      v7 = 1;
      v59 = v21;
      if ( v67 )
      {
        v45 = v66;
        v46 = v67;
        do
        {
          EngUnmapFontFileFD(*v45++);
          --v46;
        }
        while ( v46 );
      }
      v22 = *(_QWORD *)this;
      v23 = *(_DWORD *)(*(_QWORD *)this + 712LL);
      if ( v59 == -1 )
        break;
      if ( (v23 & 0x40) != 0 )
      {
        v38 = 0;
        *(_DWORD *)(v22 + 712) = v23 & 0xFFFFFFBF;
        v52 = 0;
        v39 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 116LL);
        v51 = v39;
        if ( v16 )
        {
          v40 = v56;
          v41 = v69;
          v42 = (char *)((char *)v57 - (char *)v56);
          v55 = v69;
          v61 = (char *)((char *)v57 - (char *)v56);
          while ( 1 )
          {
            if ( *v41 != *(_DWORD *)(*(_QWORD *)this + 460LL) )
              goto LABEL_40;
            v43 = *(unsigned __int16 *)((char *)v40 + (_QWORD)v42);
            if ( v43 == v39 )
              goto LABEL_40;
            if ( v58 == 2 )
              goto LABEL_44;
            if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v43) )
            {
              if ( !*(_DWORD *)(*(_QWORD *)this + 708LL) )
                break;
              v47 = *(unsigned __int16 *)((char *)v40 + (_QWORD)v42);
              if ( (unsigned __int16)v47 < gqlTTSystem )
                break;
              if ( (unsigned __int16)v47 > (unsigned __int16)word_1C033B8DA )
                break;
              v42 = v61;
              if ( ((0x80000000 >> ((v47 - gqlTTSystem) % 32)) & *(_DWORD *)(qword_1C033B8E0
                                                                           + 4LL * ((v47 - gqlTTSystem) / 32))) == 0 )
                break;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v65, &v57[v52], v63, 0LL) )
              return 0xFFFFFFFFLL;
            v38 = v52;
            v41 = v55;
            *v40 = WORD2(v65.pgdf[1].ppo);
LABEL_40:
            v39 = v51;
            ++v38;
            ++v41;
            v52 = v38;
            ++v40;
            v55 = v41;
            if ( v38 >= v16 )
              goto LABEL_11;
          }
          v41 = v55;
          v38 = v52;
LABEL_44:
          v54 = 0;
          *v40 = -1;
          goto LABEL_40;
        }
      }
LABEL_11:
      a2 = (struct XDCOBJ *)(v59 & (unsigned int)v54);
      v15 = v53 - v16;
      v24 = 2LL * v16;
      v54 &= v59;
      v56 = (unsigned __int16 *)((char *)v56 + v24);
      v13 = &v57[v24 / 2];
      v57 = (unsigned __int16 *)((char *)v57 + v24);
      v25 = v14 - v16;
      v53 -= v16;
      if ( !v14 )
        v25 = 0;
      v14 = v25;
      if ( !v15 )
      {
        a3 = v60;
        v6 = v62;
        v10 = v64;
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
              v29 = &v65;
              if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) )
              {
                if ( !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
                  return 0xFFFFFFFFLL;
                v6 = v62;
              }
              v30 = *(_QWORD *)this;
              v57 = v28;
              v31 = *(_DWORD **)(v30 + 480);
              if ( *v31 )
              {
                v56 = v28 + 1;
                v32 = (struct GPRUN *)(v31 + 4);
                if ( v28 < v28 + 1 )
                {
                  v33 = v31 + 5;
                  v61 = (char *)(v31 + 5);
                  while ( 1 )
                  {
                    v50 = *v28;
                    v34 = *v28;
                    v35 = (unsigned int)*v28 - *(_DWORD *)v32;
                    v53 = *v28;
                    if ( (unsigned int)v35 < *v33 )
                    {
                      _mm_lfence();
                      LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v32 + 1) + 8 * v35);
                    }
                    else
                    {
                      Run = RFONTOBJ::gprunFindRun(this, v50);
                      v32 = Run;
                      v35 = (unsigned int)(v53 - *(_DWORD *)Run);
                      v61 = (char *)Run + 4;
                      if ( (unsigned int)v35 >= *((_DWORD *)Run + 1) )
                      {
                        v53 = 0;
                        LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, v63, 0LL, v28, v57, 1u, &v53, 0);
                        if ( !LinkMetricsPlus )
                          return 0xFFFFFFFFLL;
                      }
                      else
                      {
                        _mm_lfence();
                        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v35);
                      }
                      v34 = v50;
                    }
                    if ( !LinkMetricsPlus )
                    {
                      if ( !(unsigned int)RFONTOBJ::bInsertMetrics(
                                            this,
                                            (struct _GLYPHDATA **)(*((_QWORD *)v32 + 1) + 8 * v35),
                                            v34) )
                        return 0xFFFFFFFFLL;
                      LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v32 + 1) + 8 * v35);
                    }
                    ++v28;
                    v33 = v61;
                    v29->hg = LinkMetricsPlus->hg;
                    v29->pgdf = &LinkMetricsPlus->gdf;
                    ++v29;
                    if ( v28 >= v56 )
                      goto LABEL_31;
                  }
                }
              }
              else
              {
                v65.pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
LABEL_31:
                v6 = v62;
              }
              v7 = 1;
              a3 = v60;
              v6[i] = WORD2(v65.pgdf[1].ppo);
            }
            v10 = v64;
          }
          LODWORD(a2) = v54;
        }
        goto LABEL_46;
      }
    }
    *(_DWORD *)(v22 + 712) = v23 & 0xFFFFFFBF;
    return 0xFFFFFFFFLL;
  }
  else
  {
LABEL_46:
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
