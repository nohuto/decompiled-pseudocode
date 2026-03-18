/*
 * XREFs of KeQueryGroupAffinity @ 0x14033B2A0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     MmCreatePeb @ 0x1406F9F18 (MmCreatePeb.c)
 *     PopProcessorInformation @ 0x14076BECC (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x1407B1A4C (PpmEnableWmiInterface.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x1408EF488 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     EtwpProcessorRundown @ 0x140939FEC (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x140955F00 (NtCreateProfile.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= (unsigned int)KeActiveProcessors[0] )
    return 0LL;
  else
    return qword_140CFC838[GroupNumber];
}
