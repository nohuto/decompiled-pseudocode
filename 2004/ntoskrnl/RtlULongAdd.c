/*
 * XREFs of RtlULongAdd @ 0x14027DC40
 * Callers:
 *     SepFilterToken @ 0x140632E90 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x1406795C0 (SepDuplicateToken.c)
 *     EtwpGetTraceGuidInfo @ 0x14071C74C (EtwpGetTraceGuidInfo.c)
 *     EtwpGetTraceGroupInfo @ 0x140931154 (EtwpGetTraceGroupInfo.c)
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
