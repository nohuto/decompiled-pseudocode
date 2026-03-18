/*
 * XREFs of KeQueryGroupAffinity @ 0x14027B860
 * Callers:
 *     MmCreatePeb @ 0x14065D900 (MmCreatePeb.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     PopProcessorInformation @ 0x14076E66C (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x1407B4BBC (PpmEnableWmiInterface.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x1408F0778 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     EtwpProcessorRundown @ 0x14093B28C (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x1409575D0 (NtCreateProfile.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= (unsigned int)KeActiveProcessors[0] )
    return 0LL;
  else
    return qword_140CFC848[GroupNumber];
}
