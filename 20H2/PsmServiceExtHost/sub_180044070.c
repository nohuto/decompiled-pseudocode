/*
 * XREFs of sub_180044070 @ 0x180044070
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18007BE20 @ 0x18007BE20 (sub_18007BE20.c)
 *     sub_18007D214 @ 0x18007D214 (sub_18007D214.c)
 */

__int64 __fastcall sub_180044070(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
{
  _QWORD *i; // rax
  _QWORD *v7; // rbx
  DWORD v8; // ebx
  int v10; // eax
  int v11; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+D0h] [rbp-48h] BYREF
  int *v14; // [rsp+F0h] [rbp-28h]
  int v15; // [rsp+F8h] [rbp-20h]
  int v16; // [rsp+FCh] [rbp-1Ch]

  sub_18000B7F8(TlsValue);
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A063D, 0LL, 0LL, 2u, &v13);
  for ( i = sub_18003CF94(a4 + 128, 0, 0LL); ; i = (_QWORD *)sub_18007BE20(v7) )
  {
    v7 = i;
    if ( !i )
      break;
    sub_18007D214(i, a5, 4LL);
  }
  v8 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v8, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v10 = *a5;
    v16 = 0;
    v11 = v10;
    v15 = 4;
    v14 = &v11;
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A06F4, 0LL, 0LL, 3u, &v13);
  }
  return 0LL;
}
