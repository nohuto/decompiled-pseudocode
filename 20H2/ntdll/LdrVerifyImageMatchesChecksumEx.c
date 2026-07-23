/*
 * XREFs of LdrVerifyImageMatchesChecksumEx @ 0x18008AB90
 * Callers:
 *     LdrVerifyImageMatchesChecksum @ 0x1800CE7D0 (LdrVerifyImageMatchesChecksum.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     RtlImageRvaToVa @ 0x180086970 (RtlImageRvaToVa.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtQueryInformationFile @ 0x18009D2D0 (NtQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x18009D5B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D5F0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009D9F0 (NtCreateSection.c)
 *     NtMakeTemporaryObject @ 0x18009F280 (NtMakeTemporaryObject.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     LdrpGenericExceptionFilter @ 0x1800D57DC (LdrpGenericExceptionFilter.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800F5C7C (LdrVerifyMappedImageMatchesChecksum.c)
 */

NTSTATUS __cdecl LdrVerifyImageMatchesChecksumEx(HANDLE ImageFileHandle, PLDR_VERIFY_IMAGE_INFO VerifyInfo)
{
  LDR_SECTION_INFO *p_SectionInfo; // rsi
  ULONG AllocationAttributes; // eax
  char v6; // r13
  NTSTATUS result; // eax
  int v8; // edi
  int v9; // r13d
  NTSTATUS v10; // eax
  __int64 v11; // r15
  ULONG v12; // r8d
  char *v13; // rax
  POBJECT_ATTRIBUTES ObjA; // rax
  char v15; // [rsp+50h] [rbp-A8h]
  PVOID BaseAddress; // [rsp+58h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-98h] BYREF
  __int64 v18[2]; // [rsp+68h] [rbp-90h] BYREF
  PIMAGE_SECTION_HEADER LastRvaSection; // [rsp+78h] [rbp-80h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+80h] [rbp-78h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp-70h] BYREF
  __int64 v22; // [rsp+90h] [rbp-68h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-60h] BYREF
  _BYTE FileInformation[8]; // [rsp+A8h] [rbp-50h] BYREF
  ULONG FileLength; // [rsp+B0h] [rbp-48h]

  OutHeaders = (PIMAGE_NT_HEADERS)VerifyInfo;
  if ( VerifyInfo->Size != 64 || (VerifyInfo->Flags & 0xFFFFFFF8) != 0 )
    return -1073741584;
  p_SectionInfo = &VerifyInfo->SectionInfo;
  if ( (VerifyInfo->Flags & 2) == 0 )
    p_SectionInfo = (LDR_SECTION_INFO *)&unk_180123648;
  v18[1] = (__int64)p_SectionInfo;
  AllocationAttributes = p_SectionInfo->AllocationAttributes;
  LODWORD(v18[0]) = AllocationAttributes & 0x1000000;
  LODWORD(LastRvaSection) = AllocationAttributes & 0x1000000;
  v15 = (AllocationAttributes & 0x1000000) != 0;
  v6 = (unsigned __int8)ImageFileHandle & 1;
  result = NtCreateSection(
             &SectionHandle,
             p_SectionInfo->DesiredAccess,
             p_SectionInfo->ObjA,
             0LL,
             p_SectionInfo->SectionPageProtection,
             AllocationAttributes,
             ImageFileHandle);
  if ( result >= 0 )
  {
    BaseAddress = 0LL;
    ViewSize = 0LL;
    v8 = ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           0LL,
           0LL,
           &ViewSize,
           ViewShare,
           0,
           0x10u);
    if ( v8 < 0 )
      goto LABEL_30;
    if ( v6 )
    {
      v9 = v18[0];
    }
    else
    {
      v8 = NtQueryInformationFile(ImageFileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
      if ( v8 < 0 )
        goto LABEL_29;
      if ( !LdrVerifyMappedImageMatchesChecksum(BaseAddress, ViewSize, FileLength) )
        v8 = -1073741279;
      v9 = v18[0];
      if ( v8 < 0 )
        goto LABEL_29;
    }
    if ( (VerifyInfo->Flags & 5) != 0 )
    {
      v8 = RtlImageNtHeaderEx(0, BaseAddress, ViewSize, &OutHeaders);
      if ( v8 >= 0 )
      {
        if ( (VerifyInfo->Flags & 4) != 0 )
          VerifyInfo->ImageCharacteristics = OutHeaders->FileHeader.Characteristics;
        if ( (VerifyInfo->Flags & 1) != 0 && VerifyInfo->CallbackInfo.ImportCallbackRoutine )
        {
          v10 = RtlpImageDirectoryEntryToDataEx(
                  (unsigned __int64)BaseAddress,
                  v15,
                  1u,
                  (unsigned int *)&LastRvaSection,
                  (char **)v18);
          v11 = v18[0];
          if ( v10 < 0 )
            v11 = 0LL;
          v18[0] = v11;
          v22 = v11;
          if ( v11 )
          {
            LastRvaSection = 0LL;
            while ( 1 )
            {
              v12 = *(_DWORD *)(v11 + 12);
              if ( !v12 )
                break;
              if ( v9 )
                v13 = (char *)BaseAddress + v12;
              else
                v13 = (char *)RtlImageRvaToVa(OutHeaders, BaseAddress, v12, &LastRvaSection);
              ((void (__fastcall *)(PVOID, char *))VerifyInfo->CallbackInfo.ImportCallbackRoutine)(
                VerifyInfo->CallbackInfo.ImportCallbackParameter,
                v13);
              v11 += 20LL;
              v22 = v11;
            }
          }
        }
      }
    }
LABEL_29:
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
LABEL_30:
    if ( v8 < 0 || p_SectionInfo == (LDR_SECTION_INFO *)&unk_180123648 )
    {
      ObjA = p_SectionInfo->ObjA;
      if ( ObjA && (ObjA->Attributes & 0x10) != 0 )
        NtMakeTemporaryObject(SectionHandle);
      NtClose(SectionHandle);
    }
    else
    {
      p_SectionInfo->SectionHandle = SectionHandle;
    }
    return v8;
  }
  return result;
}
