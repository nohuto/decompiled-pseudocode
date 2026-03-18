/*
 * XREFs of HalpTscTraceStatus @ 0x1404BFDC0
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x14039D054 (HalpTscAdvSynchLeader.c)
 *     HalpTscFallbackToPlatformSource @ 0x1404BFCC8 (HalpTscFallbackToPlatformSource.c)
 * Callees:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

void __fastcall HalpTscTraceStatus(PCEVENT_DESCRIPTOR EventDescriptor, int a2)
{
  REGHANDLE v3; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+78h] [rbp+10h] BYREF

  v5 = a2;
  if ( HalpDiagnosticEventsRegistered )
  {
    v3 = HalpDiagnosticEventHandle;
    if ( EtwEventEnabled(HalpDiagnosticEventHandle, EventDescriptor) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      UserData.Size = 4;
      EtwWriteEx(v3, EventDescriptor, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
