/*
 * XREFs of PiDmObjectUpdateCachedCmProperty @ 0x1405D9C2C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405D9270 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1405D9D18 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1405DA99C (PiDmObjectUpdateCachedObjectProperty.c)
 *     RtlGUIDFromString @ 0x1405DD3D0 (RtlGUIDFromString.c)
 */

void __fastcall PiDmObjectUpdateCachedCmProperty(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        PCWSTR SourceString,
        unsigned int a7)
{
  int v8; // ecx
  int v9; // r8d
  int v10; // ecx
  int v11; // r8d
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  GUID Guid; // [rsp+50h] [rbp-28h] BYREF

  if ( a1 == 1 )
  {
    Guid = 0LL;
    DestinationString = 0LL;
    if ( a4 == 9 )
    {
      if ( a7 )
      {
        if ( a5 == 1 && a7 >= 2 )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0 )
          {
            v8 = CmMapCmObjectTypeToPnpObjectType(1LL);
            PiDmObjectUpdateCachedObjectProperty(v8, a2, v9, 0, (__int64)&DEVPKEY_Device_ClassGuid, 13, &Guid, 16);
          }
        }
      }
      else
      {
        v10 = CmMapCmObjectTypeToPnpObjectType(1LL);
        PiDmObjectUpdateCachedObjectProperty(v10, a2, v11, 0, (__int64)&DEVPKEY_Device_ClassGuid, 0, 0LL, 0);
      }
    }
  }
}
