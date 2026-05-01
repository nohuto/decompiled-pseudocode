/*
 * XREFs of ?RmpMemoryMonitorInstanceOnSystemStateChanged@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18003C390
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18003E180 (-RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_S.c)
 *     ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x18003E2F4 (-RmpMemoryMonitorGetIdealTimerState@@YA-AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180062520 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall RmpMemoryMonitorInstanceOnSystemStateChanged(struct _RM_PARTITION *a1, unsigned int *a2)
{
  char *v2; // rsi
  __int64 v3; // rdx
  int IdealTimerState; // edi
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = (char *)a1 + 40;
  IdealTimerState = RmpMemoryMonitorGetIdealTimerState(*a2);
  v5 = RmpMemoryMonitorGetIdealTimerState(*(unsigned int *)(v3 + 4));
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
  {
    v10 = v5;
    v11 = IdealTimerState;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      (unsigned int)&unk_18009E29B,
      v7,
      v8,
      (__int64)&v11,
      (__int64)&v10);
  }
  if ( IdealTimerState )
  {
    if ( !v5 )
    {
      TpSetTimer(*((_QWORD *)v2 + 8), 0LL, 0LL, 0LL);
      TpWaitForTimer(*((_QWORD *)v2 + 8), 1LL);
      return 0LL;
    }
  }
  else if ( !v5 )
  {
    return 0LL;
  }
  if ( v5 != IdealTimerState )
    RmpMemoryMonitorSetTimer(v2, v5, 4LL);
  return 0LL;
}
