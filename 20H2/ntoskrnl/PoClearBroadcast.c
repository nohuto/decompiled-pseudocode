/*
 * XREFs of PoClearBroadcast @ 0x140774230
 * Callers:
 *     PopDirectedDripsDestroyBroadcast @ 0x1408E590C (PopDirectedDripsDestroyBroadcast.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 *     PnprWakeDevices @ 0x1409B1E9C (PnprWakeDevices.c)
 * Callees:
 *     PopResumeDeviceIdle @ 0x1403886EC (PopResumeDeviceIdle.c)
 *     PpmEndHighPerfRequest @ 0x1403A63A0 (PpmEndHighPerfRequest.c)
 *     IoFreePoDeviceNotifyList @ 0x14099A80C (IoFreePoDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void PoClearBroadcast()
{
  char *v0; // rbx

  v0 = (char *)qword_140C232B0;
  if ( qword_140C232B0 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140C232B0 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
