/*
 * XREFs of _ZwQueryInformationToken@20 @ 0x4B2F2B90
 * Callers:
 *     _RtlFormatCurrentUserKeyPath@4 @ 0x4B2D3860 (_RtlFormatCurrentUserKeyPath@4.c)
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlpGetDefaultsSubjectContext@36 @ 0x4B2D8FCB (_RtlpGetDefaultsSubjectContext@36.c)
 *     _RtlpGetDefaultTrustSubjectContext@8 @ 0x4B2D9164 (_RtlpGetDefaultTrustSubjectContext@8.c)
 *     _RtlpValidOwnerSubjectContext@16 @ 0x4B2D94CA (_RtlpValidOwnerSubjectContext@16.c)
 *     _RtlGetAppContainerNamedObjectPath@16 @ 0x4B2E7930 (_RtlGetAppContainerNamedObjectPath@16.c)
 *     _RtlCheckTokenCapability@12 @ 0x4B2EF6F0 (_RtlCheckTokenCapability@12.c)
 *     _RtlCheckSandboxedToken@8 @ 0x4B335B50 (_RtlCheckSandboxedToken@8.c)
 *     _RtlDefaultNpAcl@4 @ 0x4B335F90 (_RtlDefaultNpAcl@4.c)
 *     _RtlNewInstanceSecurityObject@40 @ 0x4B336270 (_RtlNewInstanceSecurityObject@40.c)
 *     _RtlNewSecurityGrantedAccess@24 @ 0x4B336330 (_RtlNewSecurityGrantedAccess@24.c)
 *     _AVrfpAppendCurrentUserSid@4 @ 0x4B338986 (_AVrfpAppendCurrentUserSid@4.c)
 *     _WerEscalationLazyInit@0 @ 0x4B33B780 (_WerEscalationLazyInit@0.c)
 *     _RtlRemovePrivileges@12 @ 0x4B346D90 (_RtlRemovePrivileges@12.c)
 *     _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45 (_RtlpGetTokenNamedObjectPath@16.c)
 *     _RtlpIsAppContainer@8 @ 0x4B3490A6 (_RtlpIsAppContainer@8.c)
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 *     _RtlpValidLabelSubjectContext@16 @ 0x4B34A22A (_RtlpValidLabelSubjectContext@16.c)
 *     _EtwpWriteToPrivateBuffers@40 @ 0x4B381B7E (_EtwpWriteToPrivateBuffers@40.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x4B38B10C (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwQueryInformationToken(
        HANDLE TokenHandle,
        ULONG TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  return Wow64SystemServiceCall();
}
