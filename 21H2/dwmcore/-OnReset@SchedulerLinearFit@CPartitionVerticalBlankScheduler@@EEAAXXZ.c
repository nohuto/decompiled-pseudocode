/*
 * XREFs of ?OnReset@SchedulerLinearFit@CPartitionVerticalBlankScheduler@@EEAAXXZ @ 0x1800F68A0
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::SchedulerLinearFit::OnReset(
        CPartitionVerticalBlankScheduler::SchedulerLinearFit *this,
        __int64 a2,
        __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VSYNC_QPC_SMOOTHING_RESET,
      a3,
      1u,
      &v3);
}
