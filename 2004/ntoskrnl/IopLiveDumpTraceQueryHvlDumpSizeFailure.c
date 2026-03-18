/*
 * XREFs of IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x140504A10
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x1409A941C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1405034E0 (IopLiveDumpIsTracingEnabled.c)
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
