/*
 * XREFs of _LdrVerifyImageMatchesChecksumEx@8 @ 0x4B32F0B0
 * Callers:
 *     _LdrVerifyImageMatchesChecksum@16 @ 0x4B32F040 (_LdrVerifyImageMatchesChecksum@16.c)
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationFile@20 @ 0x4B2F2A70 (_ZwQueryInformationFile@20.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _NtMakeTemporaryObject@4 @ 0x4B2F3A70 (_NtMakeTemporaryObject@4.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _LdrVerifyImageMatchesChecksumEx@8 @ 0x4B32F0B0 (_LdrVerifyImageMatchesChecksumEx@8.c)
 *     _LdrpGenericExceptionFilter@8 @ 0x4B334947 (_LdrpGenericExceptionFilter@8.c)
 *     _RtlImageRvaToVa@16 @ 0x4B34D310 (_RtlImageRvaToVa@16.c)
 *     _LdrVerifyMappedImageMatchesChecksum@12 @ 0x4B35A6EF (_LdrVerifyMappedImageMatchesChecksum@12.c)
 */

NTSTATUS __cdecl LdrVerifyImageMatchesChecksumEx(HANDLE ImageFileHandle, PLDR_VERIFY_IMAGE_INFO VerifyInfo)
{
  PLDR_VERIFY_IMAGE_INFO v2; // esi
  NTSTATUS result; // eax
  int v4; // edi
  _DWORD *v5; // eax
  ULONG v6; // ecx
  char *v7; // eax
  POBJECT_ATTRIBUTES ObjA; // eax
  SIZE_T v9; // [esp-14h] [ebp-8Ch]
  ULONG v10; // [esp+0h] [ebp-78h]
  SIZE_T v11; // [esp+0h] [ebp-78h]
  ULONG v12; // [esp+4h] [ebp-74h]
  ULONG v13; // [esp+8h] [ebp-70h]
  int v14; // [esp+10h] [ebp-68h]
  HANDLE FileHandle; // [esp+14h] [ebp-64h] BYREF
  PLDR_VERIFY_IMAGE_INFO v16; // [esp+18h] [ebp-60h]
  _DWORD *v17; // [esp+1Ch] [ebp-5Ch]
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+20h] [ebp-58h] BYREF
  BOOLEAN MappedAsImage[4]; // [esp+28h] [ebp-50h] BYREF
  unsigned int Size; // [esp+2Ch] [ebp-4Ch] BYREF
  HANDLE Size_4; // [esp+30h] [ebp-48h] BYREF
  LDR_SECTION_INFO *p_SectionInfo; // [esp+34h] [ebp-44h]
  PVOID BaseAddress; // [esp+38h] [ebp-40h] BYREF
  NTSTATUS v24; // [esp+3Ch] [ebp-3Ch]
  _BYTE FileInformation[8]; // [esp+40h] [ebp-38h] BYREF
  PVOID v26; // [esp+48h] [ebp-30h]
  CPPEH_RECORD ms_exc; // [esp+60h] [ebp-18h]

  FileHandle = ImageFileHandle;
  v2 = VerifyInfo;
  v16 = VerifyInfo;
  if ( VerifyInfo->Size != 40 || (VerifyInfo->Flags & 0xFFFFFFF8) != 0 )
    return -1073741584;
  if ( (VerifyInfo->Flags & 2) != 0 )
    p_SectionInfo = &VerifyInfo->SectionInfo;
  else
    p_SectionInfo = (LDR_SECTION_INFO *)&dword_4B2917E4;
  v14 = p_SectionInfo->AllocationAttributes & 0x1000000;
  MappedAsImage[0] = v14 != 0;
  IoStatusBlock.Information = (unsigned __int8)ImageFileHandle & 1;
  result = NtCreateSection(
             &Size_4,
             p_SectionInfo->DesiredAccess,
             p_SectionInfo->ObjA,
             0,
             p_SectionInfo->SectionPageProtection,
             p_SectionInfo->AllocationAttributes,
             ImageFileHandle);
  v24 = result;
  if ( result >= 0 )
  {
    BaseAddress = 0;
    Size = 0;
    ms_exc.registration.TryLevel = 0;
    HIDWORD(v9) = &Size;
    LODWORD(v9) = 0;
    v4 = ZwMapViewOfSection(
           Size_4,
           (HANDLE)0xFFFFFFFF,
           &BaseAddress,
           0LL,
           v9,
           (PLARGE_INTEGER)1,
           0,
           (SECTION_INHERIT)16,
           v10,
           v12);
    v24 = v4;
    if ( v4 >= 0 )
    {
      ms_exc.registration.TryLevel = 1;
      if ( LOBYTE(IoStatusBlock.Information) )
        goto LABEL_13;
      v4 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
      v24 = v4;
      if ( v4 >= 0 )
      {
        ms_exc.registration.TryLevel = 2;
        if ( !LdrVerifyMappedImageMatchesChecksum(v26, v11, v13) )
        {
          v4 = -1073741279;
          v24 = -1073741279;
        }
        ms_exc.registration.TryLevel = 1;
        if ( v4 >= 0 )
        {
LABEL_13:
          if ( (VerifyInfo->Flags & 5) != 0 )
          {
            ms_exc.registration.TryLevel = 3;
            v4 = RtlImageNtHeaderEx(0, BaseAddress, Size, (PIMAGE_NT_HEADERS *)&IoStatusBlock.Information);
            v24 = v4;
            if ( v4 >= 0 )
            {
              if ( (VerifyInfo->Flags & 4) != 0 )
                VerifyInfo->ImageCharacteristics = *(_WORD *)(IoStatusBlock.Information + 22);
              if ( (VerifyInfo->Flags & 1) != 0 )
              {
                if ( VerifyInfo->CallbackInfo.ImportCallbackRoutine )
                {
                  v5 = RtlImageDirectoryEntryToData(BaseAddress, MappedAsImage[0], 1u, (PULONG)&FileHandle);
                  v17 = v5;
                  if ( v5 )
                  {
                    *(_DWORD *)MappedAsImage = 0;
                    while ( 1 )
                    {
                      v6 = v5[3];
                      if ( !v6 )
                        break;
                      if ( v14 )
                        v7 = (char *)BaseAddress + v6;
                      else
                        v7 = (char *)RtlImageRvaToVa(
                                       (PIMAGE_NT_HEADERS)IoStatusBlock.Information,
                                       BaseAddress,
                                       v6,
                                       (PIMAGE_SECTION_HEADER *)MappedAsImage);
                      ((void (__thiscall *)(PLDR_IMPORT_MODULE_CALLBACK, PVOID, char *))v2->CallbackInfo.ImportCallbackRoutine)(
                        v2->CallbackInfo.ImportCallbackRoutine,
                        v2->CallbackInfo.ImportCallbackParameter,
                        v7);
                      v5 = v17 + 5;
                      v17 += 5;
                      v2 = v16;
                    }
                  }
                }
              }
            }
            ms_exc.registration.TryLevel = 1;
          }
        }
      }
      ms_exc.registration.TryLevel = 0;
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
    }
    ms_exc.registration.TryLevel = -2;
    if ( v4 < 0 || p_SectionInfo == (LDR_SECTION_INFO *)&dword_4B2917E4 )
    {
      ObjA = p_SectionInfo->ObjA;
      if ( ObjA && (ObjA->Attributes & 0x10) != 0 )
        NtMakeTemporaryObject(Size_4);
      NtClose(Size_4);
    }
    else
    {
      p_SectionInfo->SectionHandle = Size_4;
    }
    return v4;
  }
  return result;
}
