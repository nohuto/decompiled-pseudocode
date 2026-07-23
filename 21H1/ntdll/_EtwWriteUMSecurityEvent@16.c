/*
 * XREFs of _EtwWriteUMSecurityEvent@16 @ 0x4B3806D0
 * Callers:
 *     _EvtIntReportEventWorker@48 @ 0x4B382BB1 (_EvtIntReportEventWorker@48.c)
 * Callees:
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

ULONG __cdecl EtwWriteUMSecurityEvent(
        PCEVENT_DESCRIPTOR EventDescriptor,
        USHORT EventProperty,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG result; // eax
  _GUID *p_ActivityId; // esi
  _BYTE Fields[4]; // [esp+8h] [ebp-80h] BYREF
  __int16 v7; // [esp+Ch] [ebp-7Ch]
  USHORT v8; // [esp+Eh] [ebp-7Ah]
  EVENT_DESCRIPTOR v9; // [esp+30h] [ebp-58h]
  unsigned int Data1; // [esp+48h] [ebp-40h]
  unsigned int v11; // [esp+4Ch] [ebp-3Ch]
  __int64 v12; // [esp+50h] [ebp-38h]
  char v13; // [esp+58h] [ebp-30h]
  __int16 v14; // [esp+5Ah] [ebp-2Eh]
  ULONG v15; // [esp+5Ch] [ebp-2Ch]
  PEVENT_DATA_DESCRIPTOR v16; // [esp+60h] [ebp-28h]
  int v17; // [esp+64h] [ebp-24h]
  int v18; // [esp+78h] [ebp-10h]

  if ( !EventDescriptor )
    return 87;
  v9 = *EventDescriptor;
  v7 = 0;
  p_ActivityId = &NtCurrentTeb()->ActivityId;
  v8 = EventProperty;
  v15 = UserDataCount;
  v16 = UserData;
  v17 = 0;
  Data1 = p_ActivityId->Data1;
  p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
  v11 = p_ActivityId->Data1;
  v12 = *(_QWORD *)&p_ActivityId->Data2;
  v14 = 0;
  v13 = 0;
  v18 = 0;
  result = NtTraceEvent(0, 0x500u, 0x78u, Fields);
  if ( result )
    return RtlNtStatusToDosError(result);
  return result;
}
