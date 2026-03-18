/*
 * XREFs of MiZeroPageFileFirstPage @ 0x14079F688
 * Callers:
 *     MiCreatePagingFile @ 0x14079E69C (MiCreatePagingFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     MiSynchronousPageWrite @ 0x1403BBD64 (MiSynchronousPageWrite.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall MiZeroPageFileFirstPage(struct _FILE_OBJECT *a1)
{
  NTSTATUS Status; // ebx
  __int64 v4; // [rsp+40h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK v6; // [rsp+60h] [rbp+7h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+70h] [rbp+17h] BYREF
  __int64 v8; // [rsp+A0h] [rbp+47h]

  *(_DWORD *)&MemoryDescriptorList.Size = 1073872952;
  v4 = 0LL;
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.ByteOffset = 0;
  v8 = qword_140C4ECC0;
  memset(&Event, 0, sizeof(Event));
  MemoryDescriptorList.ByteCount = 4096;
  v6 = 0LL;
  memset(&MemoryDescriptorList.MdlFlags + 1, 0, 28);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  Status = MiSynchronousPageWrite(a1, &MemoryDescriptorList, &v4, &Event, 0, 0LL, &v6);
  if ( Status >= 0 )
  {
    KeWaitForSingleObject(&Event, WrVirtualMemory, 0, 0, 0LL);
    Status = v6.Status;
  }
  if ( (MemoryDescriptorList.MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
  return (unsigned int)Status;
}
