/*
 * XREFs of RtlLengthRequiredSid @ 0x14062F730
 * Callers:
 *     SepCreateTokenEx @ 0x14026E3A0 (SepCreateTokenEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x14026EE00 (RtlNormalizeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x1405A0140 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1405AB828 (EtwpApplyPayloadFilterInternal.c)
 *     NtQueryQuotaInformationFile @ 0x1408928F0 (NtQueryQuotaInformationFile.c)
 *     PopNetInitialize @ 0x140A3BBDC (PopNetInitialize.c)
 *     IopCreateUmdfDirectory @ 0x140A4D578 (IopCreateUmdfDirectory.c)
 *     SepVariableInitialization @ 0x140A5F45C (SepVariableInitialization.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A6DBDC (PopCreateTimebrokerServiceSid.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140A6E23C (CmpInitializeTrustedInstallerSid.c)
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
