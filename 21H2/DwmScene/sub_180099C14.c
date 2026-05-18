/*
 * XREFs of sub_180099C14 @ 0x180099C14
 * Callers:
 *     sub_18009ABB0 @ 0x18009ABB0 (sub_18009ABB0.c)
 *     sub_1800F08C0 @ 0x1800F08C0 (sub_1800F08C0.c)
 *     sub_1801036F0 @ 0x1801036F0 (sub_1801036F0.c)
 *     sub_180103A84 @ 0x180103A84 (sub_180103A84.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800D12B8 @ 0x1800D12B8 (sub_1800D12B8.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_180099C14(_QWORD *a1, __int64 *a2, int a3, __int64 a4, char a5)
{
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD v16[6]; // [rsp+30h] [rbp-68h] BYREF

  v16[5] = a2;
  v16[2] = 0LL;
  v16[3] = 0LL;
  sub_180020B7C(v16, (__int64)a2);
  sub_1800D12B8((_DWORD)a1, (unsigned int)v16, a3, -2147467263, a4, a5);
  *a1 = &Spectre::Engine::EngineNotImplException::`vftable';
  v9 = a2[3];
  if ( v9 >= 0x10 )
  {
    v10 = v9 + 1;
    v11 = *a2;
    if ( v10 >= 0x1000 )
    {
      v12 = v10 + 39;
      v13 = *(_QWORD *)(v11 - 8);
      v14 = v11 - v13;
      if ( (unsigned __int64)(v14 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v14, v12);
        JUMPOUT(0x180099CF2LL);
      }
      v11 = v13;
    }
    j_j__o_free(v11);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
