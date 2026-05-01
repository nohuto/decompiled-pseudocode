/*
 * XREFs of sub_1800293D0 @ 0x1800293D0
 * Callers:
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 *     sub_180029A00 @ 0x180029A00 (sub_180029A00.c)
 *     sub_180029B00 @ 0x180029B00 (sub_180029B00.c)
 * Callees:
 *     sub_180029764 @ 0x180029764 (sub_180029764.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800452E8 @ 0x1800452E8 (sub_1800452E8.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_1800293D0(__int64 a1, char a2, HKEY *a3)
{
  WCHAR *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  WCHAR *v9; // rax
  char *v10; // r9
  WCHAR v11; // dx
  LSTATUS v12; // eax
  signed int v13; // ebx
  HKEY v14; // rdi
  int v15; // esi
  LSTATUS v16; // eax
  LSTATUS v17; // eax
  UINT32 v19; // edx
  UINT32 applicationUserModelIdLength; // [rsp+50h] [rbp-B0h] BYREF
  HKEY v21; // [rsp+58h] [rbp-A8h] BYREF
  HKEY v22; // [rsp+60h] [rbp-A0h] BYREF
  HKEY hKey; // [rsp+68h] [rbp-98h] BYREF
  int v24; // [rsp+70h] [rbp-90h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+74h] [rbp-8Ch] BYREF
  int v26; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  WCHAR applicationUserModelId[136]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+1A0h] [rbp+A0h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+230h] [rbp+130h] BYREF
  WCHAR SubKey[256]; // [rsp+2C0h] [rbp+1C0h] BYREF
  WCHAR packageFullName[128]; // [rsp+4C0h] [rbp+3C0h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  hKey = 0LL;
  memset(SubKey, 0, 0x1FCuLL);
  *(_QWORD *)&UnicodeString.Length = 33292288LL;
  UnicodeString.Buffer = SubKey;
  RtlConvertSidToUnicodeString(&UnicodeString, (PSID)(a1 + 488), 0);
  v6 = SubKey;
  v7 = 254LL;
  while ( *v6 )
  {
    ++v6;
    if ( !--v7 )
      goto LABEL_11;
  }
  v8 = 66LL;
  v9 = &SubKey[254 - v7];
  v10 = (char *)((char *)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager" - (char *)v9);
  while ( v8 )
  {
    v11 = *(WCHAR *)((char *)v9 + (_QWORD)v10);
    if ( !v11 )
      break;
    *v9 = v11;
    --v8;
    ++v9;
    if ( !--v7 )
    {
      --v9;
      break;
    }
  }
  *v9 = 0;
LABEL_11:
  v12 = RegCreateKeyExW(HKEY_USERS, SubKey, 0, 0LL, 0, 4u, 0LL, &hKey, 0LL);
  v13 = v12;
  if ( v12 > 0 )
    v13 = (unsigned __int16)v12 | 0xC0070000;
  if ( v13 < 0 )
  {
    if ( hKey )
      RegCloseKey(hKey);
  }
  else
  {
    v14 = hKey;
    hKey = 0LL;
    v15 = a2 & 1;
    if ( v15 )
    {
      v13 = sub_180029764((_DWORD)v14, (unsigned int)L"CommitHistory", 0, 131078, (__int64)&v21);
    }
    else
    {
      v16 = RegOpenKeyExW(v14, L"CommitHistory", 0, 0x20019u, &v21);
      v13 = v16;
      if ( v16 > 0 )
        v13 = (unsigned __int16)v16 | 0xC0070000;
    }
    if ( v13 )
    {
      if ( v13 > 0 )
        v13 = (unsigned __int16)v13 | 0xC0070000;
    }
    else
    {
      applicationUserModelIdLength = 131;
      v24 = 256;
      packageFamilyNameLength = 65;
      v26 = 130;
      if ( (int)PsmGetPackageFullNameFromKey(a1 + 24, packageFullName, &v24) >= 0
        && !PackageFamilyNameFromFullName(packageFullName, &packageFamilyNameLength, packageFamilyName)
        && (int)PsmGetApplicationNameFromKey(a1 + 24, packageRelativeApplicationId, &v26) >= 0 )
      {
        FormatApplicationUserModelId(
          packageFamilyName,
          packageRelativeApplicationId,
          &applicationUserModelIdLength,
          applicationUserModelId);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 776) + 608LL) & 0x10000) != 0 )
      {
        v19 = applicationUserModelIdLength;
        applicationUserModelId[applicationUserModelIdLength - 1] = 35;
        if ( 2 * (unsigned __int64)v19 >= 0x106 )
        {
          sub_1800452E8();
          JUMPOUT(0x18002975CLL);
        }
        applicationUserModelId[v19] = 0;
      }
      if ( v15 )
      {
        v13 = sub_180029764((_DWORD)v21, (unsigned int)applicationUserModelId, 0, 131078, (__int64)&v22);
      }
      else
      {
        v17 = RegOpenKeyExW(v21, applicationUserModelId, 0, 0x20019u, &v22);
        v13 = v17;
        if ( v17 > 0 )
          v13 = (unsigned __int16)v17 | 0xC0070000;
      }
      if ( v13 )
      {
        if ( v13 > 0 )
          v13 = (unsigned __int16)v13 | 0xC0070000;
      }
      else
      {
        v13 = 0;
        *a3 = v22;
        v22 = 0LL;
      }
    }
    if ( v14 )
      RegCloseKey(v14);
  }
  if ( v21 )
    RegCloseKey(v21);
  if ( v22 )
    RegCloseKey(v22);
  return (unsigned int)v13;
}
