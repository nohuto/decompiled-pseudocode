/*
 * XREFs of RtlRandomEx @ 0x1403284B0
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406F0E98 (MmCreateProcessAddressSpace.c)
 *     MiInitializePartition @ 0x140783F50 (MiInitializePartition.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F1D3C (PopPublishAndPurgePowerRequestStats.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093A910 (EtwpGetPrivateSessionTraceHandle.c)
 *     VfRandomGetNumber @ 0x1409C3270 (VfRandomGetNumber.c)
 * Callees:
 *     ExGenRandom @ 0x1402A9670 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
