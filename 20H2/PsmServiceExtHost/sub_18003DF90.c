/*
 * XREFs of sub_18003DF90 @ 0x18003DF90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000879C @ 0x18000879C (sub_18000879C.c)
 *     sub_1800089F0 @ 0x1800089F0 (sub_1800089F0.c)
 *     sub_180009518 @ 0x180009518 (sub_180009518.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18003DF90(void *a1, __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+38h] [rbp-31h]
  __int64 v8; // [rsp+40h] [rbp-29h]
  int v9; // [rsp+60h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-1h] BYREF
  int TokenInformation; // [rsp+70h] [rbp+7h] BYREF
  __int64 v12; // [rsp+78h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+80h] [rbp+17h] BYREF
  int *v14; // [rsp+A0h] [rbp+37h]
  int v15; // [rsp+A8h] [rbp+3Fh]
  int v16; // [rsp+ACh] [rbp+43h]

  v12 = 0LL;
  Handle = 0LL;
  v3 = sub_1800089F0(a1, 0LL, &TokenInformation, &v9, 0LL, &Handle);
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
    {
      v16 = 0;
      v14 = &v9;
      v9 = v3;
      v15 = 4;
      sub_18002E278(v6, (unsigned __int8 *)dword_1800A1A80, 0LL, 0LL, 3u, &v13);
    }
  }
  else
  {
    v3 = sub_180009518(
           qword_1800B41A8 + 1768,
           v9,
           0LL,
           (__int64)Handle,
           TokenInformation,
           4,
           0,
           v7,
           v8,
           0LL,
           (__int64)&v12);
    if ( v3 < 0 )
    {
      v4 = v12;
    }
    else
    {
      v4 = 0LL;
      *a2 = v12;
      v3 = 0;
    }
    if ( v4 )
      sub_18000879C(v4);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}
