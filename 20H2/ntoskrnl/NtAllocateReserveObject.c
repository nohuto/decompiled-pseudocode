/*
 * XREFs of NtAllocateReserveObject @ 0x1406D5520
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     ObCreateObjectEx @ 0x140601B80 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtAllocateReserveObject(
        PHANDLE MemoryReserveHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        MEMORY_RESERVE_TYPE Type)
{
  __int64 v3; // r14
  char PreviousMode; // si
  __int64 v6; // rcx
  NTSTATUS result; // eax
  PADAPTER_OBJECT v8; // rbx
  NTSTATUS inserted; // edx
  __int64 v10; // [rsp+20h] [rbp-58h]
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
  result = ObCreateObjectEx(
             PreviousMode,
             *(&PspMemoryReserveObjectTypes + (int)Type),
             (int)ObjectAttributes,
             PreviousMode,
             v10,
             PspMemoryReserveObjectSizes[Type],
             0,
             0,
             &DmaAdapter,
             0LL);
  if ( result >= 0 )
  {
    v8 = DmaAdapter;
    memset(DmaAdapter, 0, PspMemoryReserveObjectSizes[v3]);
    if ( (_DWORD)v3 == 1 )
    {
      LODWORD(v8[1].DmaOperations) = 4;
      *(_QWORD *)&v8[4].Version = PspIoMiniPacketCallbackRoutine;
      v8[4].DmaOperations = (_DMA_OPERATIONS *)v8;
      LOBYTE(v8[5].Version) = 0;
    }
    inserted = ObInsertObjectEx(v8, 0LL, 0xF0003u, 0, 0, 0LL, &v11);
    LODWORD(DmaAdapter) = inserted;
    if ( inserted >= 0 )
      *MemoryReserveHandle = (HANDLE)v11;
    return inserted;
  }
  return result;
}
