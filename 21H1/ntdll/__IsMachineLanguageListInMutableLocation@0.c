/*
 * XREFs of __IsMachineLanguageListInMutableLocation@0 @ 0x4B2ADAEB
 * Callers:
 *     __RtlpMuiRegLoadInstalled@16 @ 0x4B2AC2C1 (__RtlpMuiRegLoadInstalled@16.c)
 * Callees:
 *     _LdrpQueryValueKey@24 @ 0x4B2AD60A (_LdrpQueryValueKey@24.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

bool __stdcall _IsMachineLanguageListInMutableLocation()
{
  bool v0; // bl
  int v2; // ecx
  _DWORD v3[6]; // [esp+8h] [ebp-38h] BYREF
  UNICODE_STRING v4; // [esp+20h] [ebp-20h] BYREF
  UNICODE_STRING DestinationString; // [esp+28h] [ebp-18h] BYREF
  int v6; // [esp+30h] [ebp-10h] BYREF
  int v7; // [esp+34h] [ebp-Ch] BYREF
  int v8; // [esp+38h] [ebp-8h] BYREF
  HANDLE Handle; // [esp+3Ch] [ebp-4h] BYREF

  v0 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\OSDATA\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  Handle = 0;
  v3[2] = &DestinationString;
  v3[0] = 24;
  v3[1] = 0;
  v3[3] = 64;
  v3[4] = 0;
  v3[5] = 0;
  if ( (int)ZwOpenKey(&Handle, 131097, v3) >= 0 )
  {
    RtlInitUnicodeString(&v4, L"MachineLanguageListMigrationState");
    v6 = 4;
    v7 = 4;
    v8 = 0;
    if ( LdrpQueryValueKey((int)Handle, (int)&v4, &v6, &v8, (unsigned int *)&v7, v2) >= 0 )
      v0 = v8 == 1;
  }
  if ( Handle )
    NtClose(Handle);
  return v0;
}
