/*
 * XREFs of PiDrvDbEnumDriverStoreNodes @ 0x140799EDC
 * Callers:
 *     PiPnpRtlInit @ 0x140798E30 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x140798FEC (PiDrvDbInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1403F8C70 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1403FA9F0 (ZwQueryDirectoryObject.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbEnumDriverStoreNodes(unsigned __int8 (__fastcall *a1)(_QWORD, __int64), __int64 a2)
{
  _WORD *PoolWithTag; // rdi
  NTSTATUS v5; // ebx
  NTSTATUS i; // eax
  _QWORD *v7; // rbx
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  ULONG ReturnLength; // [rsp+D0h] [rbp+77h] BYREF
  ULONG Context; // [rsp+D8h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DirectoryHandle = 0LL;
  Context = 0;
  ReturnLength = 0;
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
      for ( i = ZwQueryDirectoryObject(DirectoryHandle, PoolWithTag, 0x400u, 1u, 1u, &Context, &ReturnLength);
            ;
            i = ZwQueryDirectoryObject(DirectoryHandle, PoolWithTag, 0x400u, 1u, 0, &Context, &ReturnLength) )
      {
        v5 = i;
        if ( i == -2147483622 )
          break;
        if ( i < 0 )
          goto LABEL_11;
        v7 = PoolWithTag;
        if ( *PoolWithTag )
        {
          do
          {
            if ( !a1(v7[1], a2) )
              break;
            v7 += 4;
          }
          while ( *(_WORD *)v7 );
        }
      }
      v5 = 0;
    }
    else
    {
      v5 = -1073741670;
    }
  }
LABEL_11:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v5;
}
