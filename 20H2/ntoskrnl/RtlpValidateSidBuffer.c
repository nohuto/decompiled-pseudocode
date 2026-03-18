/*
 * XREFs of RtlpValidateSidBuffer @ 0x1406FCD1C
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1406FCBFC (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x140340E40 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x1406063F0 (RtlValidSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(PSID Sid, unsigned int a2)
{
  if ( a2 < 8 || a2 < 4 * (unsigned int)*RtlSubAuthorityCountSid(Sid) + 8 )
    return 0;
  else
    return RtlValidSid(Sid);
}
