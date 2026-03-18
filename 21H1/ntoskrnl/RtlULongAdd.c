/*
 * XREFs of RtlULongAdd @ 0x14024122C
 * Callers:
 *     SepDuplicateToken @ 0x1406014E0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x1407030D4 (SepFilterToken.c)
 *     EtwpGetTraceGuidInfo @ 0x14071A7D4 (EtwpGetTraceGuidInfo.c)
 *     EtwpGetTraceGroupInfo @ 0x14092FEA4 (EtwpGetTraceGroupInfo.c)
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
