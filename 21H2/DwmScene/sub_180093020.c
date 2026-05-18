/*
 * XREFs of sub_180093020 @ 0x180093020
 * Callers:
 *     sub_1800936A8 @ 0x1800936A8 (sub_1800936A8.c)
 *     sub_180094AE8 @ 0x180094AE8 (sub_180094AE8.c)
 *     sub_1800952D0 @ 0x1800952D0 (sub_1800952D0.c)
 *     sub_180095B4C @ 0x180095B4C (sub_180095B4C.c)
 *     sub_1800A7200 @ 0x1800A7200 (sub_1800A7200.c)
 *     sub_1800EA230 @ 0x1800EA230 (sub_1800EA230.c)
 *     sub_1800EC150 @ 0x1800EC150 (sub_1800EC150.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 *     sub_1800F0100 @ 0x1800F0100 (sub_1800F0100.c)
 *     sub_18010F440 @ 0x18010F440 (sub_18010F440.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180093020(__int64 a1, __int64 *a2, int a3)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v5 = a2[3];
  if ( v5 >= 0x10 )
  {
    v6 = *a2;
    v7 = v5 + 1;
    if ( v7 >= 0x1000 )
    {
      v8 = *(_QWORD *)(v6 - 8);
      v9 = v7 + 39;
      v10 = v6 - v8;
      if ( (unsigned __int64)(v10 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, v9);
        JUMPOUT(0x1800930CFLL);
      }
      v6 = v8;
    }
    j_j__o_free(v6);
  }
  a2[2] = 0LL;
  result = a1;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
