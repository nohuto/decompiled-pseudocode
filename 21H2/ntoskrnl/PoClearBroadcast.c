/*
 * XREFs of PoClearBroadcast @ 0x1407781E0
 * Callers:
 *     PopDirectedDripsDestroyBroadcast @ 0x1408E310C (PopDirectedDripsDestroyBroadcast.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 *     PnprWakeDevices @ 0x1409AED9C (PnprWakeDevices.c)
 * Callees:
 *     PopResumeDeviceIdle @ 0x140388E4C (PopResumeDeviceIdle.c)
 *     PpmEndHighPerfRequest @ 0x1403A6C60 (PpmEndHighPerfRequest.c)
 *     IoFreePoDeviceNotifyList @ 0x1409979FC (IoFreePoDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void PoClearBroadcast()
{
  char *v0; // rbx

  v0 = (char *)qword_140C23430;
  if ( qword_140C23430 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140C23430 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
