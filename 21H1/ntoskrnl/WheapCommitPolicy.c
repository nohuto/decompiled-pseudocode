/*
 * XREFs of WheapCommitPolicy @ 0x140959370
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x1405B8210 (WheapWmiExecutePolicyManagementMethod.c)
 * Callees:
 *     RtlWriteRegistryValue @ 0x1406E0B60 (RtlWriteRegistryValue.c)
 *     RtlCheckRegistryKey @ 0x1406E9090 (RtlCheckRegistryKey.c)
 *     RtlCreateRegistryKey @ 0x1407BB050 (RtlCreateRegistryKey.c)
 *     WheapLogPolicyTelemetry @ 0x14095959C (WheapLogPolicyTelemetry.c)
 *     WheapPfaReset @ 0x140959BE4 (WheapPfaReset.c)
 */

__int64 WheapCommitPolicy()
{
  NTSTATUS RegistryKey; // ebx
  char v1; // bp
  _BYTE *v2; // rdi
  unsigned int v3; // esi
  wchar_t **v4; // r14

  RegistryKey = RtlCheckRegistryKey(2u, (PWSTR)L"WHEA\\Policy");
  if ( RegistryKey < 0 )
  {
    RegistryKey = RtlCreateRegistryKey(2u, (PWSTR)L"WHEA");
    if ( RegistryKey >= 0 )
      RegistryKey = RtlCreateRegistryKey(2u, (PWSTR)L"WHEA\\Policy");
  }
  if ( RegistryKey >= 0 )
  {
    v1 = 0;
    v2 = WheaRegPolicyTableChanged;
    v3 = 0;
    v4 = &WheaRegPolicyTable;
    while ( 1 )
    {
      if ( *v2 )
      {
        v1 = 1;
        RegistryKey = RtlWriteRegistryValue(2u, L"WHEA\\Policy", *v4, 4u, v4[1], 4u);
        if ( RegistryKey < 0 )
          break;
      }
      ++v3;
      ++v2;
      v4 += 3;
      if ( v3 >= 0xD )
      {
        if ( v1 )
          WheapPfaReset();
        break;
      }
    }
    WheapLogPolicyTelemetry();
  }
  return (unsigned int)RegistryKey;
}
