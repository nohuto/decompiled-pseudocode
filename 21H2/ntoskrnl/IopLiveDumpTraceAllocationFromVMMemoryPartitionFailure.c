/*
 * XREFs of IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x14055A8B4
 * Callers:
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14093BBD8 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14055A67C (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure()
{
  char result; // al
  int v1; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  v1 = -1073741801;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v1;
    return EtwWriteEx(
             IopLiveDumpEtwRegHandle,
             &LIVEDUMP_EVENT_SIZING_WORKFLOW_BUFFER_ALLOCATION_FROM_VM_MEMORY_PARTITION_FAILURE,
             0LL,
             0,
             0LL,
             0LL,
             1u,
             &UserData);
  }
  return result;
}
