/*
 * XREFs of PipCheckForDenyExecute @ 0x14076A520
 * Callers:
 *     IopRegisterDeviceInterface @ 0x140769C24 (IopRegisterDeviceInterface.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     IopGetRegistryValue @ 0x14067B838 (IopGetRegistryValue.c)
 *     PnpConcatPWSTR @ 0x14078C9E8 (PnpConcatPWSTR.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

bool __fastcall PipCheckForDenyExecute(wchar_t *Str2)
{
  bool v1; // di
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID P; // [rsp+B8h] [rbp+38h] BYREF

  P = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v1 = 0;
  if ( wcsicmp(L"{53f5630d-b6bf-11d0-94f2-00a0c91efb8b}", Str2) )
  {
    if ( (int)PnpConcatPWSTR(
                0x200uLL,
                0x47706E50u,
                (char)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage") >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      memset(&ObjectAttributes.Attributes + 1, 0, 20);
      ObjectAttributes.RootDirectory = 0LL;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        if ( IopGetRegistryValue(KeyHandle, L"Deny_Execute", 0, &P) >= 0 )
        {
          if ( !P )
            goto LABEL_11;
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
            v1 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
        }
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
    }
  }
LABEL_11:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v1;
}
