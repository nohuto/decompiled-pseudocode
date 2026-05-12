/*
 * XREFs of PortGetIoTimeoutValue @ 0x1C007C638
 * Callers:
 *     RaidInitializeAdapter @ 0x1C0079570 (RaidInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 *     PortpOpenParametersKey @ 0x1C007CA0C (PortpOpenParametersKey.c)
 */

void __fastcall PortGetIoTimeoutValue(__int64 a1, _DWORD *a2)
{
  void *v3; // rbx
  int v4; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD KeyValueInformation[5]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Str1[246]; // [rsp+64h] [rbp-9Ch] BYREF

  if ( a2 )
  {
    ResultLength = 0;
    DestinationString = 0LL;
    v3 = (void *)PortpOpenParametersKey();
    if ( v3 )
    {
      RtlInitUnicodeString(&DestinationString, L"IoTimeoutValue");
      if ( ZwQueryValueKey(v3, &DestinationString, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) >= 0
        && KeyValueInformation[1] == 4
        && KeyValueInformation[3] == 4
        && !_wcsnicmp(Str1, L"IoTimeoutValue", (unsigned __int64)KeyValueInformation[4] >> 1) )
      {
        v4 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
        if ( (unsigned int)(v4 - 1) <= 0xFFFE )
          *a2 = v4;
      }
      ZwClose(v3);
    }
  }
}
