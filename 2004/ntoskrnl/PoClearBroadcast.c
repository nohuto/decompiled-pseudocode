/*
 * XREFs of PoClearBroadcast @ 0x140765200
 * Callers:
 *     PopDirectedDripsDestroyBroadcast @ 0x1408DFACC (PopDirectedDripsDestroyBroadcast.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     PnprWakeDevices @ 0x1409ABF2C (PnprWakeDevices.c)
 * Callees:
 *     PopResumeDeviceIdle @ 0x14038654C (PopResumeDeviceIdle.c)
 *     PpmEndHighPerfRequest @ 0x1403A3F74 (PpmEndHighPerfRequest.c)
 *     IoFreePoDeviceNotifyList @ 0x1409946AC (IoFreePoDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void PoClearBroadcast()
{
  char *v0; // rbx

  v0 = (char *)qword_140C22DF0;
  if ( qword_140C22DF0 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140C22DF0 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
