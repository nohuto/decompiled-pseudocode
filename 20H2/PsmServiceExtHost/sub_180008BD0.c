/*
 * XREFs of sub_180008BD0 @ 0x180008BD0
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

__int64 __fastcall sub_180008BD0(void *a1, __int64 *a2, _QWORD *a3)
{
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v9; // ecx
  int v10; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  int TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  __int64 v13; // [rsp+78h] [rbp-88h]
  char DestinationSid[80]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+D0h] [rbp-30h] BYREF
  int *v16; // [rsp+F0h] [rbp-10h]
  int v17; // [rsp+F8h] [rbp-8h]
  int v18; // [rsp+FCh] [rbp-4h]

  v13 = 0LL;
  Handle = 0LL;
  v5 = sub_1800089F0(a1, DestinationSid, &TokenInformation, &v10, 0LL, &Handle);
  if ( v5 < 0 )
  {
    if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 8LL) )
    {
      v18 = 0;
      v16 = &v10;
      v10 = v5;
      v17 = 4;
      sub_18002E278(v9, (int)&dword_1800A1AF7, 0, 0, 3u, &v15);
    }
  }
  else
  {
    v5 = sub_180009518(qword_1800B41A8 + 1768, v10, TokenInformation, 2, 0);
    if ( v5 < 0 )
    {
      v7 = v13;
    }
    else
    {
      v6 = v13;
      v7 = 0LL;
      *a2 = v13;
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
