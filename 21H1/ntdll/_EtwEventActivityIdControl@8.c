/*
 * XREFs of _EtwEventActivityIdControl@8 @ 0x4B2DC160
 * Callers:
 *     _EtwEventWriteStartScenario@20 @ 0x4B380B90 (_EtwEventWriteStartScenario@20.c)
 * Callees:
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 */

ULONG __cdecl EtwEventActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  LPGUID p_ActivityId; // eax
  ULONG v3; // esi
  struct _TEB *v5; // ecx
  unsigned int Data1; // esi
  int v7; // edi
  int v8; // ebx
  NTSTATUS v9; // eax
  LONG v10; // eax
  int v11; // [esp+10h] [ebp-8h]
  ULONG ReturnLength; // [esp+14h] [ebp-4h] BYREF

  p_ActivityId = ActivityId;
  if ( !ActivityId )
    return 87;
  if ( ControlCode == 2 )
  {
    NtCurrentTeb()->ActivityId = *ActivityId;
    return 0;
  }
  else
  {
    switch ( ControlCode )
    {
      case 1u:
        *ActivityId = NtCurrentTeb()->ActivityId;
        return 0;
      case 3u:
        goto LABEL_10;
      case 4u:
        v5 = NtCurrentTeb();
        Data1 = v5->ActivityId.Data1;
        v7 = *(_DWORD *)&v5->ActivityId.Data2;
        v8 = *(_DWORD *)v5->ActivityId.Data4;
        v11 = *(_DWORD *)&v5->ActivityId.Data4[4];
        v5->ActivityId = *ActivityId;
        ActivityId->Data1 = Data1;
        *(_DWORD *)&ActivityId->Data2 = v7;
        *(_DWORD *)ActivityId->Data4 = v8;
        *(_DWORD *)&ActivityId->Data4[4] = v11;
        return 0;
      case 5u:
        *ActivityId = NtCurrentTeb()->ActivityId;
        p_ActivityId = &NtCurrentTeb()->ActivityId;
LABEL_10:
        v9 = ZwTraceControl(EtwActivityIdCreate, 0, 0, p_ActivityId, 0x10u, &ReturnLength);
        if ( v9 )
          goto LABEL_14;
        return 0;
      default:
        v9 = -1073741811;
LABEL_14:
        v10 = RtlNtStatusToDosError(v9);
        v3 = v10;
        if ( v10 )
          RtlSetLastWin32Error(v10);
        break;
    }
  }
  return v3;
}
