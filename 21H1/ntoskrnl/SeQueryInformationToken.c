/*
 * XREFs of SeQueryInformationToken @ 0x1405E9F20
 * Callers:
 *     RtlpQueryLowBoxId @ 0x1402A5CA8 (RtlpQueryLowBoxId.c)
 *     EtwpPsProvTraceProcess @ 0x1405D879C (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x1405D8FA8 (EtwpBuildProcessEvent.c)
 *     CmpIsSystemEntity @ 0x1405EA850 (CmpIsSystemEntity.c)
 *     CmpVEExecuteParseLogic @ 0x1406232C0 (CmpVEExecuteParseLogic.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     RtlIsSandboxedToken @ 0x140649A20 (RtlIsSandboxedToken.c)
 *     AlpcpCheckConnectionSecurity @ 0x14064B658 (AlpcpCheckConnectionSecurity.c)
 *     SeQuerySigningPolicyWorker @ 0x14066ED48 (SeQuerySigningPolicyWorker.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14067DF00 (ObpVerifyCreatorAccessCheck.c)
 *     PiDqOpenUserObjectRegKey @ 0x140680718 (PiDqOpenUserObjectRegKey.c)
 *     CmpBuildAdminInformation @ 0x1406BBF30 (CmpBuildAdminInformation.c)
 *     NtCompareTokens @ 0x1406C80C0 (NtCompareTokens.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406CBAEC (PspAllocateAndQueryNotificationChannel.c)
 *     SeTokenIsElevated @ 0x1406D1328 (SeTokenIsElevated.c)
 *     SepCheckCapabilities @ 0x1406D4A94 (SepCheckCapabilities.c)
 *     PsIsProcessAppContainer @ 0x1406D8FA4 (PsIsProcessAppContainer.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     ObpCaptureBoundaryDescriptor @ 0x14070DD2C (ObpCaptureBoundaryDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407645F4 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpCreateRegistryProcessToken @ 0x14078721C (CmpCreateRegistryProcessToken.c)
 *     RtlpIsAppContainer @ 0x140910598 (RtlpIsAppContainer.c)
 *     EtwpAcquireTokenAccessInformation @ 0x14092F2AC (EtwpAcquireTokenAccessInformation.c)
 * Callees:
 *     SepCanTokenMatchAllPackageSid @ 0x1402052A8 (SepCanTokenMatchAllPackageSid.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     SepConvertTokenPrivileges @ 0x1402D7590 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1402D75C0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepCopyTokenIntegrity @ 0x1402D7648 (SepCopyTokenIntegrity.c)
 *     SepTokenPrivilegeCount @ 0x1402D85C0 (SepTokenPrivilegeCount.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14033A8A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     RtlSubAuthorityCountSid @ 0x14035C470 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x14035C480 (RtlSubAuthoritySid.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlCopySidAndAttributesArray @ 0x140608EE0 (RtlCopySidAndAttributesArray.c)
 *     RtlCopySid @ 0x14066B1C0 (RtlCopySid.c)
 *     SepCopyTokenAccessInformation @ 0x1406726C0 (SepCopyTokenAccessInformation.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x14067294C (SepGetTokenAccessInformationBufferSize.c)
 *     SeQuerySessionIdToken @ 0x1406C21D0 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x1406D2870 (AuthzBasepQueryClaimAttributesToken.c)
 *     RtlIsElevatedRid @ 0x14070DC40 (RtlIsElevatedRid.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall SeQueryInformationToken(
        PACCESS_TOKEN Token,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID *TokenInformation)
{
  char *v3; // rdi
  unsigned int v7; // eax
  unsigned int v8; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  ULONG v11; // edi
  _SID_AND_ATTRIBUTES *PoolWithTag; // rax
  _SID_AND_ATTRIBUTES *v13; // rbx
  struct _KTHREAD *v14; // rax
  __int64 v15; // rax
  _DWORD *v16; // r12
  struct _KTHREAD *v17; // rcx
  unsigned int v18; // r15d
  bool v19; // bl
  BOOLEAN IsElevatedRid; // al
  _DWORD *v21; // rax
  int v22; // edx
  struct _KTHREAD *v23; // rax
  int v24; // ecx
  _SID_AND_ATTRIBUTES *v25; // rax
  struct _KTHREAD *v26; // rax
  __int64 v27; // rax
  int v28; // edx
  struct _KTHREAD *v29; // rax
  char *v30; // rbx
  unsigned int v31; // r12d
  _QWORD *v32; // rax
  _QWORD *v33; // rdi
  struct _KTHREAD *v34; // rax
  unsigned int v35; // ecx
  ULONG v36; // ebx
  ULONG v37; // eax
  __int64 *v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rax
  char *v41; // rax
  void *v42; // r8
  BOOL v43; // r15d
  struct _KTHREAD *v44; // rax
  unsigned int v45; // edi
  _SID_AND_ATTRIBUTES *v46; // rax
  struct _KTHREAD *v47; // rax
  unsigned int TokenAccessInformationBufferSize; // r12d
  _SID_AND_ATTRIBUTES *v49; // rax
  struct _KTHREAD *v50; // rax
  unsigned int v51; // ecx
  ULONG v52; // ebx
  ULONG v53; // eax
  __int64 v54; // r8
  __int64 *v55; // rdx
  __int64 v56; // rax
  char *v57; // rax
  void *v58; // rdi
  struct _KTHREAD *v59; // rax
  unsigned int v60; // edi
  _SID_AND_ATTRIBUTES *v61; // rax
  _DWORD *v62; // rax
  struct _KTHREAD *v63; // rax
  unsigned int v64; // eax
  unsigned int v65; // ebx
  _SID_AND_ATTRIBUTES *v66; // rax
  struct _KTHREAD *v67; // rax
  int v68; // eax
  unsigned int v69; // ecx
  int v70; // r9d
  unsigned int v71; // r13d
  __int64 *v72; // rdx
  __int64 v73; // r8
  __int64 v74; // rax
  unsigned int v75; // ecx
  unsigned int v76; // r12d
  __int64 *v77; // rdx
  __int64 v78; // r8
  __int64 v79; // rax
  char *v80; // rax
  char *v81; // rbx
  char *v82; // rcx
  char *v83; // rax
  __int64 v84; // rcx
  ULONG v85; // r13d
  struct _KTHREAD *v86; // rax
  __int64 v87; // rax
  SIZE_T v88; // r12
  _SID_AND_ATTRIBUTES *v89; // rax
  ULONG *p_Attributes; // rcx
  _OWORD *v91; // rax
  _DWORD *v92; // rax
  struct _KTHREAD *v93; // rax
  __int64 v94; // r12
  __int128 *v95; // rax
  __int128 *v96; // r12
  unsigned int v97; // ebx
  PVOID v98; // rax
  void *v99; // rdi
  NTSTATUS v100; // ebx
  struct _KTHREAD *v101; // rax
  unsigned int *v102; // rax
  unsigned int v103; // ebx
  ULONG v104; // edi
  ULONG v105; // ecx
  __int64 *v106; // rdx
  __int64 v107; // r8
  __int64 v108; // rax
  char *v109; // r15
  struct _KTHREAD *v110; // rax
  struct _KTHREAD *v111; // rax
  __int64 v112; // rax
  SIZE_T v113; // rbx
  int RemainingSidAreaSize; // [rsp+30h] [rbp-99h]
  PSID RemainingSidArea; // [rsp+80h] [rbp-49h] BYREF
  unsigned int v116; // [rsp+88h] [rbp-41h] BYREF
  int v117; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v118; // [rsp+90h] [rbp-39h] BYREF
  int v119; // [rsp+94h] [rbp-35h] BYREF
  int v120; // [rsp+98h] [rbp-31h] BYREF
  int v121; // [rsp+9Ch] [rbp-2Dh] BYREF
  int v122; // [rsp+A0h] [rbp-29h] BYREF
  int v123; // [rsp+A4h] [rbp-25h] BYREF
  __int128 v124; // [rsp+A8h] [rbp-21h] BYREF
  __int128 v125; // [rsp+B8h] [rbp-11h]
  __int128 v126; // [rsp+C8h] [rbp-1h] BYREF
  PSID Sid[9]; // [rsp+D8h] [rbp+Fh]
  int v128; // [rsp+130h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned int v130; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v116 = 0;
  v124 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  if ( TokenInformationClass == TokenVirtualizationEnabled )
  {
LABEL_2:
    v7 = *((_DWORD *)Token + 50);
    if ( TokenInformationClass == TokenVirtualizationAllowed )
    {
      *(_DWORD *)TokenInformation = (*((_DWORD *)Token + 50) & 0x200) != 0;
    }
    else
    {
      switch ( TokenInformationClass )
      {
        case TokenVirtualizationEnabled:
          v8 = v7 >> 10;
          break;
        case TokenUIAccess:
          v8 = v7 >> 12;
          break;
        case TokenIsAppContainer:
          v8 = v7 >> 14;
          break;
        case TokenHasRestrictions:
          *(_BYTE *)TokenInformation = (*((_DWORD *)Token + 50) & 0x810) != 0;
          return 0;
        default:
          v8 = HIWORD(v7);
          break;
      }
      *(_DWORD *)TokenInformation = v8 & 1;
    }
  }
  else
  {
    switch ( TokenInformationClass )
    {
      case TokenUser:
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v11 = 4 * *(unsigned __int8 *)(**((_QWORD **)Token + 19) + 1LL) + 24;
        PoolWithTag = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v11, 0x20206553u);
        v13 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_70;
        RtlCopySidAndAttributesArray(
          1u,
          *((PSID_AND_ATTRIBUTES *)Token + 19),
          v11,
          PoolWithTag,
          &PoolWithTag[1],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_10;
      case TokenGroups:
        v50 = KeGetCurrentThread();
        --v50->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v51 = *((_DWORD *)Token + 31);
        v52 = 16 * v51 - 8;
        v53 = v52;
        if ( v51 > 1 )
        {
          v54 = v51 - 1;
          v55 = (__int64 *)(*((_QWORD *)Token + 19) + 16LL);
          do
          {
            v56 = *v55;
            v55 += 2;
            v52 += 4 * *(unsigned __int8 *)(v56 + 1) + 8;
            v53 = v52;
            --v54;
          }
          while ( v54 );
        }
        v57 = (char *)ExAllocatePoolWithTag(PagedPool, v53, 0x20206553u);
        v58 = v57;
        if ( !v57 )
          goto LABEL_70;
        *(_DWORD *)v57 = *((_DWORD *)Token + 31) - 1;
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 31) - 1,
          (PSID_AND_ATTRIBUTES)(*((_QWORD *)Token + 19) + 16LL),
          v52,
          (PSID_AND_ATTRIBUTES)(v57 + 8),
          &v57[16 * *((_DWORD *)Token + 31) - 32 + 24],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        result = 0;
        *TokenInformation = v58;
        return result;
      case TokenPrivileges:
        v63 = KeGetCurrentThread();
        --v63->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v64 = SepTokenPrivilegeCount((__int64)Token);
        if ( v64 <= 1 )
          v65 = 16;
        else
          v65 = 12 * v64 + 4;
        v66 = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v65, 0x20206553u);
        v13 = v66;
        if ( !v66 )
          goto LABEL_70;
        SepConvertTokenPrivileges((__int64)Token, v66);
        goto LABEL_10;
      case TokenOwner:
        v59 = KeGetCurrentThread();
        --v59->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v60 = 4
            * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)) + 1LL)
            + 16;
        v61 = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v60, 0x20206553u);
        v13 = v61;
        if ( !v61 )
          goto LABEL_70;
        v61->Sid = &v61->Attributes;
        RtlCopySid(v60 - 8, &v61->Attributes, *(PSID *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)));
        goto LABEL_10;
      case TokenPrimaryGroup:
        v44 = KeGetCurrentThread();
        --v44->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v45 = 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) + 16;
        v46 = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v45, 0x20206553u);
        v13 = v46;
        if ( !v46 )
          goto LABEL_70;
        v46->Sid = &v46->Attributes;
        RtlCopySid(v45 - 8, &v46->Attributes, *((PSID *)Token + 21));
        goto LABEL_10;
      case TokenDefaultDacl:
        v86 = KeGetCurrentThread();
        --v86->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v87 = *((_QWORD *)Token + 23);
        v88 = 8LL;
        if ( v87 )
          v88 = *(unsigned __int16 *)(v87 + 2) + 8LL;
        v89 = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v88, 0x20206553u);
        v13 = v89;
        if ( !v89 )
          goto LABEL_70;
        p_Attributes = &v89->Attributes;
        if ( !*((_QWORD *)Token + 23) )
          goto LABEL_137;
        v89->Sid = p_Attributes;
        memmove(p_Attributes, *((const void **)Token + 23), *(unsigned __int16 *)(*((_QWORD *)Token + 23) + 2LL));
        goto LABEL_10;
      case TokenSource:
        v91 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x20206553u);
        if ( !v91 )
          return -1073741670;
        *v91 = *(_OWORD *)Token;
        *TokenInformation = v91;
        return 0;
      case TokenType:
        v92 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v92 )
          return -1073741670;
        *v92 = *((_DWORD *)Token + 48);
        *TokenInformation = v92;
        return 0;
      case TokenImpersonationLevel:
        if ( *((_DWORD *)Token + 48) != 2 )
          return -1073741821;
        v62 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v62 )
          return -1073741670;
        *v62 = *((_DWORD *)Token + 49);
        *TokenInformation = v62;
        return 0;
      case TokenStatistics:
        v25 = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20206553u);
        v13 = v25;
        if ( !v25 )
          return -1073741670;
        v25->Sid = (PSID)*((_QWORD *)Token + 2);
        *(_QWORD *)&v25->Attributes = *((_QWORD *)Token + 3);
        v25[1].Attributes = *((_DWORD *)Token + 48);
        *(&v25[1].Attributes + 1) = *((_DWORD *)Token + 49);
        v25[1].Sid = (PSID)*((_QWORD *)Token + 5);
        v26 = KeGetCurrentThread();
        --v26->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        LODWORD(v13[2].Sid) = *((_DWORD *)Token + 34);
        v27 = *((_QWORD *)Token + 23);
        v28 = *((_DWORD *)Token + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) - 8;
        if ( v27 )
          v28 -= *(unsigned __int16 *)(v27 + 2);
        HIDWORD(v13[2].Sid) = v28;
        HIDWORD(v13[2].Sid) = *((_DWORD *)Token + 35);
        v13[2].Attributes = *((_DWORD *)Token + 31) - 1;
        *(&v13[2].Attributes + 1) = SepTokenPrivilegeCount((__int64)Token);
        v13[3].Sid = (PSID)*((_QWORD *)Token + 7);
        goto LABEL_10;
      case TokenSessionId:
        SeQuerySessionIdToken(Token, (PULONG)TokenInformation);
        return 0;
      case TokenGroupsAndPrivileges:
        v67 = KeGetCurrentThread();
        --v67->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v68 = SepTokenPrivilegeCount((__int64)Token);
        v69 = *((_DWORD *)Token + 31);
        v128 = v68;
        v70 = 12 * v68;
        v71 = 16 * v69;
        LODWORD(NumberOfBytes) = 12 * v68;
        v130 = 16 * v69;
        if ( v69 )
        {
          v72 = (__int64 *)*((_QWORD *)Token + 19);
          v73 = v69;
          do
          {
            v74 = *v72;
            v72 += 2;
            v71 += (4 * *(unsigned __int8 *)(v74 + 1) + 15) & 0xFFFFFFF8;
            --v73;
          }
          while ( v73 );
        }
        v75 = *((_DWORD *)Token + 32);
        v116 = 16 * v75;
        v76 = 16 * v75;
        if ( v75 )
        {
          v77 = (__int64 *)*((_QWORD *)Token + 20);
          v78 = v75;
          do
          {
            v79 = *v77;
            v77 += 2;
            v76 += (4 * *(unsigned __int8 *)(v79 + 1) + 15) & 0xFFFFFFF8;
            --v78;
          }
          while ( v78 );
        }
        v80 = (char *)ExAllocatePoolWithTag(PagedPool, v76 + v71 + v70 + 56, 0x20206553u);
        v81 = v80;
        if ( v80 )
        {
          v82 = v80 + 56;
          *((_QWORD *)v80 + 6) = *((_QWORD *)Token + 3);
          *((_DWORD *)v80 + 1) = v71;
          *(_DWORD *)v80 = *((_DWORD *)Token + 31);
          *((_QWORD *)v80 + 1) = v80 + 56;
          *((_DWORD *)v80 + 5) = v76;
          *((_DWORD *)v80 + 4) = *((_DWORD *)Token + 32);
          if ( *((_DWORD *)Token + 32) )
            v3 = &v82[(v71 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
          *((_QWORD *)v80 + 3) = v3;
          *((_DWORD *)v80 + 9) = NumberOfBytes;
          *((_DWORD *)v80 + 8) = v128;
          v83 = &v82[v71 + (unsigned __int64)v76];
          v84 = v130;
          v85 = v71 - v130;
          *((_QWORD *)v81 + 5) = v83;
          RtlCopySidAndAttributesArray(
            *((_DWORD *)Token + 31),
            *((PSID_AND_ATTRIBUTES *)Token + 19),
            v85,
            (PSID_AND_ATTRIBUTES)(v81 + 56),
            &v81[v84 + 56],
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          if ( *((_DWORD *)v81 + 4) )
            RtlCopySidAndAttributesArray(
              *((_DWORD *)Token + 32),
              *((PSID_AND_ATTRIBUTES *)Token + 20),
              v76 - v116,
              *((PSID_AND_ATTRIBUTES *)v81 + 3),
              (PSID)(*((_QWORD *)v81 + 3) + v116),
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
          SepConvertTokenPrivilegesToLuidAndAttributes(Token, *((_QWORD *)v81 + 5));
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          result = 0;
          *TokenInformation = v81;
        }
        else
        {
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          return -1073741670;
        }
        return result;
      case TokenElevationType:
        v21 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v21 )
          return -1073741670;
        v22 = *(_DWORD *)(*((_QWORD *)Token + 27) + 32LL);
        if ( (v22 & 4) != 0 )
        {
          *v21 = 3;
        }
        else
        {
          LOBYTE(v3) = (v22 & 2) != 0;
          *v21 = (_DWORD)v3 + 1;
        }
        *TokenInformation = v21;
        return 0;
      case TokenElevation:
        v16 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v16 )
          return -1073741670;
        v17 = KeGetCurrentThread();
        --v17->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v18 = *((_DWORD *)Token + 31);
        v19 = (*((_QWORD *)Token + 8) & 0x1120160684LL) != 0;
        if ( v18 )
        {
          do
          {
            if ( v19 )
              break;
            IsElevatedRid = RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(*((_QWORD *)Token + 19) + 16LL * (unsigned int)v3));
            LODWORD(v3) = (_DWORD)v3 + 1;
            v19 = IsElevatedRid;
          }
          while ( (unsigned int)v3 < v18 );
        }
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *v16 = v19;
        *TokenInformation = v16;
        return 0;
      case TokenHasRestrictions:
      case TokenVirtualizationAllowed:
      case TokenUIAccess:
      case TokenIsAppContainer:
      case TokenPrivateNameSpace:
        goto LABEL_2;
      case TokenAccessInformation:
        v47 = KeGetCurrentThread();
        v123 = 0;
        v122 = 0;
        v121 = 0;
        --v47->KernelApcDisable;
        v120 = 0;
        v119 = 0;
        v118 = 0;
        v117 = 0;
        v130 = 0;
        v128 = 0;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (_DWORD)Token,
                                             0,
                                             0,
                                             (unsigned int)&v116,
                                             (__int64)&v123,
                                             (__int64)&v122,
                                             (__int64)&v121,
                                             (__int64)&v120,
                                             (__int64)&v119,
                                             (__int64)&v118,
                                             (__int64)&v117,
                                             (__int64)&v130,
                                             (__int64)&v128);
        v49 = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, TokenAccessInformationBufferSize, 0x20206553u);
        v13 = v49;
        if ( !v49 )
          goto LABEL_70;
        SepCopyTokenAccessInformation(
          (_DWORD)Token,
          (_DWORD)v49,
          TokenAccessInformationBufferSize,
          v116,
          v123,
          v122,
          v121,
          v120,
          v119,
          v118,
          v117,
          v130,
          v128,
          0,
          0LL);
        goto LABEL_10;
      case TokenIntegrityLevel:
        v23 = KeGetCurrentThread();
        *(_OWORD *)Sid = 0LL;
        --v23->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        SepCopyTokenIntegrity((__int64)Token);
        v24 = *RtlSubAuthorityCountSid(Sid[0]);
        if ( (_BYTE)v24 )
          LODWORD(v3) = *RtlSubAuthoritySid(Sid[0], v24 - 1);
        *(_DWORD *)TokenInformation = (_DWORD)v3;
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        return 0;
      case TokenCapabilities:
        v34 = KeGetCurrentThread();
        --v34->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v35 = *((_DWORD *)Token + 200);
        v36 = 16 * v35 + 24;
        v37 = v36;
        if ( v35 )
        {
          v38 = (__int64 *)*((_QWORD *)Token + 99);
          v39 = v35;
          do
          {
            v40 = *v38;
            v38 += 2;
            v36 += 4 * *(unsigned __int8 *)(v40 + 1) + 8;
            v37 = v36;
            --v39;
          }
          while ( v39 );
        }
        v41 = (char *)ExAllocatePoolWithTag(PagedPool, v37, 0x20206553u);
        v33 = v41;
        if ( !v41 )
          goto LABEL_70;
        *(_DWORD *)v41 = *((_DWORD *)Token + 200);
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 200),
          *((PSID_AND_ATTRIBUTES *)Token + 99),
          v36,
          (PSID_AND_ATTRIBUTES)(v41 + 8),
          &v41[16 * *((_DWORD *)Token + 200) + 24],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_39;
      case TokenAppContainerSid:
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v30 = (char *)*((_QWORD *)Token + 98);
        if ( v30 )
          v31 = 4 * (unsigned __int8)v30[1] + 16;
        else
          v31 = 8;
        v32 = ExAllocatePoolWithTag(PagedPool, v31, 0x20206553u);
        v33 = v32;
        if ( !v32 )
          goto LABEL_70;
        if ( !v30 )
          goto LABEL_38;
        v42 = (void *)*((_QWORD *)Token + 98);
        goto LABEL_51;
      case TokenAppContainerNumber:
        v14 = KeGetCurrentThread();
        --v14->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v15 = *((_QWORD *)Token + 135);
        if ( v15 )
          LODWORD(v3) = *(_DWORD *)(v15 + 40);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *(_DWORD *)TokenInformation = (_DWORD)v3;
        return 0;
      case TokenUserClaimAttributes:
      case TokenDeviceClaimAttributes:
        *TokenInformation = 0LL;
        v93 = KeGetCurrentThread();
        --v93->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v94 = *((_QWORD *)Token + 137);
        if ( v94
          && ((v95 = *(__int128 **)(v94 + 576)) != 0LL || TokenInformationClass != TokenUserClaimAttributes)
          && ((v96 = *(__int128 **)(v94 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v96 = v95;
          AuthzBasepQueryClaimAttributesToken(v96, 0LL, 0LL, &NumberOfBytes);
          v97 = NumberOfBytes;
        }
        else
        {
          DWORD2(v125) = 0;
          *(_QWORD *)&v125 = (char *)&v124 + 8;
          v96 = &v124;
          v97 = 16;
          *((_QWORD *)&v124 + 1) = (char *)&v124 + 8;
          *((_QWORD *)&v126 + 1) = &v126;
          *(_QWORD *)&v126 = &v126;
        }
        v98 = ExAllocatePoolWithTag(PagedPool, v97, 0x20206553u);
        v99 = v98;
        if ( !v98 )
          goto LABEL_70;
        v100 = AuthzBasepQueryClaimAttributesToken(v96, v98, v97, &NumberOfBytes);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        if ( v100 >= 0 )
          *TokenInformation = v99;
        else
          ExFreePoolWithTag(v99, 0);
        return v100;
      case TokenDeviceGroups:
        v101 = KeGetCurrentThread();
        --v101->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v102 = (unsigned int *)*((_QWORD *)Token + 137);
        if ( v102 && (v103 = *v102) != 0 )
        {
          v104 = 16 * v103 + 8;
        }
        else
        {
          v103 = 0;
          v104 = 24;
        }
        v105 = v104;
        if ( v103 )
        {
          v106 = (__int64 *)*((_QWORD *)v102 + 1);
          v107 = v103;
          do
          {
            v108 = *v106;
            v106 += 2;
            v104 += 4 * *(unsigned __int8 *)(v108 + 1) + 8;
            v105 = v104;
            --v107;
          }
          while ( v107 );
        }
        v109 = (char *)ExAllocatePoolWithTag(PagedPool, v105, 0x20206553u);
        if ( !v109 )
          goto LABEL_70;
        *(_OWORD *)v109 = 0LL;
        *((_QWORD *)v109 + 2) = 0LL;
        *(_DWORD *)v109 = v103;
        if ( v103 )
          RtlCopySidAndAttributesArray(
            **((_DWORD **)Token + 137),
            *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)Token + 137) + 8LL),
            v104,
            (PSID_AND_ATTRIBUTES)(v109 + 8),
            &v109[16 * v103 + 8],
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *TokenInformation = v109;
        return 0;
      case TokenProcessTrustLevel:
        v110 = KeGetCurrentThread();
        --v110->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v30 = (char *)*((_QWORD *)Token + 138);
        if ( v30 )
          v31 = 4 * (unsigned __int8)v30[1] + 16;
        else
          v31 = 8;
        v32 = ExAllocatePoolWithTag(PagedPool, v31, 0x20206553u);
        v33 = v32;
        if ( !v32 )
          goto LABEL_70;
        if ( !v30 )
          goto LABEL_38;
        v42 = (void *)*((_QWORD *)Token + 138);
LABEL_51:
        v30 = (char *)(v32 + 1);
        RtlCopySid(v31 - 8, v32 + 1, v42);
LABEL_38:
        *v33 = v30;
LABEL_39:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *TokenInformation = v33;
        return 0;
      case TokenBnoIsolation:
        v111 = KeGetCurrentThread();
        --v111->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v112 = *((_QWORD *)Token + 144);
        v113 = 16LL;
        if ( v112 )
          v113 = *(unsigned __int16 *)(v112 + 42) + 16LL;
        v89 = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v113, 0x20206553u);
        v13 = v89;
        if ( !v89 )
        {
LABEL_70:
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          return -1073741670;
        }
        if ( *((_QWORD *)Token + 144) )
        {
          LOBYTE(v89->Attributes) = 1;
          v89->Sid = &v89[1];
          memmove(
            &v89[1],
            *(const void **)(*((_QWORD *)Token + 144) + 48LL),
            *(unsigned __int16 *)(*((_QWORD *)Token + 144) + 42LL));
        }
        else
        {
          LOBYTE(v89->Attributes) = 0;
LABEL_137:
          v89->Sid = 0LL;
        }
LABEL_10:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *TokenInformation = v13;
        break;
      case TokenIsLessPrivilegedAppContainer:
        v43 = (*((_DWORD *)Token + 50) & 0x4000) != 0 && !SepCanTokenMatchAllPackageSid((__int64)Token);
        *(_DWORD *)TokenInformation = v43;
        return 0;
      case TokenIsAppSilo:
        wil_details_FeatureReporting_ReportUsageToService(
          (int)&Feature_PPLEnforcement__private_reporting,
          0x126C519u,
          0,
          0,
          (__int64)&Feature_PPLEnforcement_logged_traits,
          0,
          RemainingSidAreaSize);
        return -1073741821;
      default:
        return -1073741821;
    }
  }
  return 0;
}
