/*
 * XREFs of _EtwEventWriteStartScenario@20 @ 0x4B380B90
 * Callers:
 *     <none>
 * Callees:
 *     _EtwEventActivityIdControl@8 @ 0x4B2DC160 (_EtwEventActivityIdControl@8.c)
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     _EtwEventEnabled@12 @ 0x4B2E6910 (_EtwEventEnabled@12.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _EtwpGetKmRegHandle@12 @ 0x4B38077C (_EtwpGetKmRegHandle@12.c)
 */

ULONG __cdecl EtwEventWriteStartScenario(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG KmRegHandle; // esi
  _GUID *p_ActivityId; // esi
  size_t v7; // [esp-4h] [ebp-54h]
  ULONG ReturnLength; // [esp+14h] [ebp-3Ch] BYREF
  _DWORD InputBuffer[2]; // [esp+18h] [ebp-38h] BYREF
  EVENT_DESCRIPTOR v11; // [esp+20h] [ebp-30h]
  GUID ActivityId; // [esp+30h] [ebp-20h] BYREF
  int v13; // [esp+40h] [ebp-10h]

  ReturnLength = 0;
  if ( !EventDescriptor )
    return 87;
  if ( !EtwEventEnabled(RegHandle, EventDescriptor) )
    return 6;
  LODWORD(v7) = 48;
  memset(InputBuffer, 0, v7);
  KmRegHandle = EtwpGetKmRegHandle(InputBuffer, RegHandle, SWORD2(RegHandle));
  if ( !KmRegHandle )
  {
    v11 = *EventDescriptor;
    p_ActivityId = &NtCurrentTeb()->ActivityId;
    ActivityId.Data1 = p_ActivityId->Data1;
    p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
    *(_DWORD *)&ActivityId.Data2 = p_ActivityId->Data1;
    *(_QWORD *)ActivityId.Data4 = *(_QWORD *)&p_ActivityId->Data2;
    if ( ActivityId.Data1
      || ActivityId.Data2
      || ActivityId.Data3
      || __PAIR16__(ActivityId.Data4[0], 0) != ActivityId.Data4[1]
      || ActivityId.Data4[2]
      || ActivityId.Data4[3]
      || *(_WORD *)&ActivityId.Data4[4]
      || ActivityId.Data4[6]
      || ActivityId.Data4[7]
      || (KmRegHandle = EtwEventActivityIdControl(3u, &ActivityId)) == 0
      && (KmRegHandle = EtwEventActivityIdControl(2u, &ActivityId)) == 0 )
    {
      v13 = 10;
      KmRegHandle = EtwEventWrite(RegHandle, EventDescriptor, UserDataCount, UserData);
      ZwTraceControl(EtwWdiScenarioCode, InputBuffer, 0x30u, 0, 0, &ReturnLength);
    }
  }
  return KmRegHandle;
}
