/*
 * XREFs of RtlLengthRequiredSid @ 0x140673F70
 * Callers:
 *     SepCreateTokenEx @ 0x1402D874C (SepCreateTokenEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1402D91B0 (RtlNormalizeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x14059FA50 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1405AB138 (EtwpApplyPayloadFilterInternal.c)
 *     NtQueryQuotaInformationFile @ 0x1408915D0 (NtQueryQuotaInformationFile.c)
 *     PopNetInitialize @ 0x140A3BD6C (PopNetInitialize.c)
 *     IopCreateUmdfDirectory @ 0x140A56114 (IopCreateUmdfDirectory.c)
 *     SepVariableInitialization @ 0x140A61FA8 (SepVariableInitialization.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A6D534 (PopCreateTimebrokerServiceSid.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140A6DB44 (CmpInitializeTrustedInstallerSid.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthRequiredSid(ULONG SubAuthorityCount)
{
  if ( SubAuthorityCount > 0x3FFFFFF7 )
    return -1;
  else
    return 4 * SubAuthorityCount + 8;
}
