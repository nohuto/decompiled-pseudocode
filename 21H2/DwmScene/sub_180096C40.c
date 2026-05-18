/*
 * XREFs of sub_180096C40 @ 0x180096C40
 * Callers:
 *     sub_1800984F0 @ 0x1800984F0 (sub_1800984F0.c)
 *     sub_18009874C @ 0x18009874C (sub_18009874C.c)
 *     sub_180098888 @ 0x180098888 (sub_180098888.c)
 *     sub_180098950 @ 0x180098950 (sub_180098950.c)
 *     sub_180098C30 @ 0x180098C30 (sub_180098C30.c)
 *     sub_180098DA0 @ 0x180098DA0 (sub_180098DA0.c)
 *     sub_180098EDC @ 0x180098EDC (sub_180098EDC.c)
 *     sub_180099004 @ 0x180099004 (sub_180099004.c)
 *     sub_18009924C @ 0x18009924C (sub_18009924C.c)
 *     sub_180099378 @ 0x180099378 (sub_180099378.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800D12B8 @ 0x1800D12B8 (sub_1800D12B8.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_180096C40(_QWORD *a1, __int64 *a2, int a3, __int64 a4, char a5)
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
  sub_1800D12B8((_DWORD)a1, (unsigned int)v16, a3, -2147467261, a4, a5);
  *a1 = &Spectre::Engine::EngineInvalidPointerException::`vftable';
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
        JUMPOUT(0x180096D1ELL);
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
