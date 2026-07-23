/*
 * XREFs of NtQueryInformationToken @ 0x18009D230
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x180036C40 (RtlFormatCurrentUserKeyPath.c)
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlCheckTokenCapability @ 0x18003C650 (RtlCheckTokenCapability.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x180043ED0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180044030 (RtlpGetTokenNamedObjectPath.c)
 *     EtwpWriteToPrivateBuffers @ 0x18004F4EC (EtwpWriteToPrivateBuffers.c)
 *     RtlpGetDefaultsSubjectContext @ 0x180066CBC (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180066EF8 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x1800766AC (RtlpSetSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x18007D2D0 (RtlpValidOwnerSubjectContext.c)
 *     RtlCheckSandboxedToken @ 0x1800858A0 (RtlCheckSandboxedToken.c)
 *     RtlRemovePrivileges @ 0x180088770 (RtlRemovePrivileges.c)
 *     RtlDefaultNpAcl @ 0x1800D6950 (RtlDefaultNpAcl.c)
 *     RtlNewInstanceSecurityObject @ 0x1800D6D20 (RtlNewInstanceSecurityObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D6E50 (RtlNewSecurityGrantedAccess.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800DA404 (AVrfpAppendCurrentUserSid.c)
 *     WerEscalationLazyInit @ 0x1800DE068 (WerEscalationLazyInit.c)
 *     RtlpIsAppContainer @ 0x1800E8760 (RtlpIsAppContainer.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E88B0 (RtlpValidLabelSubjectContext.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119848 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationToken(
        HANDLE TokenHandle,
        ULONG TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 33;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
