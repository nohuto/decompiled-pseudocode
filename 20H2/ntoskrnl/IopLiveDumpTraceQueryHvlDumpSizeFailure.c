/*
 * XREFs of IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x140508420
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x1409AF38C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140506EF0 (IopLiveDumpIsTracingEnabled.c)
 */

char __fastcall IopLiveDumpTraceQueryHvlDumpSizeFailure(int a1)
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
             &LIVEDUMP_EVENT_SIZING_WORKFLOW_QUERY_HVL_DUMP_SIZE_FAILURE,
             0LL,
             0,
             0LL,
             0LL,
             1u,
             &UserData);
  }
  return result;
}
