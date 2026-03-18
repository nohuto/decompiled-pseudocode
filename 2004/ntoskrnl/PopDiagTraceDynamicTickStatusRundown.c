/*
 * XREFs of PopDiagTraceDynamicTickStatusRundown @ 0x14064F130
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14064EB10 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     KeGetDynamicTickDisableReason @ 0x1402784FC (KeGetDynamicTickDisableReason.c)
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

void PopDiagTraceDynamicTickStatusRundown()
{
  REGHANDLE v0; // rbx
  char DynamicTickDisableReason; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DYNAMIC_TICK_STATUS_RUNDOWN) )
    {
      UserData.Reserved = 0;
      DynamicTickDisableReason = KeGetDynamicTickDisableReason();
      UserData.Size = 1;
      UserData.Ptr = (ULONGLONG)&DynamicTickDisableReason;
      EtwWrite(v0, &POP_ETW_EVENT_DYNAMIC_TICK_STATUS_RUNDOWN, 0LL, 1u, &UserData);
    }
  }
}
