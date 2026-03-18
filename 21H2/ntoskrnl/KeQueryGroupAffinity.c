/*
 * XREFs of KeQueryGroupAffinity @ 0x1402D75B0
 * Callers:
 *     PopProcessorInformation @ 0x1406C800C (PopProcessorInformation.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     MmCreatePeb @ 0x140755B70 (MmCreatePeb.c)
 *     PpmEnableWmiInterface @ 0x1408565CC (PpmEnableWmiInterface.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x14099B3D8 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     EtwpProcessorRundown @ 0x1409EB100 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x140A069C0 (NtCreateProfile.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= (unsigned __int16)KeActiveProcessors )
    return 0LL;
  else
    return qword_140D06E48[GroupNumber];
}
