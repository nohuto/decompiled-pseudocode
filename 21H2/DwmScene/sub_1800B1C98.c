/*
 * XREFs of sub_1800B1C98 @ 0x1800B1C98
 * Callers:
 *     sub_1800C6C30 @ 0x1800C6C30 (sub_1800C6C30.c)
 * Callees:
 *     sub_180012F14 @ 0x180012F14 (sub_180012F14.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_1800B1C98(__int64 a1, int a2, int a3, __int64 *a4, __int64 *Src, __int64 *a6)
{
  __int64 *result; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx

  *(_DWORD *)(a1 + 172) = a2;
  *(_DWORD *)(a1 + 176) = a3;
  sub_180012F14((__int64 *)(a1 + 184), a4);
  sub_180012F14((__int64 *)(a1 + 216), Src);
  result = sub_180012F14((__int64 *)(a1 + 248), a6);
  v9 = a4[3];
  if ( v9 >= 0x10 )
  {
    v10 = *a4;
    v11 = v9 + 1;
    if ( v11 >= 0x1000 )
    {
      v12 = v11 + 39;
      v13 = *(_QWORD *)(v10 - 8);
      v14 = v10 - v13;
      if ( (unsigned __int64)(v14 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v14, v12);
        goto LABEL_18;
      }
      v10 = v13;
    }
    result = (__int64 *)j_j__o_free(v10);
  }
  a4[2] = 0LL;
  a4[3] = 15LL;
  *(_BYTE *)a4 = 0;
  v15 = Src[3];
  if ( v15 < 0x10 )
    goto LABEL_11;
  v16 = *Src;
  v17 = v15 + 1;
  if ( v17 >= 0x1000 )
  {
    v18 = v17 + 39;
    v19 = *(_QWORD *)(v16 - 8);
    v20 = v16 - v19;
    if ( (unsigned __int64)(v20 - 8) <= 0x1F )
    {
      v16 = v19;
      goto LABEL_10;
    }
LABEL_18:
    o__invalid_parameter_noinfo_noreturn(v20, v18);
    goto LABEL_19;
  }
LABEL_10:
  result = (__int64 *)j_j__o_free(v16);
LABEL_11:
  Src[2] = 0LL;
  Src[3] = 15LL;
  *(_BYTE *)Src = 0;
  v21 = a6[3];
  if ( v21 >= 0x10 )
  {
    v22 = v21 + 1;
    v23 = *a6;
    if ( v22 < 0x1000 )
    {
LABEL_15:
      result = (__int64 *)j_j__o_free(v23);
      goto LABEL_16;
    }
    v24 = v22 + 39;
    v25 = *(_QWORD *)(v23 - 8);
    v26 = v23 - v25;
    if ( (unsigned __int64)(v26 - 8) <= 0x1F )
    {
      v23 = v25;
      goto LABEL_15;
    }
LABEL_19:
    o__invalid_parameter_noinfo_noreturn(v26, v24);
    JUMPOUT(0x1800B1E0CLL);
  }
LABEL_16:
  a6[2] = 0LL;
  a6[3] = 15LL;
  *(_BYTE *)a6 = 0;
  return result;
}
