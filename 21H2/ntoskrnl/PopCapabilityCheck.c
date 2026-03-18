/*
 * XREFs of PopCapabilityCheck @ 0x1405C9FA8
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 */

char __fastcall PopCapabilityCheck(wchar_t *a1)
{
  __int64 v1; // rdx
  wchar_t *v2; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 )
  {
    SourceString = 0LL;
    v1 = 0x7FFFLL;
    v2 = a1;
    do
    {
      if ( !*v2 )
        break;
      ++v2;
      --v1;
    }
    while ( v1 );
    if ( v1 )
    {
      SourceString.Buffer = a1;
      SourceString.Length = -2 - 2 * v1;
      SourceString.MaximumLength = -2 * v1;
      RtlCapabilityCheck(0LL, &SourceString);
    }
  }
  return 0;
}
