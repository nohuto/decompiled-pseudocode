/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x14035E8C0
 * Callers:
 *     RtlpSetSecurityObject @ 0x140669BF0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14067B050 (RtlpNewSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140911AA4 (RtlpValidFilterAclSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x140296040 (RtlSidDominatesForTrust.c)
 */

char __fastcall RtlpValidTrustSubjectContext(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char result; // al
  _DWORD *v5; // r11
  int v6; // eax
  char v7; // [rsp+40h] [rbp+18h] BYREF

  result = 0;
  v5 = a4;
  v7 = 0;
  if ( !a1 || (v6 = RtlSidDominatesForTrust(a1, a2, &v7), *v5 = v6, (result = v7) == 0) )
    *v5 = -1073741790;
  return result;
}
