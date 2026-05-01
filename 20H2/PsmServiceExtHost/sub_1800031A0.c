/*
 * XREFs of sub_1800031A0 @ 0x1800031A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003250 @ 0x180003250 (sub_180003250.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800031A0(_QWORD *a1)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-18h]
  int v8; // [rsp+60h] [rbp-10h]
  int v9; // [rsp+64h] [rbp-Ch]

  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)sub_180010470(&dword_1800B31E0, 2LL) )
  {
    v4 = *a1;
    v9 = 0;
    v5 = v4;
    v8 = 8;
    v7 = &v5;
    sub_18002E278((int)&dword_1800B31E0, (int)&dword_18009A882, 0, 0, 3u, &v6);
  }
  if ( a1 )
    v2 = sub_180003250(a1, *a1);
  else
    v2 = -2147024882;
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)sub_180010470(&dword_1800B31E0, 2LL) )
  {
    v9 = 0;
    v7 = &v5;
    LODWORD(v5) = v2;
    v8 = 4;
    sub_18002E278((int)&dword_1800B31E0, (int)&dword_18009A579, 0, 0, 3u, &v6);
  }
  if ( a1 )
    *a1 = 0LL;
  return v2;
}
