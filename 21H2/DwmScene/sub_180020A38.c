/*
 * XREFs of sub_180020A38 @ 0x180020A38
 * Callers:
 *     sub_180018414 @ 0x180018414 (sub_180018414.c)
 *     sub_18008F48C @ 0x18008F48C (sub_18008F48C.c)
 *     sub_1800F1174 @ 0x1800F1174 (sub_1800F1174.c)
 *     sub_1800F6100 @ 0x1800F6100 (sub_1800F6100.c)
 *     sub_1800FAF8C @ 0x1800FAF8C (sub_1800FAF8C.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180020A38(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    v9 = (a1[2] - v6) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v9 >= 0x1000 )
    {
      v10 = *(_QWORD *)(v6 - 8);
      v11 = v9 + 39;
      v12 = v6 - v10;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v11);
        JUMPOUT(0x180020ABFLL);
      }
      v6 = v10;
    }
    j_j__o_free(v6);
  }
  *a1 = a2;
  a1[1] = a2 + 8 * a3;
  result = a2 + 8 * a4;
  a1[2] = result;
  return result;
}
