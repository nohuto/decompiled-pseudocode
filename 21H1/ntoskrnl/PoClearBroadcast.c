/*
 * XREFs of PoClearBroadcast @ 0x1407637E0
 * Callers:
 *     PopDirectedDripsDestroyBroadcast @ 0x1408DE86C (PopDirectedDripsDestroyBroadcast.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 *     PnprWakeDevices @ 0x1409AB0CC (PnprWakeDevices.c)
 * Callees:
 *     PopResumeDeviceIdle @ 0x1403855DC (PopResumeDeviceIdle.c)
 *     PpmEndHighPerfRequest @ 0x1403A3814 (PpmEndHighPerfRequest.c)
 *     IoFreePoDeviceNotifyList @ 0x14099306C (IoFreePoDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void PoClearBroadcast()
{
  char *v0; // rbx

  v0 = (char *)qword_140C233B0;
  if ( qword_140C233B0 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140C233B0 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
