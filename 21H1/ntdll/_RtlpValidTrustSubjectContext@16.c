/*
 * XREFs of _RtlpValidTrustSubjectContext@16 @ 0x4B34A352
 * Callers:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlpValidFilterAclSubjectContext@8 @ 0x4B2D8C55 (_RtlpValidFilterAclSubjectContext@8.c)
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     _RtlSidDominatesForTrust@12 @ 0x4B2D9290 (_RtlSidDominatesForTrust@12.c)
 */

bool __fastcall RtlpValidTrustSubjectContext(int a1, int a2, int a3, int *a4)
{
  bool result; // al
  bool v5; // [esp+7h] [ebp-1h] BYREF

  result = 0;
  v5 = 0;
  if ( !a1 || (*a4 = RtlSidDominatesForTrust(a1, a2, &v5), !(result = v5)) )
    *a4 = -1073741790;
  return result;
}
