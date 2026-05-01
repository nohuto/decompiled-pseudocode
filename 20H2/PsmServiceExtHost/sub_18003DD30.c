/*
 * XREFs of sub_18003DD30 @ 0x18003DD30
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

__int64 __fastcall sub_18003DD30(void *a1, int *a2, __int64 *a3, _QWORD *a4)
{
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+38h] [rbp-C8h]
  __int64 v13; // [rsp+40h] [rbp-C0h]
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  int TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h] BYREF
  _BYTE DestinationSid[80]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+D0h] [rbp-30h] BYREF
  int *v20; // [rsp+F0h] [rbp-10h]
  int v21; // [rsp+F8h] [rbp-8h]
  int v22; // [rsp+FCh] [rbp-4h]

  v17 = 0LL;
  Handle = 0LL;
  v7 = sub_1800089F0(a1, DestinationSid, &TokenInformation, &v14, 0LL, &Handle);
  if ( v7 < 0 )
  {
    if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
    {
      v22 = 0;
      v20 = &v14;
      v14 = v7;
      v21 = 4;
      sub_18002E278(v11, (unsigned __int8 *)dword_1800A1AB6, 0LL, 0LL, 3u, &v19);
    }
  }
  else
  {
    v7 = sub_180009518(
           qword_1800B41A8 + 1768,
           v14,
           (__int64)DestinationSid,
           (__int64)Handle,
           TokenInformation,
           6,
           0,
           v12,
           v13,
           a2,
           (__int64)&v17);
    if ( v7 < 0 )
    {
      v9 = v17;
    }
    else
    {
      v8 = v17;
      v9 = 0LL;
      *a3 = v17;
      v7 = 0;
      *a4 = *(_QWORD *)(v8 + 104);
    }
    if ( v9 )
      sub_18000879C(v9);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v7;
}
