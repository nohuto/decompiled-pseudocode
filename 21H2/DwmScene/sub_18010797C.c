/*
 * XREFs of sub_18010797C @ 0x18010797C
 * Callers:
 *     sub_180107740 @ 0x180107740 (sub_180107740.c)
 *     sub_18010797C @ 0x18010797C (sub_18010797C.c)
 * Callees:
 *     sub_180085CD8 @ 0x180085CD8 (sub_180085CD8.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_180106818 @ 0x180106818 (sub_180106818.c)
 *     sub_1801076A4 @ 0x1801076A4 (sub_1801076A4.c)
 *     sub_18010797C @ 0x18010797C (sub_18010797C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

void __fastcall sub_18010797C(int a1, _QWORD *a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 v5; // rbx
  unsigned __int64 *v10; // rax
  unsigned __int32 v11; // xmm0_4
  __int64 v12; // rdx
  __int64 *v13; // rbp
  __int64 *i; // rbx
  __int64 v15; // xmm0_8
  __int64 v16; // [rsp+20h] [rbp-78h]
  unsigned __int32 v17; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v18[12]; // [rsp+34h] [rbp-64h] BYREF
  __int64 v19; // [rsp+40h] [rbp-58h] BYREF
  int v20; // [rsp+48h] [rbp-50h]

  v5 = a5;
  v19 = a5;
  sub_180089274(a5);
  if ( (*(_QWORD *)(a5 + 448) & a2[66]) == a2[65] )
  {
    sub_180089274(a5);
    if ( (*(_QWORD *)(a5 + 448) & a2[64]) == a2[63] )
    {
      v10 = (unsigned __int64 *)sub_180085CD8(a5, (__int64)v18);
      v11 = sub_1801076A4((unsigned __int64 *)a3, v10).m128_u32[0];
      v12 = a4[1];
      v17 = v11;
      if ( a4[2] == v12 )
      {
        sub_180106818(a4, (char *)v12, &v17, &v19);
        v5 = v19;
      }
      else
      {
        *(_DWORD *)v12 = v11;
        *(_QWORD *)(v12 + 8) = a5;
        a4[1] += 16LL;
      }
    }
    sub_180089274(v5);
    v13 = *(__int64 **)(v5 + 40);
    for ( i = *(__int64 **)(v5 + 32); i != v13; i += 2 )
    {
      v15 = *(_QWORD *)a3;
      v20 = *(_DWORD *)(a3 + 8);
      v16 = *i;
      v19 = v15;
      sub_18010797C(a1, (_DWORD)a2, (unsigned int)&v19, (_DWORD)a4, v16);
    }
  }
}
