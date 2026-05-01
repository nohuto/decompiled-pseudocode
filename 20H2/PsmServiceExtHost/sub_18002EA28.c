/*
 * XREFs of sub_18002EA28 @ 0x18002EA28
 * Callers:
 *     sub_18002F9A8 @ 0x18002F9A8 (sub_18002F9A8.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

void sub_18002EA28()
{
  __int64 v0; // rcx
  __int64 v1; // r9
  __int64 v2; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+40h] [rbp-58h] BYREF
  UUID *v4; // [rsp+60h] [rbp-38h]
  int v5; // [rsp+68h] [rbp-30h]
  int v6; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1800B3250 > 5 )
  {
    if ( sub_180010470((__int64)&dword_1800B3250, 1LL) )
    {
      v6 = 0;
      v9 = 0;
      v4 = &Uuid;
      v2 = v1;
      v7 = &v2;
      v5 = 16;
      v8 = 8;
      sub_18002E278(v0, (unsigned __int8 *)dword_1800A29FB, 0LL, 0LL, 4u, &v3);
    }
  }
}
