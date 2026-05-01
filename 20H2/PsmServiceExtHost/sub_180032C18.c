/*
 * XREFs of sub_180032C18 @ 0x180032C18
 * Callers:
 *     sub_180032BA8 @ 0x180032BA8 (sub_180032BA8.c)
 *     sub_18006B240 @ 0x18006B240 (sub_18006B240.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180032C58 @ 0x180032C58 (sub_180032C58.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180032C18(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  int v3; // r9d
  int v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  result = sub_180032C58(*(_QWORD *)(a1 + 24));
  if ( (_DWORD)result )
  {
    if ( (unsigned int)dword_1800B31E0 > 4 )
    {
      if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      {
        v8 = 0;
        v6 = &v4;
        v4 = v3;
        v7 = 4;
        sub_18002E278(v2, (unsigned __int8 *)dword_18009E9BE, 0LL, 0LL, 3u, &v5);
      }
    }
    return 3221225473LL;
  }
  return result;
}
