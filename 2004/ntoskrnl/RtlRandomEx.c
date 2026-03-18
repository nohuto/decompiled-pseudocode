/*
 * XREFs of RtlRandomEx @ 0x1402E2150
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406ABD7C (MmCreateProcessAddressSpace.c)
 *     MiInitializePartition @ 0x140780EE8 (MiInitializePartition.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F302C (PopPublishAndPurgePowerRequestStats.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093BBB0 (EtwpGetPrivateSessionTraceHandle.c)
 *     VfRandomGetNumber @ 0x1409C3280 (VfRandomGetNumber.c)
 * Callees:
 *     ExGenRandom @ 0x140250640 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
