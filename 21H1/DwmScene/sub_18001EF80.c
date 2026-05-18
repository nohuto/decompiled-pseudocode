/*
 * XREFs of sub_18001EF80 @ 0x18001EF80
 * Callers:
 *     sub_180024B60 @ 0x180024B60 (sub_180024B60.c)
 *     sub_18007354C @ 0x18007354C (sub_18007354C.c)
 *     sub_180073FB4 @ 0x180073FB4 (sub_180073FB4.c)
 *     sub_18007483C @ 0x18007483C (sub_18007483C.c)
 *     sub_1800773B4 @ 0x1800773B4 (sub_1800773B4.c)
 *     sub_1800867D4 @ 0x1800867D4 (sub_1800867D4.c)
 *     sub_180087A00 @ 0x180087A00 (sub_180087A00.c)
 *     sub_1800BD2B0 @ 0x1800BD2B0 (sub_1800BD2B0.c)
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_180116690 @ 0x180116690 (sub_180116690.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001EF80(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v5; // [rsp+40h] [rbp-18h]

  sub_180116690(v4);
  a1[2] = 0LL;
  a1[3] = 0LL;
  sub_18001CDF8(a1, (__int64)v4);
  if ( v5 >= 0x10 )
  {
    v2 = v4[0];
    if ( v5 + 1 >= 0x1000 )
    {
      v2 = *(_QWORD *)(v4[0] - 8LL);
      if ( (unsigned __int64)(v4[0] - v2 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v2, v5 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v2);
  }
  return a1;
}
