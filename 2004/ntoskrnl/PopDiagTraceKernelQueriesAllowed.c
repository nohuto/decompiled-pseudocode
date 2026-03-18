/*
 * XREFs of PopDiagTraceKernelQueriesAllowed @ 0x14076709C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceKernelQueriesAllowed(unsigned __int8 a1)
{
  int v1; // edi
  REGHANDLE v2; // rbx
  int v3; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  v1 = a1;
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_KERNEL_QUERY_ALLOWED) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      v3 = v1;
      UserData.Size = 4;
      EtwWrite(v2, &POP_ETW_EVENT_KERNEL_QUERY_ALLOWED, 0LL, 1u, &UserData);
    }
  }
}
