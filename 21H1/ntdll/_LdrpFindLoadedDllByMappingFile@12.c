/*
 * XREFs of _LdrpFindLoadedDllByMappingFile@12 @ 0x4B2E5721
 * Callers:
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 *     _LdrpFindLoadedDllInternal@20 @ 0x4B2E9DE3 (_LdrpFindLoadedDllInternal@20.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _LdrpFindLoadedDllByMapping@16 @ 0x4B2E5872 (_LdrpFindLoadedDllByMapping@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtOpenFile@24 @ 0x4B2F2CB0 (_NtOpenFile@24.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 */

NTSTATUS __fastcall LdrpFindLoadedDllByMappingFile(UNICODE_STRING *a1, int a2, int a3)
{
  ULONG v4; // eax
  NTSTATUS LoadedDllByMapping; // esi
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+24h] [ebp-20h] BYREF
  int v9; // [esp+2Ch] [ebp-18h] BYREF
  HANDLE FileHandle; // [esp+30h] [ebp-14h] BYREF
  HANDLE Handle; // [esp+34h] [ebp-10h] BYREF
  unsigned int v12; // [esp+38h] [ebp-Ch] BYREF
  unsigned int v13; // [esp+3Ch] [ebp-8h] BYREF

  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  v4 = 64;
  if ( !LdrpUseImpersonatedDeviceMap )
    v4 = 2112;
  ObjectAttributes.Attributes = v4;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  LoadedDllByMapping = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( LoadedDllByMapping >= 0 )
  {
    LoadedDllByMapping = NtCreateSection(&Handle, 4, 0, 0, 2, 0x8000000, FileHandle);
    if ( LoadedDllByMapping >= 0 )
    {
      v13 = 0;
      v12 = 0;
      LoadedDllByMapping = ZwMapViewOfSection(Handle, -1, &v13, 0, 0, 0, &v12, 1, 0, 2);
      if ( LoadedDllByMapping >= 0 )
      {
        LoadedDllByMapping = RtlImageNtHeaderEx(0, v13, v12, 0, &v9);
        if ( LoadedDllByMapping >= 0 )
          LoadedDllByMapping = LdrpFindLoadedDllByMapping(a2, a3);
        NtUnmapViewOfSection(-1, v13);
      }
      NtClose(Handle);
    }
    NtClose(FileHandle);
  }
  return LoadedDllByMapping;
}
