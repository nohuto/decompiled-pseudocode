/*
 * XREFs of RtlULongAdd @ 0x1402679EC
 * Callers:
 *     SepFilterToken @ 0x1405D7198 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x140601150 (SepDuplicateToken.c)
 *     MiCaptureRetpolineRelocationTables @ 0x14070F468 (MiCaptureRetpolineRelocationTables.c)
 *     WmipProbeWnodeWorker @ 0x140726E54 (WmipProbeWnodeWorker.c)
 *     EtwpGetTraceGuidInfo @ 0x14072A6B0 (EtwpGetTraceGuidInfo.c)
 *     EtwpGetTraceGroupInfo @ 0x140936F84 (EtwpGetTraceGroupInfo.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongAdd(ULONG ulAugend, ULONG ulAddend, ULONG *pulResult)
{
  ULONG v3; // eax
  ULONG v4; // edx
  NTSTATUS result; // eax

  v3 = ulAugend + ulAddend;
  v4 = -1;
  if ( v3 >= ulAugend )
    v4 = v3;
  result = v3 < ulAugend ? 0xC0000095 : 0;
  *pulResult = v4;
  return result;
}
