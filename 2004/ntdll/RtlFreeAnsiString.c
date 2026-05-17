/*
 * XREFs of RtlFreeAnsiString @ 0x180016760
 * Callers:
 *     RtlEqualDomainName @ 0x18000CE90 (RtlEqualDomainName.c)
 *     LdrpLogDllStateEx2 @ 0x1800116AC (LdrpLogDllStateEx2.c)
 *     RtlOpenCurrentUser @ 0x180016790 (RtlOpenCurrentUser.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180016EE4 (LdrpSnapKernelBaseExtensions.c)
 *     RtlDosSearchPath_Ustr @ 0x180019C40 (RtlDosSearchPath_Ustr.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001A9E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001C2B4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18001FD40 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180036C40 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateServiceSid @ 0x18003FA70 (RtlCreateServiceSid.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180044030 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetRegistryHandle @ 0x18004590C (RtlpGetRegistryHandle.c)
 *     LdrResSearchResource @ 0x180048B30 (LdrResSearchResource.c)
 *     EtwpCreateFile @ 0x180056BD4 (EtwpCreateFile.c)
 *     EtwpInitLoggerContext @ 0x180056D6C (EtwpInitLoggerContext.c)
 *     EtwpGenerateFileName @ 0x18005814C (EtwpGenerateFileName.c)
 *     EtwpFreeLoggerContext @ 0x1800582C4 (EtwpFreeLoggerContext.c)
 *     EtwpFlushUmLogger @ 0x18005872C (EtwpFlushUmLogger.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180071F94 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     LdrpQuerySxSMUIFile @ 0x18007647C (LdrpQuerySxSMUIFile.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x180079270 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1800792F8 (RtlpGetPolicyValueForSystemCapability.c)
 *     LdrpCodeAuthzInitialize @ 0x18007B240 (LdrpCodeAuthzInitialize.c)
 *     LdrSetDllDirectory @ 0x18007FC20 (LdrSetDllDirectory.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800828E4 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlCreateVirtualAccountSid @ 0x180084030 (RtlCreateVirtualAccountSid.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800CEE34 (LdrpLogEtwDllSearchResults.c)
 *     LdrpCheckAppDirType @ 0x1800D051C (LdrpCheckAppDirType.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 *     sxsisol_RespectDotLocal @ 0x1800DF600 (sxsisol_RespectDotLocal.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800E345C (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1800F583C (RtlpConstructCrossVmObjectPath.c)
 *     RtlIsNameInExpression @ 0x1800FB200 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800FB2B0 (RtlIsNameInUnUpcasedExpression.c)
 *     EtwpUpdateUmLogger @ 0x180111150 (EtwpUpdateUmLogger.c)
 *     RtlpTpIoDllLoaded @ 0x1801130AC (RtlpTpIoDllLoaded.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119848 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 */

void __stdcall RtlFreeAnsiString(PUNICODE_STRING UnicodeString)
{
  if ( UnicodeString->Buffer )
  {
    NtdllpFreeStringRoutine();
    *UnicodeString = 0LL;
  }
}
