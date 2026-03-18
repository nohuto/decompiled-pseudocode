/*
 * XREFs of IopCreateRootDirectories @ 0x140A6ED4C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     NtCreateDirectoryObject @ 0x1406F27C0 (NtCreateDirectoryObject.c)
 *     IopCreateUmdfDirectory @ 0x140A4D578 (IopCreateUmdfDirectory.c)
 */

bool IopCreateRootDirectories()
{
  bool result; // al
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  int v2; // [rsp+30h] [rbp-30h]
  int v3; // [rsp+34h] [rbp-2Ch]
  __int64 v4; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v6; // [rsp+48h] [rbp-18h]
  int v7; // [rsp+4Ch] [rbp-14h]
  __int128 v8; // [rsp+50h] [rbp-10h]
  HANDLE Handle; // [rsp+70h] [rbp+10h] BYREF

  Handle = 0LL;
  v3 = 0;
  v7 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Driver");
  v4 = 0LL;
  p_DestinationString = &DestinationString;
  v2 = 48;
  v6 = 528;
  v8 = 0LL;
  result = 0;
  if ( (int)NtCreateDirectoryObject((__int64)&Handle) >= 0 )
  {
    ObCloseHandle(Handle, 0);
    RtlInitUnicodeString(&DestinationString, L"\\FileSystem");
    if ( (int)NtCreateDirectoryObject((__int64)&Handle) >= 0 )
    {
      ObCloseHandle(Handle, 0);
      RtlInitUnicodeString(&DestinationString, L"\\FileSystem\\Filters");
      if ( (int)NtCreateDirectoryObject((__int64)&Handle) >= 0 )
      {
        ObCloseHandle(Handle, 0);
        if ( (int)IopCreateUmdfDirectory() >= 0 )
          return 1;
      }
    }
  }
  return result;
}
