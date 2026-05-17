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
 *     RtlCreateServiceSid @ 0x18003FA80 (RtlCreateServiceSid.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180044040 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetRegistryHandle @ 0x18004591C (RtlpGetRegistryHandle.c)
 *     EtwpCreateFile @ 0x180049314 (EtwpCreateFile.c)
 *     EtwpInitLoggerContext @ 0x1800494AC (EtwpInitLoggerContext.c)
 *     EtwpGenerateFileName @ 0x18004C468 (EtwpGenerateFileName.c)
 *     EtwpFreeLoggerContext @ 0x18004F614 (EtwpFreeLoggerContext.c)
 *     EtwpFlushUmLogger @ 0x18004FA7C (EtwpFlushUmLogger.c)
 *     LdrResSearchResource @ 0x1800554B0 (LdrResSearchResource.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800730C4 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     LdrpQuerySxSMUIFile @ 0x1800775AC (LdrpQuerySxSMUIFile.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18007A3A0 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18007A428 (RtlpGetPolicyValueForSystemCapability.c)
 *     LdrpCodeAuthzInitialize @ 0x18007C370 (LdrpCodeAuthzInitialize.c)
 *     LdrSetDllDirectory @ 0x180080640 (LdrSetDllDirectory.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800830F4 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlCreateVirtualAccountSid @ 0x180084530 (RtlCreateVirtualAccountSid.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800CEFD4 (LdrpLogEtwDllSearchResults.c)
 *     LdrpCheckAppDirType @ 0x1800D06BC (LdrpCheckAppDirType.c)
 *     LdrpInitializeProcess @ 0x1800D1EC0 (LdrpInitializeProcess.c)
 *     sxsisol_RespectDotLocal @ 0x1800DF750 (sxsisol_RespectDotLocal.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800E373C (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1800F5BDC (RtlpConstructCrossVmObjectPath.c)
 *     RtlIsNameInExpression @ 0x1800FB5A0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800FB650 (RtlIsNameInUnUpcasedExpression.c)
 *     EtwpUpdateUmLogger @ 0x180111500 (EtwpUpdateUmLogger.c)
 *     RtlpTpIoDllLoaded @ 0x18011345C (RtlpTpIoDllLoaded.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119C80 (OpenGlobalizationUserSettingsKey_ForMua.c)
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
