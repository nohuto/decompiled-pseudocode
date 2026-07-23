/*
 * XREFs of NtQueryInformationToken @ 0x18009D4D0
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x180036C40 (RtlFormatCurrentUserKeyPath.c)
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlCheckTokenCapability @ 0x18003C650 (RtlCheckTokenCapability.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x180043F20 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180044080 (RtlpGetTokenNamedObjectPath.c)
 *     EtwpWriteToPrivateBuffers @ 0x18004F53C (EtwpWriteToPrivateBuffers.c)
 *     RtlpGetDefaultsSubjectContext @ 0x180066DCC (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180067008 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x1800767AC (RtlpSetSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x18007D3D0 (RtlpValidOwnerSubjectContext.c)
 *     RtlCheckSandboxedToken @ 0x1800859A0 (RtlCheckSandboxedToken.c)
 *     RtlRemovePrivileges @ 0x180088870 (RtlRemovePrivileges.c)
 *     RtlDefaultNpAcl @ 0x1800D6CF0 (RtlDefaultNpAcl.c)
 *     RtlNewInstanceSecurityObject @ 0x1800D70C0 (RtlNewInstanceSecurityObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D71F0 (RtlNewSecurityGrantedAccess.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800DA7A4 (AVrfpAppendCurrentUserSid.c)
 *     WerEscalationLazyInit @ 0x1800DE408 (WerEscalationLazyInit.c)
 *     RtlpIsAppContainer @ 0x1800E8C64 (RtlpIsAppContainer.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E8DB4 (RtlpValidLabelSubjectContext.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119D58 (OpenGlobalizationUserSettingsKey_ForMua.c)
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
