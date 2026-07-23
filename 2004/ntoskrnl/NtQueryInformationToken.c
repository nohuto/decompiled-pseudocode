/*
 * XREFs of NtQueryInformationToken @ 0x14067EC80
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x140581740 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140911278 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     SepConvertTokenPrivileges @ 0x14026A794 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x14026A7C0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepCopyTokenIntegrity @ 0x14026A848 (SepCopyTokenIntegrity.c)
 *     SeIsSModeAdminlessEnabled @ 0x14027C0A8 (SeIsSModeAdminlessEnabled.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14027C11C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     SepReferenceTokenByHandle @ 0x140295E60 (SepReferenceTokenByHandle.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1402961C0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x140296260 (AuthzBasepQuerySecurityAttributesToken.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1402FED40 (SepDeReferenceLogonSessionDirect.c)
 *     SepTokenPrivilegeCount @ 0x14032C090 (SepTokenPrivilegeCount.c)
 *     SeQueryMandatoryPolicyToken @ 0x14032C208 (SeQueryMandatoryPolicyToken.c)
 *     RtlIsSandboxedTokenHandle @ 0x14035FF90 (RtlIsSandboxedTokenHandle.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     SepGetStackTraceHash @ 0x140590C40 (SepGetStackTraceHash.c)
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     ObInsertObject @ 0x14060D6D0 (ObInsertObject.c)
 *     RtlCopySid @ 0x140625AA0 (RtlCopySid.c)
 *     SepReferenceLogonSessionSilo @ 0x14062F8A0 (SepReferenceLogonSessionSilo.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     SepDuplicateToken @ 0x1406795C0 (SepDuplicateToken.c)
 *     RtlCopySidAndAttributesArray @ 0x140680FC0 (RtlCopySidAndAttributesArray.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     RtlIsElevatedRid @ 0x1406BAE20 (RtlIsElevatedRid.c)
 *     SepCopyTokenAccessInformation @ 0x1406D7740 (SepCopyTokenAccessInformation.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x1406D79CC (SepGetTokenAccessInformationBufferSize.c)
 *     SeQuerySessionIdToken @ 0x1406E2750 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x1406F543C (AuthzBasepQueryClaimAttributesToken.c)
 *     EtwTraceAdminlessAccessFailure @ 0x14093C6A0 (EtwTraceAdminlessAccessFailure.c)
 */

NTSTATUS __stdcall NtQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  HANDLE v8; // r10
  __int64 v9; // rdi
  KPROCESSOR_MODE PreviousMode; // r12
  PULONG v11; // rbx
  __int64 v12; // rcx
  NTSTATUS result; // eax
  PADAPTER_OBJECT v14; // rdi
  struct _KTHREAD *v15; // rax
  ULONG v16; // r8d
  PADAPTER_OBJECT v17; // rcx
  ULONG v18; // r13d
  struct _KTHREAD *v19; // rax
  __int64 v20; // rcx
  char *v21; // rdx
  struct _KTHREAD *v22; // rax
  PADAPTER_OBJECT v23; // rbx
  int v24; // edx
  _DMA_OPERATIONS *v25; // rax
  struct _KTHREAD *v26; // rax
  ULONG v27; // ecx
  struct _KTHREAD *v28; // rax
  PADAPTER_OBJECT v29; // r14
  _DMA_OPERATIONS *DmaOperations; // rax
  ULONG v31; // eax
  char *v32; // rcx
  struct _KTHREAD *v33; // rax
  unsigned __int8 *Sid; // rdx
  ULONG v35; // eax
  ULONG v36; // r13d
  struct _KTHREAD *v37; // rax
  unsigned __int8 v38; // r8
  PSID v39; // r9
  unsigned __int8 *v40; // rcx
  char *v41; // rdx
  struct _KTHREAD *v42; // rax
  ULONG v43; // r8d
  struct _KTHREAD *v44; // rax
  ULONG v45; // ecx
  int AllocateAdapterChannel; // ecx
  struct _KTHREAD *v47; // rax
  PADAPTER_OBJECT v48; // r13
  _DMA_OPERATIONS *v49; // rax
  ULONG v50; // r14d
  __int128 *GetDmaDomain; // r12
  struct _KTHREAD *v52; // rax
  unsigned __int8 IsElevatedRid; // r14
  unsigned int v54; // r15d
  struct _KTHREAD *v55; // rax
  _DMA_OPERATIONS *v56; // rcx
  ULONG v57; // r14d
  NTSTATUS v58; // ebx
  struct _KTHREAD *v59; // rax
  unsigned int v60; // eax
  ULONG v61; // r14d
  struct _KTHREAD *v62; // rax
  _DMA_OPERATIONS *v63; // rax
  ULONG Size; // r11d
  ULONG v65; // r8d
  struct _KTHREAD *v66; // rax
  ULONG v67; // r10d
  unsigned int v68; // ecx
  unsigned int v69; // r11d
  unsigned int v70; // r8d
  _DMA_OPERATIONS *v71; // rdx
  __int64 v72; // r9
  unsigned int v73; // r12d
  unsigned int v74; // r13d
  unsigned int v75; // ecx
  ULONG v76; // ecx
  _SID_AND_ATTRIBUTES *v77; // r9
  _SID_AND_ATTRIBUTES *v78; // rdi
  __int64 v79; // rbx
  struct _KTHREAD *v80; // rax
  ULONG v81; // r14d
  __int64 v82; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int DmaOperations_high; // eax
  ULONG v85; // r8d
  __int64 p_AllocateCommonBuffer; // rdx
  __int64 v87; // r9
  struct _KTHREAD *v88; // rax
  PSID v89; // r14
  char v90; // r12
  ULONG TokenAccessInformationBufferSize; // eax
  struct _KTHREAD *v92; // rax
  unsigned int v93; // eax
  ULONG v94; // r8d
  _DMA_OPERATIONS *v95; // rdx
  __int64 v96; // r9
  int v97; // ebx
  NTSTATUS v98; // r15d
  int v99; // r9d
  _QWORD *v100; // rbx
  NTSTATUS inserted; // ebx
  struct _KTHREAD *v102; // rax
  unsigned int v103; // edx
  unsigned int v104; // r9d
  _DMA_OPERATIONS *v105; // r10
  __int64 v106; // r8
  ULONG v107; // eax
  __int64 v108; // rdx
  __int64 v109; // r9
  __int64 v110; // rdx
  __int64 v111; // r9
  struct _DMA_ADAPTER *v112; // rcx
  struct _KTHREAD *v113; // rax
  int v114; // eax
  struct _KTHREAD *v115; // rax
  _DMA_OPERATIONS *v116; // rax
  void (__fastcall *PutDmaAdapter)(_DMA_ADAPTER *); // rdx
  __int64 v118; // r9
  struct _KTHREAD *v119; // rax
  PADAPTER_OBJECT v120; // rdi
  char v121; // dl
  NTSTATUS SecurityAttributesToken; // ebx
  PSID SidArea; // [rsp+20h] [rbp-188h]
  int RemainingSidAreaSize; // [rsp+30h] [rbp-178h]
  unsigned __int8 v125[8]; // [rsp+80h] [rbp-128h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+88h] [rbp-120h] BYREF
  PSID SourceSid; // [rsp+90h] [rbp-118h] BYREF
  PSID RemainingSidArea; // [rsp+98h] [rbp-110h] BYREF
  int v129; // [rsp+A0h] [rbp-108h] BYREF
  ULONG v130; // [rsp+A4h] [rbp-104h] BYREF
  NTSTATUS v131; // [rsp+A8h] [rbp-100h]
  int v132; // [rsp+ACh] [rbp-FCh]
  ULONG SessionId; // [rsp+B0h] [rbp-F8h] BYREF
  int v134; // [rsp+B4h] [rbp-F4h] BYREF
  int v135; // [rsp+B8h] [rbp-F0h] BYREF
  int v136; // [rsp+BCh] [rbp-ECh] BYREF
  int v137; // [rsp+C0h] [rbp-E8h] BYREF
  int v138; // [rsp+C4h] [rbp-E4h] BYREF
  int v139; // [rsp+C8h] [rbp-E0h] BYREF
  int v140; // [rsp+CCh] [rbp-DCh] BYREF
  int v141; // [rsp+D0h] [rbp-D8h] BYREF
  int v142; // [rsp+D4h] [rbp-D4h] BYREF
  int v143; // [rsp+D8h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp-C8h] BYREF
  _QWORD *v145; // [rsp+E8h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+F0h] [rbp-B8h] BYREF
  __int128 v147; // [rsp+F8h] [rbp-B0h] BYREF
  __int128 v148; // [rsp+108h] [rbp-A0h]
  __int128 v149; // [rsp+118h] [rbp-90h] BYREF
  PSID_AND_ATTRIBUTES Dest; // [rsp+128h] [rbp-80h]
  _SID_AND_ATTRIBUTES Src; // [rsp+130h] [rbp-78h] BYREF
  _DWORD v152[2]; // [rsp+140h] [rbp-68h] BYREF
  __int64 v153; // [rsp+148h] [rbp-60h]
  __int64 v154; // [rsp+150h] [rbp-58h]
  int v155; // [rsp+158h] [rbp-50h]
  int v156; // [rsp+15Ch] [rbp-4Ch]
  __int128 v157; // [rsp+160h] [rbp-48h]
  __int128 v158; // [rsp+170h] [rbp-38h]

  v8 = TokenHandle;
  v9 = 0LL;
  DmaAdapter = 0LL;
  v129 = 0;
  v142 = 0;
  v140 = 0;
  Dest = 0LL;
  v143 = 0;
  Src = 0LL;
  RemainingSidArea = 0LL;
  SessionId = 0;
  v158 = 0LL;
  v147 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  v125[0] = 0;
  SourceSid = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(TokenInformation, TokenInformationLength, 4u);
    v11 = ReturnLength;
    v12 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    v8 = TokenHandle;
  }
  else
  {
    v11 = ReturnLength;
  }
  if ( TokenInformationClass != TokenUser )
  {
    if ( TokenInformationClass == TokenType )
    {
      result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
      if ( result < 0 )
        return result;
      *v11 = 4;
      if ( TokenInformationLength < 4 )
      {
LABEL_156:
        HalPutDmaAdapter(DmaAdapter);
        return -1073741789;
      }
      v17 = DmaAdapter;
      *(_DWORD *)TokenInformation = *(_DWORD *)&DmaAdapter[12].Version;
    }
    else
    {
      switch ( TokenInformationClass )
      {
        case TokenGroups:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v14 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          DmaOperations_high = HIDWORD(v14[7].DmaOperations);
          v85 = 16 * DmaOperations_high - 8;
          if ( DmaOperations_high > 1 )
          {
            p_AllocateCommonBuffer = (__int64)&v14[9].DmaOperations->AllocateCommonBuffer;
            v87 = DmaOperations_high - 1;
            do
            {
              v85 += 4 * *(unsigned __int8 *)(*(_QWORD *)p_AllocateCommonBuffer + 1LL) + 8;
              p_AllocateCommonBuffer += 16LL;
              --v87;
            }
            while ( v87 );
          }
          *v11 = v85;
          if ( TokenInformationLength < v85 )
            goto LABEL_41;
          *(_DWORD *)TokenInformation = HIDWORD(v14[7].DmaOperations) - 1;
          RtlCopySidAndAttributesArray(
            HIDWORD(v14[7].DmaOperations) - 1,
            (PSID_AND_ATTRIBUTES)&v14[9].DmaOperations->AllocateCommonBuffer,
            v85,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + (unsigned int)(16 * HIDWORD(v14[7].DmaOperations) - 32) + 24,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          goto LABEL_14;
        case TokenPrivileges:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v59 = KeGetCurrentThread();
          --v59->KernelApcDisable;
          v14 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v60 = SepTokenPrivilegeCount((__int64)v14);
          if ( v60 <= 1 )
            v61 = 16;
          else
            v61 = 12 * v60 + 4;
          *v11 = v61;
          if ( TokenInformationLength < v61 )
            goto LABEL_41;
          SepConvertTokenPrivileges((__int64)v14, TokenInformation);
          goto LABEL_14;
        case TokenOwner:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v44 = KeGetCurrentThread();
          --v44->KernelApcDisable;
          v14 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v45 = 4
              * *(unsigned __int8 *)(*((_QWORD *)&v14[9].DmaOperations->Size + 2 * *(unsigned int *)&v14[9].Version)
                                   + 1LL)
              + 16;
          *v11 = v45;
          if ( TokenInformationLength < v45 )
            goto LABEL_41;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(
            v45 - 8,
            (char *)TokenInformation + 8,
            *((PSID *)&v14[9].DmaOperations->Size + 2 * *(unsigned int *)&v14[9].Version));
          goto LABEL_14;
        case TokenPrimaryGroup:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v26 = KeGetCurrentThread();
          --v26->KernelApcDisable;
          v14 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v27 = 4 * BYTE1(v14[10].DmaOperations->Size) + 16;
          *v11 = v27;
          if ( TokenInformationLength < v27 )
            goto LABEL_41;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v27 - 8, (char *)TokenInformation + 8, v14[10].DmaOperations);
          goto LABEL_14;
        case TokenDefaultDacl:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v129 = 8;
          v28 = KeGetCurrentThread();
          --v28->KernelApcDisable;
          v29 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          DmaOperations = v29[11].DmaOperations;
          if ( DmaOperations )
            v31 = HIWORD(DmaOperations->Size) + 8;
          else
            v31 = v129;
          *v11 = v31;
          if ( TokenInformationLength < v31 )
            goto LABEL_101;
          v32 = (char *)TokenInformation + 8;
          if ( v29[11].DmaOperations )
          {
            *(_QWORD *)TokenInformation = v32;
            memmove(v32, v29[11].DmaOperations, HIWORD(v29[11].DmaOperations->Size));
          }
          else
          {
            *(_QWORD *)TokenInformation = 0LL;
          }
          goto LABEL_54;
        case TokenSource:
          result = SepReferenceTokenByHandle(v8, 0x10u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          *v11 = 16;
          if ( TokenInformationLength < 0x10 )
            goto LABEL_156;
          v17 = DmaAdapter;
          *(struct _DMA_ADAPTER *)TokenInformation = *DmaAdapter;
          goto LABEL_16;
        case TokenImpersonationLevel:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v17 = DmaAdapter;
          if ( *(_DWORD *)&DmaAdapter[12].Version != 2 )
          {
            HalPutDmaAdapter(DmaAdapter);
            return -1073741821;
          }
          *v11 = 4;
          if ( TokenInformationLength < 4 )
            goto LABEL_42;
          *(_DWORD *)TokenInformation = *(_DWORD *)(&v17[12].Size + 1);
          goto LABEL_16;
        case TokenStatistics:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          *v11 = 56;
          if ( TokenInformationLength < 0x38 )
            goto LABEL_156;
          v22 = KeGetCurrentThread();
          --v22->KernelApcDisable;
          v23 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v132 = 0;
          *(struct _DMA_ADAPTER *)TokenInformation = v23[1];
          *((_QWORD *)TokenInformation + 2) = v23[2].DmaOperations;
          *((_DWORD *)TokenInformation + 6) = *(_DWORD *)&v23[12].Version;
          *((_DWORD *)TokenInformation + 7) = *(_DWORD *)(&v23[12].Size + 1);
          *((_DWORD *)TokenInformation + 8) = v23[8].DmaOperations;
          v24 = LODWORD(v23[8].DmaOperations) - 4 * BYTE1(v23[10].DmaOperations->Size) - 8;
          v132 = v24;
          v25 = v23[11].DmaOperations;
          if ( v25 )
          {
            v24 -= HIWORD(v25->Size);
            v132 = v24;
          }
          *((_DWORD *)TokenInformation + 9) = v24;
          *((_DWORD *)TokenInformation + 10) = HIDWORD(v23[7].DmaOperations) - 1;
          *((_DWORD *)TokenInformation + 11) = SepTokenPrivilegeCount((__int64)v23);
          *((_QWORD *)TokenInformation + 6) = v23[3].DmaOperations;
          goto LABEL_39;
        case TokenRestrictedSids:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v42 = KeGetCurrentThread();
          --v42->KernelApcDisable;
          v14 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v43 = 16 * *(_DWORD *)&v14[8].Version + 8;
          if ( *(_DWORD *)&v14[8].Version )
          {
            v110 = *(_QWORD *)&v14[10].Version;
            v111 = *(unsigned int *)&v14[8].Version;
            do
            {
              v43 += 4 * *(unsigned __int8 *)(*(_QWORD *)v110 + 1LL) + 8;
              v110 += 16LL;
              --v111;
            }
            while ( v111 );
          }
          *v11 = v43;
          if ( TokenInformationLength < v43 )
            goto LABEL_41;
          *(_DWORD *)TokenInformation = *(_DWORD *)&v14[8].Version;
          RtlCopySidAndAttributesArray(
            *(_DWORD *)&v14[8].Version,
            *(PSID_AND_ATTRIBUTES *)&v14[10].Version,
            v43,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + (unsigned int)(16 * *(_DWORD *)&v14[8].Version) + 8,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          goto LABEL_14;
        case TokenSessionId:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          *v11 = 4;
          if ( TokenInformationLength < 4 )
            goto LABEL_156;
          v14 = DmaAdapter;
          SeQuerySessionIdToken(DmaAdapter, &SessionId);
          *(_DWORD *)TokenInformation = SessionId;
          *v11 = 4;
          goto LABEL_15;
        case TokenGroupsAndPrivileges:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v66 = KeGetCurrentThread();
          --v66->KernelApcDisable;
          v29 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v130 = SepTokenPrivilegeCount((__int64)v29);
          v67 = 12 * v130;
          v68 = HIDWORD(v29[7].DmaOperations);
          v69 = v68;
          v70 = 16 * v68;
          if ( v68 )
          {
            v71 = v29[9].DmaOperations;
            v72 = v68;
            do
            {
              v70 += (4 * *(unsigned __int8 *)(*(_QWORD *)&v71->Size + 1LL) + 15) & 0xFFFFFFF8;
              v71 = (_DMA_OPERATIONS *)((char *)v71 + 16);
              --v72;
            }
            while ( v72 );
          }
          v73 = 16 * *(_DWORD *)&v29[8].Version;
          v74 = v73;
          v75 = v73;
          if ( *(_DWORD *)&v29[8].Version )
          {
            v108 = *(_QWORD *)&v29[10].Version;
            v109 = *(unsigned int *)&v29[8].Version;
            do
            {
              v74 += (4 * *(unsigned __int8 *)(*(_QWORD *)v108 + 1LL) + 15) & 0xFFFFFFF8;
              v75 = v74;
              v108 += 16LL;
              --v109;
            }
            while ( v109 );
          }
          v76 = v75 + v67 + v70 + 56;
          *v11 = v76;
          if ( TokenInformationLength < v76 )
            goto LABEL_101;
          *((_QWORD *)TokenInformation + 6) = v29[1].DmaOperations;
          *((_DWORD *)TokenInformation + 1) = v70;
          *(_DWORD *)TokenInformation = HIDWORD(v29[7].DmaOperations);
          v77 = (_SID_AND_ATTRIBUTES *)((char *)TokenInformation + 56);
          *((_QWORD *)TokenInformation + 1) = (char *)TokenInformation + 56;
          *((_DWORD *)TokenInformation + 5) = v74;
          *((_DWORD *)TokenInformation + 4) = *(_DWORD *)&v29[8].Version;
          if ( *(_DWORD *)&v29[8].Version )
          {
            v78 = (_SID_AND_ATTRIBUTES *)((char *)v77 + ((v70 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
            *((_QWORD *)TokenInformation + 3) = v78;
          }
          else
          {
            *((_QWORD *)TokenInformation + 3) = 0LL;
            v78 = Dest;
          }
          *((_DWORD *)TokenInformation + 9) = v67;
          *((_DWORD *)TokenInformation + 8) = v130;
          v79 = (__int64)v77 + v74 + v70;
          *((_QWORD *)TokenInformation + 5) = v79;
          RtlCopySidAndAttributesArray(
            HIDWORD(v29[7].DmaOperations),
            (PSID_AND_ATTRIBUTES)v29[9].DmaOperations,
            v70 - v69 * 16,
            v77,
            &v77[v69],
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          if ( v78 )
            RtlCopySidAndAttributesArray(
              *(_DWORD *)&v29[8].Version,
              *(PSID_AND_ATTRIBUTES *)&v29[10].Version,
              v74 - v73,
              v78,
              &v78[v73 / 0x10],
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
          SepConvertTokenPrivilegesToLuidAndAttributes(v29, v79);
          goto LABEL_54;
        case TokenSandBoxInert:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          *v11 = 4;
          if ( TokenInformationLength < 4 )
            return -1073741789;
          v17 = DmaAdapter;
          *(_DWORD *)TokenInformation = ((__int64)DmaAdapter[12].DmaOperations & 0x40) != 0;
          goto LABEL_16;
        case TokenAuditPolicy:
          if ( !SeSinglePrivilegeCheck(SeSecurityPrivilege, PreviousMode) )
            return -1073741727;
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          *v11 = 30;
          if ( TokenInformationLength < 0x1E )
            goto LABEL_156;
          v113 = KeGetCurrentThread();
          --v113->KernelApcDisable;
          v23 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          *(struct _DMA_ADAPTER *)TokenInformation = *(PADAPTER_OBJECT)((char *)v23 + 88);
          *((_QWORD *)TokenInformation + 2) = v23[6].DmaOperations;
          *((_DWORD *)TokenInformation + 6) = *(_DWORD *)&v23[7].Version;
          *((_WORD *)TokenInformation + 14) = *(&v23[7].Size + 1);
LABEL_39:
          ExReleaseResourceLite(*(PERESOURCE *)&v23[3].Version);
          KeLeaveCriticalRegion();
LABEL_40:
          HalPutDmaAdapter(v23);
          return 0;
        case TokenOrigin:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          *v11 = 8;
          if ( TokenInformationLength < 8 )
            goto LABEL_156;
          v17 = DmaAdapter;
          *(_QWORD *)TokenInformation = *(_QWORD *)&DmaAdapter[14].Version;
          goto LABEL_16;
        case TokenElevationType:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          *v11 = 4;
          if ( TokenInformationLength < 4 )
            goto LABEL_156;
          v23 = DmaAdapter;
          AllocateAdapterChannel = (int)DmaAdapter[13].DmaOperations->AllocateAdapterChannel;
          if ( (AllocateAdapterChannel & 4) != 0 )
          {
            if ( SeIsSModeAdminlessEnabled() )
              *(_DWORD *)TokenInformation = 1;
            else
              *(_DWORD *)TokenInformation = 3;
          }
          else
          {
            LOBYTE(v9) = (AllocateAdapterChannel & 2) != 0;
            *(_DWORD *)TokenInformation = v9 + 1;
          }
          goto LABEL_40;
        case TokenLinkedToken:
          v145 = 0LL;
          Handle = 0LL;
          Object = 0LL;
          v152[1] = 0;
          v156 = 0;
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          *v11 = 8;
          if ( TokenInformationLength == 8 )
          {
            v97 = -(SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) != 0);
            if ( SeIsSModeAdminlessEnabled() )
            {
              v130 = 0;
              SepGetStackTraceHash(&v130);
              EtwTraceAdminlessAccessFailure(v130, 1LL, 0LL);
              HalPutDmaAdapter(DmaAdapter);
              return -1073741729;
            }
            else
            {
              v29 = DmaAdapter;
              v98 = SepReferenceLogonSessionSilo(
                      &DmaAdapter[13].DmaOperations->AllocateCommonBuffer,
                      (__int64)DmaAdapter[13].DmaOperations->AllocateAdapterChannelEx,
                      (__int64 *)&v145);
              if ( v98 < 0 )
                goto LABEL_174;
              v152[0] = 48;
              v153 = 0LL;
              v155 = PreviousMode ? 0 : 512;
              v154 = 0LL;
              v157 = 0LL;
              v99 = v97 + 2;
              v100 = v145;
              v98 = SepDuplicateToken(v145[6], (int)v152, 0, v99, 1u, 0, 0, &Object);
              SepDeReferenceLogonSessionDirect(v100);
              if ( v98 < 0 )
              {
LABEL_174:
                HalPutDmaAdapter(v29);
                return v98;
              }
              inserted = ObInsertObject(Object, 0LL, 0xF01FFu, 0, 0LL, &Handle);
              if ( inserted >= 0 )
              {
                *(_QWORD *)TokenInformation = Handle;
                goto LABEL_55;
              }
              v112 = v29;
LABEL_205:
              HalPutDmaAdapter(v112);
              return inserted;
            }
          }
          else
          {
            HalPutDmaAdapter(DmaAdapter);
            return -1073741820;
          }
        case TokenElevation:
          *v11 = 4;
          if ( TokenInformationLength != 4 )
            return -1073741820;
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v52 = KeGetCurrentThread();
          --v52->KernelApcDisable;
          v23 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          IsElevatedRid = (*(_QWORD *)&v23[4].Version & 0x1120160684LL) != 0;
          v54 = HIDWORD(v23[7].DmaOperations);
          if ( v54 )
          {
            do
            {
              if ( IsElevatedRid )
                break;
              IsElevatedRid = RtlIsElevatedRid((PSID_AND_ATTRIBUTES)v23[9].DmaOperations + (unsigned int)v9);
              LODWORD(v9) = v9 + 1;
            }
            while ( (unsigned int)v9 < v54 );
          }
          ExReleaseResourceLite(*(PERESOURCE *)&v23[3].Version);
          KeLeaveCriticalRegion();
          *(_DWORD *)TokenInformation = IsElevatedRid;
          goto LABEL_40;
        case TokenHasRestrictions:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          *v11 = 1;
          if ( !TokenInformationLength )
            goto LABEL_156;
          v17 = DmaAdapter;
          *(_BYTE *)TokenInformation = ((__int64)DmaAdapter[12].DmaOperations & 0x810) != 0;
          goto LABEL_16;
        case TokenAccessInformation:
          v141 = 0;
          v139 = 0;
          v138 = 0;
          v137 = 0;
          v136 = 0;
          v135 = 0;
          v134 = 0;
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v88 = KeGetCurrentThread();
          --v88->KernelApcDisable;
          v14 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v89 = SourceSid;
          v90 = v125[0];
          TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                               (_DWORD)v14,
                                               v125[0],
                                               (_DWORD)SourceSid,
                                               (unsigned int)&v143,
                                               (__int64)&v142,
                                               (__int64)&v141,
                                               (__int64)&v140,
                                               (__int64)&v139,
                                               (__int64)&v138,
                                               (__int64)&v137,
                                               (__int64)&v136,
                                               (__int64)&v135,
                                               (__int64)&v134);
          *v11 = TokenAccessInformationBufferSize;
          if ( TokenInformationLength < TokenAccessInformationBufferSize )
            goto LABEL_41;
          SepCopyTokenAccessInformation(
            (_DWORD)v14,
            (_DWORD)TokenInformation,
            TokenInformationLength,
            v143,
            v142,
            v141,
            v140,
            v139,
            v138,
            v137,
            v136,
            v135,
            v134,
            v90,
            (__int64)v89);
          goto LABEL_14;
        case TokenVirtualizationAllowed:
        case TokenVirtualizationEnabled:
        case TokenUIAccess:
        case TokenIsRestricted:
        case TokenPrivateNameSpace:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          *v11 = 4;
          if ( TokenInformationLength < 4 )
            goto LABEL_156;
          v17 = DmaAdapter;
          switch ( TokenInformationClass )
          {
            case TokenVirtualizationAllowed:
              LODWORD(v9) = (LODWORD(DmaAdapter[12].DmaOperations) >> 9) & 1;
              goto LABEL_129;
            case TokenVirtualizationEnabled:
              LODWORD(v9) = (LODWORD(DmaAdapter[12].DmaOperations) >> 10) & 1;
              goto LABEL_129;
            case TokenUIAccess:
              LODWORD(v9) = (LODWORD(DmaAdapter[12].DmaOperations) >> 12) & 1;
              goto LABEL_129;
          }
          if ( TokenInformationClass != TokenIsRestricted )
          {
            if ( ((__int64)DmaAdapter[12].DmaOperations & 0x10000) == 0 )
              goto LABEL_129;
            goto LABEL_230;
          }
          v114 = (int)DmaAdapter[12].DmaOperations;
          if ( (v114 & 0x10) != 0 || (v114 & 8) != 0 )
LABEL_230:
            LODWORD(v9) = 1;
LABEL_129:
          *(_DWORD *)TokenInformation = v9;
          break;
        case TokenIntegrityLevel:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v33 = KeGetCurrentThread();
          --v33->KernelApcDisable;
          v14 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          SepCopyTokenIntegrity((__int64)v14);
          Sid = (unsigned __int8 *)Src.Sid;
          v35 = 4 * *((unsigned __int8 *)Src.Sid + 1) + 24;
          *v11 = v35;
          if ( TokenInformationLength < v35 )
            goto LABEL_41;
          RtlCopySidAndAttributesArray(
            1u,
            &Src,
            4 * Sid[1] + 8,
            (PSID_AND_ATTRIBUTES)TokenInformation,
            (char *)TokenInformation + 16,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          goto LABEL_14;
        case TokenMandatoryPolicy:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          *v11 = 4;
          if ( TokenInformationLength < 4 )
            goto LABEL_156;
          inserted = SeQueryMandatoryPolicyToken((__int64)DmaAdapter, TokenInformation);
          v131 = inserted;
          goto LABEL_205;
        case TokenLogonSid:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v102 = KeGetCurrentThread();
          --v102->KernelApcDisable;
          v29 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v103 = 0;
          v104 = HIDWORD(v29[7].DmaOperations);
          if ( !v104 )
            goto LABEL_188;
          v105 = v29[9].DmaOperations;
          while ( (*(_DWORD *)(&v105->PutDmaAdapter + 2 * v103) & 0xC0000000) != 0xC0000000 )
          {
            if ( ++v103 >= v104 )
              goto LABEL_188;
          }
          v9 = *((_QWORD *)&v105->Size + 2 * v103);
LABEL_188:
          if ( v9 )
          {
            v106 = 16LL * v103;
            v107 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)&v29[9].DmaOperations->Size + v106) + 1LL) + 32;
            *v11 = v107;
            if ( TokenInformationLength < v107 )
            {
LABEL_101:
              ExReleaseResourceLite(*(PERESOURCE *)&v29[3].Version);
              KeLeaveCriticalRegion();
              HalPutDmaAdapter(v29);
              return -1073741789;
            }
            else
            {
              *(_DWORD *)TokenInformation = 1;
              RtlCopySidAndAttributesArray(
                1u,
                (PSID_AND_ATTRIBUTES)((char *)v29[9].DmaOperations + v106),
                4 * *(unsigned __int8 *)(*(_QWORD *)((char *)&v29[9].DmaOperations->Size + v106) + 1LL) + 8,
                (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
                (char *)TokenInformation + 24,
                &RemainingSidArea,
                (PULONG)&RemainingSidArea);
LABEL_54:
              ExReleaseResourceLite(*(PERESOURCE *)&v29[3].Version);
              KeLeaveCriticalRegion();
LABEL_55:
              HalPutDmaAdapter(v29);
              return 0;
            }
          }
          else
          {
            ExReleaseResourceLite(*(PERESOURCE *)&v29[3].Version);
            KeLeaveCriticalRegion();
            HalPutDmaAdapter(v29);
            return -1073741275;
          }
        case TokenIsAppContainer:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          *v11 = 4;
          v17 = DmaAdapter;
          if ( TokenInformationLength < 4 )
            goto LABEL_42;
          LOBYTE(v9) = ((__int64)DmaAdapter[12].DmaOperations & 0x4000) != 0;
          *(_DWORD *)TokenInformation = v9;
          goto LABEL_16;
        case TokenCapabilities:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v92 = KeGetCurrentThread();
          --v92->KernelApcDisable;
          v14 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v93 = *(_DWORD *)&v14[50].Version;
          v94 = 16 * v93 + 8;
          if ( v93 )
          {
            v95 = v14[49].DmaOperations;
            v96 = v93;
            do
            {
              v94 += 4 * *(unsigned __int8 *)(*(_QWORD *)&v95->Size + 1LL) + 8;
              v95 = (_DMA_OPERATIONS *)((char *)v95 + 16);
              --v96;
            }
            while ( v96 );
          }
          *v11 = v94;
          if ( TokenInformationLength < v94 )
            goto LABEL_41;
          *(_DWORD *)TokenInformation = *(_DWORD *)&v14[50].Version;
          RtlCopySidAndAttributesArray(
            *(_DWORD *)&v14[50].Version,
            (PSID_AND_ATTRIBUTES)v14[49].DmaOperations,
            v94,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + (unsigned int)(16 * *(_DWORD *)&v14[50].Version) + 8,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          goto LABEL_14;
        case TokenAppContainerSid:
          v18 = 8;
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v19 = KeGetCurrentThread();
          --v19->KernelApcDisable;
          v14 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v20 = *(_QWORD *)&v14[49].Version;
          if ( v20 )
            v18 = 4 * *(unsigned __int8 *)(v20 + 1) + 16;
          *v11 = v18;
          if ( TokenInformationLength < v18 )
            goto LABEL_41;
          v21 = (char *)TokenInformation + 8;
          if ( !v20 )
            v21 = 0LL;
          *(_QWORD *)TokenInformation = v21;
          if ( v21 )
            RtlCopySid(v18 - 8, v21, *(PSID *)&v14[49].Version);
          goto LABEL_14;
        case TokenAppContainerNumber:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          *v11 = 4;
          if ( TokenInformationLength < 4 )
            goto LABEL_156;
          v115 = KeGetCurrentThread();
          --v115->KernelApcDisable;
          v23 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v116 = v23[67].DmaOperations;
          if ( v116 )
            LODWORD(v9) = v116->FlushAdapterBuffers;
          ExReleaseResourceLite(*(PERESOURCE *)&v23[3].Version);
          KeLeaveCriticalRegion();
          *(_DWORD *)TokenInformation = v9;
          goto LABEL_40;
        case TokenUserClaimAttributes:
        case TokenDeviceClaimAttributes:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v47 = KeGetCurrentThread();
          --v47->KernelApcDisable;
          v48 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v49 = v48[68].DmaOperations;
          if ( v49
            && (v49[1].GetDmaDomain || TokenInformationClass != TokenUserClaimAttributes)
            && ((GetDmaDomain = (__int128 *)v49[1].AllocateCommonBufferWithBounds) != 0LL
             || TokenInformationClass != TokenDeviceClaimAttributes) )
          {
            if ( TokenInformationClass == TokenUserClaimAttributes )
              GetDmaDomain = (__int128 *)v49[1].GetDmaDomain;
            AuthzBasepQueryClaimAttributesToken(GetDmaDomain, 0LL, 0LL, &v129);
            v50 = v129;
          }
          else
          {
            v50 = 16;
            *(_QWORD *)&v148 = (char *)&v147 + 8;
            *((_QWORD *)&v147 + 1) = (char *)&v147 + 8;
            DWORD2(v148) = 0;
            *((_QWORD *)&v149 + 1) = &v149;
            *(_QWORD *)&v149 = &v149;
            GetDmaDomain = &v147;
          }
          *v11 = v50;
          if ( TokenInformationLength < v50 )
            goto LABEL_94;
          v58 = AuthzBasepQueryClaimAttributesToken(GetDmaDomain, TokenInformation, TokenInformationLength, &v129);
          v131 = v58;
          goto LABEL_108;
        case TokenDeviceGroups:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v62 = KeGetCurrentThread();
          --v62->KernelApcDisable;
          v29 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v63 = v29[68].DmaOperations;
          if ( v63 && (Size = v63->Size) != 0 )
          {
            v65 = 16 * Size + 8;
          }
          else
          {
            Size = 0;
            v65 = 24;
          }
          if ( Size )
          {
            PutDmaAdapter = v63->PutDmaAdapter;
            v118 = Size;
            do
            {
              v65 += 4 * *(unsigned __int8 *)(*(_QWORD *)PutDmaAdapter + 1LL) + 8;
              PutDmaAdapter = (void (__fastcall *)(_DMA_ADAPTER *))((char *)PutDmaAdapter + 16);
              --v118;
            }
            while ( v118 );
          }
          *v11 = v65;
          if ( TokenInformationLength < v65 )
            goto LABEL_101;
          *(_OWORD *)TokenInformation = 0LL;
          *((_QWORD *)TokenInformation + 2) = 0LL;
          *(_DWORD *)TokenInformation = Size;
          if ( Size )
            RtlCopySidAndAttributesArray(
              Size,
              (PSID_AND_ATTRIBUTES)v29[68].DmaOperations->PutDmaAdapter,
              v65,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + 16 * Size + 8,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
          goto LABEL_54;
        case TokenSecurityAttributes:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v55 = KeGetCurrentThread();
          --v55->KernelApcDisable;
          v48 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v56 = v48[48].DmaOperations;
          if ( v56 )
          {
            LODWORD(SidArea) = 0;
            AuthzBasepQuerySecurityAttributesToken(v56, 0LL, 0LL, 0LL, (size_t)SidArea, &v129);
            v57 = v129;
          }
          else
          {
            v57 = 16;
          }
          *v11 = v57;
          if ( TokenInformationLength < v57 )
            goto LABEL_94;
          LODWORD(SidArea) = TokenInformationLength;
          v58 = AuthzBasepQuerySecurityAttributesToken(
                  &v48[48].DmaOperations->Size,
                  0LL,
                  0LL,
                  TokenInformation,
                  (size_t)SidArea,
                  &v129);
          v131 = v58;
LABEL_108:
          ExReleaseResourceLite(*(PERESOURCE *)&v48[3].Version);
          KeLeaveCriticalRegion();
          HalPutDmaAdapter(v48);
          return v58;
        case TokenProcessTrustLevel:
          v36 = 8;
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v37 = KeGetCurrentThread();
          --v37->KernelApcDisable;
          v14 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v38 = v125[0];
          v39 = SourceSid;
          if ( v125[0] )
            v40 = (unsigned __int8 *)SourceSid;
          else
            v40 = *(unsigned __int8 **)&v14[69].Version;
          if ( v40 )
            v36 = 4 * v40[1] + 16;
          *v11 = v36;
          if ( TokenInformationLength < v36 )
            goto LABEL_41;
          v41 = (char *)TokenInformation + 8;
          if ( !v40 )
            v41 = 0LL;
          *(_QWORD *)TokenInformation = v41;
          if ( v41 )
          {
            if ( !v38 )
              v39 = *(PSID *)&v14[69].Version;
            RtlCopySid(v36 - 8, v41, v39);
          }
          goto LABEL_14;
        case TokenSingletonAttributes:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result >= 0 )
          {
            v119 = KeGetCurrentThread();
            --v119->KernelApcDisable;
            v120 = DmaAdapter;
            ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
            SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                                        (__int64)v120,
                                        v121,
                                        0LL,
                                        0,
                                        1,
                                        (__int64)TokenInformation,
                                        TokenInformationLength,
                                        (__int64)v11);
            v131 = SecurityAttributesToken;
            ExReleaseResourceLite(*(PERESOURCE *)&v120[3].Version);
            KeLeaveCriticalRegion();
            HalPutDmaAdapter(v120);
            return SecurityAttributesToken;
          }
          return result;
        case TokenBnoIsolation:
          result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
          if ( result < 0 )
            return result;
          v80 = KeGetCurrentThread();
          --v80->KernelApcDisable;
          v48 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v81 = 16;
          v82 = *(_QWORD *)&v48[72].Version;
          if ( v82 )
            v81 = *(unsigned __int16 *)(v82 + 42) + 16;
          *v11 = v81;
          if ( TokenInformationLength < v81 )
          {
LABEL_94:
            ExReleaseResourceLite(*(PERESOURCE *)&v48[3].Version);
            KeLeaveCriticalRegion();
            HalPutDmaAdapter(v48);
            return -1073741789;
          }
          else
          {
            if ( *(_QWORD *)&v48[72].Version )
            {
              *((_BYTE *)TokenInformation + 8) = 1;
              *(_QWORD *)TokenInformation = (char *)TokenInformation + 16;
              memmove(
                (char *)TokenInformation + 16,
                *(const void **)(*(_QWORD *)&v48[72].Version + 48LL),
                *(unsigned __int16 *)(*(_QWORD *)&v48[72].Version + 42LL));
            }
            else
            {
              *((_BYTE *)TokenInformation + 8) = 0;
              *(_QWORD *)TokenInformation = 0LL;
            }
            ExReleaseResourceLite(*(PERESOURCE *)&v48[3].Version);
            KeLeaveCriticalRegion();
            HalPutDmaAdapter(v48);
            return 0;
          }
        case TokenIsSandboxed:
          *v11 = 4;
          if ( TokenInformationLength < 4 )
            return -1073741789;
          *(_DWORD *)TokenInformation = (unsigned __int8)RtlIsSandboxedTokenHandle(v8);
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
    goto LABEL_16;
  }
  result = SepReferenceTokenByHandle(v8, 8u, PreviousMode, &DmaAdapter, v125, &SourceSid);
  if ( result < 0 )
    return result;
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  v14 = DmaAdapter;
  ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
  v16 = 4 * *(unsigned __int8 *)(*(_QWORD *)v14[9].DmaOperations + 1LL) + 24;
  *v11 = v16;
  if ( TokenInformationLength >= v16 )
  {
    RtlCopySidAndAttributesArray(
      1u,
      (PSID_AND_ATTRIBUTES)v14[9].DmaOperations,
      v16,
      (PSID_AND_ATTRIBUTES)TokenInformation,
      (char *)TokenInformation + 16,
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
LABEL_14:
    ExReleaseResourceLite(*(PERESOURCE *)&v14[3].Version);
    KeLeaveCriticalRegion();
LABEL_15:
    v17 = v14;
LABEL_16:
    HalPutDmaAdapter(v17);
    return 0;
  }
LABEL_41:
  ExReleaseResourceLite(*(PERESOURCE *)&v14[3].Version);
  KeLeaveCriticalRegion();
  v17 = v14;
LABEL_42:
  HalPutDmaAdapter(v17);
  return -1073741789;
}
