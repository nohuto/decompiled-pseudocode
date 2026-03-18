/*
 * XREFs of BiLoadHive @ 0x140773668
 * Callers:
 *     BiAddStoreFromFile @ 0x14076F9F8 (BiAddStoreFromFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     ZwLoadKey @ 0x1403F56A0 (ZwLoadKey.c)
 *     ZwLoadKey2 @ 0x1403F56C0 (ZwLoadKey2.c)
 *     ZwUnloadKey @ 0x1403F6EA0 (ZwUnloadKey.c)
 *     BiLogMessage @ 0x1407729BC (BiLogMessage.c)
 *     BiOpenKeyNonBcd @ 0x1407735A0 (BiOpenKeyNonBcd.c)
 *     BiReleasePrivilege @ 0x140773858 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407738B0 (BiAcquirePrivilege.c)
 *     BiDoesHiveExist @ 0x140773A84 (BiDoesHiveExist.c)
 */

__int64 __fastcall BiLoadHive(PCWSTR SourceString, __int64 a2, HANDLE *a3)
{
  unsigned int i; // esi
  HANDLE v6; // rdi
  int v7; // eax
  int Key2; // ebx
  int v9; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-D8h]
  __int64 v14; // [rsp+28h] [rbp-D0h]
  __int64 v15; // [rsp+30h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+70h] [rbp-88h] BYREF
  __int128 v19; // [rsp+80h] [rbp-78h]
  __int128 v20; // [rsp+90h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-58h] BYREF
  UNICODE_STRING v22; // [rsp+B0h] [rbp-48h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v15 = 0LL;
  v22 = 0LL;
  DestinationString = 0LL;
  for ( i = 0; ; ++i )
  {
    v6 = 0LL;
    Handle = 0LL;
    if ( (unsigned __int8)BiDoesHiveExist(a2) )
    {
      v7 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 0xF003Fu, &Handle);
      Key2 = v7;
      if ( v7 < 0 )
      {
        BiLogMessage(4LL, L"Failed open key %ws. Status: %x", L"\\Registry\\Machine", (unsigned int)v7);
        v6 = Handle;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        ObjectAttributes.Length = 48;
        v6 = Handle;
        ObjectAttributes.RootDirectory = Handle;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        RtlInitUnicodeString(&v22, (PCWSTR)(a2 + 12));
        LODWORD(v18) = 48;
        *((_QWORD *)&v18 + 1) = 0LL;
        DWORD2(v19) = 576;
        *(_QWORD *)&v19 = &v22;
        v20 = 0LL;
        v9 = BiAcquirePrivilege(18LL, &v15);
        Key2 = v9;
        if ( v9 < 0 )
        {
          BiLogMessage(
            4LL,
            L"Failed to acquire permissions to load hive. Status: %x",
            L"\\Registry\\Machine",
            (unsigned int)v9);
        }
        else
        {
          Key2 = ZwLoadKey2((__int64)&ObjectAttributes, (__int64)&v18);
          if ( Key2 < 0 )
            Key2 = ZwLoadKey2((__int64)&ObjectAttributes, (__int64)&v18);
          if ( Key2 < 0 )
            Key2 = ZwLoadKey((__int64)&ObjectAttributes, (__int64)&v18);
          BiReleasePrivilege(&v15);
          if ( Key2 < 0 )
          {
            v11 = 2LL;
            if ( Key2 != -1073741790 )
              v11 = 4LL;
            LODWORD(v14) = Key2;
            BiLogMessage(
              v11,
              L"Failed load key %ws. Flags: 0x%x File: %s Status: %x",
              SourceString,
              576LL,
              a2 + 12,
              v14,
              v15);
          }
          else
          {
            Key2 = ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
            if ( Key2 < 0 )
            {
              BiAcquirePrivilege(17LL, &v15);
              ZwUnloadKey((__int64)&ObjectAttributes, v12);
              BiReleasePrivilege(&v15);
              LODWORD(v13) = Key2;
              BiLogMessage(4LL, L"Failed open newly loaded key %ws. Flags: 0x%x Status: %x", SourceString, 576LL, v13);
            }
          }
        }
      }
    }
    else
    {
      Key2 = -1073741809;
    }
    if ( v6 )
      ZwClose(v6);
    if ( Key2 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
  }
  return (unsigned int)Key2;
}
