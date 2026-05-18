/*
 * XREFs of sub_1800B1FB0 @ 0x1800B1FB0
 * Callers:
 *     sub_1800AD5A4 @ 0x1800AD5A4 (sub_1800AD5A4.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 *     sub_1800FF63C @ 0x1800FF63C (sub_1800FF63C.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800AC7DC @ 0x1800AC7DC (sub_1800AC7DC.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800B1FB0(__int64 a1, __int64 *a2, _DWORD *a3, int a4)
{
  _DWORD *v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-58h] BYREF
  int v17; // [rsp+38h] [rbp-40h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  __m128i si128; // [rsp+50h] [rbp-28h]

  v16[2] = a2;
  v17 = a4;
  si128 = 0LL;
  sub_180020B7C(&v18, (__int64)a2);
  sub_1800AC7DC((__int64 **)(a1 + 1616), (__int64)v16, &v17);
  v7 = (_DWORD *)v16[0];
  *(_DWORD *)(v16[0] + 72LL) = *a3;
  v7[19] = a3[1];
  v7[20] = a3[2];
  result = (unsigned int)a3[3];
  v7[21] = result;
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v9 = v18;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v9 = *(_QWORD *)(v18 - 8);
      if ( (unsigned __int64)(v18 - v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v9);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v18) = 0;
  v10 = a2[3];
  if ( v10 >= 0x10 )
  {
    v11 = v10 + 1;
    v12 = *a2;
    if ( v11 >= 0x1000 )
    {
      v13 = v11 + 39;
      v14 = *(_QWORD *)(v12 - 8);
      v15 = v12 - v14;
      if ( (unsigned __int64)(v15 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v15, v13);
        JUMPOUT(0x1800B20DFLL);
      }
      v12 = v14;
    }
    result = j_j__o_free(v12);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
