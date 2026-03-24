/*
 * XREFs of KeQueryGroupAffinity @ 0x1402C95F0
 * Callers:
 *     MmCreatePeb @ 0x140611D98 (MmCreatePeb.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 *     PopProcessorInformation @ 0x140780E7C (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x1407C76AC (PpmEnableWmiInterface.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x1408F3B68 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     EtwpProcessorRundown @ 0x14093E88C (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x14095AC10 (NtCreateProfile.c)
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
