/*
 * XREFs of _EtwEventWriteNoRegistration@16 @ 0x4B2ABD30
 * Callers:
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 *     _LdrpLogLoadFailureEtwEvent@20 @ 0x4B2EC106 (_LdrpLogLoadFailureEtwEvent@20.c)
 *     _LdrpCheckComponentOnDemandEtwEvent@4 @ 0x4B32FAB2 (_LdrpCheckComponentOnDemandEtwEvent@4.c)
 *     _LdrpLogFatalLdrEtwEvent@8 @ 0x4B330261 (_LdrpLogFatalLdrEtwEvent@8.c)
 *     _SignalStartWerSvc@0 @ 0x4B33AD08 (_SignalStartWerSvc@0.c)
 * Callees:
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

ULONG __cdecl EtwEventWriteNoRegistration(
        LPCGUID ProviderId,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  _GUID *p_ActivityId; // esi
  ULONG result; // eax
  _BYTE Fields[4]; // [esp+8h] [ebp-80h] BYREF
  int v7; // [esp+Ch] [ebp-7Ch]
  EVENT_DESCRIPTOR v8; // [esp+30h] [ebp-58h]
  unsigned int Data1; // [esp+48h] [ebp-40h]
  unsigned int v10; // [esp+4Ch] [ebp-3Ch]
  __int64 v11; // [esp+50h] [ebp-38h]
  char v12; // [esp+58h] [ebp-30h]
  __int16 v13; // [esp+5Ah] [ebp-2Eh]
  ULONG v14; // [esp+5Ch] [ebp-2Ch]
  PEVENT_DATA_DESCRIPTOR v15; // [esp+60h] [ebp-28h]
  int v16; // [esp+64h] [ebp-24h]
  int v17; // [esp+78h] [ebp-10h]

  if ( !EventDescriptor || !ProviderId )
    return 87;
  v8 = *EventDescriptor;
  v7 = 0;
  p_ActivityId = &NtCurrentTeb()->ActivityId;
  v14 = UserDataCount;
  v15 = UserData;
  v16 = 0;
  Data1 = p_ActivityId->Data1;
  p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
  v10 = p_ActivityId->Data1;
  v11 = *(_QWORD *)&p_ActivityId->Data2;
  v12 = 0;
  v17 = 0;
  v13 = 0;
  result = NtTraceEvent((HANDLE)ProviderId, 0x700u, 0x78u, Fields);
  if ( result )
    return RtlNtStatusToDosError(result);
  return result;
}
