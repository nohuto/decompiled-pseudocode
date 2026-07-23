/*
 * XREFs of NtAllocateReserveObject @ 0x1406124D0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtAllocateReserveObject(
        PHANDLE MemoryReserveHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        MEMORY_RESERVE_TYPE Type)
{
  __int64 v3; // r14
  char PreviousMode; // si
  __int64 v6; // rcx
  PADAPTER_OBJECT *p_DmaAdapter; // rcx
  NTSTATUS result; // eax
  PADAPTER_OBJECT v9; // rbx
  NTSTATUS inserted; // edx
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+98h] [rbp+20h] BYREF

  v3 = Type;
  v11 = 0LL;
  DmaAdapter = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MemoryReserveHandle < 0x7FFFFFFF0000LL )
      v6 = (__int64)MemoryReserveHandle;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  if ( (unsigned int)Type > MemoryReserveIoCompletion )
    return -1073741811;
  p_DmaAdapter = &DmaAdapter;
  LOBYTE(p_DmaAdapter) = PreviousMode;
  result = ObCreateObjectEx(
             (_DWORD)p_DmaAdapter,
             (unsigned int)*(&PspMemoryReserveObjectTypes + (int)Type),
             (_DWORD)ObjectAttributes,
             PreviousMode);
  if ( result >= 0 )
  {
    v9 = DmaAdapter;
    memset(DmaAdapter, 0, PspMemoryReserveObjectSizes[v3]);
    if ( (_DWORD)v3 == 1 )
    {
      LODWORD(v9[1].DmaOperations) = 4;
      *(_QWORD *)&v9[4].Version = PspIoMiniPacketCallbackRoutine;
      v9[4].DmaOperations = (_DMA_OPERATIONS *)v9;
      LOBYTE(v9[5].Version) = 0;
    }
    inserted = ObInsertObjectEx(v9, 0LL, 0, 0LL, (__int64)&v11);
    LODWORD(DmaAdapter) = inserted;
    if ( inserted >= 0 )
      *MemoryReserveHandle = (HANDLE)v11;
    return inserted;
  }
  return result;
}
