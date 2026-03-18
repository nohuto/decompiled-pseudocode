/*
 * XREFs of PopDiagTraceHibernateErrorStatus @ 0x140A6BB90
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceHibernateErrorStatus(int a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_HIBERNATE_STATUS) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 4;
      EtwWrite(v1, &POP_ETW_EVENT_HIBERNATE_STATUS, 0LL, 1u, &UserData);
    }
  }
}
