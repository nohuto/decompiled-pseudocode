/*
 * XREFs of PipCheckForDenyExecute @ 0x14072E448
 * Callers:
 *     IopRegisterDeviceInterface @ 0x14072DB00 (IopRegisterDeviceInterface.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403CDC90 (_wcsicmp.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     PnpConcatPWSTR @ 0x140680BB8 (PnpConcatPWSTR.c)
 *     IopGetRegistryValue @ 0x140728128 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

bool __fastcall PipCheckForDenyExecute(wchar_t *Str2)
{
  WCHAR *v1; // rbx
  bool v2; // di
  int v3; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  PCWSTR SourceString; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  _DWORD *v9; // [rsp+B8h] [rbp+38h] BYREF

  v9 = 0LL;
  KeyHandle = 0LL;
  v1 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  v2 = 0;
  if ( wcsicmp(L"{53f5630d-b6bf-11d0-94f2-00a0c91efb8b}", Str2) )
  {
    v3 = PnpConcatPWSTR(0x200uLL, 0x47706E50u, (PVOID *)&SourceString, 3uLL);
    v1 = (WCHAR *)SourceString;
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      *(&ObjectAttributes.Length + 1) = 0;
      memset(&ObjectAttributes.Attributes + 1, 0, 20);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0
        && IopGetRegistryValue(KeyHandle, L"Deny_Execute", 0, &v9) >= 0
        && v9
        && v9[1] == 4
        && v9[3] == 4 )
      {
        v2 = *(_DWORD *)((char *)v9 + (unsigned int)v9[2]) != 0;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x47706E50u);
  return v2;
}
