/*
 * XREFs of IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x140504800
 * Callers:
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140894690 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 * Callees:
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1405034E0 (IopLiveDumpIsTracingEnabled.c)
 */

char __fastcall IopLiveDumpTraceOpenVMMemoryPartitionFailure(__int64 a1, int a2)
{
  char result; // al
  __int64 v3; // rcx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v5; // [rsp+50h] [rbp-28h]
  __int64 v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+88h] [rbp+10h] BYREF

  v7 = a2;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = v3 + 1040;
    v6 = 4LL;
    v5 = &v7;
    return EtwWriteEx(
             IopLiveDumpEtwRegHandle,
             &LIVEDUMP_EVENT_SIZING_WORKFLOW_OPEN_VM_MEMORY_PARTITION_FAILURE,
             0LL,
             0,
             0LL,
             0LL,
             2u,
             &UserData);
  }
  return result;
}
