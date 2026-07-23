/*
 * XREFs of BiGetCurrentBootEntryIdentifier @ 0x140782128
 * Callers:
 *     BcdOpenObject @ 0x14077FC60 (BcdOpenObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403F8830 (ZwQuerySystemInformation.c)
 */

NTSTATUS __fastcall BiGetCurrentBootEntryIdentifier(_OWORD *a1)
{
  NTSTATUS result; // eax
  _OWORD SystemInformation[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  result = ZwQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL);
  if ( result >= 0 )
    *a1 = SystemInformation[0];
  return result;
}
