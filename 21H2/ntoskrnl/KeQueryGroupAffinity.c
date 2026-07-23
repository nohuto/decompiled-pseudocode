/*
 * XREFs of KeQueryGroupAffinity @ 0x140247ED0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     MmCreatePeb @ 0x1406A1848 (MmCreatePeb.c)
 *     PopProcessorInformation @ 0x14078103C (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x1407C79CC (PpmEnableWmiInterface.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x1408F3CC8 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     EtwpProcessorRundown @ 0x14093EA5C (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x14095ADE0 (NtCreateProfile.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= (unsigned __int16)KeActiveProcessors )
    return 0LL;
  else
    return qword_140CFC848[GroupNumber];
}
