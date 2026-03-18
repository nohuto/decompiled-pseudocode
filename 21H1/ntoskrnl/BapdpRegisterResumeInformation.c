/*
 * XREFs of BapdpRegisterResumeInformation @ 0x140A3DF04
 * Callers:
 *     BapdpProcessResumeInformation @ 0x140A3D80C (BapdpProcessResumeInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403F26D0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403F2F30 (ZwSetValueKey.c)
 */

void __fastcall BapdpRegisterResumeInformation(PVOID Data, ULONG DataSize)
{
  NTSTATUS v4; // eax
  HANDLE v5; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+A0h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+38h] BYREF

  if ( Data )
  {
    Disposition = 0;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    DestinationString = 0LL;
    if ( DataSize )
    {
      KeyHandle = 0LL;
      Handle = 0LL;
      RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Winresume");
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v4 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
        v5 = KeyHandle;
        if ( v4 >= 0 )
        {
          ZwClose(KeyHandle);
          RtlInitUnicodeString(&DestinationString, L"ResumeContext");
          ZwSetValueKey(Handle, &DestinationString, 0, 3u, Data, DataSize);
          v5 = Handle;
        }
        ZwClose(v5);
      }
    }
  }
}
