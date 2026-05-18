/*
 * XREFs of sub_18005EAC4 @ 0x18005EAC4
 * Callers:
 *     sub_180002F90 @ 0x180002F90 (sub_180002F90.c)
 *     sub_180003190 @ 0x180003190 (sub_180003190.c)
 *     sub_180003280 @ 0x180003280 (sub_180003280.c)
 *     sub_180003370 @ 0x180003370 (sub_180003370.c)
 *     sub_180003460 @ 0x180003460 (sub_180003460.c)
 *     sub_180003550 @ 0x180003550 (sub_180003550.c)
 *     sub_180003640 @ 0x180003640 (sub_180003640.c)
 *     sub_180003730 @ 0x180003730 (sub_180003730.c)
 *     sub_180003820 @ 0x180003820 (sub_180003820.c)
 *     sub_180003910 @ 0x180003910 (sub_180003910.c)
 *     sub_180003A00 @ 0x180003A00 (sub_180003A00.c)
 *     sub_180003AF0 @ 0x180003AF0 (sub_180003AF0.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000FF40 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180013618 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_18002C218 @ 0x18002C218 (sub_18002C218.c)
 *     sub_180043BDC @ 0x180043BDC (sub_180043BDC.c)
 *     sub_180054FC4 @ 0x180054FC4 (sub_180054FC4.c)
 *     sub_18005E9DC @ 0x18005E9DC (sub_18005E9DC.c)
 *     sub_1800CF2C8 @ 0x1800CF2C8 (sub_1800CF2C8.c)
 *     sub_1800CF3A0 @ 0x1800CF3A0 (sub_1800CF3A0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=120
__int64 sub_18005EAC4()
{
  __int64 v0; // rbx
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rax
  const void **v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  const void **v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  const void **v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  const void **v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  const void **v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  const void **v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  _QWORD *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  _QWORD *v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  _QWORD *v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  _QWORD *v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  _QWORD *v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  _QWORD *v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  _QWORD *v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  _QWORD *v131; // rax
  __int64 v132; // rax
  __int128 Src; // [rsp+28h] [rbp-49h] BYREF
  __m128i si128; // [rsp+38h] [rbp-39h]
  __int128 v135; // [rsp+48h] [rbp-29h] BYREF
  __int128 v136; // [rsp+58h] [rbp-19h]
  __int128 v137; // [rsp+68h] [rbp-9h] BYREF
  __int128 v138; // [rsp+78h] [rbp+7h]
  __int64 v139[2]; // [rsp+88h] [rbp+17h] BYREF
  __int128 v140; // [rsp+98h] [rbp+27h]

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_180219748 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219748);
    if ( dword_180219748 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BD1C0;
      *((_QWORD *)&Src + 1) = &unk_1801BDA34;
      *(_QWORD *)&v136 = 0x100000005LL;
      v137 = Src;
      v138 = v136;
      sub_18005E9DC();
      v5 = (_QWORD *)sub_1800CF2C8(v139);
      v6 = sub_180054FC4(v5, 0LL, "UnlitShader/ShaderModel40/", 0x1AuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v6;
      si128 = *((__m128i *)v6 + 1);
      v6[2] = 0LL;
      v6[3] = (const void *)15;
      *(_BYTE *)v6 = 0;
      v7 = std::string::append(&Src, "/Pixel", 6uLL);
      v136 = 0uLL;
      v135 = *(_OWORD *)v7;
      v136 = *((_OWORD *)v7 + 1);
      v7[2] = 0LL;
      v7[3] = 15LL;
      *(_BYTE *)v7 = 0;
      byte_180219744 = sub_1800CF3A0(&v135, &v137);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v8 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v8 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v8 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v8, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v8);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v140 + 1) >= 0x10uLL )
      {
        v9 = v139[0];
        if ( (unsigned __int64)(*((_QWORD *)&v140 + 1) + 1LL) >= 0x1000 )
        {
          v9 = *(_QWORD *)(v139[0] - 8);
          if ( (unsigned __int64)(v139[0] - v9 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v9, *((_QWORD *)&v140 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v9);
      }
      Init_thread_footer(&dword_180219748);
    }
  }
  if ( dword_180219750 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219750);
    if ( dword_180219750 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BDA40;
      *((_QWORD *)&Src + 1) = &unk_1801BDC44;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v10 = (_QWORD *)sub_1800CF2C8(v139);
      v11 = sub_180054FC4(v10, 0LL, "UnlitShader/ShaderModel40/", 0x1AuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v11;
      si128 = *((__m128i *)v11 + 1);
      v11[2] = 0LL;
      v11[3] = (const void *)15;
      *(_BYTE *)v11 = 0;
      v12 = std::string::append(&Src, "/Pixel", 6uLL);
      v136 = 0uLL;
      v135 = *(_OWORD *)v12;
      v136 = *((_OWORD *)v12 + 1);
      v12[2] = 0LL;
      v12[3] = 15LL;
      *(_BYTE *)v12 = 0;
      byte_18021974C = sub_1800CF3A0(&v135, &v137);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v13 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v13 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v13 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v13, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v13);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v140 + 1) >= 0x10uLL )
      {
        v14 = v139[0];
        if ( (unsigned __int64)(*((_QWORD *)&v140 + 1) + 1LL) >= 0x1000 )
        {
          v14 = *(_QWORD *)(v139[0] - 8);
          if ( (unsigned __int64)(v139[0] - v14 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v14, *((_QWORD *)&v140 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v14);
      }
      Init_thread_footer(&dword_180219750);
    }
  }
  if ( dword_180219758 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219758);
    if ( dword_180219758 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BD1C0;
      *((_QWORD *)&Src + 1) = &unk_1801BDA34;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v15 = (_QWORD *)sub_1800CF2C8(v139);
      v16 = sub_180054FC4(v15, 0LL, "UnlitShader/ShaderModel40/", 0x1AuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v16;
      si128 = *((__m128i *)v16 + 1);
      v16[2] = 0LL;
      v16[3] = (const void *)15;
      *(_BYTE *)v16 = 0;
      v17 = std::string::append(&Src, "/Pixel", 6uLL);
      v136 = 0uLL;
      v135 = *(_OWORD *)v17;
      v136 = *((_OWORD *)v17 + 1);
      v17[2] = 0LL;
      v17[3] = 15LL;
      *(_BYTE *)v17 = 0;
      byte_180219754 = sub_1800CF3A0(&v135, &v137);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v18 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v18 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v18 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v18, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v18);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v140 + 1) >= 0x10uLL )
      {
        v19 = v139[0];
        if ( (unsigned __int64)(*((_QWORD *)&v140 + 1) + 1LL) >= 0x1000 )
        {
          v19 = *(_QWORD *)(v139[0] - 8);
          if ( (unsigned __int64)(v139[0] - v19 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v19, *((_QWORD *)&v140 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v19);
      }
      Init_thread_footer(&dword_180219758);
    }
  }
  if ( dword_180219760 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219760);
    if ( dword_180219760 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BDC50;
      *((_QWORD *)&Src + 1) = &unk_1801BE958;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v20 = (_QWORD *)sub_1800CF2C8(v139);
      v21 = sub_180054FC4(v20, 0LL, "UnlitShader/ShaderModel40/", 0x1AuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v21;
      si128 = *((__m128i *)v21 + 1);
      v21[2] = 0LL;
      v21[3] = (const void *)15;
      *(_BYTE *)v21 = 0;
      v22 = std::string::append(&Src, "/Pixel", 6uLL);
      v136 = 0uLL;
      v135 = *(_OWORD *)v22;
      v136 = *((_OWORD *)v22 + 1);
      v22[2] = 0LL;
      v22[3] = 15LL;
      *(_BYTE *)v22 = 0;
      byte_18021975C = sub_1800CF3A0(&v135, &v137);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v23 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v23 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v23 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v23, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v23);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v140 + 1) >= 0x10uLL )
      {
        v24 = v139[0];
        if ( (unsigned __int64)(*((_QWORD *)&v140 + 1) + 1LL) >= 0x1000 )
        {
          v24 = *(_QWORD *)(v139[0] - 8);
          if ( (unsigned __int64)(v139[0] - v24 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v24, *((_QWORD *)&v140 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v24);
      }
      Init_thread_footer(&dword_180219760);
    }
  }
  if ( dword_180219768 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219768);
    if ( dword_180219768 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BE960;
      *((_QWORD *)&Src + 1) = &unk_1801BF050;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v25 = (_QWORD *)sub_1800CF2C8(v139);
      v26 = sub_180054FC4(v25, 0LL, "UnlitShader/ShaderModel40/", 0x1AuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v26;
      si128 = *((__m128i *)v26 + 1);
      v26[2] = 0LL;
      v26[3] = (const void *)15;
      *(_BYTE *)v26 = 0;
      v27 = std::string::append(&Src, "/Pixel", 6uLL);
      v136 = 0uLL;
      v135 = *(_OWORD *)v27;
      v136 = *((_OWORD *)v27 + 1);
      v27[2] = 0LL;
      v27[3] = 15LL;
      *(_BYTE *)v27 = 0;
      byte_180219764 = sub_1800CF3A0(&v135, &v137);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v28 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v28 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v28 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v28, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v28);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v140 + 1) >= 0x10uLL )
      {
        v29 = v139[0];
        if ( (unsigned __int64)(*((_QWORD *)&v140 + 1) + 1LL) >= 0x1000 )
        {
          v29 = *(_QWORD *)(v139[0] - 8);
          if ( (unsigned __int64)(v139[0] - v29 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v29, *((_QWORD *)&v140 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v29);
      }
      Init_thread_footer(&dword_180219768);
    }
  }
  if ( dword_180219770 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219770);
    if ( dword_180219770 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BDC50;
      *((_QWORD *)&Src + 1) = &unk_1801BE958;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v30 = (_QWORD *)sub_1800CF2C8(v139);
      v31 = sub_180054FC4(v30, 0LL, "UnlitShader/ShaderModel40/", 0x1AuLL);
      si128 = 0LL;
      Src = *(_OWORD *)v31;
      si128 = *((__m128i *)v31 + 1);
      v31[2] = 0LL;
      v31[3] = (const void *)15;
      *(_BYTE *)v31 = 0;
      v32 = std::string::append(&Src, "/Pixel", 6uLL);
      v136 = 0uLL;
      v135 = *(_OWORD *)v32;
      v136 = *((_OWORD *)v32 + 1);
      v32[2] = 0LL;
      v32[3] = 15LL;
      *(_BYTE *)v32 = 0;
      byte_18021976C = sub_1800CF3A0(&v135, &v137);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v33 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v33 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v33 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v33, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v33);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(Src) = 0;
      std::string::_Tidy_deallocate(v139);
      Init_thread_footer(&dword_180219770);
    }
  }
  if ( dword_180219778 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219778);
    if ( dword_180219778 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BF050;
      *((_QWORD *)&Src + 1) = &unk_1801BFC6C;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v34 = sub_1800CF2C8(&Src);
      v35 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v34);
      v36 = sub_18002C218((__int64)v139, v35, "/Pixel");
      byte_180219774 = sub_1800CF3A0(v36, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219778);
    }
  }
  if ( dword_180219780 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219780);
    if ( dword_180219780 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BF050;
      *((_QWORD *)&Src + 1) = &unk_1801BFC6C;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v37 = sub_1800CF2C8(&Src);
      v38 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v37);
      v39 = sub_18002C218((__int64)v139, v38, "/Pixel");
      byte_18021977C = sub_1800CF3A0(v39, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219780);
    }
  }
  if ( dword_180219788 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219788);
    if ( dword_180219788 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BFC70;
      *((_QWORD *)&Src + 1) = &unk_1801C1020;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v40 = sub_1800CF2C8(&Src);
      v41 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v40);
      v42 = sub_18002C218((__int64)v139, v41, "/Pixel");
      byte_180219784 = sub_1800CF3A0(v42, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219788);
    }
  }
  if ( dword_180219790 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219790);
    if ( dword_180219790 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BFC70;
      *((_QWORD *)&Src + 1) = &unk_1801C1020;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v43 = sub_1800CF2C8(&Src);
      v44 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v43);
      v45 = sub_18002C218((__int64)v139, v44, "/Pixel");
      byte_18021978C = sub_1800CF3A0(v45, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219790);
    }
  }
  if ( dword_180219798 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219798);
    if ( dword_180219798 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BD1C0;
      *((_QWORD *)&Src + 1) = &unk_1801BDA34;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v46 = sub_1800CF2C8(&Src);
      v47 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v46);
      v48 = sub_18002C218((__int64)v139, v47, "/Pixel");
      byte_180219794 = sub_1800CF3A0(v48, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219798);
    }
  }
  if ( dword_1802197A0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802197A0);
    if ( dword_1802197A0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BDA40;
      *((_QWORD *)&Src + 1) = &unk_1801BDC44;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v49 = sub_1800CF2C8(&Src);
      v50 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v49);
      v51 = sub_18002C218((__int64)v139, v50, "/Pixel");
      byte_18021979C = sub_1800CF3A0(v51, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802197A0);
    }
  }
  if ( dword_1802197A8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802197A8);
    if ( dword_1802197A8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BD1C0;
      *((_QWORD *)&Src + 1) = &unk_1801BDA34;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v52 = sub_1800CF2C8(&Src);
      v53 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v52);
      v54 = sub_18002C218((__int64)v139, v53, "/Pixel");
      byte_1802197A4 = sub_1800CF3A0(v54, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802197A8);
    }
  }
  if ( dword_1802197B0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802197B0);
    if ( dword_1802197B0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BDC50;
      *((_QWORD *)&Src + 1) = &unk_1801BE958;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v55 = sub_1800CF2C8(&Src);
      v56 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v55);
      v57 = sub_18002C218((__int64)v139, v56, "/Pixel");
      byte_1802197AC = sub_1800CF3A0(v57, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802197B0);
    }
  }
  if ( dword_1802197B8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802197B8);
    if ( dword_1802197B8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BE960;
      *((_QWORD *)&Src + 1) = &unk_1801BF050;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v58 = sub_1800CF2C8(&Src);
      v59 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v58);
      v60 = sub_18002C218((__int64)v139, v59, "/Pixel");
      byte_1802197B4 = sub_1800CF3A0(v60, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802197B8);
    }
  }
  if ( dword_1802197C0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802197C0);
    if ( dword_1802197C0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BDC50;
      *((_QWORD *)&Src + 1) = &unk_1801BE958;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v61 = sub_1800CF2C8(&Src);
      v62 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v61);
      v63 = sub_18002C218((__int64)v139, v62, "/Pixel");
      byte_1802197BC = sub_1800CF3A0(v63, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802197C0);
    }
  }
  if ( dword_1802197C8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802197C8);
    if ( dword_1802197C8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BF050;
      *((_QWORD *)&Src + 1) = &unk_1801BFC6C;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v64 = sub_1800CF2C8(&Src);
      v65 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v64);
      v66 = sub_18002C218((__int64)v139, v65, "/Pixel");
      byte_1802197C4 = sub_1800CF3A0(v66, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802197C8);
    }
  }
  if ( dword_1802197D0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802197D0);
    if ( dword_1802197D0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BF050;
      *((_QWORD *)&Src + 1) = &unk_1801BFC6C;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v67 = sub_1800CF2C8(&Src);
      v68 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v67);
      v69 = sub_18002C218((__int64)v139, v68, "/Pixel");
      byte_1802197CC = sub_1800CF3A0(v69, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802197D0);
    }
  }
  if ( dword_1802197D8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802197D8);
    if ( dword_1802197D8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BFC70;
      *((_QWORD *)&Src + 1) = &unk_1801C1020;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v70 = sub_1800CF2C8(&Src);
      v71 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v70);
      v72 = sub_18002C218((__int64)v139, v71, "/Pixel");
      byte_1802197D4 = sub_1800CF3A0(v72, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802197D8);
    }
  }
  if ( dword_1802197E0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802197E0);
    if ( dword_1802197E0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801BFC70;
      *((_QWORD *)&Src + 1) = &unk_1801C1020;
      *(_QWORD *)&v140 = 0x100000005LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v73 = sub_1800CF2C8(&Src);
      v74 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v73);
      v75 = sub_18002C218((__int64)v139, v74, "/Pixel");
      byte_1802197DC = sub_1800CF3A0(v75, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802197E0);
    }
  }
  if ( dword_1802197E8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802197E8);
    if ( dword_1802197E8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C1020;
      *((_QWORD *)&Src + 1) = &unk_1801C1758;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v76 = sub_1800CF2C8(&Src);
      v77 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v76);
      v78 = sub_18002C218((__int64)v139, v77, "/Vertex");
      byte_1802197E4 = sub_1800CF3A0(v78, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802197E8);
    }
  }
  if ( dword_1802197F0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802197F0);
    if ( dword_1802197F0 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C1760;
      *((_QWORD *)&Src + 1) = &unk_1801C1CE4;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v79 = sub_1800CF2C8(&Src);
      v80 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v79);
      v81 = sub_18002C218((__int64)v139, v80, "/Vertex");
      byte_1802197EC = sub_1800CF3A0(v81, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802197F0);
    }
  }
  if ( dword_1802197F8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802197F8);
    if ( dword_1802197F8 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C1020;
      *((_QWORD *)&Src + 1) = &unk_1801C1758;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v82 = sub_1800CF2C8(&Src);
      v83 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v82);
      v84 = sub_18002C218((__int64)v139, v83, "/Vertex");
      byte_1802197F4 = sub_1800CF3A0(v84, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_1802197F8);
    }
  }
  if ( dword_180219800 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219800);
    if ( dword_180219800 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C1020;
      *((_QWORD *)&Src + 1) = &unk_1801C1758;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v85 = sub_1800CF2C8(&Src);
      v86 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v85);
      v87 = sub_18002C218((__int64)v139, v86, "/Vertex");
      byte_1802197FC = sub_1800CF3A0(v87, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219800);
    }
  }
  if ( dword_180219808 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219808);
    if ( dword_180219808 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C1CF0;
      *((_QWORD *)&Src + 1) = &unk_1801C2398;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v88 = sub_1800CF2C8(&Src);
      v89 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v88);
      v90 = sub_18002C218((__int64)v139, v89, "/Vertex");
      byte_180219804 = sub_1800CF3A0(v90, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219808);
    }
  }
  if ( dword_180219810 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219810);
    if ( dword_180219810 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C1020;
      *((_QWORD *)&Src + 1) = &unk_1801C1758;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v91 = sub_1800CF2C8(&Src);
      v92 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v91);
      v93 = sub_18002C218((__int64)v139, v92, "/Vertex");
      byte_18021980C = sub_1800CF3A0(v93, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219810);
    }
  }
  if ( dword_180219818 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219818);
    if ( dword_180219818 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C1020;
      *((_QWORD *)&Src + 1) = &unk_1801C1758;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v94 = sub_1800CF2C8(&Src);
      v95 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v94);
      v96 = sub_18002C218((__int64)v139, v95, "/Vertex");
      byte_180219814 = sub_1800CF3A0(v96, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219818);
    }
  }
  if ( dword_180219820 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219820);
    if ( dword_180219820 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C1020;
      *((_QWORD *)&Src + 1) = &unk_1801C1758;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v97 = sub_1800CF2C8(&Src);
      v98 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v97);
      v99 = sub_18002C218((__int64)v139, v98, "/Vertex");
      byte_18021981C = sub_1800CF3A0(v99, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219820);
    }
  }
  if ( dword_180219828 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219828);
    if ( dword_180219828 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C1020;
      *((_QWORD *)&Src + 1) = &unk_1801C1758;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v100 = sub_1800CF2C8(&Src);
      v101 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v100);
      v102 = sub_18002C218((__int64)v139, v101, "/Vertex");
      byte_180219824 = sub_1800CF3A0(v102, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219828);
    }
  }
  if ( dword_180219830 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219830);
    if ( dword_180219830 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C1020;
      *((_QWORD *)&Src + 1) = &unk_1801C1758;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v103 = sub_1800CF2C8(&Src);
      v104 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v103);
      v105 = sub_18002C218((__int64)v139, v104, "/Vertex");
      byte_18021982C = sub_1800CF3A0(v105, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219830);
    }
  }
  if ( dword_180219838 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219838);
    if ( dword_180219838 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C23A0;
      *((_QWORD *)&Src + 1) = &unk_1801C2F08;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v106 = sub_1800CF2C8(&Src);
      v107 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v106);
      v108 = sub_18002C218((__int64)v139, v107, "/Vertex");
      byte_180219834 = sub_1800CF3A0(v108, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219838);
    }
  }
  if ( dword_180219840 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219840);
    if ( dword_180219840 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C2F10;
      *((_QWORD *)&Src + 1) = &unk_1801C38B8;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v109 = sub_1800CF2C8(&Src);
      v110 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v109);
      v111 = sub_18002C218((__int64)v139, v110, "/Vertex");
      byte_18021983C = sub_1800CF3A0(v111, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219840);
    }
  }
  if ( dword_180219848 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219848);
    if ( dword_180219848 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C23A0;
      *((_QWORD *)&Src + 1) = &unk_1801C2F08;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v112 = sub_1800CF2C8(&Src);
      v113 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v112);
      v114 = sub_18002C218((__int64)v139, v113, "/Vertex");
      byte_180219844 = sub_1800CF3A0(v114, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219848);
    }
  }
  if ( dword_180219850 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219850);
    if ( dword_180219850 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C23A0;
      *((_QWORD *)&Src + 1) = &unk_1801C2F08;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v115 = sub_1800CF2C8(&Src);
      v116 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v115);
      v117 = sub_18002C218((__int64)v139, v116, "/Vertex");
      byte_18021984C = sub_1800CF3A0(v117, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219850);
    }
  }
  if ( dword_180219858 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219858);
    if ( dword_180219858 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C38C0;
      *((_QWORD *)&Src + 1) = &unk_1801C4398;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v118 = sub_1800CF2C8(&Src);
      v119 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v118);
      v120 = sub_18002C218((__int64)v139, v119, "/Vertex");
      byte_180219854 = sub_1800CF3A0(v120, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219858);
    }
  }
  if ( dword_180219860 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219860);
    if ( dword_180219860 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C23A0;
      *((_QWORD *)&Src + 1) = &unk_1801C2F08;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v121 = sub_1800CF2C8(&Src);
      v122 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v121);
      v123 = sub_18002C218((__int64)v139, v122, "/Vertex");
      byte_18021985C = sub_1800CF3A0(v123, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219860);
    }
  }
  if ( dword_180219868 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219868);
    if ( dword_180219868 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C23A0;
      *((_QWORD *)&Src + 1) = &unk_1801C2F08;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v124 = sub_1800CF2C8(&Src);
      v125 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v124);
      v126 = sub_18002C218((__int64)v139, v125, "/Vertex");
      byte_180219864 = sub_1800CF3A0(v126, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219868);
    }
  }
  if ( dword_180219870 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219870);
    if ( dword_180219870 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C23A0;
      *((_QWORD *)&Src + 1) = &unk_1801C2F08;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v127 = sub_1800CF2C8(&Src);
      v128 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v127);
      v129 = sub_18002C218((__int64)v139, v128, "/Vertex");
      byte_18021986C = sub_1800CF3A0(v129, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219870);
    }
  }
  if ( dword_180219878 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219878);
    if ( dword_180219878 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C23A0;
      *((_QWORD *)&Src + 1) = &unk_1801C2F08;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v130 = sub_1800CF2C8(&Src);
      v131 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v130);
      v132 = sub_18002C218((__int64)v139, v131, "/Vertex");
      byte_180219874 = sub_1800CF3A0(v132, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219878);
    }
  }
  if ( dword_180219880 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180219880);
    if ( dword_180219880 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801C23A0;
      *((_QWORD *)&Src + 1) = &unk_1801C2F08;
      *(_QWORD *)&v140 = 0x100000001LL;
      v137 = Src;
      v138 = v140;
      sub_18005E9DC();
      v2 = sub_1800CF2C8(&Src);
      v3 = (_QWORD *)sub_180043BDC((__int64)&v135, (__int64)"UnlitShader/ShaderModel40/", v2);
      v4 = sub_18002C218((__int64)v139, v3, "/Vertex");
      byte_18021987C = sub_1800CF3A0(v4, &v137);
      std::string::_Tidy_deallocate((__int64 *)&v135);
      std::string::_Tidy_deallocate((__int64 *)&Src);
      Init_thread_footer(&dword_180219880);
    }
  }
  return 0LL;
}
