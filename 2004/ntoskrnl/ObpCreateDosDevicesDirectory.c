/*
 * XREFs of ObpCreateDosDevicesDirectory @ 0x140788BC8
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140788760 (ObpInitializeRootNamespace.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1402720C0 (RtlGetDaclSecurityDescriptor.c)
 *     PsIsHostSilo @ 0x140291F70 (PsIsHostSilo.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwCreateDirectoryObjectEx @ 0x1403F4AA0 (ZwCreateDirectoryObjectEx.c)
 *     ZwCreateSymbolicLinkObject @ 0x1403F4DC0 (ZwCreateSymbolicLinkObject.c)
 *     ObpSetSiloDeviceMap @ 0x140788DFC (ObpSetSiloDeviceMap.c)
 *     ObpGetDosDevicesProtection @ 0x140788E64 (ObpGetDosDevicesProtection.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCreateDosDevicesDirectory(__int64 a1, void *a2, void *a3)
{
  __int64 result; // rax
  NTSTATUS v7; // ebx
  BOOLEAN DaclDefaulted[8]; // [rsp+30h] [rbp-49h] BYREF
  HANDLE LinkHandle; // [rsp+38h] [rbp-41h] BYREF
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-31h] BYREF
  PACL Dacl; // [rsp+78h] [rbp-1h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+27h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp+2Fh] BYREF
  BOOLEAN DaclPresent; // [rsp+F8h] [rbp+7Fh] BYREF

  DirectoryHandle = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v14 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  DestinationString = 0LL;
  if ( PsIsHostSilo(a1) && a3 )
    return 3221225485LL;
  result = ObpGetDosDevicesProtection(SecurityDescriptor);
  if ( (int)result >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalDirectoryName;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.Attributes = 528;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v7 = ZwCreateDirectoryObjectEx(&DirectoryHandle, 0xF000Fu, &ObjectAttributes, a3, 0);
    if ( v7 < 0 )
    {
      DirectoryHandle = 0LL;
    }
    else
    {
      v7 = ObpSetSiloDeviceMap(a1, DirectoryHandle);
      if ( v7 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, &word_1407C4EE0);
        ObjectAttributes.RootDirectory = DirectoryHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalRootNameString;
        ObjectAttributes.Attributes = 528;
        ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        v7 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
        if ( v7 >= 0 )
        {
          ZwClose(LinkHandle);
          ObjectAttributes.RootDirectory = DirectoryHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalNameString;
          ObjectAttributes.Attributes = 528;
          ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          v7 = ZwCreateSymbolicLinkObject(
                 &LinkHandle,
                 0xF0001u,
                 &ObjectAttributes,
                 (PUNICODE_STRING)&ObpGlobalDosDevicesShortName);
          if ( v7 >= 0 )
          {
            ZwClose(LinkHandle);
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpDosDevicesNameString;
            ObjectAttributes.RootDirectory = a2;
            ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
            ObjectAttributes.Attributes = 528;
            ObjectAttributes.SecurityQualityOfService = 0LL;
            v7 = ZwCreateSymbolicLinkObject(
                   &LinkHandle,
                   0xF0001u,
                   &ObjectAttributes,
                   (PUNICODE_STRING)&ObpDosDevicesShortNameRootString);
            if ( v7 >= 0 )
              ZwClose(LinkHandle);
          }
        }
      }
    }
    DaclPresent = 0;
    Dacl = 0LL;
    RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, DaclDefaulted);
    ExFreePoolWithTag(Dacl, 0x6C636144u);
    if ( DirectoryHandle )
      ZwClose(DirectoryHandle);
    return (unsigned int)v7;
  }
  return result;
}
