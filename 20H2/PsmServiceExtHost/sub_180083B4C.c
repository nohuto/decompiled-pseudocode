/*
 * XREFs of sub_180083B4C @ 0x180083B4C
 * Callers:
 *     sub_180083AFC @ 0x180083AFC (sub_180083AFC.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180025704 @ 0x180025704 (sub_180025704.c)
 *     sub_180027434 @ 0x180027434 (sub_180027434.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 *     sub_180083F70 @ 0x180083F70 (sub_180083F70.c)
 *     sub_180083FDC @ 0x180083FDC (sub_180083FDC.c)
 *     sub_1800841A0 @ 0x1800841A0 (sub_1800841A0.c)
 *     sub_180085018 @ 0x180085018 (sub_180085018.c)
 */

char __fastcall sub_180083B4C(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 i; // rax
  int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rbx
  char result; // al
  __int64 v10; // rcx
  int v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278(v2, (unsigned __int8 *)dword_1800A23B7, 0LL, 0LL, 2u, &v13);
  RtlUnsubscribeWnfNotificationWaitForCompletion(*(_QWORD *)(a1 + 80));
  for ( i = sub_180025704(a1); ; i = sub_180027434(v8) )
  {
    v8 = (_QWORD *)i;
    if ( !i )
      break;
    sub_1800841A0(i);
    v4 = sub_180083FDC(v8);
    sub_180083F70(v8);
    if ( v4 < 0 && (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    {
      v12 = v8[5];
      v11 = v4;
      sub_180063424(v5, byte_1800A2448, v6, v7, (__int64)&v11, (__int64)&v12);
    }
  }
  result = sub_180085018(a1);
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B3218, 8LL);
    if ( result )
      return sub_18002E278(v10, (unsigned __int8 *)dword_1800A233E, 0LL, 0LL, 2u, &v13);
  }
  return result;
}
