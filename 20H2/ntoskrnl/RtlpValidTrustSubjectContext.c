/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x14032F5B0
 * Callers:
 *     RtlpSetSecurityObject @ 0x1405F64F0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x140602BE0 (RtlpNewSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1409175E4 (RtlpValidFilterAclSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x14020FCC0 (RtlSidDominatesForTrust.c)
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
