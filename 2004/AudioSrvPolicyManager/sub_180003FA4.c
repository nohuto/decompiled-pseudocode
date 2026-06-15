/*
 * XREFs of sub_180003FA4 @ 0x180003FA4
 * Callers:
 *     sub_180004AC4 @ 0x180004AC4 (sub_180004AC4.c)
 * Callees:
 *     sub_18000206C @ 0x18000206C (sub_18000206C.c)
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180003AE8 @ 0x180003AE8 (sub_180003AE8.c)
 *     sub_180003B8C @ 0x180003B8C (sub_180003B8C.c)
 *     sub_180003E1C @ 0x180003E1C (sub_180003E1C.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180003FA4(__int64 a1, __int64 a2, __int64 *a3)
{
  WCHAR *v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // r9
  WCHAR v7; // ax
  WCHAR *v8; // rax
  HANDLE v9; // rax
  void *v10; // rdi
  __int64 v11; // r9
  int v12; // edx
  unsigned int v13; // esi
  int v14; // eax
  __int64 v15; // rdx
  HANDLE v16; // rax
  void *v17; // rbx
  int v18; // eax
  int v20; // [rsp+28h] [rbp-E0h] BYREF
  int v21[3]; // [rsp+2Ch] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 retaddr; // [rsp+270h] [rbp+168h]

  *a3 = 0LL;
  v3 = Name;
  v4 = a1 - (_QWORD)Name;
  v6 = 260LL;
  do
  {
    if ( v6 == -2147483386 )
      break;
    v7 = *(WCHAR *)((char *)v3 + v4);
    if ( !v7 )
      break;
    *v3++ = v7;
    --v6;
  }
  while ( v6 );
  v8 = v3 - 1;
  if ( v6 )
    v8 = v3;
  *v8 = 0;
  sub_18000206C(Name, (__int64)v3, (__int64)L"_p0");
  v9 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v10 = v9;
  if ( v9 )
  {
    v21[0] = 0;
    v20 = 0;
    v14 = sub_180003E1C(v9, v21);
    v13 = v14;
    if ( v14 < 0 )
    {
      sub_180003AB0(retaddr, 207, (__int64)"wil", v14);
      goto LABEL_19;
    }
    sub_18000206C(Name, v15, (__int64)L"h");
    v16 = OpenSemaphoreW(0x1F0003u, 0, Name);
    v17 = v16;
    if ( !v16 )
    {
      v12 = 213;
      goto LABEL_10;
    }
    v18 = sub_180003E1C(v16, &v20);
    v13 = v18;
    if ( v18 < 0 )
    {
      sub_180003AB0(retaddr, 215, (__int64)"wil", v18);
      sub_180003B8C(v17);
      goto LABEL_19;
    }
    sub_180003B8C(v17);
    *a3 = ((__int64)v20 << 31) | v21[0];
  }
  else if ( GetLastError() != 2 )
  {
    v12 = 201;
LABEL_10:
    v13 = sub_180003AE8(retaddr, v12, (__int64)"wil", v11);
    goto LABEL_19;
  }
  v13 = 0;
LABEL_19:
  if ( v10 )
    sub_180003B8C(v10);
  return v13;
}
