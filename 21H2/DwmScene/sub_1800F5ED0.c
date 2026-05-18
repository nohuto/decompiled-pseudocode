/*
 * XREFs of sub_1800F5ED0 @ 0x1800F5ED0
 * Callers:
 *     sub_1800F6178 @ 0x1800F6178 (sub_1800F6178.c)
 *     sub_1800FB0BC @ 0x1800FB0BC (sub_1800FB0BC.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800F5ED0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
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
    v9 = 12 * ((a1[2] - v6) / 12);
    if ( v9 >= 0x1000 )
    {
      v10 = *(_QWORD *)(v6 - 8);
      v11 = v9 + 39;
      v12 = v6 - v10;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v11);
        JUMPOUT(0x1800F5F7FLL);
      }
      v6 = v10;
    }
    j_j__o_free(v6);
  }
  *a1 = a2;
  result = 3 * a4;
  a1[1] = a2 + 12 * a3;
  a1[2] = a2 + 12 * a4;
  return result;
}
