/*
 * XREFs of IopUpdateSecureDeviceClassState @ 0x1407BDFC4
 * Callers:
 *     IoCreateDeviceSecure @ 0x14073C640 (IoCreateDeviceSecure.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x14039E760 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     RtlGetPersistedStateLocation @ 0x1406347D0 (RtlGetPersistedStateLocation.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlLengthSecurityDescriptor @ 0x140654EF0 (RtlLengthSecurityDescriptor.c)
 *     RtlStringFromGUIDEx @ 0x14066DF18 (RtlStringFromGUIDEx.c)
 *     IopCreateRegistryKeyEx @ 0x14073FF04 (IopCreateRegistryKeyEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopUpdateSecureDeviceClassState(PGUID Guid, __int64 a2)
{
  void *v2; // r14
  void *v3; // r15
  SIZE_T BufferLengthIn; // rsi
  WCHAR *TargetPath; // rdi
  int PersistedStateLocation; // ebx
  int v9; // eax
  ULONG v10; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-69h] BYREF
  void *v15; // [rsp+60h] [rbp-59h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES v17; // [rsp+78h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-11h] BYREF
  ULONG BufferLengthOut; // [rsp+130h] [rbp+77h] BYREF
  void *v20; // [rsp+138h] [rbp+7Fh] BYREF

  v20 = 0LL;
  memset(&v17, 0, sizeof(v17));
  v2 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  v3 = 0LL;
  v15 = 0LL;
  DestinationString = 0LL;
  BufferLengthOut = 0;
  GuidString = 0LL;
  BufferLengthIn = 256LL;
  while ( 1 )
  {
    TargetPath = (WCHAR *)ExAllocatePoolWithTag(PagedPool, BufferLengthIn, 0x63466F49u);
    if ( !TargetPath )
    {
      PersistedStateLocation = -1073741670;
      goto LABEL_28;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"SecureDeviceClass",
                               0LL,
                               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class",
                               LocationTypeRegistry,
                               TargetPath,
                               BufferLengthIn,
                               &BufferLengthOut);
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( BufferLengthOut <= (unsigned int)BufferLengthIn )
    {
      PersistedStateLocation = -1073741595;
      break;
    }
    BufferLengthIn = BufferLengthOut;
    ExFreePoolWithTag(TargetPath, 0);
  }
  if ( PersistedStateLocation >= 0 )
  {
    PersistedStateLocation = RtlInitUnicodeStringEx(&DestinationString, TargetPath);
    if ( PersistedStateLocation >= 0 )
    {
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      PersistedStateLocation = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      if ( PersistedStateLocation >= 0 )
      {
        PersistedStateLocation = RtlStringFromGUIDEx(Guid, &GuidString, 1u);
        if ( PersistedStateLocation >= 0 )
        {
          PersistedStateLocation = IopCreateRegistryKeyEx(&v20, KeyHandle, &GuidString, 0xF003Fu, 0, 0LL);
          if ( PersistedStateLocation < 0 )
          {
            v2 = v20;
          }
          else
          {
            v9 = SeConvertStringSecurityDescriptorToSecurityDescriptor(
                   (__int64)L"D:PAI(A;OICI;GA;;;SY)",
                   1,
                   (__int64)&v15,
                   0LL);
            v3 = v15;
            if ( v9 < 0 )
              v3 = 0LL;
            RtlInitUnicodeString(&DestinationString, L"Properties");
            v2 = v20;
            v17.ObjectName = &DestinationString;
            v17.Length = 48;
            v17.RootDirectory = v20;
            v17.Attributes = 576;
            v17.SecurityDescriptor = v3;
            v17.SecurityQualityOfService = 0LL;
            PersistedStateLocation = ZwCreateKey(&Handle, 0xF003Fu, &v17, 0, 0LL, 0, 0LL);
            if ( PersistedStateLocation >= 0 )
            {
              v10 = RtlLengthSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a2 + 8));
              RtlInitUnicodeString(&DestinationString, L"Security");
              PersistedStateLocation = ZwSetValueKey(Handle, &DestinationString, 0, 3u, *(PVOID *)(a2 + 8), v10);
            }
          }
        }
      }
    }
    goto LABEL_13;
  }
LABEL_28:
  if ( TargetPath )
  {
    ExFreePoolWithTag(TargetPath, 0);
    TargetPath = 0LL;
  }
LABEL_13:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v2 )
    ZwClose(v2);
  if ( Handle )
    ZwClose(Handle);
  if ( TargetPath )
    ExFreePoolWithTag(TargetPath, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  RtlFreeAnsiString(&GuidString);
  return (unsigned int)PersistedStateLocation;
}
