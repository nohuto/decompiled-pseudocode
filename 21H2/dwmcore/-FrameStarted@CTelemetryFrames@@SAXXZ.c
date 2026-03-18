/*
 * XREFs of ?FrameStarted@CTelemetryFrames@@SAXXZ @ 0x180079FC8
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18007A020 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void CTelemetryFrames::FrameStarted(void)
{
  HANDLE CurrentThread; // rax

  CurrentThread = GetCurrentThread();
  if ( QueryThreadCycleTime(CurrentThread, &CycleTime) )
  {
    qword_1803D3340 = CycleTime;
  }
  else
  {
    qword_1803D3340 = 0LL;
    CycleTime = 0LL;
  }
}
