/*
 * XREFs of PopDiagTraceSetDeepSleepConstraint @ 0x1402DEF70
 * Callers:
 *     PopDeepSleepSetDisengageReason @ 0x1402DED68 (PopDeepSleepSetDisengageReason.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSetDeepSleepConstraint(int a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v3; // [rsp+70h] [rbp+8h] BYREF

  v3 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_DEEP_SLEEP_SET_CONSTRAINT) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 4;
      EtwWriteEx(v1, &POP_ETW_DEEP_SLEEP_SET_CONSTRAINT, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
