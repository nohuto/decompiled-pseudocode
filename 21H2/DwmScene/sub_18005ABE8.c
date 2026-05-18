/*
 * XREFs of sub_18005ABE8 @ 0x18005ABE8
 * Callers:
 *     sub_180002F10 @ 0x180002F10 (sub_180002F10.c)
 *     sub_180003110 @ 0x180003110 (sub_180003110.c)
 *     sub_180003200 @ 0x180003200 (sub_180003200.c)
 *     sub_1800032F0 @ 0x1800032F0 (sub_1800032F0.c)
 *     sub_1800033E0 @ 0x1800033E0 (sub_1800033E0.c)
 *     sub_1800034D0 @ 0x1800034D0 (sub_1800034D0.c)
 *     sub_1800035C0 @ 0x1800035C0 (sub_1800035C0.c)
 *     sub_1800036B0 @ 0x1800036B0 (sub_1800036B0.c)
 *     sub_1800037A0 @ 0x1800037A0 (sub_1800037A0.c)
 *     sub_180003950 @ 0x180003950 (sub_180003950.c)
 *     sub_180003A40 @ 0x180003A40 (sub_180003A40.c)
 *     sub_180003B30 @ 0x180003B30 (sub_180003B30.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800136F8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_18005A894 @ 0x18005A894 (sub_18005A894.c)
 *     sub_18005A984 @ 0x18005A984 (sub_18005A984.c)
 *     sub_1800D4B98 @ 0x1800D4B98 (sub_1800D4B98.c)
 *     sub_1800D4C70 @ 0x1800D4C70 (sub_1800D4C70.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _Init_thread_footer @ 0x180124618 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180124678 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=18
__int64 sub_18005ABE8()
{
  __int64 v0; // rbx
  _QWORD *v2; // rax
  const void **v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  const void **v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  const void **v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  const void **v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  const void **v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  const void **v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int128 Src; // [rsp+20h] [rbp-39h] BYREF
  __m128i si128; // [rsp+30h] [rbp-29h]
  __int128 v34; // [rsp+40h] [rbp-19h] BYREF
  __int128 v35; // [rsp+50h] [rbp-9h]
  __int128 v36; // [rsp+60h] [rbp+7h] BYREF
  __int128 v37; // [rsp+70h] [rbp+17h]
  _QWORD v38[2]; // [rsp+80h] [rbp+27h] BYREF
  __int128 v39; // [rsp+90h] [rbp+37h]

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1802204E8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802204E8);
    if ( dword_1802204E8 == -1 )
    {
      *(_QWORD *)&Src = &unk_18018F200;
      *((_QWORD *)&Src + 1) = &unk_18018FACC;
      *(_QWORD *)&v35 = 0x100000005LL;
      v36 = Src;
      v37 = v35;
      sub_18005A984();
      v2 = (_QWORD *)sub_1800D4B98(v38);
      v3 = sub_18005A894(v2, 0LL, "ImageProcessingBlur/ShaderModel40/", 0x22uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v3;
      si128 = *((__m128i *)v3 + 1);
      v3[2] = 0LL;
      v3[3] = (const void *)15;
      *(_BYTE *)v3 = 0;
      v4 = std::string::append(&Src, "/Pixel", 6uLL);
      v35 = 0uLL;
      v34 = *(_OWORD *)v4;
      v35 = *((_OWORD *)v4 + 1);
      v4[2] = 0LL;
      v4[3] = 15LL;
      *(_BYTE *)v4 = 0;
      byte_1802204E4 = sub_1800D4C70(&v34, &v36);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v5 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v5 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v5 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v5, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v5);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v39 + 1) >= 0x10uLL )
      {
        v6 = v38[0];
        if ( (unsigned __int64)(*((_QWORD *)&v39 + 1) + 1LL) >= 0x1000 )
        {
          v6 = *(_QWORD *)(v38[0] - 8LL);
          if ( (unsigned __int64)(v38[0] - v6 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v6, *((_QWORD *)&v39 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v6);
      }
      Init_thread_footer(&dword_1802204E8);
    }
  }
  if ( dword_1802204F0 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802204F0);
    if ( dword_1802204F0 == -1 )
    {
      *(_QWORD *)&Src = &unk_18018FAD0;
      *((_QWORD *)&Src + 1) = &unk_18019068C;
      *(_QWORD *)&v39 = 0x100000005LL;
      v36 = Src;
      v37 = v39;
      sub_18005A984();
      v7 = (_QWORD *)sub_1800D4B98(v38);
      v8 = sub_18005A894(v7, 0LL, "ImageProcessingBlur/ShaderModel40/", 0x22uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v8;
      si128 = *((__m128i *)v8 + 1);
      v8[2] = 0LL;
      v8[3] = (const void *)15;
      *(_BYTE *)v8 = 0;
      v9 = std::string::append(&Src, "/Pixel", 6uLL);
      v35 = 0uLL;
      v34 = *(_OWORD *)v9;
      v35 = *((_OWORD *)v9 + 1);
      v9[2] = 0LL;
      v9[3] = 15LL;
      *(_BYTE *)v9 = 0;
      byte_1802204EC = sub_1800D4C70(&v34, &v36);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v10 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v10 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v10 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v10, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v10);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v39 + 1) >= 0x10uLL )
      {
        v11 = v38[0];
        if ( (unsigned __int64)(*((_QWORD *)&v39 + 1) + 1LL) >= 0x1000 )
        {
          v11 = *(_QWORD *)(v38[0] - 8LL);
          if ( (unsigned __int64)(v38[0] - v11 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v11, *((_QWORD *)&v39 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v11);
      }
      Init_thread_footer(&dword_1802204F0);
    }
  }
  if ( dword_1802204F8 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802204F8);
    if ( dword_1802204F8 == -1 )
    {
      *(_QWORD *)&Src = &unk_180190690;
      *((_QWORD *)&Src + 1) = &unk_18019182C;
      *(_QWORD *)&v39 = 0x100000005LL;
      v36 = Src;
      v37 = v39;
      sub_18005A984();
      v12 = (_QWORD *)sub_1800D4B98(v38);
      v13 = sub_18005A894(v12, 0LL, "ImageProcessingBlur/ShaderModel40/", 0x22uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v13;
      si128 = *((__m128i *)v13 + 1);
      v13[2] = 0LL;
      v13[3] = (const void *)15;
      *(_BYTE *)v13 = 0;
      v14 = std::string::append(&Src, "/Pixel", 6uLL);
      v35 = 0uLL;
      v34 = *(_OWORD *)v14;
      v35 = *((_OWORD *)v14 + 1);
      v14[2] = 0LL;
      v14[3] = 15LL;
      *(_BYTE *)v14 = 0;
      byte_1802204F4 = sub_1800D4C70(&v34, &v36);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v15 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v15 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v15 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v15, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v15);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v39 + 1) >= 0x10uLL )
      {
        v16 = v38[0];
        if ( (unsigned __int64)(*((_QWORD *)&v39 + 1) + 1LL) >= 0x1000 )
        {
          v16 = *(_QWORD *)(v38[0] - 8LL);
          if ( (unsigned __int64)(v38[0] - v16 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v16, *((_QWORD *)&v39 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v16);
      }
      Init_thread_footer(&dword_1802204F8);
    }
  }
  if ( dword_180220500 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180220500);
    if ( dword_180220500 == -1 )
    {
      *(_QWORD *)&Src = &unk_180191830;
      *((_QWORD *)&Src + 1) = &unk_180191E1C;
      *(_QWORD *)&v39 = 0x100000001LL;
      v36 = Src;
      v37 = v39;
      sub_18005A984();
      v17 = (_QWORD *)sub_1800D4B98(v38);
      v18 = sub_18005A894(v17, 0LL, "ImageProcessingBlur/ShaderModel40/", 0x22uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v18;
      si128 = *((__m128i *)v18 + 1);
      v18[2] = 0LL;
      v18[3] = (const void *)15;
      *(_BYTE *)v18 = 0;
      v19 = std::string::append(&Src, "/Vertex", 7uLL);
      v35 = 0uLL;
      v34 = *(_OWORD *)v19;
      v35 = *((_OWORD *)v19 + 1);
      v19[2] = 0LL;
      v19[3] = 15LL;
      *(_BYTE *)v19 = 0;
      byte_1802204FC = sub_1800D4C70(&v34, &v36);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v20 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v20 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v20 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v20, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v20);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v39 + 1) >= 0x10uLL )
      {
        v21 = v38[0];
        if ( (unsigned __int64)(*((_QWORD *)&v39 + 1) + 1LL) >= 0x1000 )
        {
          v21 = *(_QWORD *)(v38[0] - 8LL);
          if ( (unsigned __int64)(v38[0] - v21 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v21, *((_QWORD *)&v39 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v21);
      }
      Init_thread_footer(&dword_180220500);
    }
  }
  if ( dword_180220508 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180220508);
    if ( dword_180220508 == -1 )
    {
      *(_QWORD *)&Src = &unk_180191830;
      *((_QWORD *)&Src + 1) = &unk_180191E1C;
      *(_QWORD *)&v39 = 0x100000001LL;
      v36 = Src;
      v37 = v39;
      sub_18005A984();
      v22 = (_QWORD *)sub_1800D4B98(v38);
      v23 = sub_18005A894(v22, 0LL, "ImageProcessingBlur/ShaderModel40/", 0x22uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v23;
      si128 = *((__m128i *)v23 + 1);
      v23[2] = 0LL;
      v23[3] = (const void *)15;
      *(_BYTE *)v23 = 0;
      v24 = std::string::append(&Src, "/Vertex", 7uLL);
      v35 = 0uLL;
      v34 = *(_OWORD *)v24;
      v35 = *((_OWORD *)v24 + 1);
      v24[2] = 0LL;
      v24[3] = 15LL;
      *(_BYTE *)v24 = 0;
      byte_180220504 = sub_1800D4C70(&v34, &v36);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v25 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v25 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v25 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v25, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v25);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v39 + 1) >= 0x10uLL )
      {
        v26 = v38[0];
        if ( (unsigned __int64)(*((_QWORD *)&v39 + 1) + 1LL) >= 0x1000 )
        {
          v26 = *(_QWORD *)(v38[0] - 8LL);
          if ( (unsigned __int64)(v38[0] - v26 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v26, *((_QWORD *)&v39 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v26);
      }
      Init_thread_footer(&dword_180220508);
    }
  }
  if ( dword_180220510 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180220510);
    if ( dword_180220510 == -1 )
    {
      *(_QWORD *)&Src = &unk_180191830;
      *((_QWORD *)&Src + 1) = &unk_180191E1C;
      *(_QWORD *)&v39 = 0x100000001LL;
      v36 = Src;
      v37 = v39;
      sub_18005A984();
      v27 = (_QWORD *)sub_1800D4B98(v38);
      v28 = sub_18005A894(v27, 0LL, "ImageProcessingBlur/ShaderModel40/", 0x22uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v28;
      si128 = *((__m128i *)v28 + 1);
      v28[2] = 0LL;
      v28[3] = (const void *)15;
      *(_BYTE *)v28 = 0;
      v29 = std::string::append(&Src, "/Vertex", 7uLL);
      v35 = 0uLL;
      v34 = *(_OWORD *)v29;
      v35 = *((_OWORD *)v29 + 1);
      v29[2] = 0LL;
      v29[3] = 15LL;
      *(_BYTE *)v29 = 0;
      byte_18022050C = sub_1800D4C70(&v34, &v36);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v30 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v30 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v30 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v30, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v30);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v39 + 1) >= 0x10uLL )
      {
        v31 = v38[0];
        if ( (unsigned __int64)(*((_QWORD *)&v39 + 1) + 1LL) >= 0x1000 )
        {
          v31 = *(_QWORD *)(v38[0] - 8LL);
          if ( (unsigned __int64)(v38[0] - v31 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v31, *((_QWORD *)&v39 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v31);
      }
      Init_thread_footer(&dword_180220510);
    }
  }
  return 0LL;
}
