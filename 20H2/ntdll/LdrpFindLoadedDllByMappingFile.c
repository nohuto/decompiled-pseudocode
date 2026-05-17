/*
 * XREFs of LdrpFindLoadedDllByMappingFile @ 0x1800745A0
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x18001DBEC (LdrpFindLoadedDllInternal.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     LdrpFindLoadedDllByMapping @ 0x1800747C4 (LdrpFindLoadedDllByMapping.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D5B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D5F0 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x18009D710 (NtOpenFile.c)
 *     NtCreateSection @ 0x18009D9F0 (NtCreateSection.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMappingFile(UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  ULONG v4; // eax
  int LoadedDllByMapping; // ebx
  HANDLE Handle; // [rsp+50h] [rbp-19h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-11h] BYREF
  __int64 v10; // [rsp+60h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int64 v13; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int64 v14; // [rsp+E8h] [rbp+7Fh] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  v4 = 64;
  if ( !LdrpUseImpersonatedDeviceMap )
    v4 = 2112;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = v4;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LoadedDllByMapping = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( LoadedDllByMapping >= 0 )
  {
    LoadedDllByMapping = NtCreateSection(&Handle, 4LL, 0LL, 0LL, 2, 0x8000000, FileHandle);
    if ( LoadedDllByMapping >= 0 )
    {
      v13 = 0LL;
      v14 = 0LL;
      LoadedDllByMapping = ZwMapViewOfSection(Handle, -1LL, &v13, 0LL, 0LL, 0LL, &v14, 1, 0, 2);
      if ( LoadedDllByMapping >= 0 )
      {
        LoadedDllByMapping = RtlImageNtHeaderEx(0, v13, v14, &v10);
        if ( LoadedDllByMapping >= 0 )
          LoadedDllByMapping = LdrpFindLoadedDllByMapping(v13, v10, a2, a3);
        NtUnmapViewOfSection(-1LL, v13);
      }
      NtClose(Handle);
    }
    NtClose(FileHandle);
  }
  return (unsigned int)LoadedDllByMapping;
}
