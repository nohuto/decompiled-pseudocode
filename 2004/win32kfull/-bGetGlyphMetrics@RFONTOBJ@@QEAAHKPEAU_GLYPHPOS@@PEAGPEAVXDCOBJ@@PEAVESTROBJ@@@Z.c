/*
 * XREFs of ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00DE240
 * Callers:
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C000C544 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C0079F80 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007D260 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C00DECFC (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C00DEEAC (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C00E071C (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00E1878 (GreGetCharABCWidthsW.c)
 *     GreGetCharWidthW @ 0x1C00E1D38 (GreGetCharWidthW.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00E3DB0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00D82CC (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00DB280 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00E0BDC (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C00E0F20 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C01105F8 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0113EA0 (EngUnmapFontFileFD.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0145A70 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RFONTOBJ::bGetGlyphMetrics(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        struct XDCOBJ *a5,
        struct ESTROBJ *a6)
{
  RFONTOBJ *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  _DWORD *v12; // r9
  unsigned __int16 *v13; // r12
  struct GPRUN *Run; // r15
  _DWORD *v15; // r9
  unsigned int v16; // ebp
  unsigned int v17; // r14d
  __int64 v18; // rbx
  struct _GLYPHDATA *LinkMetricsPlus; // r8
  __int64 v20; // rax
  struct RFONTOBJ *v21; // rdx
  __int64 v22; // r13
  ULONG_PTR *v23; // rcx
  int v24; // eax
  RFONTOBJ *v25; // rbp
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  _OWORD *v29; // rcx
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 (__fastcall *v32)(__int64, _QWORD, _QWORD, _QWORD, _OWORD *, _QWORD, _DWORD); // rbx
  int v33; // eax
  unsigned int v34; // r10d
  unsigned int v35; // ecx
  struct _FONTFILEVIEW **v36; // r11
  struct _FONTFILEVIEW **v37; // rax
  int v38; // edx
  __int64 v39; // rbp
  int v40; // ebx
  RFONTOBJ *v41; // rdx
  __int64 v42; // rax
  struct RFONTOBJ *v43; // rcx
  __int64 v44; // rcx
  int v45; // eax
  _QWORD *v47; // rax
  ULONG_PTR v48; // rax
  ULONG_PTR *v49; // rax
  ULONG_PTR *v50; // r14
  unsigned __int16 v51[2]; // [rsp+40h] [rbp-128h] BYREF
  int v52; // [rsp+48h] [rbp-120h] BYREF
  unsigned int v53[2]; // [rsp+50h] [rbp-118h] BYREF
  RFONTOBJ *v54; // [rsp+58h] [rbp-110h]
  ULONG_PTR *v55; // [rsp+60h] [rbp-108h]
  unsigned int v56; // [rsp+68h] [rbp-100h]
  struct RFONTOBJ *v57; // [rsp+70h] [rbp-F8h]
  _OWORD *v58; // [rsp+78h] [rbp-F0h]
  _DWORD *i; // [rsp+80h] [rbp-E8h]
  unsigned __int16 *v60; // [rsp+88h] [rbp-E0h]
  struct ESTROBJ *v61; // [rsp+90h] [rbp-D8h]
  struct XDCOBJ *v62; // [rsp+98h] [rbp-D0h]
  __int64 v63; // [rsp+A0h] [rbp-C8h]
  __int64 v64; // [rsp+A8h] [rbp-C0h]
  _OWORD v65[4]; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned int v66[2]; // [rsp+F0h] [rbp-78h] BYREF
  int v67; // [rsp+F8h] [rbp-70h]
  void *v68[2]; // [rsp+100h] [rbp-68h] BYREF
  __int64 v69; // [rsp+110h] [rbp-58h]

  v62 = a5;
  v8 = this;
  v61 = a6;
  v9 = *(_QWORD *)this;
  v10 = (unsigned int)a2;
  v56 = (unsigned int)a2;
  v54 = this;
  if ( *(_QWORD *)(v9 + 480) || (unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
  {
    v11 = *(_QWORD *)v8;
    v60 = a4;
    v12 = *(_DWORD **)(v11 + 480);
    if ( *v12 )
    {
      v13 = &a4[v10];
      Run = (struct GPRUN *)(v12 + 4);
      if ( a4 < v13 )
      {
        v15 = v12 + 5;
        for ( i = v15; ; v15 = i )
        {
          v16 = *a4;
          v17 = v16;
          v18 = v16 - *(_DWORD *)Run;
          if ( (unsigned int)v18 < *v15
            || (Run = RFONTOBJ::gprunFindRun(v8, v16),
                v18 = v16 - *(_DWORD *)Run,
                i = (_DWORD *)((char *)Run + 4),
                (unsigned int)v18 < *((_DWORD *)Run + 1)) )
          {
            _mm_lfence();
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v18);
          }
          else
          {
            v52 = 0;
            LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(v8, v62, v61, a4, v60, v56, &v52, 0);
            if ( !LinkMetricsPlus )
              return 0LL;
          }
          if ( !LinkMetricsPlus )
            break;
LABEL_8:
          ++a4;
          a3->hg = LinkMetricsPlus->hg;
          a3->pgdf = &LinkMetricsPlus->gdf;
          ++a3;
          if ( a4 >= v13 )
            return 1LL;
        }
        v20 = *(_QWORD *)v8;
        v21 = (struct RFONTOBJ *)(8 * v18 + *((_QWORD *)Run + 1));
        v64 = 8 * v18;
        v57 = v21;
        if ( !*(_QWORD *)(v20 + 480) )
        {
          if ( !(unsigned int)RFONTOBJ::bAllocateCache(v8, v21) )
            return 0LL;
          v21 = v57;
        }
        v22 = *(_QWORD *)v8;
        v23 = *(ULONG_PTR **)(v22 + 480);
        v24 = *(_DWORD *)(v22 + 84);
        v55 = v23;
        if ( (v24 & 2) != 0 )
        {
          v51[0] = v16;
          v25 = v54;
          v53[0] = 0;
          RFONTOBJ::vXlatGlyphArray(v54, v51, 1u, v53, 0, 0);
          v23 = v55;
          v21 = v57;
          v17 = v53[0];
          v22 = *(_QWORD *)v25;
        }
        else
        {
          v25 = v54;
        }
        v26 = v22;
        *(_QWORD *)v53 = v22;
        if ( v17 == *(_DWORD *)(v22 + 460) )
        {
          v48 = v23[1];
          if ( v48 )
          {
            *(_QWORD *)v21 = v48;
LABEL_37:
            v45 = 1;
LABEL_38:
            if ( !v45 )
              return 0LL;
            v8 = v54;
            LinkMetricsPlus = *(struct _GLYPHDATA **)(v64 + *((_QWORD *)Run + 1));
            goto LABEL_8;
          }
        }
        v27 = 24LL;
        if ( !*(_DWORD *)(v22 + 640) )
          v27 = 64LL;
        if ( (unsigned __int64)(*(_QWORD *)(v22 + 512) + v27) > *(_QWORD *)(v22 + 520) )
        {
          v47 = PALLOCMEM2(0x720uLL, 1667326791LL, 0);
          if ( !v47 )
            goto LABEL_52;
          *v47 = *(_QWORD *)(v22 + 536);
          *(_QWORD *)(v22 + 536) = v47;
          *(_QWORD *)(v22 + 512) = v47 + 2;
          *(_QWORD *)(v22 + 520) = v47 + 228;
          v26 = *(_QWORD *)v25;
          *(_QWORD *)v53 = *(_QWORD *)v25;
        }
        v52 = (*(_DWORD *)(v26 + 88) == 2) + 1;
        memset(v65, 0, sizeof(v65));
        v30 = *(_QWORD *)(v26 + 128);
        if ( *(_DWORD *)(v26 + 640) )
        {
          v29 = v65;
          v58 = v65;
        }
        else
        {
          v58 = *(_OWORD **)(v22 + 512);
        }
        v63 = *(_QWORD *)(v26 + 112);
        v31 = *(_QWORD *)(v30 + 88);
        v55 = 0LL;
        *(_DWORD *)v51 = 0;
        v32 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _OWORD *, _QWORD, _DWORD))(v31 + 2912);
        if ( (*(_DWORD *)(v31 + 40) & 0x2000) != 0 && *(_DWORD *)(v30 + 36) <= 3u )
        {
          v33 = *(_DWORD *)(v30 + 52);
          if ( (v33 & 0x1000) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28);
            v33 = *(_DWORD *)(v30 + 52);
          }
          if ( (v33 & 0x2000) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28);
          v34 = *(_DWORD *)(v30 + 36);
          v35 = 0;
          if ( !v34 )
            goto LABEL_29;
          v36 = *(struct _FONTFILEVIEW ***)(v30 + 200);
          v37 = v36;
          while ( 1 )
          {
            v38 = *((_DWORD *)*v37 + 10);
            if ( (v38 & 0x10) == 0 && (v38 & 8) != 0 && !*((_QWORD *)*v37 + 6) )
              break;
            ++v35;
            ++v37;
            if ( v35 >= v34 )
              goto LABEL_29;
          }
          v69 = 0LL;
          *(_QWORD *)v66 = 0LL;
          v67 = 0;
          *(_OWORD *)v68 = 0LL;
          if ( MapFontFiles(v34, v36, v68, v66) )
          {
            v49 = *(ULONG_PTR **)(v30 + 200);
            v39 = *(unsigned int *)(v30 + 36);
            v55 = v49;
          }
          else
          {
LABEL_29:
            v39 = *(unsigned int *)v51;
          }
        }
        else
        {
          v39 = 0LL;
        }
        v40 = v32(v63, *(_QWORD *)v53, (unsigned int)v52, v17, v58, 0LL, 0);
        if ( (_DWORD)v39 )
        {
          v50 = v55;
          do
          {
            EngUnmapFontFileFD(*v50++);
            --v39;
          }
          while ( v39 );
        }
        if ( v40 != -1 )
        {
          v41 = v54;
          if ( *(_DWORD *)(*(_QWORD *)v54 + 640LL) )
          {
            v42 = *(_QWORD *)(v22 + 512);
            *(_OWORD *)v42 = v65[0];
            *(_QWORD *)(v42 + 16) = *(_QWORD *)&v65[1];
          }
          v43 = v57;
          **(_QWORD **)(v22 + 512) = 0LL;
          *(_QWORD *)v43 = *(_QWORD *)(v22 + 512);
          v44 = 24LL;
          if ( !*(_DWORD *)(*(_QWORD *)v41 + 640LL) )
            v44 = 64LL;
          *(_QWORD *)(v22 + 512) += v44;
          goto LABEL_37;
        }
LABEL_52:
        v45 = 0;
        goto LABEL_38;
      }
    }
    else
    {
      for ( ; (_DWORD)v10; LODWORD(v10) = v10 - 1 )
      {
        a3->hg = *(_DWORD *)(*(_QWORD *)v8 + 460LL);
        a3->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(v8);
        ++a3;
      }
    }
    return 1LL;
  }
  return 0LL;
}
