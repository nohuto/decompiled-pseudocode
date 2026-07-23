/*
 * XREFs of SepSecureBootCheckForUpdates @ 0x140A915BC
 * Callers:
 *     SeSecureBootRegisterPolicy @ 0x140A6CD1C (SeSecureBootRegisterPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F2610 (ZwQueryValueKey.c)
 *     NtUpdateWnfStateData @ 0x140667EB0 (NtUpdateWnfStateData.c)
 */

int SepSecureBootCheckForUpdates()
{
  int result; // eax
  ULONG MatchingChangeStamp; // [rsp+40h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+37h] BYREF
  int v5; // [rsp+90h] [rbp+47h]

  KeyHandle = 0LL;
  MatchingChangeStamp = 0;
  ObjectAttributes.Length = 48;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  v5 = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"z|";
  KeyValueInformation = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_1400097B0,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &MatchingChangeStamp);
    if ( result >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL && HIDWORD(KeyValueInformation) )
      result = NtUpdateWnfStateData(&WNF_SBS_UPDATE_AVAILABLE, 0LL, 0, 0LL, 0LL, 0, 0);
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
