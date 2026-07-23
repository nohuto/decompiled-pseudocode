/*
 * XREFs of PoClearBroadcast @ 0x1407783A0
 * Callers:
 *     PopDirectedDripsDestroyBroadcast @ 0x1408E326C (PopDirectedDripsDestroyBroadcast.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 *     PnprWakeDevices @ 0x1409AFCCC (PnprWakeDevices.c)
 * Callees:
 *     PopResumeDeviceIdle @ 0x140388F9C (PopResumeDeviceIdle.c)
 *     PpmEndHighPerfRequest @ 0x1403A6DB0 (PpmEndHighPerfRequest.c)
 *     IoFreePoDeviceNotifyList @ 0x1409989FC (IoFreePoDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void PoClearBroadcast()
{
  char *v0; // rbx

  v0 = (char *)qword_140C23A50;
  if ( qword_140C23A50 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140C23A50 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
