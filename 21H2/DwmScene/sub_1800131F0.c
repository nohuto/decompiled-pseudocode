/*
 * XREFs of sub_1800131F0 @ 0x1800131F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012F14 @ 0x180012F14 (sub_180012F14.c)
 *     sub_180092708 @ 0x180092708 (sub_180092708.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800131F0(__int64 a1, int a2, __int64 a3)
{
  int v3; // edi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 *v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __m128i si128; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    v3 = a3;
    si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
    LOBYTE(v11[0]) = 0;
    if ( !a2 )
    {
      sub_180012F14(v11, &qword_180212738);
      goto LABEL_13;
    }
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 1 )
          {
LABEL_13:
            LOBYTE(a3) = v3 == 1;
            sub_180092708(*(_QWORD *)(a1 + 16), v11, a3);
            if ( si128.m128i_i64[1] >= 0x10uLL )
            {
              v9 = v11[0];
              if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
              {
                v9 = *(_QWORD *)(v11[0] - 8);
                if ( (unsigned __int64)(v11[0] - v9 - 8) > 0x1F )
                {
                  o__invalid_parameter_noinfo_noreturn(v9, si128.m128i_i64[1] + 40);
                  __debugbreak();
                }
              }
              j_j__o_free(v9);
            }
            return 0LL;
          }
          v8 = &qword_180212718;
        }
        else
        {
          v8 = &qword_1802126F8;
        }
      }
      else
      {
        v8 = &qword_180212758;
      }
    }
    else
    {
      v8 = &qword_1802126D8;
    }
    sub_180012F14(v11, v8);
    goto LABEL_13;
  }
  catch ( ... )
  {
    sub_18000DD78(retaddr, 222, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
