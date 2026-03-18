/*
 * XREFs of ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18007ADD0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18007A020 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Trace@CFrameInfo@@QEAAXK_K0@Z @ 0x18007B954 (-Trace@CFrameInfo@@QEAAXK_K0@Z.c)
 *     ?CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x18007B9A8 (-CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ.c)
 *     ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007BD78 (-UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18007BF7C (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x18007C4E8 (-ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007C608 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x18007CA98 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ?Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800DD8E0 (-Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::UpdateTimes(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        __int64 a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  int v12; // eax
  __int64 v13; // rcx
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_UPDATE_TIMES_Start,
      a3,
      1u,
      &v14);
  if ( *((_BYTE *)this + 4852)
    && *((_BYTE *)this + 4853)
    && (v12 = CPartitionVerticalBlankScheduler::Reset(this), v6 = v12, v12 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x431u);
  }
  else
  {
    CFrameInfo::Clear((CPartitionVerticalBlankScheduler *)((char *)this + 272 * *((unsigned int *)this + 1124) + 144));
    CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(this);
    CPartitionVerticalBlankScheduler::UpdateCurrentTime(this);
    *(_QWORD *)(*((_QWORD *)this + 564) + 64LL) = *((_QWORD *)this + 2147);
    v4 = CPartitionVerticalBlankScheduler::ComputeVSyncInfo(this);
    v6 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0x44Au);
    }
    else
    {
      v7 = CPartitionVerticalBlankScheduler::RetireFrames(this, 0);
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x44Cu);
      else
        *(_DWORD *)(*((_QWORD *)this + 564) + 32LL) = *(_DWORD *)(*((_QWORD *)this + 565) + 32LL) + 1;
    }
  }
  v9 = CPartitionVerticalBlankScheduler::CalculateFrameTimeDelta(this);
  CFrameInfo::Trace(*((CFrameInfo **)this + 564), *((_DWORD *)this + 1124), v9, *((_QWORD *)this + 566));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_UPDATE_TIMES_Stop,
      v10,
      1u,
      &v14);
  return v6;
}
