/*
 * XREFs of RtlFindAceByType @ 0x14020F8B0
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x140201564 (SepVerifyDesktopAppxPackageName.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14020F980 (SeComputeAutoInheritByObjectTypeEx.c)
 *     RtlIsUntrustedObject @ 0x1402E1B00 (RtlIsUntrustedObject.c)
 *     SepMandatorySubProcessToken @ 0x1402E37EC (SepMandatorySubProcessToken.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F6F78 (SepSetProcessTrustLabelAceForToken.c)
 *     SepGetScopedPolicySid @ 0x140594698 (SepGetScopedPolicySid.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x1405C1A88 (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x1405F64F0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x140602BE0 (RtlpNewSecurityObject.c)
 *     RtlpCopyAces @ 0x140604EE0 (RtlpCopyAces.c)
 *     RtlpGenerateInheritAcl @ 0x1406068B0 (RtlpGenerateInheritAcl.c)
 *     SeQueryMandatoryLabel @ 0x1406FD864 (SeQueryMandatoryLabel.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1409175E4 (RtlpValidFilterAclSubjectContext.c)
 *     SepSDContainsAttributeACE @ 0x1409275B4 (SepSDContainsAttributeACE.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall RtlFindAceByType(__int64 a1, int a2, unsigned int *a3)
{
  unsigned __int8 *v4; // r10
  unsigned int v5; // r11d

  if ( !a1 )
    return 0LL;
  v4 = (unsigned __int8 *)(a1 + 8);
  v5 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  while ( !a3 )
  {
    if ( *v4 == a2 )
      return v4;
LABEL_9:
    ++v5;
    v4 += *((unsigned __int16 *)v4 + 1);
    if ( v5 >= *(unsigned __int16 *)(a1 + 4) )
      return 0LL;
  }
  if ( v5 < *a3 || *v4 != a2 )
    goto LABEL_9;
  *a3 = v5;
  return v4;
}
