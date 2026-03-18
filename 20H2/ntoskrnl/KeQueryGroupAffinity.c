/*
 * XREFs of KeQueryGroupAffinity @ 0x1402FE150
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     MmCreatePeb @ 0x1406AD438 (MmCreatePeb.c)
 *     PopProcessorInformation @ 0x14077D09C (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x1407C33EC (PpmEnableWmiInterface.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x1408F6388 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     EtwpProcessorRundown @ 0x1409410BC (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x14095D390 (NtCreateProfile.c)
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
