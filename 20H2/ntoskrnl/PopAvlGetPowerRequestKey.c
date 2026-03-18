/*
 * XREFs of PopAvlGetPowerRequestKey @ 0x14071D374
 * Callers:
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14071D27C (PopAvlFindOrMakeStatsForPowerRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x14023DB90 (RtlInitAnsiString.c)
 *     PopUnicodeStringDeepCopy @ 0x1406E1710 (PopUnicodeStringDeepCopy.c)
 *     PopAnsiStringToUnicodeString @ 0x14071CEF8 (PopAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall PopAvlGetPowerRequestKey(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // rax
  bool v4; // zf
  __int64 v5; // rdx
  __int64 v7; // rdx
  UNICODE_STRING *v8; // rdx
  const WCHAR *v9; // rdx
  UNICODE_STRING v10; // [rsp+20h] [rbp-28h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  DestinationString = 0LL;
  v4 = *(_DWORD *)v2 == 0;
  v5 = *(_QWORD *)(v2 + 8);
  v10 = 0LL;
  if ( !v4 )
  {
    if ( v5 )
    {
      RtlInitAnsiString(&DestinationString, (PCSZ)(v5 + 1448));
      return PopAnsiStringToUnicodeString(a2, &DestinationString);
    }
    v9 = UNIDENTIFIED_PROCESS;
    goto LABEL_9;
  }
  if ( !v5 || (v7 = *(_QWORD *)(v5 + 8)) == 0 )
  {
    v9 = UNIDENTIFIED_DRIVER;
LABEL_9:
    RtlInitUnicodeString(&v10, v9);
    v8 = &v10;
    return PopUnicodeStringDeepCopy(a2, v8);
  }
  v8 = (UNICODE_STRING *)(v7 + 56);
  return PopUnicodeStringDeepCopy(a2, v8);
}
