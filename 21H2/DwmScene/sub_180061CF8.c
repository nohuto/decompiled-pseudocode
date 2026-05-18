/*
 * XREFs of sub_180061CF8 @ 0x180061CF8
 * Callers:
 *     sub_180002EF0 @ 0x180002EF0 (sub_180002EF0.c)
 *     sub_1800030F0 @ 0x1800030F0 (sub_1800030F0.c)
 *     sub_1800031E0 @ 0x1800031E0 (sub_1800031E0.c)
 *     sub_1800032D0 @ 0x1800032D0 (sub_1800032D0.c)
 *     sub_1800033C0 @ 0x1800033C0 (sub_1800033C0.c)
 *     sub_1800034B0 @ 0x1800034B0 (sub_1800034B0.c)
 *     sub_1800035A0 @ 0x1800035A0 (sub_1800035A0.c)
 *     sub_180003690 @ 0x180003690 (sub_180003690.c)
 *     sub_180003780 @ 0x180003780 (sub_180003780.c)
 *     sub_180003930 @ 0x180003930 (sub_180003930.c)
 *     sub_180003A20 @ 0x180003A20 (sub_180003A20.c)
 *     sub_180003B10 @ 0x180003B10 (sub_180003B10.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800136F8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_18005A894 @ 0x18005A894 (sub_18005A894.c)
 *     sub_180061C70 @ 0x180061C70 (sub_180061C70.c)
 *     sub_1800D4B98 @ 0x1800D4B98 (sub_1800D4B98.c)
 *     sub_1800D4C70 @ 0x1800D4C70 (sub_1800D4C70.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _Init_thread_footer @ 0x180124618 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180124678 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=6
__int64 sub_180061CF8()
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
  __int128 Src; // [rsp+28h] [rbp-39h] BYREF
  __m128i si128; // [rsp+38h] [rbp-29h]
  __int128 v14; // [rsp+48h] [rbp-19h] BYREF
  __int128 v15; // [rsp+58h] [rbp-9h]
  __int128 v16; // [rsp+68h] [rbp+7h] BYREF
  __int128 v17; // [rsp+78h] [rbp+17h]
  _QWORD v18[2]; // [rsp+88h] [rbp+27h] BYREF
  __int128 v19; // [rsp+98h] [rbp+37h]

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_180220938 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180220938);
    if ( dword_180220938 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B65F0;
      *((_QWORD *)&Src + 1) = &unk_1801B6B54;
      *(_QWORD *)&v15 = 0x100000005LL;
      v16 = Src;
      v17 = v15;
      sub_180061C70();
      v2 = (_QWORD *)sub_1800D4B98(v18);
      v3 = sub_18005A894(v2, 0LL, "Font/ShaderModel40/", 0x13uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v3;
      si128 = *((__m128i *)v3 + 1);
      v3[2] = 0LL;
      v3[3] = (const void *)15;
      *(_BYTE *)v3 = 0;
      v4 = std::string::append(&Src, "/Pixel", 6uLL);
      v15 = 0uLL;
      v14 = *(_OWORD *)v4;
      v15 = *((_OWORD *)v4 + 1);
      v4[2] = 0LL;
      v4[3] = 15LL;
      *(_BYTE *)v4 = 0;
      byte_180220934 = sub_1800D4C70(&v14, &v16);
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
      if ( *((_QWORD *)&v19 + 1) >= 0x10uLL )
      {
        v6 = v18[0];
        if ( (unsigned __int64)(*((_QWORD *)&v19 + 1) + 1LL) >= 0x1000 )
        {
          v6 = *(_QWORD *)(v18[0] - 8LL);
          if ( (unsigned __int64)(v18[0] - v6 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v6, *((_QWORD *)&v19 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v6);
      }
      Init_thread_footer(&dword_180220938);
    }
  }
  if ( dword_180220940 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_180220940);
    if ( dword_180220940 == -1 )
    {
      *(_QWORD *)&Src = &unk_1801B6B60;
      *((_QWORD *)&Src + 1) = &unk_1801B6E04;
      *(_QWORD *)&v19 = 0x100000001LL;
      v16 = Src;
      v17 = v19;
      sub_180061C70();
      v7 = (_QWORD *)sub_1800D4B98(v18);
      v8 = sub_18005A894(v7, 0LL, "Font/ShaderModel40/", 0x13uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v8;
      si128 = *((__m128i *)v8 + 1);
      v8[2] = 0LL;
      v8[3] = (const void *)15;
      *(_BYTE *)v8 = 0;
      v9 = std::string::append(&Src, "/Vertex", 7uLL);
      v15 = 0uLL;
      v14 = *(_OWORD *)v9;
      v15 = *((_OWORD *)v9 + 1);
      v9[2] = 0LL;
      v9[3] = 15LL;
      *(_BYTE *)v9 = 0;
      byte_18022093C = sub_1800D4C70(&v14, &v16);
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
      if ( *((_QWORD *)&v19 + 1) >= 0x10uLL )
      {
        v11 = v18[0];
        if ( (unsigned __int64)(*((_QWORD *)&v19 + 1) + 1LL) >= 0x1000 )
        {
          v11 = *(_QWORD *)(v18[0] - 8LL);
          if ( (unsigned __int64)(v18[0] - v11 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v11, *((_QWORD *)&v19 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v11);
      }
      Init_thread_footer(&dword_180220940);
    }
  }
  return 0LL;
}
