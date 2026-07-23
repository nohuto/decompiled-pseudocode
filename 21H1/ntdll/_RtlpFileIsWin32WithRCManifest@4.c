/*
 * XREFs of _RtlpFileIsWin32WithRCManifest@4 @ 0x4B353DB4
 * Callers:
 *     _RtlGetFileMUIPath@28 @ 0x4B3519E0 (_RtlGetFileMUIPath@28.c)
 * Callees:
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _LdrpAccessResourceDataNoMultipleLanguage@16 @ 0x4B2BD9F0 (_LdrpAccessResourceDataNoMultipleLanguage@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlDosPathNameToRelativeNtPathName_U@16 @ 0x4B2D1BE0 (_RtlDosPathNameToRelativeNtPathName_U@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _NtCreateFile@44 @ 0x4B2F2ED0 (_NtCreateFile@44.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

char __thiscall RtlpFileIsWin32WithRCManifest(PCWSTR DosFileName)
{
  char v1; // bl
  wchar_t *Buffer; // edi
  HANDLE ContainingDirectory; // ecx
  NTSTATUS v4; // eax
  PRTLP_CURDIR_REF CurDirRef; // esi
  NTSTATUS v6; // esi
  unsigned int v7; // esi
  SIZE_T v9; // [esp-14h] [ebp-94h]
  ULONG v10; // [esp+0h] [ebp-80h]
  ULONG v11; // [esp+4h] [ebp-7Ch]
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+Ch] [ebp-74h] BYREF
  int v13; // [esp+14h] [ebp-6Ch] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+18h] [ebp-68h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [esp+30h] [ebp-50h] BYREF
  SIZE_T CommitSize; // [esp+40h] [ebp-40h] BYREF
  int v17; // [esp+48h] [ebp-38h] BYREF
  int v18; // [esp+4Ch] [ebp-34h] BYREF
  NTSTATUS v19; // [esp+50h] [ebp-30h]
  _UNICODE_STRING NtFileName; // [esp+54h] [ebp-2Ch] BYREF
  int v21; // [esp+5Ch] [ebp-24h] BYREF
  HANDLE SectionHandle; // [esp+60h] [ebp-20h] BYREF
  HANDLE FileHandle; // [esp+64h] [ebp-1Ch] BYREF
  PVOID BaseAddress; // [esp+68h] [ebp-18h] BYREF
  char v25; // [esp+6Fh] [ebp-11h]
  _DWORD v26[3]; // [esp+70h] [ebp-10h] BYREF

  v1 = 0;
  v25 = 0;
  FileHandle = 0;
  BaseAddress = 0;
  v21 = 0;
  if ( RtlDosPathNameToRelativeNtPathName_U(DosFileName, &NtFileName, 0, &RelativeName) )
  {
    Buffer = NtFileName.Buffer;
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = RelativeName.ContainingDirectory;
      NtFileName = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0;
    }
    ObjectAttributes.Length = 24;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    ObjectAttributes.RootDirectory = Buffer != 0 ? ContainingDirectory : 0;
    ObjectAttributes.ObjectName = &NtFileName;
    v4 = NtCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0, 0, 5u, 1u, 0, 0, 0);
    v19 = v4;
    if ( Buffer )
    {
      CurDirRef = RelativeName.CurDirRef;
      if ( RelativeName.CurDirRef && !_InterlockedExchangeAdd(&RelativeName.CurDirRef->ReferenceCount, 0xFFFFFFFF) )
      {
        NtClose(CurDirRef->DirectoryHandle);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, CurDirRef);
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
      v4 = v19;
    }
    if ( v4 >= 0 )
    {
      v25 = 1;
      if ( NtCreateSection(&SectionHandle, 0xF0005u, 0, 0, 2u, 0x8000000u, FileHandle) >= 0 )
      {
        CommitSize = 0LL;
        HIDWORD(v9) = &v18;
        LODWORD(v9) = &CommitSize;
        v18 = 0;
        v6 = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFF,
               &BaseAddress,
               0LL,
               v9,
               (PLARGE_INTEGER)1,
               0,
               (SECTION_INHERIT)8,
               v10,
               v11);
        NtClose(SectionHandle);
        if ( v6 >= 0 )
        {
          if ( RtlImageNtHeader(BaseAddress) )
          {
            v26[0] = L"MUI";
            v26[2] = 0;
            v7 = (unsigned int)BaseAddress | 1;
            v26[1] = 1;
            if ( LdrpSearchResourceSection_U((PVOID)((unsigned int)BaseAddress | 1), (int)v26, 3u, 0x30u, (int)&v17) >= 0
              && LdrpAccessResourceDataNoMultipleLanguage(v7, v17, (unsigned int *)&v21, &v13) >= 0
              && *(_DWORD *)v21 == -20054323 )
            {
              v1 = 1;
            }
          }
        }
      }
    }
  }
  if ( BaseAddress )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
  if ( v25 )
    NtClose(FileHandle);
  return v1;
}
