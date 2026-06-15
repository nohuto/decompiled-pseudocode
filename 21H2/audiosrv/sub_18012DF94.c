/*
 * XREFs of sub_18012DF94 @ 0x18012DF94
 * Callers:
 *     sub_18012E018 @ 0x18012E018 (sub_18012E018.c)
 * Callees:
 *     <none>
 */

char sub_18012DF94()
{
  int v1; // [rsp+50h] [rbp+8h] BYREF
  DWORD v2; // [rsp+58h] [rbp+10h] BYREF

  if ( !byte_18019FAFC )
  {
    v1 = 0;
    v2 = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Policy",
            L"SkipAPOFailureCheck",
            0x10u,
            0LL,
            &v1,
            &v2) )
      byte_18019FBA0 = v1 != 0;
    byte_18019FAFC = 1;
  }
  return byte_18019FBA0;
}
