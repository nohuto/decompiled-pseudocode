/*
 * XREFs of sub_18002A918 @ 0x18002A918
 * Callers:
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 *     sub_18002A0DC @ 0x18002A0DC (sub_18002A0DC.c)
 * Callees:
 *     sub_180029148 @ 0x180029148 (sub_180029148.c)
 */

LSTATUS __fastcall sub_18002A918(int *a1, LSTATUS *a2)
{
  LSTATUS v4; // eax
  bool v5; // sf
  int v6; // ecx
  LSTATUS result; // eax
  DWORD v8; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+28h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+30h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+38h] BYREF

  hKey = 0LL;
  v9 = 5000;
  v10 = 600000;
  v4 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager",
         0,
         1u,
         &hKey);
  v5 = v4 < 0;
  if ( v4 > 0 )
    v5 = 1;
  if ( v5
    || (v8 = 4, sub_180029148(hKey, L"QuiesceDurationMs", (BYTE *)&v9, &v8) < 0)
    || v8 != 4
    || (v8 = 4, sub_180029148(hKey, L"EeDurationMs", (BYTE *)&v10, &v8) < 0)
    || v8 != 4
    || (v6 = v9, result = v10, v9 > v10)
    || !v10 )
  {
    v6 = 5000;
    result = 600000;
    v9 = 5000;
    v10 = 600000;
  }
  *a1 = v6;
  if ( a2 )
    *a2 = result;
  if ( hKey )
    return RegCloseKey(hKey);
  return result;
}
