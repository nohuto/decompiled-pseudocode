/*
 * XREFs of sub_18001D08C @ 0x18001D08C
 * Callers:
 *     sub_1800165CC @ 0x1800165CC (sub_1800165CC.c)
 *     sub_18002EBE0 @ 0x18002EBE0 (sub_18002EBE0.c)
 *     sub_18003156C @ 0x18003156C (sub_18003156C.c)
 *     sub_180041A10 @ 0x180041A10 (sub_180041A10.c)
 *     sub_1800D24E8 @ 0x1800D24E8 (sub_1800D24E8.c)
 *     sub_1800D2CC8 @ 0x1800D2CC8 (sub_1800D2CC8.c)
 *     sub_1800D2E8C @ 0x1800D2E8C (sub_1800D2E8C.c)
 *     sub_1800D3308 @ 0x1800D3308 (sub_1800D3308.c)
 *     sub_1800D40E0 @ 0x1800D40E0 (sub_1800D40E0.c)
 *     sub_1800DC1B8 @ 0x1800DC1B8 (sub_1800DC1B8.c)
 *     sub_1800F2EE8 @ 0x1800F2EE8 (sub_1800F2EE8.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18001D08C(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax

  v4 = a1[3];
  if ( v4 >= 0x10 )
  {
    v5 = *a1;
    v6 = v4 + 1;
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = v6 + 39;
      v9 = v5 - v7;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v8);
        JUMPOUT(0x18001D10ALL);
      }
      v5 = v7;
    }
    j_j__o_free(v5);
  }
  a1[2] = 0LL;
  *(_BYTE *)a1 = 0;
  result = 15LL;
  a1[3] = 15LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
