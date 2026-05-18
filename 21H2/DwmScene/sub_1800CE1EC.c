/*
 * XREFs of sub_1800CE1EC @ 0x1800CE1EC
 * Callers:
 *     sub_1800CE7D0 @ 0x1800CE7D0 (sub_1800CE7D0.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800D12B8 @ 0x1800D12B8 (sub_1800D12B8.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_1800CE1EC(_QWORD *a1, __int64 *a2, int a3, __int64 a4, char a5)
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
  sub_1800D12B8((_DWORD)a1, (unsigned int)v16, a3, -2147418113, a4, a5);
  *a1 = &Spectre::Engine::EngineUnexpectedException::`vftable';
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
        JUMPOUT(0x1800CE2CALL);
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
