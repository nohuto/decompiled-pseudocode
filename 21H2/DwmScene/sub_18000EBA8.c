/*
 * XREFs of sub_18000EBA8 @ 0x18000EBA8
 * Callers:
 *     sub_18000EB18 @ 0x18000EB18 (sub_18000EB18.c)
 * Callees:
 *     sub_18000C578 @ 0x18000C578 (sub_18000C578.c)
 *     sub_18000D11C @ 0x18000D11C (sub_18000D11C.c)
 *     sub_18000DD4C @ 0x18000DD4C (sub_18000DD4C.c)
 *     sub_18000DD78 @ 0x18000DD78 (sub_18000DD78.c)
 *     sub_18000E78C @ 0x18000E78C (sub_18000E78C.c)
 *     sub_18000E8D0 @ 0x18000E8D0 (sub_18000E8D0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000EBA8(__int64 a1, char a2, __int64 *a3, _BYTE *a4)
{
  HANDLE v7; // rax
  void *v8; // rdi
  int v9; // edx
  unsigned int v10; // esi
  int v11; // ebx
  signed int v12; // eax
  HANDLE v13; // rax
  void *v14; // rbx
  signed int v15; // eax
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-E0h] BYREF
  int v19[3]; // [rsp+24h] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 retaddr; // [rsp+278h] [rbp+178h]

  if ( a4 )
    *a4 = 0;
  *a3 = 0LL;
  sub_18000E8D0(Name, 260LL, a1);
  sub_18000E78C(Name, 260LL, (__int64)L"_p0");
  v7 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v8 = v7;
  if ( v7 )
  {
    v19[0] = 0;
    v11 = 0;
    v18 = 0;
    v12 = sub_18000D11C(v7, v19);
    v10 = v12;
    if ( v12 < 0 )
    {
      sub_18000DD78(retaddr, 207, (__int64)&unk_18013FEA4, v12);
      goto LABEL_19;
    }
    if ( a2 )
    {
      sub_18000E78C(Name, 260LL, (__int64)L"h");
      v13 = OpenSemaphoreW(0x1F0003u, 0, Name);
      v14 = v13;
      if ( !v13 )
      {
        v9 = 213;
        goto LABEL_6;
      }
      v15 = sub_18000D11C(v13, &v18);
      v10 = v15;
      if ( v15 < 0 )
      {
        sub_18000DD78(retaddr, 215, (__int64)&unk_18013FEA4, v15);
        sub_18000C578(v14);
        goto LABEL_19;
      }
      sub_18000C578(v14);
      v11 = v18;
    }
    v16 = v19[0];
    if ( a4 )
      *a4 = 1;
    *a3 = ((__int64)v11 << 31) | v16;
  }
  else if ( GetLastError() != 2 )
  {
    v9 = 201;
LABEL_6:
    v10 = sub_18000DD4C(retaddr, v9, (__int64)&unk_18013FEA4);
    goto LABEL_19;
  }
  v10 = 0;
LABEL_19:
  if ( v8 )
    sub_18000C578(v8);
  return v10;
}
