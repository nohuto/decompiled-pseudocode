/*
 * XREFs of BapdpRegisterEDrvHintInfo @ 0x140A9163C
 * Callers:
 *     BapdpProcessEDrvHintInfo @ 0x140A42C80 (BapdpProcessEDrvHintInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403F3960 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403F41C0 (ZwSetValueKey.c)
 */

void __fastcall BapdpRegisterEDrvHintInfo(_DWORD *a1)
{
  bool v1; // cf
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int Data; // [rsp+90h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+20h] BYREF

  if ( a1 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    KeyHandle = 0LL;
    Handle = 0LL;
    v1 = *a1 < 8u;
    DestinationString = 0LL;
    Data = 1;
    if ( !v1 && (a1[1] & 1) != 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"BitLockerEDriveVolatile");
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&Handle, 0x6001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL) >= 0 )
        {
          ZwClose(KeyHandle);
          KeyHandle = 0LL;
          RtlInitUnicodeString(&DestinationString, L"EDriveSupportedInBoot");
          ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
        }
      }
      if ( KeyHandle )
        ZwClose(KeyHandle);
      if ( Handle )
        ZwClose(Handle);
    }
  }
}
