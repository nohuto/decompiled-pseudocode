/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x180067E38
 * Callers:
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x18003D218 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x1800777DC (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x180068670 (RtlSidDominatesForTrust.c)
 */

BOOLEAN __fastcall RtlpValidTrustSubjectContext(void *a1, void *a2, __int64 a3, NTSTATUS *a4)
{
  BOOLEAN result; // al
  BOOLEAN DominatesTrust; // [rsp+40h] [rbp+18h] BYREF

  result = 0;
  DominatesTrust = 0;
  if ( !a1 || (*a4 = RtlSidDominatesForTrust(a1, a2, &DominatesTrust), (result = DominatesTrust) == 0) )
    *a4 = -1073741790;
  return result;
}
