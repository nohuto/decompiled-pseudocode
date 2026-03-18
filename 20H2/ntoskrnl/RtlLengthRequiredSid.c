/*
 * XREFs of RtlLengthRequiredSid @ 0x1406A9EC0
 * Callers:
 *     SepCreateTokenEx @ 0x1402FB674 (SepCreateTokenEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1402FC300 (RtlNormalizeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x1405A3BE0 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1405AF388 (EtwpApplyPayloadFilterInternal.c)
 *     NtQueryQuotaInformationFile @ 0x140898570 (NtQueryQuotaInformationFile.c)
 *     PopNetInitialize @ 0x140A41C60 (PopNetInitialize.c)
 *     IopCreateUmdfDirectory @ 0x140A5C514 (IopCreateUmdfDirectory.c)
 *     SepVariableInitialization @ 0x140A667BC (SepVariableInitialization.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A742FC (PopCreateTimebrokerServiceSid.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140A74A1C (CmpInitializeTrustedInstallerSid.c)
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
