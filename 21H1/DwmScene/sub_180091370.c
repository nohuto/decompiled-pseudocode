/*
 * XREFs of sub_180091370 @ 0x180091370
 * Callers:
 *     sub_180092C20 @ 0x180092C20 (sub_180092C20.c)
 *     sub_180092E7C @ 0x180092E7C (sub_180092E7C.c)
 *     sub_180092FB8 @ 0x180092FB8 (sub_180092FB8.c)
 *     sub_180093080 @ 0x180093080 (sub_180093080.c)
 *     sub_180093360 @ 0x180093360 (sub_180093360.c)
 *     sub_1800934D0 @ 0x1800934D0 (sub_1800934D0.c)
 *     sub_18009360C @ 0x18009360C (sub_18009360C.c)
 *     sub_180093734 @ 0x180093734 (sub_180093734.c)
 *     sub_18009397C @ 0x18009397C (sub_18009397C.c)
 *     sub_180093AA8 @ 0x180093AA8 (sub_180093AA8.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800CB9E8 @ 0x1800CB9E8 (sub_1800CB9E8.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_180091370(_QWORD *a1, __int64 *a2, int a3, __int64 a4, char a5)
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
  sub_18001CDF8(v16, (__int64)a2);
  sub_1800CB9E8((_DWORD)a1, (unsigned int)v16, a3, -2147467261, a4, a5);
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
        JUMPOUT(0x18009144ELL);
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
