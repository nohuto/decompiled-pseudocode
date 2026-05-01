/*
 * XREFs of sub_18003DE50 @ 0x18003DE50
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

__int64 __fastcall sub_18003DE50(void *a1, __int64 *a2, _QWORD *a3)
{
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+38h] [rbp-C8h]
  __int64 v11; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  int TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+78h] [rbp-88h] BYREF
  _BYTE DestinationSid[80]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+D0h] [rbp-30h] BYREF
  int *v18; // [rsp+F0h] [rbp-10h]
  int v19; // [rsp+F8h] [rbp-8h]
  int v20; // [rsp+FCh] [rbp-4h]

  v15 = 0LL;
  Handle = 0LL;
  v5 = sub_1800089F0(a1, DestinationSid, &TokenInformation, &v12, 0LL, &Handle);
  if ( v5 < 0 )
  {
    if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
    {
      v20 = 0;
      v18 = &v12;
      v12 = v5;
      v19 = 4;
      sub_18002E278(v9, (unsigned __int8 *)dword_1800A1A80, 0LL, 0LL, 3u, &v17);
    }
  }
  else
  {
    v5 = sub_180009518(
           qword_1800B41A8 + 1768,
           v12,
           (__int64)DestinationSid,
           (__int64)Handle,
           TokenInformation,
           1,
           0,
           v10,
           v11,
           0LL,
           (__int64)&v15);
    if ( v5 < 0 )
    {
      v7 = v15;
    }
    else
    {
      v6 = v15;
      v7 = 0LL;
      *a2 = v15;
      v5 = 0;
      *a3 = *(_QWORD *)(v6 + 104);
    }
    if ( v7 )
      sub_18000879C(v7);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v5;
}
