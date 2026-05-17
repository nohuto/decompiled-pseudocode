/*
 * XREFs of _EtwEventActivityIdControl@8 @ 0x4B2DC160
 * Callers:
 *     _EtwEventWriteStartScenario@20 @ 0x4B380B90 (_EtwEventWriteStartScenario@20.c)
 * Callees:
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 */

int __stdcall EtwEventActivityIdControl(int a1, int a2)
{
  _GUID *p_ActivityId; // eax
  struct _TEB *v3; // esi
  struct _TEB *v5; // ecx
  unsigned int Data1; // esi
  int v7; // edi
  int v8; // ebx
  NTSTATUS v9; // eax
  struct _TEB *v10; // eax
  int v11; // [esp+10h] [ebp-8h]
  _BYTE v12[4]; // [esp+14h] [ebp-4h] BYREF

  p_ActivityId = (_GUID *)a2;
  if ( !a2 )
    return 87;
  if ( a1 == 2 )
  {
    NtCurrentTeb()->ActivityId = *(_GUID *)a2;
    return 0;
  }
  else
  {
    switch ( a1 )
    {
      case 1:
        *(_GUID *)a2 = NtCurrentTeb()->ActivityId;
        return 0;
      case 3:
        goto LABEL_10;
      case 4:
        v5 = NtCurrentTeb();
        Data1 = v5->ActivityId.Data1;
        v7 = *(_DWORD *)&v5->ActivityId.Data2;
        v8 = *(_DWORD *)v5->ActivityId.Data4;
        v11 = *(_DWORD *)&v5->ActivityId.Data4[4];
        v5->ActivityId = *(_GUID *)a2;
        *(_DWORD *)a2 = Data1;
        *(_DWORD *)(a2 + 4) = v7;
        *(_DWORD *)(a2 + 8) = v8;
        *(_DWORD *)(a2 + 12) = v11;
        return 0;
      case 5:
        *(_GUID *)a2 = NtCurrentTeb()->ActivityId;
        p_ActivityId = &NtCurrentTeb()->ActivityId;
LABEL_10:
        v9 = ZwTraceControl(12, 0, 0, p_ActivityId, 16, v12);
        if ( v9 )
          goto LABEL_14;
        return 0;
      default:
        v9 = -1073741811;
LABEL_14:
        v10 = (struct _TEB *)RtlNtStatusToDosError(v9);
        v3 = v10;
        if ( v10 )
          RtlSetLastWin32Error(v10);
        break;
    }
  }
  return (int)v3;
}
