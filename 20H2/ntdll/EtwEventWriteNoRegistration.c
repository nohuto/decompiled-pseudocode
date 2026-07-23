/*
 * XREFs of EtwEventWriteNoRegistration @ 0x1800609E0
 * Callers:
 *     LdrpSearchPath @ 0x18005EE6C (LdrpSearchPath.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x18006006C (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CED10 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800CF468 (LdrpLogFatalLdrEtwEvent.c)
 *     SignalStartWerSvc @ 0x1800DD918 (SignalStartWerSvc.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180050840 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

ULONG __cdecl EtwEventWriteNoRegistration(
        LPCGUID ProviderId,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG v4; // ebx
  EVENT_DESCRIPTOR v5; // xmm0
  _GUID ActivityId; // xmm0
  NTSTATUS v7; // eax
  _BYTE Fields[4]; // [rsp+20h] [rbp-88h] BYREF
  int v10; // [rsp+24h] [rbp-84h]
  EVENT_DESCRIPTOR v11; // [rsp+48h] [rbp-60h]
  _GUID v12; // [rsp+60h] [rbp-48h]
  char v13; // [rsp+70h] [rbp-38h]
  __int16 v14; // [rsp+72h] [rbp-36h]
  ULONG v15; // [rsp+74h] [rbp-34h]
  PEVENT_DATA_DESCRIPTOR v16; // [rsp+78h] [rbp-30h]
  int v17; // [rsp+90h] [rbp-18h]

  v4 = 0;
  if ( !EventDescriptor || !ProviderId )
    return 87;
  v5 = *EventDescriptor;
  v10 = 0;
  v11 = v5;
  v15 = UserDataCount;
  v16 = UserData;
  ActivityId = NtCurrentTeb()->ActivityId;
  v13 = 0;
  v14 = 0;
  v12 = ActivityId;
  v17 = 0;
  v7 = NtTraceEvent((HANDLE)ProviderId, 0x700u, 0x78u, Fields);
  if ( v7 )
    return RtlNtStatusToDosError(v7);
  return v4;
}
