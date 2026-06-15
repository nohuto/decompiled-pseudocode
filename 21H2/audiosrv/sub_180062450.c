/*
 * XREFs of sub_180062450 @ 0x180062450
 * Callers:
 *     sub_1800615D4 @ 0x1800615D4 (sub_1800615D4.c)
 * Callees:
 *     sub_18006259C @ 0x18006259C (sub_18006259C.c)
 *     sub_1800627C0 @ 0x1800627C0 (sub_1800627C0.c)
 *     sub_1800628AC @ 0x1800628AC (sub_1800628AC.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800FFDC0 @ 0x1800FFDC0 (sub_1800FFDC0.c)
 */

__int64 __fastcall sub_180062450(__int64 a1)
{
  HKEY *phkResult; // rsi
  unsigned int v2; // edi
  HKEY v3; // r14
  int v5; // edx
  LSTATUS v6; // ebx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rcx
  DWORD LastError; // ebx
  _QWORD v12[2]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v13[8]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v14[15]; // [rsp+48h] [rbp-A0h] BYREF

  phkResult = (HKEY *)(a1 + 368);
  v2 = 0;
  v3 = *(HKEY *)(a1 + 368);
  if ( v3 )
  {
    LastError = GetLastError();
    RegCloseKey(v3);
    SetLastError(LastError);
  }
  *phkResult = 0LL;
  v6 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\HoloSI\\Audio",
         0,
         0xF003Fu,
         phkResult);
  if ( v6 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 17LL, &unk_180172650, 0LL);
    }
    if ( v6 > 0 )
      return (unsigned __int16)v6 | 0x80070000;
    else
      return (unsigned int)v6;
  }
  else
  {
    v14[1] = a1;
    v14[0] = off_180148E38;
    v12[0] = 0LL;
    v14[13] = v14;
    sub_18006259C((unsigned int)v12, v5, v7, v8, (__int64)v13);
    if ( (_QWORD *)(a1 + 360) == v12 )
    {
      v9 = v12[0];
    }
    else
    {
      sub_1800627C0(a1 + 360, v12[0]);
      v9 = 0LL;
    }
    if ( v9 )
      sub_1800FFDC0();
    sub_1800628AC(v13);
    if ( !*(_QWORD *)(a1 + 360) )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 2u )
      {
        sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 18LL, &unk_180172650);
      }
      return (unsigned int)-2147024882;
    }
  }
  return v2;
}
