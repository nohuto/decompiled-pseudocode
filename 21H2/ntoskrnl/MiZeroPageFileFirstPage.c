/*
 * XREFs of MiZeroPageFileFirstPage @ 0x1407B7B28
 * Callers:
 *     MiCreatePagingFile @ 0x1407B6B3C (MiCreatePagingFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     MiSynchronousPageWrite @ 0x1403C0184 (MiSynchronousPageWrite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall MiZeroPageFileFirstPage(struct _FILE_OBJECT *a1)
{
  NTSTATUS v2; // ebx
  __int64 v4; // [rsp+40h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-11h] BYREF
  __int128 v6; // [rsp+60h] [rbp+7h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+70h] [rbp+17h] BYREF
  __int64 v8; // [rsp+A0h] [rbp+47h]

  *(_DWORD *)&MemoryDescriptorList.Size = 1073872952;
  v4 = 0LL;
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.ByteOffset = 0;
  v8 = qword_140C4EDC0;
  memset(&Event, 0, sizeof(Event));
  MemoryDescriptorList.ByteCount = 4096;
  v6 = 0LL;
  memset(&MemoryDescriptorList.MdlFlags + 1, 0, 28);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v2 = MiSynchronousPageWrite(a1, (__int64)&MemoryDescriptorList, &v4, (__int64)&Event, 0, 0LL, (__int64)&v6);
  if ( v2 >= 0 )
  {
    KeWaitForSingleObject(&Event, WrVirtualMemory, 0, 0, 0LL);
    v2 = v6;
  }
  if ( (MemoryDescriptorList.MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
  return (unsigned int)v2;
}
