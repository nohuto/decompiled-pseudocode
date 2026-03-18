/*
 * XREFs of RtlFindAceByType @ 0x140257F00
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1402014F8 (SepVerifyDesktopAppxPackageName.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140257FD0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     RtlIsUntrustedObject @ 0x140315C50 (RtlIsUntrustedObject.c)
 *     SepMandatorySubProcessToken @ 0x1403395EC (SepMandatorySubProcessToken.c)
 *     SepGetScopedPolicySid @ 0x140590508 (SepGetScopedPolicySid.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x1405BD6F0 (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlpGenerateInheritAcl @ 0x1405E4D50 (RtlpGenerateInheritAcl.c)
 *     RtlpNewSecurityObject @ 0x140602F70 (RtlpNewSecurityObject.c)
 *     RtlpCopyAces @ 0x140605270 (RtlpCopyAces.c)
 *     RtlpSetSecurityObject @ 0x140614910 (RtlpSetSecurityObject.c)
 *     SeQueryMandatoryLabel @ 0x14070DBA8 (SeQueryMandatoryLabel.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140910704 (RtlpValidFilterAclSubjectContext.c)
 *     SepSDContainsAttributeACE @ 0x140920F9C (SepSDContainsAttributeACE.c)
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
