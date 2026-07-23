/*
 * XREFs of SepVariableInitialization @ 0x140A667BC
 * Callers:
 *     SepInitializationPhase0 @ 0x140A65570 (SepInitializationPhase0.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x140360F50 (RtlDeriveCapabilitySidsFromName.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlLengthRequiredSid @ 0x1406A9EC0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x14071B790 (RtlInitializeSid.c)
 *     SepInitializeSharedSidMap @ 0x1407A943C (SepInitializeSharedSidMap.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B7280 (ExAllocatePool2.c)
 *     SepInitSystemDacls @ 0x140A684D0 (SepInitSystemDacls.c)
 */

bool SepVariableInitialization()
{
  int v0; // eax
  bool v1; // cl
  ULONG v2; // edi
  _DWORD *PoolWithTag; // rbx
  _DWORD *v4; // r12
  _DWORD *v5; // r13
  _DWORD *v6; // r15
  _DWORD *v7; // r14
  _DWORD *v8; // rsi
  ULONG v9; // eax
  _DWORD *v10; // r12
  _DWORD *v11; // r13
  _DWORD *v12; // r15
  _DWORD *v13; // r14
  _DWORD *v14; // rsi
  _DWORD *v15; // rdi
  PSID v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  PSID v21; // rdx
  _DWORD *v22; // rax
  _DWORD *v23; // rbx
  _DWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // rax
  PSID v32; // r8
  PSID v33; // rdx
  __int64 v34; // rdx
  char *v35; // rcx
  _DWORD *v37; // [rsp+20h] [rbp-E0h]
  _DWORD *v38; // [rsp+20h] [rbp-E0h]
  __int64 v39; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+48h] [rbp-B8h] BYREF
  __int64 IdentifierAuthority; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  PSID Sid; // [rsp+68h] [rbp-98h]
  PSID v48; // [rsp+70h] [rbp-90h]
  PSID v49; // [rsp+78h] [rbp-88h]
  PSID v50; // [rsp+80h] [rbp-80h]
  PSID v51; // [rsp+88h] [rbp-78h]
  PSID v52; // [rsp+90h] [rbp-70h]
  PSID v53; // [rsp+98h] [rbp-68h]
  PSID v54; // [rsp+A0h] [rbp-60h]
  PSID v55; // [rsp+A8h] [rbp-58h]
  PSID v56; // [rsp+B0h] [rbp-50h]
  PSID v57; // [rsp+B8h] [rbp-48h]
  PSID v58; // [rsp+C0h] [rbp-40h]
  PSID v59; // [rsp+C8h] [rbp-38h]
  PSID v60; // [rsp+D0h] [rbp-30h]
  PSID v61; // [rsp+D8h] [rbp-28h]
  PSID v62; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING v63; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v64; // [rsp+F8h] [rbp-8h] BYREF
  UNICODE_STRING v65; // [rsp+108h] [rbp+8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING v67; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING v68; // [rsp+138h] [rbp+38h] BYREF
  UNICODE_STRING v69; // [rsp+148h] [rbp+48h] BYREF
  UNICODE_STRING v70; // [rsp+158h] [rbp+58h] BYREF
  UNICODE_STRING v71; // [rsp+168h] [rbp+68h] BYREF
  UNICODE_STRING v72; // [rsp+178h] [rbp+78h] BYREF
  UNICODE_STRING v73; // [rsp+188h] [rbp+88h] BYREF
  UNICODE_STRING v74; // [rsp+198h] [rbp+98h] BYREF
  UNICODE_STRING v75; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v76; // [rsp+1B8h] [rbp+B8h] BYREF
  UNICODE_STRING v77; // [rsp+1C8h] [rbp+C8h] BYREF
  UNICODE_STRING v78; // [rsp+1D8h] [rbp+D8h] BYREF
  UNICODE_STRING v79; // [rsp+1E8h] [rbp+E8h] BYREF
  UNICODE_STRING v80; // [rsp+1F8h] [rbp+F8h] BYREF
  UNICODE_STRING v81; // [rsp+208h] [rbp+108h] BYREF
  UNICODE_STRING v82; // [rsp+218h] [rbp+118h] BYREF
  PSID v83; // [rsp+228h] [rbp+128h]
  PSID v84; // [rsp+230h] [rbp+130h]
  PSID v85; // [rsp+238h] [rbp+138h]
  PSID v86; // [rsp+240h] [rbp+140h]
  PSID CapabilityGroupSid; // [rsp+248h] [rbp+148h]
  PSID v88; // [rsp+250h] [rbp+150h]
  PSID v89; // [rsp+258h] [rbp+158h]
  PSID v90; // [rsp+260h] [rbp+160h]
  PSID v91; // [rsp+268h] [rbp+168h]
  PSID v92; // [rsp+270h] [rbp+170h]
  ULONG Size; // [rsp+2D0h] [rbp+1D0h]
  ULONG NumberOfBytes; // [rsp+2D8h] [rbp+1D8h]
  _DWORD *NumberOfBytesa; // [rsp+2D8h] [rbp+1D8h]
  ULONG v96; // [rsp+2E0h] [rbp+1E0h]
  _DWORD *v97; // [rsp+2E0h] [rbp+1E0h]
  ULONG v98; // [rsp+2E8h] [rbp+1E8h]
  _DWORD *v99; // [rsp+2E8h] [rbp+1E8h]

  *(_QWORD *)&UnicodeString.Length = 2359330LL;
  UnicodeString.Buffer = L"lpacAppExperience";
  v67.Buffer = L"lpacCom";
  v68.Buffer = L"lpacCryptoServices";
  v69.Buffer = L"lpacIdentityServices";
  v70.Buffer = L"lpacInstrumentation";
  v71.Buffer = L"lpacEnterprisePolicyChangeNotifications";
  v72.Buffer = L"lpacMedia";
  v73.Buffer = L"lpacPnpNotifications";
  v74.Buffer = L"registryRead";
  v75.Buffer = L"lpacServicesManagement";
  v76.Buffer = L"lpacSessionManagement";
  v77.Buffer = L"lpacPrinting";
  v78.Buffer = L"lpacWebPlatform";
  v65.Buffer = L"lpacPayments";
  v79.Buffer = L"lpacClipboard";
  v80.Buffer = L"lpacIME";
  v82.Buffer = L"lpacDeviceAccess";
  v81.Buffer = L"lpacPackageManagerOperation";
  v64.Buffer = L"sessionImpersonation";
  v63.Buffer = L"constrainedImpersonation";
  LODWORD(IdentifierAuthority) = 0;
  WORD2(IdentifierAuthority) = 0;
  LODWORD(v45) = 0;
  WORD2(v45) = 256;
  LODWORD(v46) = 0;
  WORD2(v46) = 512;
  LODWORD(v41) = 0;
  WORD2(v41) = 768;
  LODWORD(v39) = 0;
  WORD2(v39) = 1280;
  *(_QWORD *)&v67.Length = 1048590LL;
  *(_QWORD *)&v68.Length = 2490404LL;
  *(_QWORD *)&v69.Length = 2752552LL;
  *(_QWORD *)&v70.Length = 2621478LL;
  *(_QWORD *)&v71.Length = 5242958LL;
  *(_QWORD *)&v72.Length = 1310738LL;
  *(_QWORD *)&v73.Length = 2752552LL;
  *(_QWORD *)&v74.Length = 1703960LL;
  *(_QWORD *)&v75.Length = 3014700LL;
  *(_QWORD *)&v76.Length = 2883626LL;
  *(_QWORD *)&v77.Length = 1703960LL;
  *(_QWORD *)&v78.Length = 2097182LL;
  *(_QWORD *)&v65.Length = 1703960LL;
  *(_QWORD *)&v79.Length = 1835034LL;
  *(_QWORD *)&v80.Length = 1048590LL;
  *(_QWORD *)&v82.Length = 2228256LL;
  *(_QWORD *)&v81.Length = 3670070LL;
  *(_QWORD *)&v64.Length = 2752552LL;
  *(_QWORD *)&v63.Length = 3276848LL;
  LODWORD(v42) = 0;
  WORD2(v42) = 4096;
  LODWORD(v43) = 0;
  WORD2(v43) = 3840;
  LODWORD(v40) = 0;
  WORD2(v40) = 4864;
  v0 = *(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 132LL);
  v1 = (v0 & 0x40) == 0 && MEMORY[0xFFFFF78000000264] == 1 && MEMORY[0xFFFFF780000002E8] <= 0x83400u;
  SepTokenSidSharingEnabled = v1;
  SepTokenCapabilitySidSharingEnabled = v1;
  SepOsLoaderTpmDriverLoaded = (v0 & 0x80) != 0;
  v2 = RtlLengthRequiredSid(1u);
  NumberOfBytes = RtlLengthRequiredSid(2u);
  Size = RtlLengthRequiredSid(6u);
  v98 = RtlLengthRequiredSid(9u);
  v96 = RtlLengthRequiredSid(0xAu);
  SeNullSid = ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  SeCreatorOwnerSid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeCreatorGroupSid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeCreatorOwnerServerSid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeCreatorGroupServerSid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeWorldSid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeLocalSid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeOwnerRightsSid = PoolWithTag;
  v37 = SeNullSid;
  if ( !SeNullSid )
    return 0;
  Sid = SeWorldSid;
  if ( !SeWorldSid )
    return 0;
  v4 = SeLocalSid;
  if ( !SeLocalSid )
    return 0;
  v5 = SeCreatorOwnerSid;
  if ( !SeCreatorOwnerSid )
    return 0;
  v6 = SeCreatorGroupSid;
  if ( !SeCreatorGroupSid )
    return 0;
  v7 = SeCreatorOwnerServerSid;
  if ( !SeCreatorOwnerServerSid )
    return 0;
  if ( !PoolWithTag )
    return 0;
  v8 = SeCreatorGroupServerSid;
  if ( !SeCreatorGroupServerSid )
    return 0;
  RtlInitializeSid(SeNullSid, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v45, 1u);
  RtlInitializeSid(v4, (PSID_IDENTIFIER_AUTHORITY)&v46, 1u);
  RtlInitializeSid(v5, (PSID_IDENTIFIER_AUTHORITY)&v41, 1u);
  RtlInitializeSid(v6, (PSID_IDENTIFIER_AUTHORITY)&v41, 1u);
  RtlInitializeSid(v7, (PSID_IDENTIFIER_AUTHORITY)&v41, 1u);
  RtlInitializeSid(v8, (PSID_IDENTIFIER_AUTHORITY)&v41, 1u);
  RtlInitializeSid(PoolWithTag, (PSID_IDENTIFIER_AUTHORITY)&v41, 1u);
  v37[2] = 0;
  *((_DWORD *)Sid + 2) = 0;
  v4[2] = 0;
  v5[2] = 0;
  v6[2] = 1;
  v7[2] = 2;
  v8[2] = 3;
  PoolWithTag[2] = 4;
  v9 = RtlLengthRequiredSid(0);
  SeNtAuthoritySid = ExAllocatePoolWithTag((POOL_TYPE)17, v9, 0x69536553u);
  SeDialupSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  SeNetworkSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeBatchSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeInteractiveSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SePrincipalSelfSid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeServiceSid = ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  SeLocalSystemSid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeAuthenticatedUsersSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  *(_QWORD *)&SeRestrictedSid = ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  SeAnonymousLogonSid = ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  SeLocalServiceSid = ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  SeNetworkServiceSid = ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  SeIUserSid = ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  SeAliasAdminsSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasUsersSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasGuestsSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasPowerUsersSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasAccountOpsSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasSystemOpsSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasPrintOpsSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasBackupOpsSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeUntrustedMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeLowMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeMediumMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeHighMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeSystemMandatorySid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SePackagePrefixSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeCapabilityPrefixSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeAllAppPackagesSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeAllRestrictedAppPackagesSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeLpacAppExperienceCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeLpacComCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeLpacCryptoServicesCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeLpacIdentityServicesCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeLpacInstrumentationCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeLpacEnterprisePolicyChangeNotificationsCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeLpacMediaCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeLpacPnpNotificationsCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeRegistryReadCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeLpacServicesManagementCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeLpacSessionManagementCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeLpacPrintingCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeLpacWebPlatformCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeLpacPaymentsCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeLpacClipboardCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeLpacImeCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeLpacPackageManagerOperationCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeLpacDeviceAccessCapabilitySid = ExAllocatePool2(288LL, v96, 0x69536553u);
  SeUserModeDriversSid = ExAllocatePoolWithTag((POOL_TYPE)528, Size, 0x69536553u);
  SeTrustedInstallerSid = ExAllocatePoolWithTag((POOL_TYPE)528, Size, 0x69536553u);
  SeProcTrustWinTcbSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustWinSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustAuthenticodeSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustLiteAntimalwareSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustLiteWinTcbSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustLiteWinSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustLiteAppSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustNoneSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeDefaultAccountAliasSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeConstrainedImpersonationCapabilityGroupSid = ExAllocatePoolWithTag((POOL_TYPE)17, v98, 0x69536553u);
  SeConstrainedImpersonationCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  SeSessionImpersonationCapabilityGroupSid = ExAllocatePoolWithTag((POOL_TYPE)17, v98, 0x69536553u);
  SeSessionImpersonationCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v96, 0x69536553u);
  if ( !SeNtAuthoritySid )
    return 0;
  NumberOfBytesa = (_DWORD *)SeDialupSid;
  if ( !SeDialupSid )
    return 0;
  v97 = (_DWORD *)SeNetworkSid;
  if ( !SeNetworkSid )
    return 0;
  v99 = (_DWORD *)SeBatchSid;
  if ( !SeBatchSid )
    return 0;
  Sid = (PSID)SeInteractiveSid;
  if ( !SeInteractiveSid )
    return 0;
  v56 = SeServiceSid;
  if ( !SeServiceSid )
    return 0;
  v55 = SePrincipalSelfSid;
  if ( !SePrincipalSelfSid )
    return 0;
  v54 = SeLocalSystemSid;
  if ( !SeLocalSystemSid )
    return 0;
  v53 = (PSID)SeAuthenticatedUsersSid;
  if ( !SeAuthenticatedUsersSid )
    return 0;
  v52 = *(PSID *)&SeRestrictedSid;
  if ( !*(_QWORD *)&SeRestrictedSid )
    return 0;
  v51 = SeAnonymousLogonSid;
  if ( !SeAnonymousLogonSid )
    return 0;
  v50 = SeLocalServiceSid;
  if ( !SeLocalServiceSid )
    return 0;
  v49 = SeNetworkServiceSid;
  if ( !SeNetworkServiceSid )
    return 0;
  v48 = SeIUserSid;
  if ( !SeIUserSid )
    return 0;
  v46 = (__int64)SeAliasAdminsSid;
  if ( !SeAliasAdminsSid )
    return 0;
  v45 = (__int64)SeAliasUsersSid;
  if ( !SeAliasUsersSid )
    return 0;
  IdentifierAuthority = SeAliasGuestsSid;
  if ( !SeAliasGuestsSid )
    return 0;
  v41 = SeAliasPowerUsersSid;
  if ( !SeAliasPowerUsersSid )
    return 0;
  v10 = SeAliasAccountOpsSid;
  if ( !SeAliasAccountOpsSid )
    return 0;
  v11 = SeAliasSystemOpsSid;
  if ( !SeAliasSystemOpsSid )
    return 0;
  v12 = SeAliasPrintOpsSid;
  if ( !SeAliasPrintOpsSid )
    return 0;
  v13 = SeAliasBackupOpsSid;
  if ( !SeAliasBackupOpsSid )
    return 0;
  v57 = SeUntrustedMandatorySid;
  if ( !SeUntrustedMandatorySid )
    return 0;
  v58 = SeLowMandatorySid;
  if ( !SeLowMandatorySid )
    return 0;
  v59 = SeMediumMandatorySid;
  if ( !SeMediumMandatorySid )
    return 0;
  v60 = SeHighMandatorySid;
  if ( !SeHighMandatorySid )
    return 0;
  v61 = (PSID)SeSystemMandatorySid;
  if ( !SeSystemMandatorySid )
    return 0;
  v62 = (PSID)SePackagePrefixSid;
  if ( !SePackagePrefixSid )
    return 0;
  v38 = (_DWORD *)SeCapabilityPrefixSid;
  if ( !SeCapabilityPrefixSid )
    return 0;
  v14 = SeAllAppPackagesSid;
  if ( !SeAllAppPackagesSid )
    return 0;
  v15 = SeAllRestrictedAppPackagesSid;
  if ( !SeAllRestrictedAppPackagesSid )
    return 0;
  if ( !SeLpacAppExperienceCapabilitySid )
    return 0;
  if ( !SeLpacComCapabilitySid )
    return 0;
  if ( !SeLpacCryptoServicesCapabilitySid )
    return 0;
  if ( !SeLpacIdentityServicesCapabilitySid )
    return 0;
  if ( !SeLpacInstrumentationCapabilitySid )
    return 0;
  if ( !SeLpacEnterprisePolicyChangeNotificationsCapabilitySid )
    return 0;
  if ( !SeLpacMediaCapabilitySid )
    return 0;
  if ( !SeLpacPnpNotificationsCapabilitySid )
    return 0;
  if ( !SeRegistryReadCapabilitySid )
    return 0;
  if ( !SeLpacServicesManagementCapabilitySid )
    return 0;
  if ( !SeLpacSessionManagementCapabilitySid )
    return 0;
  if ( !SeLpacPrintingCapabilitySid )
    return 0;
  if ( !SeLpacWebPlatformCapabilitySid )
    return 0;
  if ( !SeLpacPaymentsCapabilitySid )
    return 0;
  if ( !SeLpacClipboardCapabilitySid )
    return 0;
  if ( !SeLpacImeCapabilitySid )
    return 0;
  if ( !SeLpacPackageManagerOperationCapabilitySid )
    return 0;
  if ( !SeLpacDeviceAccessCapabilitySid )
    return 0;
  v16 = SeUserModeDriversSid;
  if ( !SeUserModeDriversSid )
    return 0;
  v86 = SeProcTrustWinTcbSid;
  if ( !SeProcTrustWinTcbSid )
    return 0;
  v88 = (PSID)SeProcTrustWinSid;
  if ( !SeProcTrustWinSid )
    return 0;
  v89 = (PSID)SeProcTrustAuthenticodeSid;
  if ( !SeProcTrustAuthenticodeSid )
    return 0;
  v90 = (PSID)SeProcTrustLiteAntimalwareSid;
  if ( !SeProcTrustLiteAntimalwareSid )
    return 0;
  v91 = (PSID)SeProcTrustLiteWinTcbSid;
  if ( !SeProcTrustLiteWinTcbSid )
    return 0;
  v92 = (PSID)SeProcTrustLiteWinSid;
  if ( !SeProcTrustLiteWinSid )
    return 0;
  v85 = (PSID)SeProcTrustLiteAppSid;
  if ( !SeProcTrustLiteAppSid )
    return 0;
  v84 = (PSID)SeProcTrustNoneSid;
  if ( !SeProcTrustNoneSid )
    return 0;
  v83 = SeTrustedInstallerSid;
  if ( !SeTrustedInstallerSid )
    return 0;
  if ( !SeDefaultAccountAliasSid )
    return 0;
  if ( !SeConstrainedImpersonationCapabilitySid )
    return 0;
  CapabilityGroupSid = SeConstrainedImpersonationCapabilityGroupSid;
  if ( !SeConstrainedImpersonationCapabilityGroupSid )
    return 0;
  if ( !SeSessionImpersonationCapabilitySid )
    return 0;
  if ( !SeSessionImpersonationCapabilityGroupSid )
    return 0;
  RtlInitializeSid(SeNtAuthoritySid, (PSID_IDENTIFIER_AUTHORITY)&v39, 0);
  RtlInitializeSid(NumberOfBytesa, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v97, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v99, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v56, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v55, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v54, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v53, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v52, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v51, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v50, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v49, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v48, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid((PSID)v46, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  RtlInitializeSid((PSID)v45, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  RtlInitializeSid((PSID)IdentifierAuthority, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  RtlInitializeSid((PSID)v41, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  RtlInitializeSid(v10, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  RtlInitializeSid(v11, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  RtlInitializeSid(v12, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  RtlInitializeSid(v13, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  RtlInitializeSid(v83, (PSID_IDENTIFIER_AUTHORITY)&v39, 6u);
  RtlInitializeSid(v57, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v58, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v59, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v60, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v61, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v62, (PSID_IDENTIFIER_AUTHORITY)&v43, 1u);
  RtlInitializeSid(v38, (PSID_IDENTIFIER_AUTHORITY)&v43, 1u);
  RtlInitializeSid(v14, (PSID_IDENTIFIER_AUTHORITY)&v43, 2u);
  RtlInitializeSid(v15, (PSID_IDENTIFIER_AUTHORITY)&v43, 2u);
  memset(v16, 0, Size);
  RtlInitializeSid(v16, (PSID_IDENTIFIER_AUTHORITY)&v39, 6u);
  RtlInitializeSid(v84, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  RtlInitializeSid(v86, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  RtlInitializeSid(v88, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  RtlInitializeSid(v89, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  RtlInitializeSid(v90, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  RtlInitializeSid(v91, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  RtlInitializeSid(v92, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  RtlInitializeSid(v85, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  v17 = v46;
  v18 = v45;
  v19 = IdentifierAuthority;
  NumberOfBytesa[2] = 1;
  v97[2] = 2;
  v99[2] = 3;
  *((_DWORD *)Sid + 2) = 4;
  *((_DWORD *)v56 + 2) = 6;
  *((_DWORD *)v55 + 2) = 10;
  *((_DWORD *)v54 + 2) = 18;
  *((_DWORD *)v53 + 2) = 11;
  *((_DWORD *)v52 + 2) = 12;
  *((_DWORD *)v51 + 2) = 7;
  *((_DWORD *)v50 + 2) = 19;
  *((_DWORD *)v49 + 2) = 20;
  *((_DWORD *)v48 + 2) = 17;
  v20 = v41;
  *(_DWORD *)(v17 + 8) = 32;
  *(_DWORD *)(v18 + 8) = 32;
  *(_DWORD *)(v19 + 8) = 32;
  *(_DWORD *)(v20 + 8) = 32;
  v10[2] = 32;
  v11[2] = 32;
  v12[2] = 32;
  v13[2] = 32;
  *(_DWORD *)(v17 + 12) = 544;
  *(_DWORD *)(v18 + 12) = 545;
  v21 = CapabilityGroupSid;
  *(_DWORD *)(v19 + 12) = 546;
  *(_DWORD *)(v20 + 12) = 547;
  v22 = v57;
  v10[3] = 548;
  v11[3] = 549;
  v12[3] = 550;
  v13[3] = 551;
  v22[2] = 0;
  *((_DWORD *)v58 + 2) = 4096;
  *((_DWORD *)v59 + 2) = 0x2000;
  *((_DWORD *)v60 + 2) = 12288;
  *((_DWORD *)v61 + 2) = 0x4000;
  *((_DWORD *)v62 + 2) = 2;
  v38[2] = 3;
  v14[2] = 2;
  v14[3] = 1;
  v15[2] = 2;
  v15[3] = 2;
  if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, v21, SeLpacAppExperienceCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v67, SeConstrainedImpersonationCapabilityGroupSid, SeLpacComCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v68,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacCryptoServicesCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v69,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacIdentityServicesCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v70,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacInstrumentationCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v71,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacEnterprisePolicyChangeNotificationsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v72, SeConstrainedImpersonationCapabilityGroupSid, SeLpacMediaCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v73,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacPnpNotificationsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v74, SeConstrainedImpersonationCapabilityGroupSid, SeRegistryReadCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v75,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacServicesManagementCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v76,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacSessionManagementCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v77, SeConstrainedImpersonationCapabilityGroupSid, SeLpacPrintingCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v78,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacWebPlatformCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v65, SeConstrainedImpersonationCapabilityGroupSid, SeLpacPaymentsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v79, SeConstrainedImpersonationCapabilityGroupSid, SeLpacClipboardCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v80, SeConstrainedImpersonationCapabilityGroupSid, SeLpacImeCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v81,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacPackageManagerOperationCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v82,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacDeviceAccessCapabilitySid) < 0 )
    return 0;
  v23 = SeDefaultAccountAliasSid;
  *((_DWORD *)SeUserModeDriversSid + 2) = 84;
  *(_QWORD *)(SeProcTrustNoneSid + 8) = 0LL;
  v24 = SeProcTrustWinTcbSid;
  *((_DWORD *)SeProcTrustWinTcbSid + 2) = 1024;
  v24[3] = 0x2000;
  v25 = SeProcTrustWinSid;
  *(_DWORD *)(SeProcTrustWinSid + 8) = 1024;
  *(_DWORD *)(v25 + 12) = 4096;
  v26 = SeProcTrustAuthenticodeSid;
  *(_DWORD *)(SeProcTrustAuthenticodeSid + 8) = 1024;
  *(_DWORD *)(v26 + 12) = 1024;
  v27 = SeProcTrustLiteAntimalwareSid;
  *(_DWORD *)(SeProcTrustLiteAntimalwareSid + 8) = 512;
  *(_DWORD *)(v27 + 12) = 1536;
  v28 = SeProcTrustLiteWinTcbSid;
  *(_DWORD *)(SeProcTrustLiteWinTcbSid + 8) = 512;
  *(_DWORD *)(v28 + 12) = 0x2000;
  v29 = SeProcTrustLiteWinSid;
  *(_DWORD *)(SeProcTrustLiteWinSid + 8) = 512;
  *(_DWORD *)(v29 + 12) = 4096;
  v30 = SeProcTrustLiteAppSid;
  *(_DWORD *)(SeProcTrustLiteAppSid + 8) = 512;
  *(_DWORD *)(v30 + 12) = 2048;
  v31 = SeTrustedInstallerSid;
  *((_DWORD *)SeTrustedInstallerSid + 2) = 80;
  v31[3] = 956008885;
  v31[4] = -876444647;
  v31[5] = 1831038044;
  v31[6] = 1853292631;
  v31[7] = -2023488832;
  RtlInitializeSid(v23, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  v32 = SeConstrainedImpersonationCapabilitySid;
  v33 = SeConstrainedImpersonationCapabilityGroupSid;
  v23[2] = 32;
  v23[3] = 581;
  if ( RtlDeriveCapabilitySidsFromName(&v63, v33, v32) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v64,
         SeSessionImpersonationCapabilityGroupSid,
         SeSessionImpersonationCapabilitySid) < 0 )
    return 0;
  SepInitSystemDacls();
  SeCreateTokenPrivilege = (LUID)2LL;
  SeAssignPrimaryTokenPrivilege = (LUID)3LL;
  SeLockMemoryPrivilege = (LUID)4LL;
  SeIncreaseQuotaPrivilege = (LUID)5LL;
  v46 = 6LL;
  SeUnsolicitedInputPrivilege = 6LL;
  v45 = 7LL;
  SeTcbPrivilege = (LUID)7LL;
  IdentifierAuthority = 8LL;
  SeSecurityPrivilege = (LUID)8LL;
  v43 = 9LL;
  SeTakeOwnershipPrivilege = 9LL;
  v42 = 10LL;
  SeLoadDriverPrivilege = (LUID)10LL;
  v41 = 15LL;
  SeCreatePagefilePrivilege = (LUID)15LL;
  v40 = 14LL;
  SeIncreaseBasePriorityPrivilege = (LUID)14LL;
  v39 = 11LL;
  SeSystemProfilePrivilege = (LUID)11LL;
  v48 = (PSID)12;
  SeSystemtimePrivilege = (LUID)12LL;
  v49 = (PSID)13;
  SeProfileSingleProcessPrivilege = (LUID)13LL;
  v50 = (PSID)16;
  SeCreatePermanentPrivilege = (LUID)16LL;
  v51 = (PSID)17;
  SeBackupPrivilege = (LUID)17LL;
  v52 = (PSID)18;
  SeRestorePrivilege = (LUID)18LL;
  v53 = (PSID)19;
  SeShutdownPrivilege = (LUID)19LL;
  v54 = (PSID)20;
  SeDebugPrivilege = (LUID)20LL;
  v55 = (PSID)21;
  SeAuditPrivilege = 21LL;
  v56 = (PSID)22;
  Sid = (PSID)23;
  SeSystemEnvironmentPrivilege = (LUID)22LL;
  SeChangeNotifyPrivilege = 23LL;
  SeRemoteShutdownPrivilege = 24LL;
  SeUndockPrivilege = 25LL;
  SeSyncAgentPrivilege = 26LL;
  SeEnableDelegationPrivilege = 27LL;
  qword_140D2ED28 = (__int64)SeNullSid;
  qword_140D2ED30 = (__int64)SeWorldSid;
  qword_140D2ED38 = (__int64)SeLocalSid;
  qword_140D2ED40 = (__int64)SeCreatorOwnerSid;
  qword_140D2ED48 = (__int64)SeCreatorGroupSid;
  qword_140D2EE70 = (__int64)SeOwnerRightsSid;
  qword_140D2ED50 = (__int64)SeNtAuthoritySid;
  qword_140D2ED58 = SeDialupSid;
  qword_140D2ED60 = SeNetworkSid;
  qword_140D2ED68 = SeBatchSid;
  qword_140D2ED70 = SeInteractiveSid;
  qword_140D2ED78 = (__int64)SeLocalSystemSid;
  qword_140D2EDC0 = SeAuthenticatedUsersSid;
  qword_140D2EDC8 = *(_QWORD *)&SeRestrictedSid;
  qword_140D2EDD0 = (__int64)SeAnonymousLogonSid;
  qword_140D2EDF0 = (__int64)SeLocalServiceSid;
  qword_140D2EDF8 = (__int64)SeNetworkServiceSid;
  qword_140D2EE40 = (__int64)SeIUserSid;
  qword_140D2ED80 = (__int64)SeAliasAdminsSid;
  qword_140D2ED88 = (__int64)SeAliasUsersSid;
  qword_140D2ED90 = SeAliasGuestsSid;
  qword_140D2ED98 = SeAliasPowerUsersSid;
  qword_140D2EDA0 = (__int64)SeAliasAccountOpsSid;
  qword_140D2EDA8 = (__int64)SeAliasSystemOpsSid;
  qword_140D2EDB0 = (__int64)SeAliasPrintOpsSid;
  qword_140D2EDB8 = (__int64)SeAliasBackupOpsSid;
  qword_140D2EE48 = (__int64)SeUntrustedMandatorySid;
  qword_140D2EE50 = (__int64)SeLowMandatorySid;
  SeManageVolumePrivilege = 28LL;
  SeImpersonatePrivilege = 29LL;
  SeCreateGlobalPrivilege = (LUID)30LL;
  SeTrustedCredManAccessPrivilege = 31LL;
  SeRelabelPrivilege = 32LL;
  SeIncreaseWorkingSetPrivilege = 33LL;
  SeTimeZonePrivilege = (LUID)34LL;
  SeCreateSymbolicLinkPrivilege = 35LL;
  SeDelegateSessionUserImpersonatePrivilege = 36LL;
  qword_140D2EE58 = (__int64)SeMediumMandatorySid;
  qword_140D2EE60 = (__int64)SeHighMandatorySid;
  qword_140D2EE68 = SeSystemMandatorySid;
  qword_140D2EE78 = (__int64)SeAllAppPackagesSid;
  qword_140D2EE80 = (__int64)SeUserModeDriversSid;
  qword_140D2EE88 = (__int64)SeProcTrustWinTcbSid;
  qword_140D2EE90 = (__int64)SeTrustedInstallerSid;
  SepExports = 2LL;
  qword_140D2EC78 = 3LL;
  qword_140D2EC80 = 4LL;
  qword_140D2EC88 = 5LL;
  qword_140D2EC90 = 6LL;
  qword_140D2EC98 = 7LL;
  qword_140D2ECA0 = 8LL;
  qword_140D2ECA8 = 9LL;
  qword_140D2ECB0 = 10LL;
  qword_140D2ECB8 = 15LL;
  qword_140D2ECC0 = 14LL;
  qword_140D2ECC8 = 11LL;
  qword_140D2ECD0 = 12LL;
  qword_140D2ECD8 = 13LL;
  qword_140D2ECE0 = 16LL;
  qword_140D2ECE8 = 17LL;
  qword_140D2ECF0 = 18LL;
  qword_140D2ECF8 = 19LL;
  qword_140D2ED00 = 20LL;
  qword_140D2ED08 = 21LL;
  qword_140D2ED10 = 22LL;
  qword_140D2EE98 = 36LL;
  qword_140D2EE08 = 29LL;
  qword_140D2EE30 = 34LL;
  v34 = 5LL;
  qword_140D2EE38 = 35LL;
  v35 = (char *)&unk_140C25D58;
  qword_140D2ED18 = 23LL;
  qword_140D2ED20 = 24LL;
  qword_140D2EDD8 = 25LL;
  qword_140D2EDE0 = 26LL;
  qword_140D2EDE8 = 27LL;
  qword_140D2EE00 = 28LL;
  qword_140D2EE10 = 30LL;
  qword_140D2EE18 = 31LL;
  qword_140D2EE20 = 32LL;
  qword_140D2EE28 = 33LL;
  SeExports = (PSE_EXPORTS)&SepExports;
  do
  {
    v35[8] = 0;
    *(_QWORD *)v35 = 0LL;
    *((_QWORD *)v35 - 3) = 0LL;
    v35 += 40;
    --v34;
  }
  while ( v34 );
  LowboxSessionMapLock = 0LL;
  g_SessionLowboxMap = 0LL;
  return (int)SepInitializeSharedSidMap() >= 0;
}
