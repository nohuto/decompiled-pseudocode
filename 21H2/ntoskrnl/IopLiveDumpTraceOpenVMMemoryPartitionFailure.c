/*
 * XREFs of IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x14055BC94
 * Callers:
 *     IopLiveDumpOpenVMMemoryPartition @ 0x14055A6E4 (IopLiveDumpOpenVMMemoryPartition.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14055A67C (IopLiveDumpIsTracingEnabled.c)
 */

char __fastcall IopLiveDumpTraceOpenVMMemoryPartitionFailure(int a1)
{
  char result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v3; // [rsp+70h] [rbp+8h] BYREF

  v3 = a1;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v3;
    return EtwWriteEx(
             IopLiveDumpEtwRegHandle,
             &LIVEDUMP_EVENT_SIZING_WORKFLOW_OPEN_VM_MEMORY_PARTITION_FAILURE,
             0LL,
             0,
             0LL,
             0LL,
             1u,
             &UserData);
  }
  return result;
}
