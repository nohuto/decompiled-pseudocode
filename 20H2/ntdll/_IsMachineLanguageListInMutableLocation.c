/*
 * XREFs of _IsMachineLanguageListInMutableLocation @ 0x1801063D0
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x180106D3C (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x18003F6C0 (LdrpQueryValueKey.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtOpenKey @ 0x18009D2F0 (NtOpenKey.c)
 */

bool IsMachineLanguageListInMutableLocation()
{
  bool v0; // bl
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-9h] BYREF
  UNICODE_STRING v3; // [rsp+40h] [rbp+7h] BYREF
  int v4; // [rsp+50h] [rbp+17h]
  __int64 v5; // [rsp+58h] [rbp+1Fh]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp+27h]
  int v7; // [rsp+68h] [rbp+2Fh]
  __int128 v8; // [rsp+70h] [rbp+37h]
  int v9; // [rsp+A0h] [rbp+67h] BYREF
  unsigned int v10; // [rsp+A8h] [rbp+6Fh] BYREF
  int v11; // [rsp+B0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+7Fh]

  v0 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\OSDATA\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  Handle = 0LL;
  v5 = 0LL;
  p_DestinationString = &DestinationString;
  v4 = 48;
  v7 = 64;
  v8 = 0LL;
  if ( (int)NtOpenKey() >= 0 )
  {
    RtlInitUnicodeString(&v3, L"MachineLanguageListMigrationState");
    v9 = 0;
    v11 = 4;
    v10 = 4;
    if ( (int)LdrpQueryValueKey((__int64)Handle, (__int64)&v3, &v11, &v9, &v10) >= 0 )
      v0 = v9 == 1;
  }
  if ( Handle )
    NtClose(Handle);
  return v0;
}
