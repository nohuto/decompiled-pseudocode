/*
 * XREFs of sub_18006259C @ 0x18006259C
 * Callers:
 *     sub_180062450 @ 0x180062450 (sub_180062450.c)
 * Callees:
 *     sub_180062644 @ 0x180062644 (sub_180062644.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006259C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  LSTATUS v6; // eax
  __int64 v7; // r8
  signed int v8; // ebx
  HKEY hKey; // [rsp+70h] [rbp+18h] BYREF

  hKey = 0LL;
  v6 = RegCreateKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\HoloSI\\Audio",
         0,
         0LL,
         0,
         0x10u,
         0LL,
         &hKey,
         0LL);
  v8 = v6;
  if ( v6 > 0 )
    v8 = (unsigned __int16)v6 | 0x80070000;
  if ( v8 >= 0 )
    v8 = sub_180062644(a1, &hKey, v7, a5);
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v8;
}
