/*
 * XREFs of _IsMachineLanguageListInMutableLocation @ 0x1403B35C0
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x140789FA0 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     LdrpQueryValueKey @ 0x14078A1BC (LdrpQueryValueKey.c)
 *     LdrpOpenKey @ 0x14078A658 (LdrpOpenKey.c)
 */

char IsMachineLanguageListInMutableLocation()
{
  __int64 v0; // r8
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  int v5; // [rsp+80h] [rbp+28h]
  HANDLE Handle; // [rsp+88h] [rbp+30h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\OSDATA\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  Handle = 0LL;
  if ( (int)LdrpOpenKey(&DestinationString, 0LL, v0, &Handle) >= 0 )
  {
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"MachineLanguageListMigrationState");
    v5 = 4;
    LODWORD(v4) = 4;
    LdrpQueryValueKey(Handle, &ValueName, (__int64)&v4);
  }
  if ( Handle )
    NtClose(Handle);
  return 0;
}
