/*
 * XREFs of sub_1800341A0 @ 0x1800341A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800089F0 @ 0x1800089F0 (sub_1800089F0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180034234 @ 0x180034234 (sub_180034234.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800341A0(void *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v7; // eax
  int v8; // ebx
  int v10; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+90h] [rbp-78h] BYREF
  UUID *v13; // [rsp+B0h] [rbp-58h]
  __int64 v14; // [rsp+B8h] [rbp-50h]
  int *v15; // [rsp+C0h] [rbp-48h]
  __int64 v16; // [rsp+C8h] [rbp-40h]

  v7 = sub_1800089F0(a1, DestinationSid, 0LL, 0LL, 0LL, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( (unsigned int)dword_1800B3250 > 5 )
    {
      v10 = v7;
      v14 = 16LL;
      v16 = 4LL;
      v15 = &v10;
      v13 = &Uuid;
      sub_18002E278((__int64)&dword_1800B3250, (unsigned __int8 *)dword_1800A37BE, 0LL, 0LL, 4u, &v12);
    }
  }
  else
  {
    v8 = sub_180034234(a2, a3, a4, DestinationSid);
    if ( v8 >= 0 )
      return 0;
  }
  return (unsigned int)v8;
}
