/*
 * XREFs of ObpCreateDosDevicesDirectory @ 0x1407968D8
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140796470 (ObpInitializeRootNamespace.c)
 * Callees:
 *     PsIsHostSilo @ 0x14020DC00 (PsIsHostSilo.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140244CE0 (RtlGetDaclSecurityDescriptor.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwCreateDirectoryObjectEx @ 0x1403F9670 (ZwCreateDirectoryObjectEx.c)
 *     ZwCreateSymbolicLinkObject @ 0x1403F9990 (ZwCreateSymbolicLinkObject.c)
 *     ObpSetSiloDeviceMap @ 0x140796B0C (ObpSetSiloDeviceMap.c)
 *     ObpGetDosDevicesProtection @ 0x140796B74 (ObpGetDosDevicesProtection.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCreateDosDevicesDirectory(__int64 a1, void *a2, __int64 a3)
{
  __int64 result; // rax
  int DirectoryObject; // ebx
  BOOLEAN DaclDefaulted[8]; // [rsp+30h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-41h] BYREF
  HANDLE v10; // [rsp+40h] [rbp-39h] BYREF
  int v11; // [rsp+48h] [rbp-31h]
  int v12; // [rsp+4Ch] [rbp-2Dh]
  HANDLE v13; // [rsp+50h] [rbp-29h]
  __int64 *v14; // [rsp+58h] [rbp-21h]
  int v15; // [rsp+60h] [rbp-19h]
  int v16; // [rsp+64h] [rbp-15h]
  _OWORD *v17; // [rsp+68h] [rbp-11h]
  __int64 v18; // [rsp+70h] [rbp-9h]
  PACL Dacl; // [rsp+78h] [rbp-1h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+27h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp+2Fh] BYREF
  BOOLEAN DaclPresent; // [rsp+F8h] [rbp+7Fh] BYREF

  v10 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v21 = 0LL;
  v12 = 0;
  v16 = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  if ( PsIsHostSilo(a1) && a3 )
    return 3221225485LL;
  result = ObpGetDosDevicesProtection(SecurityDescriptor);
  if ( (int)result >= 0 )
  {
    v11 = 48;
    v14 = &ObpGlobalDirectoryName;
    v13 = a2;
    v17 = SecurityDescriptor;
    v15 = 528;
    v18 = 0LL;
    DirectoryObject = ZwCreateDirectoryObjectEx((__int64)&v10, 983055LL);
    if ( DirectoryObject < 0 )
    {
      v10 = 0LL;
    }
    else
    {
      DirectoryObject = ObpSetSiloDeviceMap(a1, v10);
      if ( DirectoryObject >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, &word_1407D36E0);
        v13 = v10;
        v11 = 48;
        v14 = &ObpGlobalRootNameString;
        v15 = 528;
        v17 = SecurityDescriptor;
        v18 = 0LL;
        DirectoryObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
        if ( DirectoryObject >= 0 )
        {
          ZwClose(Handle);
          v13 = v10;
          v11 = 48;
          v14 = &ObpGlobalNameString;
          v15 = 528;
          v17 = SecurityDescriptor;
          v18 = 0LL;
          DirectoryObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
          if ( DirectoryObject >= 0 )
          {
            ZwClose(Handle);
            v11 = 48;
            v14 = &ObpDosDevicesNameString;
            v13 = a2;
            v17 = SecurityDescriptor;
            v15 = 528;
            v18 = 0LL;
            DirectoryObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
            if ( DirectoryObject >= 0 )
              ZwClose(Handle);
          }
        }
      }
    }
    DaclPresent = 0;
    Dacl = 0LL;
    RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, DaclDefaulted);
    ExFreePoolWithTag(Dacl, 0x6C636144u);
    if ( v10 )
      ZwClose(v10);
    return (unsigned int)DirectoryObject;
  }
  return result;
}
