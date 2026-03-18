/*
 * XREFs of SmKmStoreFileDelete @ 0x14092EF6C
 * Callers:
 *     SmKmStoreFileCreate @ 0x14092E80C (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x14092ECBC (SmKmStoreFileCreateForIoType.c)
 *     SmcCacheCleanup @ 0x14092FC18 (SmcCacheCleanup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     IoSetThreadHardErrorMode @ 0x14023DB40 (IoSetThreadHardErrorMode.c)
 *     ZwSetInformationFile @ 0x1403F8650 (ZwSetInformationFile.c)
 */

__int64 __fastcall SmKmStoreFileDelete(__int64 a1)
{
  BOOLEAN v2; // al
  void *v3; // rcx
  BOOLEAN v4; // si
  NTSTATUS Status; // eax
  unsigned int v6; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  char FileInformation; // [rsp+50h] [rbp+8h] BYREF

  IoStatusBlock = 0LL;
  v2 = IoSetThreadHardErrorMode(0);
  v3 = *(void **)a1;
  FileInformation = 1;
  v4 = v2;
  Status = ZwSetInformationFile(v3, &IoStatusBlock, &FileInformation, 1u, FileDispositionInformation);
  v6 = 0;
  if ( Status == 259 )
  {
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 8) + 152LL), Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status < 0 )
    v6 = Status;
  IoSetThreadHardErrorMode(v4);
  return v6;
}
