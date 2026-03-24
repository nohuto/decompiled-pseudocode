/*
 * XREFs of IopUpdateSecureDeviceClassState @ 0x1407BD834
 * Callers:
 *     IoCreateDeviceSecure @ 0x14073C480 (IoCreateDeviceSecure.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140265AF0 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x14039E610 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA5E0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403FA740 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403FAFA0 (ZwSetValueKey.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     RtlGetPersistedStateLocation @ 0x14063F9C0 (RtlGetPersistedStateLocation.c)
 *     RtlLengthSecurityDescriptor @ 0x1406600D0 (RtlLengthSecurityDescriptor.c)
 *     RtlStringFromGUIDEx @ 0x14067A7D8 (RtlStringFromGUIDEx.c)
 *     IopCreateRegistryKeyEx @ 0x14073FD44 (IopCreateRegistryKeyEx.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopUpdateSecureDeviceClassState(unsigned int *a1, __int64 a2)
{
  void *v2; // r14
  void *v3; // r15
  SIZE_T v6; // rsi
  PVOID PoolWithTag; // rdi
  int PersistedStateLocation; // ebx
  int v9; // eax
  ULONG v10; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-69h] BYREF
  void *v15; // [rsp+60h] [rbp-59h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES v17; // [rsp+78h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v19; // [rsp+130h] [rbp+77h] BYREF
  void *v20; // [rsp+138h] [rbp+7Fh] BYREF

  v20 = 0LL;
  memset(&v17, 0, sizeof(v17));
  v2 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  v3 = 0LL;
  v15 = 0LL;
  DestinationString = 0LL;
  LODWORD(v19) = 0;
  UnicodeString = 0LL;
  v6 = 256LL;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x63466F49u);
    if ( !PoolWithTag )
    {
      PersistedStateLocation = -1073741670;
      goto LABEL_28;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"SecureDeviceClass",
                               0LL,
                               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class",
                               0,
                               PoolWithTag,
                               v6,
                               (unsigned int *)&v19);
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( (unsigned int)v19 <= (unsigned int)v6 )
    {
      PersistedStateLocation = -1073741595;
      break;
    }
    v6 = (unsigned int)v19;
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  if ( PersistedStateLocation >= 0 )
  {
    PersistedStateLocation = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
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
        PersistedStateLocation = RtlStringFromGUIDEx(a1, (__int64)&UnicodeString, 1);
        if ( PersistedStateLocation >= 0 )
        {
          PersistedStateLocation = IopCreateRegistryKeyEx(&v20, KeyHandle, &UnicodeString, 0xF003Fu, 0, 0LL);
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
  if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = 0LL;
  }
LABEL_13:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v2 )
    ZwClose(v2);
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)PersistedStateLocation;
}
