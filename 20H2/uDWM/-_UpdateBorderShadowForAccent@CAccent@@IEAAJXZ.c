/*
 * XREFs of ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800012A0
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000CCF0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x18002EB14 (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 * Callees:
 *     ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x180001B4C (-_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z.c)
 *     ?GetShadowMargins@CAccent@@KA?AU_MARGINS@@PEAUWindowFrame@CTopLevelWindow@@@Z @ 0x180001C18 (-GetShadowMargins@CAccent@@KA-AU_MARGINS@@PEAUWindowFrame@CTopLevelWindow@@@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x180013F2C (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x18003D2BC (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowForAccent(CAccent *this)
{
  int v2; // ebx
  __int64 v3; // rcx
  struct _MARGINS *ShadowMargins; // rax
  int v5; // r10d
  __m128i v6; // xmm0
  int v7; // r11d
  int v8; // r9d
  int v9; // r8d
  __int32 v10; // r8d
  LONG *v11; // rdi
  __int64 v12; // r15
  CAtlasedImage **v13; // rbx
  struct _MARGINS *v14; // r14
  CAtlasedImage *v16; // rcx
  CAtlasedImage *v17; // rcx
  struct tagSIZE v18; // [rsp+28h] [rbp-E0h] BYREF
  struct _MARGINS v19; // [rsp+30h] [rbp-D8h] BYREF
  struct _MARGINS v20; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v21[16]; // [rsp+58h] [rbp-B0h] BYREF
  int v22; // [rsp+98h] [rbp-70h]
  int v23; // [rsp+9Ch] [rbp-6Ch]
  int v24; // [rsp+A0h] [rbp-68h]
  int v25; // [rsp+A4h] [rbp-64h]
  int v26; // [rsp+A8h] [rbp-60h]
  int v27; // [rsp+ACh] [rbp-5Ch]
  int v28; // [rsp+B0h] [rbp-58h]
  int v29; // [rsp+B4h] [rbp-54h]
  int v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+BCh] [rbp-4Ch]
  int v32; // [rsp+C0h] [rbp-48h]
  int v33; // [rsp+C4h] [rbp-44h]
  int v34; // [rsp+C8h] [rbp-40h]
  int v35; // [rsp+CCh] [rbp-3Ch]
  int v36; // [rsp+D0h] [rbp-38h]
  int v37; // [rsp+D4h] [rbp-34h]
  int v38; // [rsp+D8h] [rbp-30h]
  int v39; // [rsp+DCh] [rbp-2Ch]
  int v40; // [rsp+E0h] [rbp-28h]
  int v41; // [rsp+E4h] [rbp-24h]
  int v42; // [rsp+E8h] [rbp-20h]
  int v43; // [rsp+ECh] [rbp-1Ch]
  int v44; // [rsp+F0h] [rbp-18h]
  int v45; // [rsp+F4h] [rbp-14h]
  int v46; // [rsp+F8h] [rbp-10h]
  int v47; // [rsp+FCh] [rbp-Ch]
  int v48; // [rsp+100h] [rbp-8h]
  int v49; // [rsp+104h] [rbp-4h]
  int v50; // [rsp+108h] [rbp+0h]
  int v51; // [rsp+10Ch] [rbp+4h]
  int v52; // [rsp+110h] [rbp+8h]
  int v53; // [rsp+114h] [rbp+Ch]
  int v54; // [rsp+118h] [rbp+10h]
  int v55; // [rsp+11Ch] [rbp+14h]
  int v56; // [rsp+120h] [rbp+18h]
  int v57; // [rsp+124h] [rbp+1Ch]
  int v58; // [rsp+128h] [rbp+20h]
  int v59; // [rsp+12Ch] [rbp+24h]
  int v60; // [rsp+130h] [rbp+28h]
  int v61; // [rsp+134h] [rbp+2Ch]
  int v62; // [rsp+138h] [rbp+30h]
  int v63; // [rsp+13Ch] [rbp+34h]
  int v64; // [rsp+140h] [rbp+38h]
  int v65; // [rsp+144h] [rbp+3Ch]
  int v66; // [rsp+148h] [rbp+40h]
  int v67; // [rsp+14Ch] [rbp+44h]
  int v68; // [rsp+150h] [rbp+48h]
  int v69; // [rsp+154h] [rbp+4Ch]
  int v70; // [rsp+158h] [rbp+50h]
  int v71; // [rsp+15Ch] [rbp+54h]
  int v72; // [rsp+160h] [rbp+58h]
  int v73; // [rsp+164h] [rbp+5Ch]
  int v74; // [rsp+168h] [rbp+60h]
  int v75; // [rsp+16Ch] [rbp+64h]
  int v76; // [rsp+170h] [rbp+68h]
  int v77; // [rsp+174h] [rbp+6Ch]
  int v78; // [rsp+178h] [rbp+70h]
  int v79; // [rsp+17Ch] [rbp+74h]
  int v80; // [rsp+180h] [rbp+78h]
  int v81; // [rsp+184h] [rbp+7Ch]
  int v82; // [rsp+188h] [rbp+80h]
  int v83; // [rsp+18Ch] [rbp+84h]
  int v84; // [rsp+190h] [rbp+88h]
  int v85; // [rsp+194h] [rbp+8Ch]
  int v86; // [rsp+198h] [rbp+90h]
  int v87; // [rsp+19Ch] [rbp+94h]
  int v88; // [rsp+1A0h] [rbp+98h]
  int v89; // [rsp+1A4h] [rbp+9Ch]
  int v90; // [rsp+1A8h] [rbp+A0h]
  int v91; // [rsp+1ACh] [rbp+A4h]
  int v92; // [rsp+1B0h] [rbp+A8h]
  int v93; // [rsp+1B4h] [rbp+ACh]
  int v94; // [rsp+1B8h] [rbp+B0h]
  int v95; // [rsp+1BCh] [rbp+B4h]
  int v96; // [rsp+1C0h] [rbp+B8h]
  int v97; // [rsp+1C4h] [rbp+BCh]
  int v98; // [rsp+1C8h] [rbp+C0h]
  int v99; // [rsp+1CCh] [rbp+C4h]
  int v100; // [rsp+1D0h] [rbp+C8h]
  int v101; // [rsp+1D4h] [rbp+CCh]
  int v102; // [rsp+1D8h] [rbp+D0h]
  int v103; // [rsp+1DCh] [rbp+D4h]
  int v104; // [rsp+1E0h] [rbp+D8h]
  int v105; // [rsp+1E4h] [rbp+DCh]
  int v106; // [rsp+1E8h] [rbp+E0h]
  int v107; // [rsp+1ECh] [rbp+E4h]
  int v108; // [rsp+1F0h] [rbp+E8h]
  int v109; // [rsp+1F4h] [rbp+ECh]
  __int32 v110; // [rsp+1F8h] [rbp+F0h]
  int v111; // [rsp+1FCh] [rbp+F4h]
  int v112; // [rsp+200h] [rbp+F8h]
  int v113; // [rsp+204h] [rbp+FCh]
  __int32 v114; // [rsp+208h] [rbp+100h]
  int v115; // [rsp+20Ch] [rbp+104h]
  int v116; // [rsp+210h] [rbp+108h]
  int v117; // [rsp+214h] [rbp+10Ch]
  int v118; // [rsp+218h] [rbp+110h]
  int v119; // [rsp+21Ch] [rbp+114h]
  int v120; // [rsp+220h] [rbp+118h]
  int v121; // [rsp+224h] [rbp+11Ch]
  __int32 v122; // [rsp+228h] [rbp+120h]
  int v123; // [rsp+22Ch] [rbp+124h]
  __int32 v124; // [rsp+230h] [rbp+128h]
  int v125; // [rsp+234h] [rbp+12Ch]
  int v126; // [rsp+238h] [rbp+130h]
  __int32 v127; // [rsp+23Ch] [rbp+134h]
  __int32 v128; // [rsp+240h] [rbp+138h]
  int v129; // [rsp+244h] [rbp+13Ch]
  int v130; // [rsp+248h] [rbp+140h]
  __int32 v131; // [rsp+24Ch] [rbp+144h]
  int v132; // [rsp+250h] [rbp+148h]
  __int32 v133; // [rsp+254h] [rbp+14Ch]

  v2 = 0;
  v3 = *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8);
  if ( v3 )
    v2 = (int)((double)*(int *)(*(_QWORD *)(v3 + 1496) + 28LL)
             * *((double *)CDesktopManager::s_pDesktopManagerInstance + 60));
  ShadowMargins = CAccent::GetShadowMargins(
                    &v19,
                    *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8));
  v20.cxLeftWidth = v5;
  v20.cxRightWidth = 0x7FFFFFFF;
  v20.cyTopHeight = v5;
  v6 = *(__m128i *)ShadowMargins;
  v20.cyBottomHeight = 0x7FFFFFFF;
  v21[0] = v7;
  v21[1] = v2;
  v21[2] = v8;
  v21[3] = v8;
  v21[4] = v5;
  v21[5] = 0x7FFFFFFF;
  v21[6] = 0x7FFFFFFF;
  v21[7] = v2;
  v21[8] = 0x7FFFFFFF;
  v21[9] = v5;
  v21[10] = v5;
  v21[11] = 0x7FFFFFFF;
  v21[12] = v7;
  v21[13] = v2;
  v21[14] = v5;
  v21[15] = 0x7FFFFFFF;
  v22 = v9;
  v23 = v8;
  v24 = v7;
  v25 = 0x7FFFFFFF;
  v26 = 0x7FFFFFFF;
  v27 = v5;
  v28 = v9;
  v29 = v8;
  v30 = v7;
  v31 = 0x7FFFFFFF;
  v32 = v5;
  v33 = 0x7FFFFFFF;
  v34 = 0x7FFFFFFF;
  v35 = v5;
  v36 = v7;
  v37 = v7;
  v38 = v8;
  v39 = v8;
  v40 = 0x7FFFFFFF;
  v41 = v5;
  v42 = 0x7FFFFFFF;
  v43 = v7;
  v44 = 0x7FFFFFFF;
  v45 = v5;
  v46 = 0x7FFFFFFF;
  v47 = v5;
  v48 = v7;
  v49 = v7;
  v50 = v8;
  v51 = v8;
  v52 = v5;
  v53 = 0x7FFFFFFF;
  v54 = 0x7FFFFFFF;
  v55 = v2;
  v56 = v5;
  v57 = 0x7FFFFFFF;
  v58 = v5;
  v59 = 0x7FFFFFFF;
  v60 = v7;
  v61 = v2;
  v62 = v5;
  v63 = v5;
  v64 = v5;
  v65 = 0x7FFFFFFF;
  v66 = 0x7FFFFFFF;
  v67 = v2;
  HIDWORD(ShadowMargins) = v6.m128i_i32[1];
  v76 = v9;
  v114 = v6.m128i_i32[0];
  v82 = v9;
  v106 = v9;
  v10 = v5 - v6.m128i_i32[0];
  v6.m128i_i64[0] = _mm_srli_si128(v6, 8).m128i_u64[0];
  v120 = HIDWORD(ShadowMargins);
  v127 = v6.m128i_i32[0];
  v117 = v5 - HIDWORD(ShadowMargins);
  v133 = v6.m128i_i32[1];
  v123 = v5 - HIDWORD(ShadowMargins);
  v129 = v5 - HIDWORD(ShadowMargins);
  v69 = v5;
  v70 = v5;
  v74 = v5;
  v81 = v5;
  v86 = v5;
  v89 = v5;
  v95 = v5;
  v99 = v5;
  v101 = v5;
  v112 = v5;
  v113 = v5;
  v118 = v5;
  v119 = v5;
  v131 = v5 - v6.m128i_i32[1];
  v68 = 0x7FFFFFFF;
  v71 = 0x7FFFFFFF;
  v72 = v7;
  v73 = v2;
  v75 = 0x7FFFFFFF;
  v77 = v8;
  v78 = v7;
  v79 = 0x7FFFFFFF;
  v80 = 0x7FFFFFFF;
  v83 = v8;
  v84 = v7;
  v85 = 0x7FFFFFFF;
  v87 = 0x7FFFFFFF;
  v88 = 0x7FFFFFFF;
  v90 = v7;
  v91 = v7;
  v92 = v8;
  v93 = v8;
  v94 = 0x7FFFFFFF;
  v96 = 0x7FFFFFFF;
  v97 = v7;
  v98 = 0x7FFFFFFF;
  v100 = 0x7FFFFFFF;
  v102 = v7;
  v103 = v7;
  v104 = v8;
  v105 = v8;
  v107 = v8;
  v108 = 0x7FFFFFFF;
  v109 = 0x7FFFFFFF;
  v110 = v10;
  v111 = 0x7FFFFFFF;
  v115 = 0x7FFFFFFF;
  v116 = 0x7FFFFFFF;
  v121 = 0x7FFFFFFF;
  v122 = v10;
  v124 = v5 - v6.m128i_i32[0];
  v125 = 0x7FFFFFFF;
  v126 = 0x7FFFFFFF;
  v128 = v10;
  v130 = 0x7FFFFFFF;
  v132 = 0x7FFFFFFF;
  if ( !CAccent::_IsShadowPartApplicableFromFlags(this, 20) )
  {
    v112 = 0;
    v118 = 0;
    v22 = 0;
    v28 = 0;
  }
  if ( !CAccent::_IsShadowPartApplicableFromFlags(this, 21) )
  {
    v113 = 0;
    v119 = 0;
  }
  v11 = v21;
  v12 = 22LL;
  v13 = (CAtlasedImage **)((char *)this + 440);
  v14 = &v20;
  do
  {
    if ( *v13 )
    {
      CAtlasedImage::SetInsetFromParent(*v13, v14);
      if ( *v11 != 0x7FFFFFFF )
      {
        v16 = *v13;
        v18.cx = *v11;
        v18.cy = *((_DWORD *)v16 + 7);
        CAtlasedImage::SetSize(v16, &v18);
      }
      if ( v11[1] != 0x7FFFFFFF )
      {
        v17 = *v13;
        v19.cxRightWidth = v11[1];
        v19.cxLeftWidth = *((_DWORD *)v17 + 6);
        CAtlasedImage::SetSize(v17, (const struct tagSIZE *)&v19);
      }
    }
    v14 = (struct _MARGINS *)((char *)v14 + 24);
    ++v13;
    v11 += 6;
    --v12;
  }
  while ( v12 );
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 53) + 24LL))(*((_QWORD *)this + 53), 4096LL);
  return 0LL;
}
