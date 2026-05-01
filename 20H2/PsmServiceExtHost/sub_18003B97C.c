/*
 * XREFs of sub_18003B97C @ 0x18003B97C
 * Callers:
 *     sub_18003B970 @ 0x18003B970 (sub_18003B970.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180026A54 @ 0x180026A54 (sub_180026A54.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_18003BAA0 @ 0x18003BAA0 (sub_18003BAA0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800624C0 @ 0x1800624C0 (sub_1800624C0.c)
 */

__int64 __fastcall sub_18003B97C(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rdi
  int v6; // ebx
  DWORD v7; // edi
  int v8; // r8d
  int v9; // r9d
  int v11; // [rsp+30h] [rbp-D8h] BYREF
  int v12[3]; // [rsp+34h] [rbp-D4h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+D0h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_18009FB3E, 0LL, 0LL, 2u, &v14);
  sub_18000B7F8(TlsValue);
  v4 = sub_180026A54(*(_QWORD *)a1, *(_DWORD *)(a1 + 144));
  v5 = (_QWORD *)v4;
  if ( v4 )
  {
    v6 = sub_18003BAA0(v4, a1, a2);
    if ( v6 >= 0 )
      v6 = 0;
    sub_1800274E0(v5);
  }
  else
  {
    v6 = -1073741275;
  }
  v7 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v11 = *(_DWORD *)(a1 + 144);
    v12[0] = v6;
    sub_1800624C0((unsigned int)&dword_1800B3218, (unsigned int)&unk_18009F3CB, v8, v9, (__int64)v12, (__int64)&v11);
  }
  return (unsigned int)v6;
}
