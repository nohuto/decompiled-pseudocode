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

PVOID __cdecl RtlFindAceByType(PACL Acl, UCHAR AceType, PULONG Index)
{
  PACL v4; // r10
  unsigned int v5; // r11d

  if ( !Acl )
    return 0LL;
  v4 = Acl + 1;
  v5 = 0;
  if ( !Acl->AceCount )
    return 0LL;
  while ( !Index )
  {
    if ( v4->AclRevision == AceType )
      return v4;
LABEL_9:
    ++v5;
    v4 = (PACL)((char *)v4 + v4->AclSize);
    if ( v5 >= Acl->AceCount )
      return 0LL;
  }
  if ( v5 < *Index || v4->AclRevision != AceType )
    goto LABEL_9;
  *Index = v5;
  return v4;
}
