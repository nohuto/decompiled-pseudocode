/*
 * XREFs of ProcLibTraceGetPlatformIdleStates @ 0x1C001D808
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001D5F0 (ProcLibTraceControlCallback.c)
 *     QueryPepCapabilites @ 0x1C00359B0 (QueryPepCapabilites.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 */

BOOLEAN __fastcall ProcLibTraceGetPlatformIdleStates(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rbx
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  v1 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_PLATFORM_IDLE_STATES;
  if ( a1 )
    v1 = &PPM_ETW_GET_PLATFORM_IDLE_STATES_RUNDOWN;
  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v1);
  if ( result )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (unsigned __int64)&dword_1C0013994;
    UserData.Size = 4;
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v1, 0LL, 1u, &UserData);
  }
  return result;
}
