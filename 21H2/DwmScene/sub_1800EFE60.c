/*
 * XREFs of sub_1800EFE60 @ 0x1800EFE60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800ED718 @ 0x1800ED718 (sub_1800ED718.c)
 *     sub_18010D480 @ 0x18010D480 (sub_18010D480.c)
 *     sub_18010EB94 @ 0x18010EB94 (sub_18010EB94.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800EFE60(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  sub_18010EB94(a1, a2, 0LL);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  sub_1800ED718(&v9, &v8, (__int64)&v9);
  result = sub_18010D480(a1, a2, &v9);
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
