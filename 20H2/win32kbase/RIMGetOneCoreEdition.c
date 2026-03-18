/*
 * XREFs of RIMGetOneCoreEdition @ 0x1C00369F0
 * Callers:
 *     RIMIsRunningOnDesktop @ 0x1C00369D0 (RIMIsRunningOnDesktop.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C016DD7C (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 RIMGetOneCoreEdition()
{
  unsigned int v0; // ecx
  int v2; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v4; // [rsp+50h] [rbp+8h] BYREF
  int v5; // [rsp+58h] [rbp+10h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF

  v0 = dword_1C024514C;
  if ( (unsigned int)dword_1C024514C > 0x11 )
  {
    v6 = 0;
    v5 = 0;
    v4 = dword_1C024514C;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
    v2 = ZwQueryLicenseValue(&DestinationString, &v6, &v4, 4LL, &v5);
    v0 = dword_1C024514C;
    if ( v2 >= 0 )
      v0 = v4;
    dword_1C024514C = v0;
  }
  return v0;
}
