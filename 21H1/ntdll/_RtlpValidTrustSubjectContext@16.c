/*
 * XREFs of _RtlpValidTrustSubjectContext@16 @ 0x4B34A352
 * Callers:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlpValidFilterAclSubjectContext@8 @ 0x4B2D8C55 (_RtlpValidFilterAclSubjectContext@8.c)
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     _RtlSidDominatesForTrust@12 @ 0x4B2D9290 (_RtlSidDominatesForTrust@12.c)
 */

BOOLEAN __fastcall RtlpValidTrustSubjectContext(PSID Sid1, PSID Sid2, int a3, NTSTATUS *a4)
{
  BOOLEAN result; // al
  BOOLEAN DominatesTrust; // [esp+7h] [ebp-1h] BYREF

  result = 0;
  DominatesTrust = 0;
  if ( !Sid1 || (*a4 = RtlSidDominatesForTrust(Sid1, Sid2, &DominatesTrust), (result = DominatesTrust) == 0) )
    *a4 = -1073741790;
  return result;
}
