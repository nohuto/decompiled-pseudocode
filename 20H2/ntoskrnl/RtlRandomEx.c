/*
 * XREFs of RtlRandomEx @ 0x140336C50
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406ED8E8 (MmCreateProcessAddressSpace.c)
 *     MiInitializePartition @ 0x14078E400 (MiInitializePartition.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F8C3C (PopPublishAndPurgePowerRequestStats.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409419E0 (EtwpGetPrivateSessionTraceHandle.c)
 *     VfRandomGetNumber @ 0x1409C92A0 (VfRandomGetNumber.c)
 * Callees:
 *     ExGenRandom @ 0x1402D7710 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
