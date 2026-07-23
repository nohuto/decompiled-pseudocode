/*
 * XREFs of IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x140508D08
 * Callers:
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140897A70 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140508C5C (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure()
{
  char result; // al
  __int64 v1; // rcx
  int v2; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  __int64 v5; // [rsp+60h] [rbp-18h]

  v2 = -1073741801;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = v1 + 1040;
    v5 = 4LL;
    v4 = &v2;
    return EtwWriteEx(
             IopLiveDumpEtwRegHandle,
             &LIVEDUMP_EVENT_SIZING_WORKFLOW_BUFFER_ALLOCATION_FROM_VM_MEMORY_PARTITION_FAILURE,
             0LL,
             0,
             0LL,
             0LL,
             2u,
             &UserData);
  }
  return result;
}
