/*
 * XREFs of _RtlpValidateSidBuffer@8 @ 0x4B2A9535
 * Callers:
 *     _RtlEnumerateBoundaryDescriptorEntries@12 @ 0x4B2A9488 (_RtlEnumerateBoundaryDescriptorEntries@12.c)
 * Callees:
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(unsigned __int8 *Sid, unsigned int a2)
{
  if ( a2 < 8 || a2 < 4 * (unsigned int)Sid[1] + 8 )
    return 0;
  else
    return RtlValidSid(Sid);
}
