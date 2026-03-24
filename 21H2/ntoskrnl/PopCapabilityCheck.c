/*
 * XREFs of PopCapabilityCheck @ 0x140568C68
 * Callers:
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140913350 (RtlCapabilityCheck.c)
 */

char __fastcall PopCapabilityCheck(wchar_t *a1)
{
  wchar_t *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 )
  {
    v2 = a1;
    SourceString = 0LL;
    v3 = 0x7FFFLL;
    do
    {
      if ( !*v2 )
        break;
      ++v2;
      --v3;
    }
    while ( v3 );
    v4 = (0x7FFF - v3) & -(__int64)(v3 != 0);
    if ( v3 )
    {
      SourceString.Buffer = a1;
      SourceString.Length = 2 * v4;
      SourceString.MaximumLength = 2 * v4 + 2;
      RtlCapabilityCheck(0LL, &SourceString);
    }
  }
  return 0;
}
