/*
 * XREFs of PiCreateDriverRedirectedStateKey @ 0x1407AF694
 * Callers:
 *     IoOpenDriverRegistryKey @ 0x1407AF440 (IoOpenDriverRegistryKey.c)
 *     IopInitializeBootDrivers @ 0x140A56C1C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x14036A990 (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403F26D0 (ZwCreateKey.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     IopAllocateUnicodeString @ 0x1407300CC (IopAllocateUnicodeString.c)
 *     PiGetStateRootPath @ 0x14076C34C (PiGetStateRootPath.c)
 *     PiCreateRegistryPath @ 0x14089ACD4 (PiCreateRegistryPath.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14089F900 (PiAuGetServiceStateSecurityObject.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCreateDriverRedirectedStateKey(UNICODE_STRING *CreateOptions, __int64 a2, _QWORD *a3)
{
  void *v4; // rsi
  void *v5; // rdi
  int StateRootPath; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  NTSTATUS v11; // eax
  int ServiceStateSecurityObject; // eax
  int v13; // eax
  HANDLE v14; // rax
  void *v15; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+67h] BYREF
  void *v20; // [rsp+E8h] [rbp+7Fh]

  v4 = 0LL;
  v5 = 0LL;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v15 = 0LL;
  v20 = 0LL;
  UnicodeString = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  if ( !CreateOptions || !CreateOptions->Buffer || CreateOptions->Length < 2u || !a3 )
  {
    StateRootPath = -1073741811;
    goto LABEL_6;
  }
  StateRootPath = PiGetStateRootPath(L"DriverStatePath", 0LL, LocationTypeRegistry, &DestinationString);
  if ( StateRootPath < 0 )
    goto LABEL_6;
  v9 = CreateOptions->Length + 2;
  v10 = v9 + DestinationString.Length;
  if ( v10 < v9 )
  {
    StateRootPath = -1073741675;
  }
  else
  {
    if ( v10 > 0xFFFE )
    {
      StateRootPath = -2147483643;
      goto LABEL_6;
    }
    StateRootPath = IopAllocateUnicodeString((__int64)&UnicodeString, v10);
    if ( StateRootPath >= 0 )
    {
      StateRootPath = RtlUnicodeStringPrintfEx(
                        &UnicodeString,
                        0LL,
                        0x800u,
                        L"%wZ\\%wZ",
                        &DestinationString,
                        CreateOptions);
      if ( StateRootPath >= 0 )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &UnicodeString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v11 = ZwOpenKey(&Handle, 4u, &ObjectAttributes);
        StateRootPath = v11;
        if ( v11 != -1073741772 )
          goto LABEL_25;
        ServiceStateSecurityObject = PiAuGetServiceStateSecurityObject(&v15);
        v4 = v15;
        StateRootPath = ServiceStateSecurityObject;
        if ( ServiceStateSecurityObject < 0 )
          goto LABEL_6;
        v13 = PiCreateRegistryPath(&DestinationString);
        v5 = v20;
        StateRootPath = v13;
        if ( v13 == -1073741772 )
          goto LABEL_24;
        if ( v13 < 0 )
          goto LABEL_6;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = v20;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = CreateOptions;
        ObjectAttributes.SecurityDescriptor = v4;
        v11 = ZwCreateKey(&Handle, 4u, &ObjectAttributes, 0, 0LL, 0, 0LL);
        StateRootPath = v11;
        if ( v11 == -1073741772 )
        {
LABEL_24:
          StateRootPath = -1073741595;
        }
        else
        {
LABEL_25:
          if ( v11 >= 0 )
          {
            v14 = Handle;
            Handle = 0LL;
            *a3 = v14;
          }
        }
      }
    }
  }
LABEL_6:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  if ( v5 )
    ZwClose(v5);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)StateRootPath;
}
