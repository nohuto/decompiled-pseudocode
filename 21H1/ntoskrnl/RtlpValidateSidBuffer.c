/*
 * XREFs of RtlpValidateSidBuffer @ 0x14070DB60
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x14070DA40 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14035C470 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x140606780 (RtlValidSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(PSID Sid, unsigned int a2)
{
  if ( a2 < 8 || a2 < 4 * (unsigned int)*RtlSubAuthorityCountSid(Sid) + 8 )
    return 0;
  else
    return RtlValidSid(Sid);
}
