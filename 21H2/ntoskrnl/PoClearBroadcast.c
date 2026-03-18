/*
 * XREFs of PoClearBroadcast @ 0x1408025E8
 * Callers:
 *     PopDirectedDripsDestroyBroadcast @ 0x14098BB94 (PopDirectedDripsDestroyBroadcast.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     PnprWakeDevices @ 0x140A6927C (PnprWakeDevices.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14025DC0C (PpmEndHighPerfRequest.c)
 *     PopResumeDeviceIdle @ 0x140395198 (PopResumeDeviceIdle.c)
 *     IoFreePoDeviceNotifyList @ 0x140A51484 (IoFreePoDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void PoClearBroadcast()
{
  char *v0; // rbx

  v0 = (char *)qword_140C22750;
  if ( qword_140C22750 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140C22750 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
