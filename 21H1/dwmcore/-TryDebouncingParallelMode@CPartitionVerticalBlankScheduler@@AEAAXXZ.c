/*
 * XREFs of ?TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800404B0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18003C860 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBA?AW4ParallelModePolicy@@XZ @ 0x18008BDD4 (-GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBA-AW4ParallelModePolicy@@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180155DC4 (McTemplateU0q_EventWriteTransfer.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TryDebouncingParallelMode(CPartitionVerticalBlankScheduler *this)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  _BYTE v6[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_DWORD *)this + 2794) || !*((_DWORD *)this + 2795) )
    return;
  v2 = CPartitionVerticalBlankScheduler::GetActualParallelModePolicy() - 1;
  if ( !v2 )
  {
LABEL_5:
    *((_DWORD *)this + 2795) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PARALLEL_MODE_Stop,
        v4,
        1LL,
        v6);
    return;
  }
  v5 = v2 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      *((_BYTE *)this + 15900) = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0q_EventWriteTransfer(v3, &EVTDESC_SCHEDULE_PARALLEL_MODE_NEEDS_TO_WAIT_FOR_NEXT_VSYNC, 3LL);
    }
  }
  else
  {
    v4 = *((unsigned int *)this + 1257);
    if ( (_DWORD)v4 != -1
      && *((_QWORD *)this + 1990) < (unsigned __int64)(*((_QWORD *)this + 38 * v4 + 31)
                                                     + g_qpcFrequency.QuadPart
                                                     * (unsigned int)CCommonRegistryData::ParallelModeLeaveAfterThresholdMS
                                                     / 1000) )
    {
      *((_BYTE *)this + 15900) = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0q_EventWriteTransfer(304 * v4, &EVTDESC_SCHEDULE_PARALLEL_MODE_NEEDS_TO_WAIT_FOR_NEXT_VSYNC, 2LL);
    }
    if ( !*((_BYTE *)this + 15900) )
      goto LABEL_5;
  }
}
