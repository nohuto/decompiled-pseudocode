/*
 * XREFs of RtlpValidateSidBuffer @ 0x18007E3E4
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x18007E310 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(PSID Sid, unsigned int a2)
{
  if ( a2 >= 8 && a2 >= 4 * (unsigned int)*((unsigned __int8 *)Sid + 1) + 8 )
    return RtlValidSid(Sid);
  else
    return 0;
}
