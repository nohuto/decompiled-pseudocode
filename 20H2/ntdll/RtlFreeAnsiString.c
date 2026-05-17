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
 *     RtlCreateServiceSid @ 0x18003FAC0 (RtlCreateServiceSid.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180044080 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetRegistryHandle @ 0x18004595C (RtlpGetRegistryHandle.c)
 *     LdrResSearchResource @ 0x180048B80 (LdrResSearchResource.c)
 *     EtwpCreateFile @ 0x180056C24 (EtwpCreateFile.c)
 *     EtwpInitLoggerContext @ 0x180056DBC (EtwpInitLoggerContext.c)
 *     EtwpGenerateFileName @ 0x18005819C (EtwpGenerateFileName.c)
 *     EtwpFreeLoggerContext @ 0x180058314 (EtwpFreeLoggerContext.c)
 *     EtwpFlushUmLogger @ 0x18005877C (EtwpFlushUmLogger.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180072094 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     LdrpQuerySxSMUIFile @ 0x18007657C (LdrpQuerySxSMUIFile.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x180079370 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1800793F8 (RtlpGetPolicyValueForSystemCapability.c)
 *     LdrpCodeAuthzInitialize @ 0x18007B340 (LdrpCodeAuthzInitialize.c)
 *     LdrSetDllDirectory @ 0x18007FD20 (LdrSetDllDirectory.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800829E4 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlCreateVirtualAccountSid @ 0x180084130 (RtlCreateVirtualAccountSid.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800CF014 (LdrpLogEtwDllSearchResults.c)
 *     LdrpCheckAppDirType @ 0x1800D06FC (LdrpCheckAppDirType.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 *     sxsisol_RespectDotLocal @ 0x1800DF9A0 (sxsisol_RespectDotLocal.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800E38AC (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1800F5D4C (RtlpConstructCrossVmObjectPath.c)
 *     RtlIsNameInExpression @ 0x1800FB710 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800FB7C0 (RtlIsNameInUnUpcasedExpression.c)
 *     EtwpUpdateUmLogger @ 0x180111660 (EtwpUpdateUmLogger.c)
 *     RtlpTpIoDllLoaded @ 0x1801135BC (RtlpTpIoDllLoaded.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119D58 (OpenGlobalizationUserSettingsKey_ForMua.c)
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
