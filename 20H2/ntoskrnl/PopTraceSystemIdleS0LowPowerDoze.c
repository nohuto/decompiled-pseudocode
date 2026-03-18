/*
 * XREFs of PopTraceSystemIdleS0LowPowerDoze @ 0x1408EEF54
 * Callers:
 *     PopIdleAoAcDozeToS4 @ 0x1408F7D60 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

void PopTraceSystemIdleS0LowPowerDoze()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE) )
    {
      v1 = 0;
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v1;
      UserData.Size = 4;
      EtwWrite(v0, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE, 0LL, 1u, &UserData);
    }
  }
}
