/*
 * XREFs of sub_180067840 @ 0x180067840
 * Callers:
 *     sub_1800640C4 @ 0x1800640C4 (sub_1800640C4.c)
 *     sub_180064480 @ 0x180064480 (sub_180064480.c)
 *     sub_1800D0F48 @ 0x1800D0F48 (sub_1800D0F48.c)
 * Callees:
 *     sub_1800646EC @ 0x1800646EC (sub_1800646EC.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180067840(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // r14
  __int64 *v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      v10 = (__int64 *)(v4 + 136);
      do
      {
        sub_1800646EC(v10, (__int64)v10);
        v4 += 152LL;
        v10 += 19;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    v11 = 152 * ((a1[2] - v4) / 152);
    if ( v11 >= 0x1000 )
    {
      v12 = *(_QWORD *)(v4 - 8);
      v13 = v11 + 39;
      if ( (unsigned __int64)(v4 - v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v13);
        JUMPOUT(0x18006792DLL);
      }
      v4 = *(_QWORD *)(v4 - 8);
    }
    j_j__o_free(v4);
  }
  *a1 = a2;
  a1[1] = a2 + 152 * a3;
  result = a2 + 152 * a4;
  a1[2] = result;
  return result;
}
