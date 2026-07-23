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
