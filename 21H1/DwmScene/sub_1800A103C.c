/*
 * XREFs of sub_1800A103C @ 0x1800A103C
 * Callers:
 *     sub_18009FE8C @ 0x18009FE8C (sub_18009FE8C.c)
 * Callees:
 *     sub_1800A1C7C @ 0x1800A1C7C (sub_1800A1C7C.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

bool __fastcall sub_1800A103C(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rcx
  __int64 v4; // rbx
  _QWORD *v5; // rax
  unsigned __int64 v6; // rdx
  bool v7; // bl
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  bool result; // al
  _QWORD *v14; // [rsp+20h] [rbp-18h] BYREF

  v14 = a2;
  v2 = (__int64 *)(a1 + 18560);
  v4 = *v2;
  v5 = (_QWORD *)sub_1800A1C7C(v2, &v14, a2);
  v6 = a2[3];
  v7 = *v5 != v4;
  if ( v6 >= 0x10 )
  {
    v8 = *a2;
    v9 = v6 + 1;
    if ( v9 >= 0x1000 )
    {
      v10 = *(_QWORD *)(v8 - 8);
      v11 = v9 + 39;
      v12 = v8 - v10;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v11);
        JUMPOUT(0x1800A10C4LL);
      }
      v8 = v10;
    }
    j_j__o_free(v8);
  }
  a2[2] = 0LL;
  result = v7;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
