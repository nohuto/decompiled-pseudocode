/*
 * XREFs of sub_180025F40 @ 0x180025F40
 * Callers:
 *     TS_SessionChanged @ 0x18002A7F0 (TS_SessionChanged.c)
 * Callees:
 *     sub_18000A4EC @ 0x18000A4EC (sub_18000A4EC.c)
 */

void __fastcall sub_180025F40(unsigned int *a1)
{
  __int64 v1; // rdx
  _QWORD *v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  int v6; // eax
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v1 = *a1;
  if ( (_DWORD)v1 )
  {
    v3 = a1 + 60;
    if ( !*v3 && !*((_QWORD *)a1 + 31) )
    {
      v7[0] = sub_180029CD0;
      v7[1] = v1;
      v4 = PowerSettingRegisterNotificationEx(&qword_180045648, v1, 2LL, v7, v3);
      if ( v4 )
        sub_18000A4EC(
          (int)retaddr,
          227,
          (int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          v4);
      v8[0] = sub_180029F80;
      v5 = *a1;
      v8[1] = v5;
      v6 = PowerSettingRegisterNotificationEx(&qword_180044DD8, v5, 2LL, v8, a1 + 62);
      if ( v6 )
        sub_18000A4EC(
          (int)retaddr,
          240,
          (int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          v6);
    }
  }
}
