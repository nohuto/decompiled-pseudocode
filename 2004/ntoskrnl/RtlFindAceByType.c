/*
 * XREFs of RtlFindAceByType @ 0x140294780
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1402014F8 (SepVerifyDesktopAppxPackageName.c)
 *     SepMandatorySubProcessToken @ 0x1402698EC (SepMandatorySubProcessToken.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140294850 (SeComputeAutoInheritByObjectTypeEx.c)
 *     RtlIsUntrustedObject @ 0x140350430 (RtlIsUntrustedObject.c)
 *     SepGetScopedPolicySid @ 0x140590BF8 (SepGetScopedPolicySid.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x1405BDE10 (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x140669BF0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14067B050 (RtlpNewSecurityObject.c)
 *     RtlpCopyAces @ 0x14067D350 (RtlpCopyAces.c)
 *     RtlpGenerateInheritAcl @ 0x14068E510 (RtlpGenerateInheritAcl.c)
 *     SeQueryMandatoryLabel @ 0x1406BAD88 (SeQueryMandatoryLabel.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140911AA4 (RtlpValidFilterAclSubjectContext.c)
 *     SepSDContainsAttributeACE @ 0x140922960 (SepSDContainsAttributeACE.c)
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
