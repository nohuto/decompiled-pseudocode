/*
 * XREFs of sub_1800A656C @ 0x1800A656C
 * Callers:
 *     sub_18001A8B0 @ 0x18001A8B0 (sub_18001A8B0.c)
 *     sub_1800A4C58 @ 0x1800A4C58 (sub_1800A4C58.c)
 *     sub_1800B0380 @ 0x1800B0380 (sub_1800B0380.c)
 *     sub_1800C1D80 @ 0x1800C1D80 (sub_1800C1D80.c)
 *     sub_1800C3600 @ 0x1800C3600 (sub_1800C3600.c)
 *     sub_1800C3FC8 @ 0x1800C3FC8 (sub_1800C3FC8.c)
 *     sub_1800C4CFC @ 0x1800C4CFC (sub_1800C4CFC.c)
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 *     sub_1800DC7F8 @ 0x1800DC7F8 (sub_1800DC7F8.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 *     sub_1800FA540 @ 0x1800FA540 (sub_1800FA540.c)
 *     sub_1801128F0 @ 0x1801128F0 (sub_1801128F0.c)
 * Callees:
 *     sub_1800A3BC8 @ 0x1800A3BC8 (sub_1800A3BC8.c)
 *     sub_1800A754C @ 0x1800A754C (sub_1800A754C.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A656C(__int64 a1, _QWORD *a2, size_t *a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  size_t v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  size_t v13; // rcx
  _QWORD *result; // rax
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v16[3]; // [rsp+28h] [rbp-40h] BYREF

  v16[2] = a3;
  v15 = 0LL;
  v5 = (__int64 *)(a1 + 18560);
  sub_1800A754C(a1 + 18560, &v15, a3);
  if ( v15 == *v5 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_1800A3BC8(v5, (__int64)v16, a3);
    v6 = v16[0];
    *a2 = 0LL;
    a2[1] = 0LL;
    v7 = *(_QWORD *)(v6 + 72);
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    *a2 = *(_QWORD *)(v6 + 64);
    a2[1] = *(_QWORD *)(v6 + 72);
  }
  v8 = a3[3];
  if ( v8 >= 0x10 )
  {
    v9 = v8 + 1;
    v10 = *a3;
    if ( v9 >= 0x1000 )
    {
      v11 = v9 + 39;
      v12 = *(_QWORD *)(v10 - 8);
      v13 = v10 - v12;
      if ( v13 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v13, v11);
        JUMPOUT(0x1800A6660LL);
      }
      v10 = v12;
    }
    j_j__o_free(v10);
  }
  result = a2;
  *(_BYTE *)a3 = 0;
  a3[3] = 15LL;
  a3[2] = 0LL;
  return result;
}
