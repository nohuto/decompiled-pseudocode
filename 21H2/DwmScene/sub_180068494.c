/*
 * XREFs of sub_180068494 @ 0x180068494
 * Callers:
 *     sub_18000FD9C @ 0x18000FD9C (sub_18000FD9C.c)
 * Callees:
 *     sub_180025F94 @ 0x180025F94 (sub_180025F94.c)
 *     sub_18005A894 @ 0x18005A894 (sub_18005A894.c)
 *     sub_180067B20 @ 0x180067B20 (sub_180067B20.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180068494(__int64 a1)
{
  _QWORD *v2; // rax
  const void **v3; // rax
  __int64 v4; // rcx
  __int128 v6; // [rsp+28h] [rbp-50h] BYREF
  __int128 v7; // [rsp+38h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int64 v9[3]; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+68h] [rbp-10h]

  v8 = a1;
  sub_180067B20((_QWORD *)a1, 10, 3u);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::FrameBuffer::`vftable';
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  v2 = operator new(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *(_QWORD *)(a1 + 120) = v2;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  _InterlockedExchangeAdd(&dword_180220BFC, 1u);
  sub_180025F94(v9, dword_180220BFC);
  v3 = sub_18005A894(v9, 0LL, "FrameBuffer", 0xBuLL);
  v7 = 0uLL;
  v6 = *(_OWORD *)v3;
  v7 = *((_OWORD *)v3 + 1);
  v3[2] = 0LL;
  v3[3] = (const void *)15;
  *(_BYTE *)v3 = 0;
  sub_180068194(a1, (__int64 *)&v6);
  if ( v10 >= 0x10 )
  {
    v4 = v9[0];
    if ( v10 + 1 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v9[0] - 8);
      if ( (unsigned __int64)(v9[0] - v4 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v4, v10 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v4);
  }
  return a1;
}
