/*
 * XREFs of PipCheckForDenyExecute @ 0x14073592C
 * Callers:
 *     IopRegisterDeviceInterface @ 0x140734FE4 (IopRegisterDeviceInterface.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403CEAD0 (_wcsicmp.c)
 *     Feature_Servicing_VB_Memory_Leak_33934456__private_IsEnabled @ 0x1403ED274 (Feature_Servicing_VB_Memory_Leak_33934456__private_IsEnabled.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     PnpConcatPWSTR @ 0x140645A50 (PnpConcatPWSTR.c)
 *     IopGetRegistryValue @ 0x140728854 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

bool __fastcall PipCheckForDenyExecute(wchar_t *Str2)
{
  void *v1; // rbx
  WCHAR *v2; // rdi
  bool v3; // si
  int v4; // eax
  NTSTATUS RegistryValue; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  _DWORD *v9; // [rsp+B8h] [rbp+38h] BYREF
  PCWSTR SourceString; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+48h] BYREF

  v1 = 0LL;
  KeyHandle = 0LL;
  v9 = 0LL;
  v2 = 0LL;
  SourceString = 0LL;
  v3 = 0;
  DestinationString = 0LL;
  if ( wcsicmp(L"{53f5630d-b6bf-11d0-94f2-00a0c91efb8b}", Str2) )
  {
    v4 = PnpConcatPWSTR(0x200uLL, 0x47706E50u, (PVOID *)&SourceString, 3uLL);
    v2 = (WCHAR *)SourceString;
    if ( v4 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      *(&ObjectAttributes.Length + 1) = 0;
      memset(&ObjectAttributes.Attributes + 1, 0, 20);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        RegistryValue = IopGetRegistryValue(KeyHandle, L"Deny_Execute", 0, &v9);
        v1 = v9;
        if ( RegistryValue >= 0 && v9 && v9[1] == 4 && v9[3] == 4 )
          v3 = *(_DWORD *)((char *)v9 + (unsigned int)v9[2]) != 0;
      }
    }
  }
  if ( (unsigned int)Feature_Servicing_VB_Memory_Leak_33934456__private_IsEnabled() && v1 )
    ExFreePoolWithTag(v1, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x47706E50u);
  return v3;
}
