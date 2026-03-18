/*
 * XREFs of ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4CompositionReason@@@Z @ 0x180078900
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18007A020 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ScheduleCompositionPass(
        __int64 a1,
        ULONG TolerableDelay,
        unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  void *v6; // rcx
  signed int LastError; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  LARGE_INTEGER DueTime; // [rsp+50h] [rbp+8h] BYREF

  if ( TolerableDelay < *(_DWORD *)(a1 + 12484) )
  {
    *(_DWORD *)(a1 + 12484) = TolerableDelay;
    v6 = *(void **)(a1 + 24);
    DueTime.QuadPart = -10000LL * TolerableDelay;
    if ( !SetWaitableTimerEx(v6, &DueTime, 0, 0LL, 0LL, 0LL, TolerableDelay) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
    }
  }
  _m_prefetchw(&dword_1803D3A68);
  v5 = a3 | dword_1803D3A68;
  result = (unsigned int)~_InterlockedOr(&dword_1803D3A68, a3);
  if ( ((unsigned int)result & a3) != 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    return McTemplateU0q_EventWriteTransfer(v5, &EVTDESC_SCHEDULED_COMPOSITION_REASON, a3);
  return result;
}
