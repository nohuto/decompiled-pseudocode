/*
 * XREFs of sub_1800A8998 @ 0x1800A8998
 * Callers:
 *     sub_1800A8788 @ 0x1800A8788 (sub_1800A8788.c)
 *     sub_1800E9EF8 @ 0x1800E9EF8 (sub_1800E9EF8.c)
 *     sub_1800EC0B8 @ 0x1800EC0B8 (sub_1800EC0B8.c)
 *     sub_1800EC5C0 @ 0x1800EC5C0 (sub_1800EC5C0.c)
 *     sub_1800F0060 @ 0x1800F0060 (sub_1800F0060.c)
 *     sub_18010D290 @ 0x18010D290 (sub_18010D290.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A8998(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::IShaderExtension::`vftable';
  v4 = (_QWORD *)(a1 + 24);
  v4[2] = 0LL;
  v4[3] = 0LL;
  sub_180020B7C(v4, (__int64)a2);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 15LL;
  *(_BYTE *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 104) = 1;
  v5 = a2[3];
  if ( v5 >= 0x10 )
  {
    v6 = v5 + 1;
    v7 = *a2;
    if ( v6 >= 0x1000 )
    {
      v8 = v6 + 39;
      v9 = *(_QWORD *)(v7 - 8);
      v10 = v7 - v9;
      if ( (unsigned __int64)(v10 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, v8);
        JUMPOUT(0x1800A8A71LL);
      }
      v7 = v9;
    }
    j_j__o_free(v7);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
