/*
 * XREFs of PiDrvDbEnumDriverStoreNodes @ 0x14078B8CC
 * Callers:
 *     PiPnpRtlInit @ 0x14078A820 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x14078A9DC (PiDrvDbInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1403F2E30 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1403F4B90 (ZwQueryDirectoryObject.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbEnumDriverStoreNodes(unsigned __int8 (__fastcall *a1)(_QWORD, __int64), __int64 a2)
{
  _QWORD *PoolWithTag; // rdi
  NTSTATUS v5; // ebx
  int DirectoryObject; // eax
  _QWORD *i; // rbx
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DirectoryHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  PoolWithTag = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DriverStores");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x62647050u);
    if ( PoolWithTag )
    {
      while ( 1 )
      {
        DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)PoolWithTag);
        v5 = DirectoryObject;
        if ( DirectoryObject == -2147483622 )
          break;
        if ( DirectoryObject < 0 )
          goto LABEL_10;
        for ( i = PoolWithTag; *(_WORD *)i; i += 4 )
        {
          if ( !a1(i[1], a2) )
            break;
        }
      }
      v5 = 0;
    }
    else
    {
      v5 = -1073741670;
    }
  }
LABEL_10:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v5;
}
