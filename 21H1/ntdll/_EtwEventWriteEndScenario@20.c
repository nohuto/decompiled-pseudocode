/*
 * XREFs of _EtwEventWriteEndScenario@20 @ 0x4B380AB0
 * Callers:
 *     <none>
 * Callees:
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     _EtwEventEnabled@12 @ 0x4B2E6910 (_EtwEventEnabled@12.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _EtwpGetKmRegHandle@12 @ 0x4B38077C (_EtwpGetKmRegHandle@12.c)
 */

ULONG __cdecl EtwEventWriteEndScenario(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG result; // eax
  void *v5; // ecx
  _GUID *p_ActivityId; // esi
  size_t v7; // [esp-4h] [ebp-54h]
  ULONG ReturnLength; // [esp+10h] [ebp-40h] BYREF
  PEVENT_DATA_DESCRIPTOR v10; // [esp+14h] [ebp-3Ch]
  _DWORD v11[2]; // [esp+18h] [ebp-38h] BYREF
  EVENT_DESCRIPTOR v12; // [esp+20h] [ebp-30h]
  unsigned int Data1; // [esp+30h] [ebp-20h]
  unsigned int v14; // [esp+34h] [ebp-1Ch]
  __int64 v15; // [esp+38h] [ebp-18h]
  int v16; // [esp+40h] [ebp-10h]

  ReturnLength = 0;
  v10 = UserData;
  if ( !EventDescriptor )
    return 87;
  if ( !EtwEventEnabled(RegHandle, EventDescriptor) )
    return 6;
  LODWORD(v7) = 48;
  memset(v11, 0, v7);
  result = EtwpGetKmRegHandle(v11, RegHandle, SWORD2(RegHandle));
  if ( !result )
  {
    v12 = *EventDescriptor;
    p_ActivityId = &NtCurrentTeb()->ActivityId;
    Data1 = p_ActivityId->Data1;
    p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
    v14 = p_ActivityId->Data1;
    v15 = *(_QWORD *)&p_ActivityId->Data2;
    v16 = 11;
    ZwTraceControl(EtwWdiScenarioCode, v5, 0x30u, 0, 0, &ReturnLength);
    return EtwEventWrite(RegHandle, EventDescriptor, UserDataCount, v10);
  }
  return result;
}
