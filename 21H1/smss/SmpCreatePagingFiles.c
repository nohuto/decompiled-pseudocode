/*
 * XREFs of SmpCreatePagingFiles @ 0x14000768C
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x140006C80 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpBuildFilesStringFromList @ 0x140006D5C (SmpBuildFilesStringFromList.c)
 *     SmpSaveOldPageFiles @ 0x140006E48 (SmpSaveOldPageFiles.c)
 *     SmpCheckForCrashDump @ 0x140006F78 (SmpCheckForCrashDump.c)
 *     SmpCreatePagingFileDescriptor @ 0x140007260 (SmpCreatePagingFileDescriptor.c)
 *     SmpCleanupStalePageFiles @ 0x1400074EC (SmpCleanupStalePageFiles.c)
 *     SmpRecordCreatedPageFiles @ 0x140007560 (SmpRecordCreatedPageFiles.c)
 *     SmpEnableSwapOnPagingFiles @ 0x1400078C4 (SmpEnableSwapOnPagingFiles.c)
 *     SmpDeallocSavedRegistryEntry @ 0x1400092F0 (SmpDeallocSavedRegistryEntry.c)
 *     SmpCreateVolumeDescriptors @ 0x14000AE80 (SmpCreateVolumeDescriptors.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000BEDC (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpProcessPagefileDescriptor @ 0x14000C59C (SmpProcessPagefileDescriptor.c)
 *     SmpAdjustPagefileSizeforLowStorage @ 0x14000E764 (SmpAdjustPagefileSizeforLowStorage.c)
 *     SmpCreateEmergencyPagingFile @ 0x140011C44 (SmpCreateEmergencyPagingFile.c)
 */

void SmpCreatePagingFiles()
{
  int v0; // edx
  signed __int32 v1; // ecx
  __int64 v2; // rax
  struct _UNICODE_STRING *i; // rbx
  PVOID *v4; // rbx
  PVOID *v5; // rdi
  PVOID *v6; // rax
  PVOID **v7; // rcx
  int VolumeDescriptors; // eax
  __int64 v9; // rcx
  signed __int32 v10; // ecx
  PVOID *v11; // rsi
  char v12; // di
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  struct _UNICODE_STRING v16[2]; // [rsp+20h] [rbp-28h] BYREF
  int SystemInformation; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  SystemInformation = 0;
  v16[0] = 0LL;
  v0 = SmpBuildFilesStringFromList((const UNICODE_STRING *)&SmpExistingPageFilesList, v16);
  if ( v0 < 0 )
  {
    v1 = _InterlockedIncrement(&SmpPagefileLogIndex) % 32;
    v2 = 2LL * v1;
    *((_DWORD *)&SmpPagefileLog + 4 * v1) = 2885;
LABEL_3:
    *((_DWORD *)&SmpPagefileLog + 2 * v2 + 1) = v0;
    *((_QWORD *)&SmpPagefileLog + v2 + 1) = 0LL;
    goto LABEL_32;
  }
  SmpSaveOldPageFiles();
  for ( i = (struct _UNICODE_STRING *)SmpExistingPageFilesList;
        i != (struct _UNICODE_STRING *)&SmpExistingPageFilesList;
        i = *(struct _UNICODE_STRING **)&i->Length )
  {
    SmpCheckForCrashDump(i + 1);
  }
  SystemInformation = 2;
  NtSetSystemInformation(SystemCrashDumpStateInformation, &SystemInformation, 4u);
  v4 = (PVOID *)SmpPagingFileList;
  while ( v4 != &SmpPagingFileList )
  {
    v5 = v4;
    SmpCreatePagingFileDescriptor((__int128 *)v4 + 1);
    v6 = (PVOID *)*v4;
    v4 = v6;
    if ( v6[1] != v5 || (v7 = (PVOID **)v5[1], *v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    SmpDeallocSavedRegistryEntry(v5);
  }
  if ( !SmpNumberOfPagefileDescriptors && !SmpRegistrySpecifierPresent )
  {
    SmpCleanupStalePageFiles();
    goto LABEL_32;
  }
  VolumeDescriptors = SmpCreateVolumeDescriptors();
  v0 = VolumeDescriptors;
  if ( VolumeDescriptors < 0 )
  {
    v10 = _InterlockedIncrement(&SmpPagefileLogIndex) % 32;
    v2 = 2LL * v10;
    *((_DWORD *)&SmpPagefileLog + 4 * v10) = 2967;
    goto LABEL_3;
  }
  SmpAdjustPagefileSizeforLowStorage(v9, (unsigned int)VolumeDescriptors);
  v11 = (PVOID *)SmpPagingFileDescriptorList;
  v12 = 0;
  if ( SmpPagingFileDescriptorList != &SmpPagingFileDescriptorList )
  {
    do
    {
      v13 = SmpProcessPagefileDescriptor(v11);
      v11 = (PVOID *)*v11;
      if ( v13 >= 0 )
        v12 = 1;
    }
    while ( v11 != &SmpPagingFileDescriptorList );
    if ( v12 )
      goto LABEL_24;
  }
  if ( (int)SmpCreateEmergencyPagingFile() >= 0 )
  {
LABEL_24:
    v14 = SmpCreateWorkingSetSwapPagingFile(&v18);
    if ( v14 < 0 )
    {
      if ( v14 != -1073741710 || SmpNumberOfPagefilesCreated != 1 )
        goto LABEL_31;
      v15 = 63LL;
      goto LABEL_30;
    }
    if ( (*(_BYTE *)(v18 + 16) & 0x10) != 0 )
    {
      v15 = *(unsigned __int16 *)(v18 + 28);
LABEL_30:
      SmpEnableSwapOnPagingFiles(&SmpPagingFileDescriptorList, v15);
    }
  }
LABEL_31:
  SmpCleanupStalePageFiles();
  SmpRecordCreatedPageFiles(v12 == 0, (__int64)v16);
LABEL_32:
  if ( v16[0].Buffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v16[0].Buffer);
}
