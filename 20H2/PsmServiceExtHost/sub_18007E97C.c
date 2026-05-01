/*
 * XREFs of sub_18007E97C @ 0x18007E97C
 * Callers:
 *     sub_18007EA8C @ 0x18007EA8C (sub_18007EA8C.c)
 *     sub_18007EC18 @ 0x18007EC18 (sub_18007EC18.c)
 * Callees:
 *     sub_18000B114 @ 0x18000B114 (sub_18000B114.c)
 *     sub_18000E1BC @ 0x18000E1BC (sub_18000E1BC.c)
 *     sub_18000E244 @ 0x18000E244 (sub_18000E244.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 *     sub_180035C14 @ 0x180035C14 (sub_180035C14.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006A72C @ 0x18006A72C (sub_18006A72C.c)
 *     sub_18007F078 @ 0x18007F078 (sub_18007F078.c)
 */

__int64 __fastcall sub_18007E97C(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  int v5; // eax
  __int64 v6; // r8
  PVOID *v7; // rbx
  unsigned int v8; // edi
  unsigned __int64 v9; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID P; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 - 32);
  P = 0LL;
  v17[0] = v3;
  v17[1] = *(_QWORD *)(a2 - 32);
  v5 = sub_18007F078(a1, a2, &P);
  v7 = (PVOID *)P;
  v8 = v5;
  if ( v5 >= 0 )
  {
    v9 = sub_18000B114((__int64)P, (__int64)v17, v6);
    if ( v9 && (v10 = (_DWORD *)sub_180035C14(v9, a3)) != 0LL )
    {
      sub_18000E1BC((__int64)v7);
      v10[9] |= 1u;
      sub_18000E244((__int64)v7);
      if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
      {
        P = *v7;
        v16 = *(_QWORD *)(*(_QWORD *)v10 + 40LL);
        sub_18006A72C(v11, byte_1800A157B, v12, v13, (__int64)&v16, (__int64)&P);
      }
      v8 = 0;
    }
    else
    {
      v8 = -1073741072;
    }
  }
  if ( v7 )
  {
    sub_180017F60((char *)v7);
    sub_1800286D8((__int64)v7);
  }
  return v8;
}
