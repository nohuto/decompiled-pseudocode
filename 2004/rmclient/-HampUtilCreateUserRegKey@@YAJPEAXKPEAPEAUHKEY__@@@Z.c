/*
 * XREFs of ?HampUtilCreateUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x180007A70
 * Callers:
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x180007990 (-HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000A280 (__security_check_cookie.c)
 *     memset_0 @ 0x18000AB30 (memset_0.c)
 */

__int64 __fastcall HampUtilCreateUserRegKey(PSID Sid, __int64 a2, HKEY *a3)
{
  WCHAR *v5; // rax
  __int64 v6; // rcx
  WCHAR *v7; // rax
  __int64 v8; // rdx
  char *v9; // r9
  WCHAR v10; // r8
  LSTATUS v11; // eax
  signed int v12; // ebx
  HKEY hKey; // [rsp+50h] [rbp-248h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-240h] BYREF
  WCHAR SubKey[256]; // [rsp+70h] [rbp-228h] BYREF

  hKey = 0LL;
  memset_0(SubKey, 0, 0x1FCuLL);
  *(_QWORD *)&UnicodeString.Length = 33292288LL;
  UnicodeString.Buffer = SubKey;
  RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
  v5 = SubKey;
  v6 = 254LL;
  while ( *v5 )
  {
    ++v5;
    if ( !--v6 )
      goto LABEL_11;
  }
  v7 = &SubKey[254 - v6];
  v8 = 66LL;
  v9 = (char *)((char *)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager" - (char *)v7);
  while ( v8 )
  {
    v10 = *(WCHAR *)((char *)v7 + (_QWORD)v9);
    if ( !v10 )
      break;
    *v7 = v10;
    --v8;
    ++v7;
    if ( !--v6 )
    {
      --v7;
      break;
    }
  }
  *v7 = 0;
LABEL_11:
  v11 = RegCreateKeyExW(HKEY_USERS, SubKey, 0, 0LL, 0, 1u, 0LL, &hKey, 0LL);
  v12 = v11;
  if ( v11 > 0 )
    v12 = (unsigned __int16)v11 | 0xC0070000;
  if ( v12 < 0 )
  {
    if ( hKey )
      RegCloseKey(hKey);
    return (unsigned int)v12;
  }
  else
  {
    *a3 = hKey;
    return 0LL;
  }
}
