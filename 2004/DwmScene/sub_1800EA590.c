/*
 * XREFs of sub_1800EA590 @ 0x1800EA590
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E7E48 @ 0x1800E7E48 (sub_1800E7E48.c)
 *     sub_180107BB0 @ 0x180107BB0 (sub_180107BB0.c)
 *     sub_1801092C4 @ 0x1801092C4 (sub_1801092C4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800EA590(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  sub_1801092C4(a1, a2, 0LL);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  sub_1800E7E48(&v9, &v8, (__int64)&v9);
  result = sub_180107BB0(a1, a2, &v9);
  v5 = v9;
  if ( (_QWORD)v9 )
  {
    v6 = (v10 - v9) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v6 >= 0x1000 )
    {
      v7 = v6 + 39;
      v5 = *(_QWORD *)(v9 - 8);
      if ( (unsigned __int64)(v9 - v5 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v7);
        __debugbreak();
      }
    }
    return j_j__o_free(v5);
  }
  return result;
}
