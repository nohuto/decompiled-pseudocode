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

NTSTATUS __fastcall LdrpFindLoadedDllByMappingFile(_UNICODE_STRING *a1, int a2, int a3)
{
  ULONG v4; // eax
  NTSTATUS LoadedDllByMapping; // esi
  SIZE_T v7; // [esp-14h] [ebp-58h]
  ULONG v8; // [esp+0h] [ebp-44h]
  ULONG v9; // [esp+4h] [ebp-40h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-38h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+24h] [ebp-20h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [esp+2Ch] [ebp-18h] BYREF
  HANDLE FileHandle; // [esp+30h] [ebp-14h] BYREF
  HANDLE SectionHandle; // [esp+34h] [ebp-10h] BYREF
  ULONG64 Size; // [esp+38h] [ebp-Ch] BYREF

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
    LoadedDllByMapping = NtCreateSection(&SectionHandle, 4u, 0, 0, 2u, 0x8000000u, FileHandle);
    if ( LoadedDllByMapping >= 0 )
    {
      HIDWORD(v7) = &Size;
      LODWORD(v7) = 0;
      Size = 0LL;
      LoadedDllByMapping = ZwMapViewOfSection(
                             SectionHandle,
                             (HANDLE)0xFFFFFFFF,
                             (PVOID *)&Size + 1,
                             0LL,
                             v7,
                             (PLARGE_INTEGER)1,
                             0,
                             ViewUnmap,
                             v8,
                             v9);
      if ( LoadedDllByMapping >= 0 )
      {
        LoadedDllByMapping = RtlImageNtHeaderEx(0, (PVOID)HIDWORD(Size), (unsigned int)Size, &OutHeaders);
        if ( LoadedDllByMapping >= 0 )
          LoadedDllByMapping = LdrpFindLoadedDllByMapping(a2, a3);
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, (PVOID)HIDWORD(Size));
      }
      NtClose(SectionHandle);
    }
    NtClose(FileHandle);
  }
  return LoadedDllByMapping;
}
