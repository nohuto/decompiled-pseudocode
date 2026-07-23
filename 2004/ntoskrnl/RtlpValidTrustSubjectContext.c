/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x14035E8C0
 * Callers:
 *     RtlpSetSecurityObject @ 0x140669BF0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14067B050 (RtlpNewSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140911AA4 (RtlpValidFilterAclSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x140296040 (RtlSidDominatesForTrust.c)
 */

BOOLEAN __fastcall RtlpValidTrustSubjectContext(void *a1, void *a2, __int64 a3, NTSTATUS *a4)
{
  BOOLEAN result; // al
  NTSTATUS *v5; // r11
  NTSTATUS v6; // eax
  BOOLEAN DominatesTrust; // [rsp+40h] [rbp+18h] BYREF

  result = 0;
  v5 = a4;
  DominatesTrust = 0;
  if ( !a1 || (v6 = RtlSidDominatesForTrust(a1, a2, &DominatesTrust), *v5 = v6, (result = DominatesTrust) == 0) )
    *v5 = -1073741790;
  return result;
}
