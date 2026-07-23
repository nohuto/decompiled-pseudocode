/*
 * XREFs of NtQueryInformationToken @ 0x14064CC10
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x140586CE0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409146C8 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SepDeReferenceLogonSessionDirect @ 0x140243B50 (SepDeReferenceLogonSessionDirect.c)
 *     RtlIsSandboxedTokenHandle @ 0x140251410 (RtlIsSandboxedTokenHandle.c)
 *     SepReferenceTokenByHandle @ 0x14026A9C0 (SepReferenceTokenByHandle.c)
 *     SepConvertTokenPrivileges @ 0x14028568C (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1402856B0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepCopyTokenIntegrity @ 0x14028584C (SepCopyTokenIntegrity.c)
 *     SeIsSModeAdminlessEnabled @ 0x140285D40 (SeIsSModeAdminlessEnabled.c)
 *     SepTokenPrivilegeCount @ 0x1402A73B0 (SepTokenPrivilegeCount.c)
 *     SeQueryMandatoryPolicyToken @ 0x1402A73DC (SeQueryMandatoryPolicyToken.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1402F2FB0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1402F3050 (AuthzBasepQuerySecurityAttributesToken.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     KeEnterCriticalRegion @ 0x14035BF60 (KeEnterCriticalRegion.c)
 *     Feature_PPLEnforcement__private_ReportDeviceUsage @ 0x1403F8BA4 (Feature_PPLEnforcement__private_ReportDeviceUsage.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     SepGetStackTraceHash @ 0x140596340 (SepGetStackTraceHash.c)
 *     SeQuerySessionIdToken @ 0x1405F2610 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x1406031BC (AuthzBasepQueryClaimAttributesToken.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     RtlIsElevatedRid @ 0x1406696F0 (RtlIsElevatedRid.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ObInsertObject @ 0x1406AB4A0 (ObInsertObject.c)
 *     SepCopyTokenAccessInformation @ 0x1406CB4E8 (SepCopyTokenAccessInformation.c)
 *     RtlCopySidAndAttributesArray @ 0x1406CBA00 (RtlCopySidAndAttributesArray.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x1406CBAC8 (SepGetTokenAccessInformationBufferSize.c)
 *     SepReferenceLogonSessionSilo @ 0x1406CBF7C (SepReferenceLogonSessionSilo.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 *     RtlCopySid @ 0x14071E2B0 (RtlCopySid.c)
 *     EtwTraceAdminlessAccessFailure @ 0x14093FE08 (EtwTraceAdminlessAccessFailure.c)
 */

NTSTATUS __stdcall NtQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  __int64 v9; // rdi
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v11; // rcx
  PULONG v12; // r14
  NTSTATUS result; // eax
  struct _KTHREAD *v14; // rax
  PADAPTER_OBJECT v15; // rbx
  unsigned int DmaOperations_high; // eax
  ULONG v17; // r8d
  __int64 p_AllocateCommonBuffer; // rdx
  __int64 v19; // r9
  struct _KTHREAD *v20; // rax
  unsigned int v21; // eax
  ULONG v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // r9
  struct _KTHREAD *v25; // rax
  PADAPTER_OBJECT v26; // rdi
  unsigned int v27; // eax
  ULONG v28; // ebx
  PADAPTER_OBJECT v29; // rcx
  struct _KTHREAD *v30; // rax
  ULONG v31; // ecx
  struct _KTHREAD *v32; // rax
  ULONG v33; // ecx
  struct _KTHREAD *v34; // rax
  _DMA_OPERATIONS *DmaOperations; // rax
  ULONG v36; // eax
  char *v37; // rcx
  int AllocateAdapterChannel; // ecx
  char IsSModeAdminlessEnabled; // al
  int v40; // ecx
  struct _KTHREAD *v41; // rax
  int v42; // edx
  _DMA_OPERATIONS *v43; // rax
  struct _KTHREAD *v44; // rax
  ULONG v45; // r10d
  unsigned int v46; // ecx
  unsigned int v47; // r11d
  unsigned int v48; // r8d
  _DMA_OPERATIONS *v49; // rdx
  __int64 v50; // r9
  unsigned int v51; // ecx
  unsigned int v52; // r12d
  unsigned int v53; // r15d
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // r9
  ULONG v57; // ecx
  _SID_AND_ATTRIBUTES *v58; // r9
  _SID_AND_ATTRIBUTES *v59; // rdi
  __int64 v60; // r14
  struct _KTHREAD *v61; // rax
  PSID v62; // rdi
  char v63; // r15
  ULONG TokenAccessInformationBufferSize; // eax
  struct _KTHREAD *v65; // rax
  int v66; // ebx
  PADAPTER_OBJECT v67; // r14
  NTSTATUS v68; // r12d
  int v69; // eax
  int v70; // r9d
  _QWORD *v71; // rbx
  NTSTATUS v72; // r15d
  NTSTATUS inserted; // ebx
  struct _DMA_ADAPTER *v74; // rcx
  struct _KTHREAD *v75; // rax
  unsigned __int8 IsElevatedRid; // bl
  unsigned int v77; // r15d
  int DmaOperations_low_high; // edi
  int v79; // eax
  struct _KTHREAD *v80; // rax
  _DMA_OPERATIONS *v81; // rax
  ULONG v82; // ebx
  struct _KTHREAD *v83; // rax
  __int64 v84; // rcx
  char *v85; // rdx
  struct _KTHREAD *v86; // rax
  unsigned int v87; // eax
  ULONG v88; // r8d
  _DMA_OPERATIONS *v89; // rdx
  __int64 v90; // r9
  struct _KTHREAD *v91; // rax
  unsigned __int8 *Sid; // rdx
  ULONG v93; // eax
  struct _KTHREAD *v94; // rax
  unsigned int v95; // edx
  unsigned int v96; // r9d
  _DMA_OPERATIONS *v97; // r10
  __int64 v98; // r8
  ULONG v99; // eax
  struct _KTHREAD *v100; // rax
  PADAPTER_OBJECT v101; // r15
  _DMA_OPERATIONS *v102; // r12
  void *(__fastcall *GetDmaDomain)(_DMA_ADAPTER *); // rcx
  void *(__fastcall *AllocateCommonBufferWithBounds)(_DMA_ADAPTER *, _LARGE_INTEGER *, _LARGE_INTEGER *, unsigned int, unsigned int, _MEMORY_CACHING_TYPE *, unsigned int, _LARGE_INTEGER *); // r12
  ULONG v105; // ebx
  NTSTATUS v106; // ebx
  struct _KTHREAD *v107; // rax
  _DMA_OPERATIONS *v108; // rdx
  ULONG Size; // r11d
  ULONG v110; // r8d
  void (__fastcall *PutDmaAdapter)(_DMA_ADAPTER *); // rdx
  __int64 v112; // r9
  struct _KTHREAD *v113; // rax
  _DMA_OPERATIONS *v114; // rcx
  ULONG v115; // ebx
  ULONG v116; // ebx
  struct _KTHREAD *v117; // rax
  unsigned __int8 v118; // r9
  PSID v119; // r8
  unsigned __int8 *v120; // rcx
  char *v121; // rdx
  PADAPTER_OBJECT v122; // rbx
  char v123; // dl
  NTSTATUS SecurityAttributesToken; // edi
  ULONG v125; // ebx
  __int64 v126; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG v128; // r8d
  PSID SidArea; // [rsp+20h] [rbp-188h]
  unsigned __int8 v130[8]; // [rsp+80h] [rbp-128h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+88h] [rbp-120h] BYREF
  PSID DestinationSid; // [rsp+90h] [rbp-118h] BYREF
  PSID RemainingSidArea; // [rsp+98h] [rbp-110h] BYREF
  int v134; // [rsp+A0h] [rbp-108h] BYREF
  ULONG v135; // [rsp+A4h] [rbp-104h] BYREF
  NTSTATUS v136; // [rsp+A8h] [rbp-100h]
  int v137; // [rsp+ACh] [rbp-FCh]
  ULONG SessionId; // [rsp+B0h] [rbp-F8h] BYREF
  int v139; // [rsp+B4h] [rbp-F4h] BYREF
  int v140; // [rsp+B8h] [rbp-F0h] BYREF
  int v141; // [rsp+BCh] [rbp-ECh] BYREF
  int v142; // [rsp+C0h] [rbp-E8h] BYREF
  int v143; // [rsp+C4h] [rbp-E4h] BYREF
  int v144; // [rsp+C8h] [rbp-E0h] BYREF
  int v145; // [rsp+CCh] [rbp-DCh] BYREF
  int v146; // [rsp+D0h] [rbp-D8h] BYREF
  int v147; // [rsp+D4h] [rbp-D4h] BYREF
  int v148; // [rsp+D8h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp-C8h] BYREF
  _QWORD *v150; // [rsp+E8h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+F0h] [rbp-B8h] BYREF
  __int128 v152; // [rsp+F8h] [rbp-B0h] BYREF
  __int128 v153; // [rsp+108h] [rbp-A0h]
  __int128 v154; // [rsp+118h] [rbp-90h] BYREF
  _SID_AND_ATTRIBUTES *v155; // [rsp+128h] [rbp-80h]
  _SID_AND_ATTRIBUTES Src; // [rsp+130h] [rbp-78h] BYREF
  _DWORD v157[2]; // [rsp+140h] [rbp-68h] BYREF
  __int64 v158; // [rsp+148h] [rbp-60h]
  __int64 v159; // [rsp+150h] [rbp-58h]
  int v160; // [rsp+158h] [rbp-50h]
  int v161; // [rsp+15Ch] [rbp-4Ch]
  __int128 v162; // [rsp+160h] [rbp-48h]
  __int128 v163; // [rsp+170h] [rbp-38h]

  v9 = 0LL;
  DmaAdapter = 0LL;
  v134 = 0;
  v147 = 0;
  v145 = 0;
  v155 = 0LL;
  v148 = 0;
  Src = 0LL;
  RemainingSidArea = 0LL;
  SessionId = 0;
  v163 = 0LL;
  v152 = 0LL;
  v153 = 0LL;
  v154 = 0LL;
  v130[0] = 0;
  DestinationSid = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(TokenInformation, TokenInformationLength, 4u);
    v11 = 0x7FFFFFFF0000LL;
    v12 = ReturnLength;
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      v11 = (__int64)ReturnLength;
    *(_DWORD *)v11 = *(_DWORD *)v11;
  }
  else
  {
    v12 = ReturnLength;
  }
  if ( TokenInformationClass == TokenUser )
  {
    result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
    if ( result < 0 )
      return result;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = DmaAdapter;
    ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
    v128 = 4 * *(unsigned __int8 *)(*(_QWORD *)v15[9].DmaOperations + 1LL) + 24;
    *v12 = v128;
    if ( TokenInformationLength >= v128 )
    {
      RtlCopySidAndAttributesArray(
        1u,
        (PSID_AND_ATTRIBUTES)v15[9].DmaOperations,
        v128,
        (PSID_AND_ATTRIBUTES)TokenInformation,
        (char *)TokenInformation + 16,
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
LABEL_242:
      ExReleaseResourceLite(*(PERESOURCE *)&v15[3].Version);
      KeLeaveCriticalRegion();
LABEL_243:
      v29 = v15;
      goto LABEL_244;
    }
LABEL_240:
    ExReleaseResourceLite(*(PERESOURCE *)&v15[3].Version);
    KeLeaveCriticalRegion();
    v29 = v15;
  }
  else
  {
    if ( TokenInformationClass != TokenType )
    {
      switch ( TokenInformationClass )
      {
        case TokenGroups:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v14 = KeGetCurrentThread();
          --v14->KernelApcDisable;
          v15 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          DmaOperations_high = HIDWORD(v15[7].DmaOperations);
          v17 = 16 * DmaOperations_high - 8;
          if ( DmaOperations_high > 1 )
          {
            p_AllocateCommonBuffer = (__int64)&v15[9].DmaOperations->AllocateCommonBuffer;
            v19 = DmaOperations_high - 1;
            do
            {
              v17 += 4 * *(unsigned __int8 *)(*(_QWORD *)p_AllocateCommonBuffer + 1LL) + 8;
              p_AllocateCommonBuffer += 16LL;
              --v19;
            }
            while ( v19 );
          }
          *v12 = v17;
          if ( TokenInformationLength < v17 )
            goto LABEL_240;
          *(_DWORD *)TokenInformation = HIDWORD(v15[7].DmaOperations) - 1;
          RtlCopySidAndAttributesArray(
            HIDWORD(v15[7].DmaOperations) - 1,
            (PSID_AND_ATTRIBUTES)&v15[9].DmaOperations->AllocateCommonBuffer,
            v17,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + (unsigned int)(16 * HIDWORD(v15[7].DmaOperations) - 32) + 24,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          goto LABEL_242;
        case TokenPrivileges:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v25 = KeGetCurrentThread();
          --v25->KernelApcDisable;
          v26 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v27 = SepTokenPrivilegeCount((__int64)v26);
          if ( v27 <= 1 )
            v28 = 16;
          else
            v28 = 12 * v27 + 4;
          *v12 = v28;
          if ( TokenInformationLength < v28 )
            goto LABEL_26;
          SepConvertTokenPrivileges((__int64)v26, TokenInformation);
          goto LABEL_28;
        case TokenOwner:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v30 = KeGetCurrentThread();
          --v30->KernelApcDisable;
          v15 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v31 = 4
              * *(unsigned __int8 *)(*((_QWORD *)&v15[9].DmaOperations->Size + 2 * *(unsigned int *)&v15[9].Version)
                                   + 1LL)
              + 16;
          *v12 = v31;
          if ( TokenInformationLength < v31 )
            goto LABEL_240;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(
            v31 - 8,
            (char *)TokenInformation + 8,
            *((PSID *)&v15[9].DmaOperations->Size + 2 * *(unsigned int *)&v15[9].Version));
          goto LABEL_242;
        case TokenPrimaryGroup:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v32 = KeGetCurrentThread();
          --v32->KernelApcDisable;
          v15 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v33 = 4 * BYTE1(v15[10].DmaOperations->Size) + 16;
          *v12 = v33;
          if ( TokenInformationLength < v33 )
            goto LABEL_240;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v33 - 8, (char *)TokenInformation + 8, v15[10].DmaOperations);
          goto LABEL_242;
        case TokenDefaultDacl:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v134 = 8;
          v34 = KeGetCurrentThread();
          --v34->KernelApcDisable;
          v15 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          DmaOperations = v15[11].DmaOperations;
          if ( DmaOperations )
            v36 = HIWORD(DmaOperations->Size) + 8;
          else
            v36 = v134;
          *v12 = v36;
          if ( TokenInformationLength < v36 )
            goto LABEL_240;
          v37 = (char *)TokenInformation + 8;
          if ( v15[11].DmaOperations )
          {
            *(_QWORD *)TokenInformation = v37;
            memmove(v37, v15[11].DmaOperations, HIWORD(v15[11].DmaOperations->Size));
          }
          else
          {
            *(_QWORD *)TokenInformation = 0LL;
          }
          goto LABEL_242;
        case TokenSource:
          result = SepReferenceTokenByHandle(TokenHandle, 0x10u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          *v12 = 16;
          if ( TokenInformationLength < 0x10 )
            goto LABEL_45;
          v29 = DmaAdapter;
          *(struct _DMA_ADAPTER *)TokenInformation = *DmaAdapter;
          goto LABEL_244;
        case TokenImpersonationLevel:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v29 = DmaAdapter;
          if ( *(_DWORD *)&DmaAdapter[12].Version != 2 )
          {
            HalPutDmaAdapter(DmaAdapter);
            return -1073741821;
          }
          *v12 = 4;
          if ( TokenInformationLength < 4 )
            goto LABEL_246;
          *(_DWORD *)TokenInformation = *(_DWORD *)(&v29[12].Size + 1);
          goto LABEL_244;
        case TokenStatistics:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          *v12 = 56;
          if ( TokenInformationLength < 0x38 )
            goto LABEL_45;
          v41 = KeGetCurrentThread();
          --v41->KernelApcDisable;
          v15 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v137 = 0;
          *(struct _DMA_ADAPTER *)TokenInformation = v15[1];
          *((_QWORD *)TokenInformation + 2) = v15[2].DmaOperations;
          *((_DWORD *)TokenInformation + 6) = *(_DWORD *)&v15[12].Version;
          *((_DWORD *)TokenInformation + 7) = *(_DWORD *)(&v15[12].Size + 1);
          *((_DWORD *)TokenInformation + 8) = v15[8].DmaOperations;
          v42 = LODWORD(v15[8].DmaOperations) - 4 * BYTE1(v15[10].DmaOperations->Size) - 8;
          v137 = v42;
          v43 = v15[11].DmaOperations;
          if ( v43 )
          {
            v42 -= HIWORD(v43->Size);
            v137 = v42;
          }
          *((_DWORD *)TokenInformation + 9) = v42;
          *((_DWORD *)TokenInformation + 10) = HIDWORD(v15[7].DmaOperations) - 1;
          *((_DWORD *)TokenInformation + 11) = SepTokenPrivilegeCount((__int64)v15);
          *((_QWORD *)TokenInformation + 6) = v15[3].DmaOperations;
          goto LABEL_242;
        case TokenRestrictedSids:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v20 = KeGetCurrentThread();
          --v20->KernelApcDisable;
          v15 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v21 = *(_DWORD *)&v15[8].Version;
          v22 = 16 * v21 + 8;
          if ( v21 )
          {
            v23 = *(_QWORD *)&v15[10].Version;
            v24 = v21;
            do
            {
              v22 += 4 * *(unsigned __int8 *)(*(_QWORD *)v23 + 1LL) + 8;
              v23 += 16LL;
              --v24;
            }
            while ( v24 );
          }
          *v12 = v22;
          if ( TokenInformationLength < v22 )
            goto LABEL_240;
          *(_DWORD *)TokenInformation = *(_DWORD *)&v15[8].Version;
          RtlCopySidAndAttributesArray(
            *(_DWORD *)&v15[8].Version,
            *(PSID_AND_ATTRIBUTES *)&v15[10].Version,
            v22,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + (unsigned int)(16 * *(_DWORD *)&v15[8].Version) + 8,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          goto LABEL_242;
        case TokenSessionId:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          *v12 = 4;
          if ( TokenInformationLength < 4 )
            goto LABEL_45;
          v15 = DmaAdapter;
          SeQuerySessionIdToken(DmaAdapter, &SessionId);
          *(_DWORD *)TokenInformation = SessionId;
          *v12 = 4;
          goto LABEL_243;
        case TokenGroupsAndPrivileges:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v44 = KeGetCurrentThread();
          --v44->KernelApcDisable;
          v15 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v135 = SepTokenPrivilegeCount((__int64)v15);
          v45 = 12 * v135;
          v46 = HIDWORD(v15[7].DmaOperations);
          v47 = v46;
          v48 = 16 * v46;
          if ( v46 )
          {
            v49 = v15[9].DmaOperations;
            v50 = v46;
            do
            {
              v48 += (4 * *(unsigned __int8 *)(*(_QWORD *)&v49->Size + 1LL) + 15) & 0xFFFFFFF8;
              v49 = (_DMA_OPERATIONS *)((char *)v49 + 16);
              --v50;
            }
            while ( v50 );
          }
          v51 = *(_DWORD *)&v15[8].Version;
          v52 = v51;
          v53 = 16 * v51;
          v54 = 16 * v51;
          if ( v51 )
          {
            v55 = *(_QWORD *)&v15[10].Version;
            v56 = v51;
            do
            {
              v53 += (4 * *(unsigned __int8 *)(*(_QWORD *)v55 + 1LL) + 15) & 0xFFFFFFF8;
              v54 = v53;
              v55 += 16LL;
              --v56;
            }
            while ( v56 );
          }
          v57 = v45 + v54 + v48 + 56;
          *v12 = v57;
          if ( TokenInformationLength < v57 )
            goto LABEL_240;
          *((_QWORD *)TokenInformation + 6) = v15[1].DmaOperations;
          *((_DWORD *)TokenInformation + 1) = v48;
          *(_DWORD *)TokenInformation = HIDWORD(v15[7].DmaOperations);
          v58 = (_SID_AND_ATTRIBUTES *)((char *)TokenInformation + 56);
          *((_QWORD *)TokenInformation + 1) = (char *)TokenInformation + 56;
          *((_DWORD *)TokenInformation + 5) = v53;
          *((_DWORD *)TokenInformation + 4) = *(_DWORD *)&v15[8].Version;
          if ( *(_DWORD *)&v15[8].Version )
          {
            v59 = (_SID_AND_ATTRIBUTES *)((char *)v58 + ((v48 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
            *((_QWORD *)TokenInformation + 3) = v59;
          }
          else
          {
            *((_QWORD *)TokenInformation + 3) = 0LL;
            v59 = v155;
          }
          *((_DWORD *)TokenInformation + 9) = v45;
          *((_DWORD *)TokenInformation + 8) = v135;
          v60 = (__int64)v58 + v53 + v48;
          *((_QWORD *)TokenInformation + 5) = v60;
          RtlCopySidAndAttributesArray(
            HIDWORD(v15[7].DmaOperations),
            (PSID_AND_ATTRIBUTES)v15[9].DmaOperations,
            v48 - v47 * 16,
            v58,
            &v58[v47],
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          if ( v59 )
            RtlCopySidAndAttributesArray(
              *(_DWORD *)&v15[8].Version,
              *(PSID_AND_ATTRIBUTES *)&v15[10].Version,
              v53 - v52 * 16,
              v59,
              &v59[v52],
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
          SepConvertTokenPrivilegesToLuidAndAttributes(v15, v60);
          goto LABEL_242;
        case TokenSandBoxInert:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          *v12 = 4;
          if ( TokenInformationLength < 4 )
            return -1073741789;
          v29 = DmaAdapter;
          *(_DWORD *)TokenInformation = (LODWORD(DmaAdapter[12].DmaOperations) >> 6) & 1;
          goto LABEL_244;
        case TokenAuditPolicy:
          if ( !SeSinglePrivilegeCheck(SeSecurityPrivilege, PreviousMode) )
            return -1073741727;
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          *v12 = 31;
          if ( TokenInformationLength < 0x1F )
            goto LABEL_45;
          v65 = KeGetCurrentThread();
          --v65->KernelApcDisable;
          v15 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          *(struct _DMA_ADAPTER *)TokenInformation = *(PADAPTER_OBJECT)((char *)v15 + 88);
          *((_QWORD *)TokenInformation + 2) = v15[6].DmaOperations;
          *((_DWORD *)TokenInformation + 6) = *(_DWORD *)&v15[7].Version;
          *((_WORD *)TokenInformation + 14) = *(&v15[7].Size + 1);
          *((_BYTE *)TokenInformation + 30) = *((_BYTE *)&v15[7].Size + 4);
          goto LABEL_242;
        case TokenOrigin:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          *v12 = 8;
          if ( TokenInformationLength < 8 )
            goto LABEL_45;
          v29 = DmaAdapter;
          *(_QWORD *)TokenInformation = *(_QWORD *)&DmaAdapter[14].Version;
          goto LABEL_244;
        case TokenElevationType:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          *v12 = 4;
          if ( TokenInformationLength < 4 )
            goto LABEL_45;
          v15 = DmaAdapter;
          AllocateAdapterChannel = (int)DmaAdapter[13].DmaOperations->AllocateAdapterChannel;
          if ( (AllocateAdapterChannel & 4) != 0 )
          {
            IsSModeAdminlessEnabled = SeIsSModeAdminlessEnabled();
            v40 = 3;
            if ( IsSModeAdminlessEnabled )
              v40 = 1;
            *(_DWORD *)TokenInformation = v40;
          }
          else
          {
            LOBYTE(v9) = (AllocateAdapterChannel & 2) != 0;
            *(_DWORD *)TokenInformation = v9 + 1;
          }
          goto LABEL_243;
        case TokenLinkedToken:
          v150 = 0LL;
          Handle = 0LL;
          Object = 0LL;
          v157[1] = 0;
          v161 = 0;
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          *v12 = 8;
          if ( TokenInformationLength == 8 )
          {
            v66 = -(SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) != 0);
            if ( SeIsSModeAdminlessEnabled() )
            {
              v135 = 0;
              SepGetStackTraceHash(&v135);
              EtwTraceAdminlessAccessFailure(v135, 1LL, 0LL);
              HalPutDmaAdapter(DmaAdapter);
              return -1073741729;
            }
            else
            {
              v67 = DmaAdapter;
              v68 = SepReferenceLogonSessionSilo(
                      &DmaAdapter[13].DmaOperations->AllocateCommonBuffer,
                      DmaAdapter[13].DmaOperations->AllocateAdapterChannelEx,
                      &v150);
              if ( v68 >= 0 )
              {
                v157[0] = 48;
                v158 = 0LL;
                v69 = 0;
                if ( !PreviousMode )
                  v69 = 512;
                v160 = v69;
                v159 = 0LL;
                v162 = 0LL;
                v70 = v66 + 2;
                v71 = v150;
                v72 = SepDuplicateToken(v150[6], (unsigned int)v157, 0, v70, 1, 0, 0, (__int64)&Object);
                SepDeReferenceLogonSessionDirect(v71);
                if ( v72 >= 0 )
                {
                  inserted = ObInsertObject(Object, 0LL, 0xF01FFu, 0, 0LL, &Handle);
                  if ( inserted >= 0 )
                  {
                    *(_QWORD *)TokenInformation = Handle;
LABEL_112:
                    HalPutDmaAdapter(v67);
                    return 0;
                  }
                  else
                  {
                    v74 = v67;
LABEL_110:
                    HalPutDmaAdapter(v74);
                    return inserted;
                  }
                }
                else
                {
                  HalPutDmaAdapter(v67);
                  return v72;
                }
              }
              else
              {
                HalPutDmaAdapter(v67);
                return v68;
              }
            }
          }
          else
          {
            HalPutDmaAdapter(DmaAdapter);
            return -1073741820;
          }
        case TokenElevation:
          *v12 = 4;
          if ( TokenInformationLength != 4 )
            return -1073741820;
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v75 = KeGetCurrentThread();
          --v75->KernelApcDisable;
          v67 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          IsElevatedRid = (*(_QWORD *)&v67[4].Version & 0x1120160684LL) != 0;
          v77 = HIDWORD(v67[7].DmaOperations);
          if ( v77 )
          {
            do
            {
              if ( IsElevatedRid )
                break;
              IsElevatedRid = RtlIsElevatedRid((PSID_AND_ATTRIBUTES)v67[9].DmaOperations + (unsigned int)v9);
              LODWORD(v9) = v9 + 1;
            }
            while ( (unsigned int)v9 < v77 );
          }
          ExReleaseResourceLite(*(PERESOURCE *)&v67[3].Version);
          KeLeaveCriticalRegion();
          *(_DWORD *)TokenInformation = IsElevatedRid;
          goto LABEL_112;
        case TokenHasRestrictions:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          *v12 = 1;
          if ( !TokenInformationLength )
            goto LABEL_45;
          v29 = DmaAdapter;
          *(_BYTE *)TokenInformation = ((__int64)DmaAdapter[12].DmaOperations & 0x810) != 0;
          goto LABEL_244;
        case TokenAccessInformation:
          v146 = 0;
          v144 = 0;
          v143 = 0;
          v142 = 0;
          v141 = 0;
          v140 = 0;
          v139 = 0;
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v61 = KeGetCurrentThread();
          --v61->KernelApcDisable;
          v15 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v62 = DestinationSid;
          v63 = v130[0];
          TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                               (_DWORD)v15,
                                               v130[0],
                                               (_DWORD)DestinationSid,
                                               (unsigned int)&v148,
                                               (__int64)&v147,
                                               (__int64)&v146,
                                               (__int64)&v145,
                                               (__int64)&v144,
                                               (__int64)&v143,
                                               (__int64)&v142,
                                               (__int64)&v141,
                                               (__int64)&v140,
                                               (__int64)&v139);
          *v12 = TokenAccessInformationBufferSize;
          if ( TokenInformationLength < TokenAccessInformationBufferSize )
            goto LABEL_240;
          SepCopyTokenAccessInformation(
            (int)v15,
            (int)TokenInformation,
            TokenInformationLength,
            v148,
            v147,
            v146,
            v145,
            v144,
            v143,
            v142,
            v141,
            v140,
            v139,
            v63,
            v62);
          goto LABEL_242;
        case TokenVirtualizationAllowed:
        case TokenVirtualizationEnabled:
        case TokenUIAccess:
        case TokenIsRestricted:
        case TokenPrivateNameSpace:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          *v12 = 4;
          if ( TokenInformationLength < 4 )
            goto LABEL_45;
          v29 = DmaAdapter;
          switch ( TokenInformationClass )
          {
            case TokenVirtualizationAllowed:
              DmaOperations_low_high = LODWORD(DmaAdapter[12].DmaOperations) >> 9;
LABEL_135:
              LODWORD(v9) = DmaOperations_low_high & 1;
              goto LABEL_136;
            case TokenVirtualizationEnabled:
              DmaOperations_low_high = LODWORD(DmaAdapter[12].DmaOperations) >> 10;
              goto LABEL_135;
            case TokenUIAccess:
              DmaOperations_low_high = LODWORD(DmaAdapter[12].DmaOperations) >> 12;
              goto LABEL_135;
          }
          if ( TokenInformationClass != TokenIsRestricted )
          {
            DmaOperations_low_high = HIWORD(LODWORD(DmaAdapter[12].DmaOperations));
            goto LABEL_135;
          }
          v79 = (int)DmaAdapter[12].DmaOperations;
          if ( (v79 & 0x10) != 0 || (v79 & 8) != 0 )
            LODWORD(v9) = 1;
LABEL_136:
          *(_DWORD *)TokenInformation = v9;
          break;
        case TokenIntegrityLevel:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v91 = KeGetCurrentThread();
          --v91->KernelApcDisable;
          v15 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          SepCopyTokenIntegrity();
          Sid = (unsigned __int8 *)Src.Sid;
          v93 = 4 * *((unsigned __int8 *)Src.Sid + 1) + 24;
          *v12 = v93;
          if ( TokenInformationLength < v93 )
            goto LABEL_240;
          RtlCopySidAndAttributesArray(
            1u,
            &Src,
            4 * Sid[1] + 8,
            (PSID_AND_ATTRIBUTES)TokenInformation,
            (char *)TokenInformation + 16,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          goto LABEL_242;
        case TokenMandatoryPolicy:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          *v12 = 4;
          if ( TokenInformationLength < 4 )
            goto LABEL_45;
          inserted = SeQueryMandatoryPolicyToken((__int64)DmaAdapter, TokenInformation);
          v136 = inserted;
          goto LABEL_110;
        case TokenLogonSid:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v94 = KeGetCurrentThread();
          --v94->KernelApcDisable;
          v15 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v95 = 0;
          v96 = HIDWORD(v15[7].DmaOperations);
          if ( !v96 )
            goto LABEL_173;
          v97 = v15[9].DmaOperations;
          while ( (*(_DWORD *)(&v97->PutDmaAdapter + 2 * v95) & 0xC0000000) != 0xC0000000 )
          {
            if ( ++v95 >= v96 )
              goto LABEL_173;
          }
          v9 = *((_QWORD *)&v97->Size + 2 * v95);
LABEL_173:
          if ( !v9 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)&v15[3].Version);
            KeLeaveCriticalRegion();
            HalPutDmaAdapter(v15);
            return -1073741275;
          }
          v98 = 16LL * v95;
          v99 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)&v15[9].DmaOperations->Size + v98) + 1LL) + 32;
          *v12 = v99;
          if ( TokenInformationLength < v99 )
            goto LABEL_240;
          *(_DWORD *)TokenInformation = 1;
          RtlCopySidAndAttributesArray(
            1u,
            (PSID_AND_ATTRIBUTES)((char *)v15[9].DmaOperations + v98),
            4 * *(unsigned __int8 *)(*(_QWORD *)((char *)&v15[9].DmaOperations->Size + v98) + 1LL) + 8,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + 24,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          goto LABEL_242;
        case TokenIsAppContainer:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          *v12 = 4;
          v29 = DmaAdapter;
          if ( TokenInformationLength < 4 )
            goto LABEL_246;
          LOBYTE(v9) = ((__int64)DmaAdapter[12].DmaOperations & 0x4000) != 0;
          *(_DWORD *)TokenInformation = v9;
          goto LABEL_244;
        case TokenCapabilities:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v86 = KeGetCurrentThread();
          --v86->KernelApcDisable;
          v15 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v87 = *(_DWORD *)&v15[50].Version;
          v88 = 16 * v87 + 8;
          if ( v87 )
          {
            v89 = v15[49].DmaOperations;
            v90 = v87;
            do
            {
              v88 += 4 * *(unsigned __int8 *)(*(_QWORD *)&v89->Size + 1LL) + 8;
              v89 = (_DMA_OPERATIONS *)((char *)v89 + 16);
              --v90;
            }
            while ( v90 );
          }
          *v12 = v88;
          if ( TokenInformationLength < v88 )
            goto LABEL_240;
          *(_DWORD *)TokenInformation = *(_DWORD *)&v15[50].Version;
          RtlCopySidAndAttributesArray(
            *(_DWORD *)&v15[50].Version,
            (PSID_AND_ATTRIBUTES)v15[49].DmaOperations,
            v88,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + (unsigned int)(16 * *(_DWORD *)&v15[50].Version) + 8,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          goto LABEL_242;
        case TokenAppContainerSid:
          v82 = 8;
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v83 = KeGetCurrentThread();
          --v83->KernelApcDisable;
          v26 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v84 = *(_QWORD *)&v26[49].Version;
          if ( v84 )
            v82 = 4 * *(unsigned __int8 *)(v84 + 1) + 16;
          *v12 = v82;
          if ( TokenInformationLength < v82 )
            goto LABEL_26;
          v85 = (char *)TokenInformation + 8;
          if ( !v84 )
            v85 = 0LL;
          *(_QWORD *)TokenInformation = v85;
          if ( v85 )
            RtlCopySid(v82 - 8, v85, *(PSID *)&v26[49].Version);
          goto LABEL_28;
        case TokenAppContainerNumber:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          *v12 = 4;
          if ( TokenInformationLength < 4 )
            goto LABEL_45;
          v80 = KeGetCurrentThread();
          --v80->KernelApcDisable;
          v15 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v81 = v15[67].DmaOperations;
          if ( v81 )
            LODWORD(v9) = v81->FlushAdapterBuffers;
          ExReleaseResourceLite(*(PERESOURCE *)&v15[3].Version);
          KeLeaveCriticalRegion();
          *(_DWORD *)TokenInformation = v9;
          goto LABEL_243;
        case TokenUserClaimAttributes:
        case TokenDeviceClaimAttributes:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v100 = KeGetCurrentThread();
          --v100->KernelApcDisable;
          v101 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v102 = v101[68].DmaOperations;
          if ( v102
            && ((GetDmaDomain = v102[1].GetDmaDomain) != 0LL || TokenInformationClass != TokenUserClaimAttributes)
            && ((AllocateCommonBufferWithBounds = v102[1].AllocateCommonBufferWithBounds) != 0LL
             || TokenInformationClass != TokenDeviceClaimAttributes) )
          {
            if ( TokenInformationClass == TokenUserClaimAttributes )
              AllocateCommonBufferWithBounds = (void *(__fastcall *)(_DMA_ADAPTER *, _LARGE_INTEGER *, _LARGE_INTEGER *, unsigned int, unsigned int, _MEMORY_CACHING_TYPE *, unsigned int, _LARGE_INTEGER *))GetDmaDomain;
            AuthzBasepQueryClaimAttributesToken(AllocateCommonBufferWithBounds, 0LL, 0, &v134);
            v105 = v134;
          }
          else
          {
            v105 = 16;
            *(_QWORD *)&v153 = (char *)&v152 + 8;
            *((_QWORD *)&v152 + 1) = (char *)&v152 + 8;
            DWORD2(v153) = 0;
            *((_QWORD *)&v154 + 1) = &v154;
            *(_QWORD *)&v154 = &v154;
            AllocateCommonBufferWithBounds = (void *(__fastcall *)(_DMA_ADAPTER *, _LARGE_INTEGER *, _LARGE_INTEGER *, unsigned int, unsigned int, _MEMORY_CACHING_TYPE *, unsigned int, _LARGE_INTEGER *))&v152;
          }
          *v12 = v105;
          if ( TokenInformationLength < v105 )
            goto LABEL_188;
          v106 = AuthzBasepQueryClaimAttributesToken(
                   AllocateCommonBufferWithBounds,
                   TokenInformation,
                   TokenInformationLength,
                   &v134);
          v136 = v106;
          goto LABEL_190;
        case TokenDeviceGroups:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v107 = KeGetCurrentThread();
          --v107->KernelApcDisable;
          v15 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v108 = v15[68].DmaOperations;
          if ( v108 && (Size = v108->Size) != 0 )
          {
            v110 = 16 * Size + 8;
          }
          else
          {
            Size = 0;
            v110 = 24;
          }
          if ( Size )
          {
            PutDmaAdapter = v108->PutDmaAdapter;
            v112 = Size;
            do
            {
              v110 += 4 * *(unsigned __int8 *)(*(_QWORD *)PutDmaAdapter + 1LL) + 8;
              PutDmaAdapter = (void (__fastcall *)(_DMA_ADAPTER *))((char *)PutDmaAdapter + 16);
              --v112;
            }
            while ( v112 );
          }
          *v12 = v110;
          if ( TokenInformationLength < v110 )
            goto LABEL_240;
          *(_OWORD *)TokenInformation = 0LL;
          *((_QWORD *)TokenInformation + 2) = 0LL;
          *(_DWORD *)TokenInformation = Size;
          if ( Size )
            RtlCopySidAndAttributesArray(
              Size,
              (PSID_AND_ATTRIBUTES)v15[68].DmaOperations->PutDmaAdapter,
              v110,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + 16 * Size + 8,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
          goto LABEL_242;
        case TokenSecurityAttributes:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v113 = KeGetCurrentThread();
          --v113->KernelApcDisable;
          v101 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v114 = v101[48].DmaOperations;
          if ( v114 )
          {
            LODWORD(SidArea) = 0;
            AuthzBasepQuerySecurityAttributesToken(v114, 0LL, 0LL, 0LL, (size_t)SidArea, &v134);
            v115 = v134;
          }
          else
          {
            v115 = 16;
          }
          *v12 = v115;
          if ( TokenInformationLength < v115 )
            goto LABEL_188;
          LODWORD(SidArea) = TokenInformationLength;
          v106 = AuthzBasepQuerySecurityAttributesToken(
                   &v101[48].DmaOperations->Size,
                   0LL,
                   0LL,
                   TokenInformation,
                   (size_t)SidArea,
                   &v134);
          v136 = v106;
LABEL_190:
          ExReleaseResourceLite(*(PERESOURCE *)&v101[3].Version);
          KeLeaveCriticalRegion();
          HalPutDmaAdapter(v101);
          return v106;
        case TokenProcessTrustLevel:
          v116 = 8;
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          v117 = KeGetCurrentThread();
          --v117->KernelApcDisable;
          v26 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v118 = v130[0];
          v119 = DestinationSid;
          v120 = (unsigned __int8 *)DestinationSid;
          if ( !v130[0] )
            v120 = *(unsigned __int8 **)&v26[69].Version;
          if ( v120 )
            v116 = 4 * v120[1] + 16;
          *v12 = v116;
          if ( TokenInformationLength < v116 )
          {
LABEL_26:
            ExReleaseResourceLite(*(PERESOURCE *)&v26[3].Version);
            KeLeaveCriticalRegion();
            v29 = v26;
            goto LABEL_246;
          }
          v121 = (char *)TokenInformation + 8;
          if ( !v120 )
            v121 = 0LL;
          *(_QWORD *)TokenInformation = v121;
          if ( v121 )
          {
            if ( !v118 )
              v119 = *(PSID *)&v26[69].Version;
            RtlCopySid(v116 - 8, v121, v119);
          }
LABEL_28:
          ExReleaseResourceLite(*(PERESOURCE *)&v26[3].Version);
          KeLeaveCriticalRegion();
          HalPutDmaAdapter(v26);
          return 0;
        case TokenSingletonAttributes:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result >= 0 )
          {
            KeEnterCriticalRegion();
            v122 = DmaAdapter;
            ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
            SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                                        (__int64)v122,
                                        v123,
                                        0LL,
                                        0,
                                        1,
                                        (__int64)TokenInformation,
                                        TokenInformationLength,
                                        (__int64)v12);
            v136 = SecurityAttributesToken;
            ExReleaseResourceLite(*(PERESOURCE *)&v122[3].Version);
            KeLeaveCriticalRegion();
            HalPutDmaAdapter(v122);
            return SecurityAttributesToken;
          }
          return result;
        case TokenBnoIsolation:
          result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
          if ( result < 0 )
            return result;
          KeEnterCriticalRegion();
          v101 = DmaAdapter;
          ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
          v125 = 16;
          v126 = *(_QWORD *)&v101[72].Version;
          if ( v126 )
            v125 = *(unsigned __int16 *)(v126 + 42) + 16;
          *v12 = v125;
          if ( TokenInformationLength < v125 )
          {
LABEL_188:
            ExReleaseResourceLite(*(PERESOURCE *)&v101[3].Version);
            KeLeaveCriticalRegion();
            v29 = v101;
            goto LABEL_246;
          }
          if ( *(_QWORD *)&v101[72].Version )
          {
            *((_BYTE *)TokenInformation + 8) = 1;
            *(_QWORD *)TokenInformation = (char *)TokenInformation + 16;
            memmove(
              (char *)TokenInformation + 16,
              *(const void **)(*(_QWORD *)&v101[72].Version + 48LL),
              *(unsigned __int16 *)(*(_QWORD *)&v101[72].Version + 42LL));
          }
          else
          {
            *((_BYTE *)TokenInformation + 8) = 0;
            *(_QWORD *)TokenInformation = 0LL;
          }
          ExReleaseResourceLite(*(PERESOURCE *)&v101[3].Version);
          KeLeaveCriticalRegion();
          HalPutDmaAdapter(v101);
          return 0;
        case TokenIsSandboxed:
          *v12 = 4;
          if ( TokenInformationLength < 4 )
            return -1073741789;
          *(_DWORD *)TokenInformation = (unsigned __int8)RtlIsSandboxedTokenHandle(TokenHandle);
          return 0;
        case TokenIsAppSilo:
          Feature_PPLEnforcement__private_ReportDeviceUsage();
          return -1073741821;
        default:
          return -1073741821;
      }
      goto LABEL_244;
    }
    result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &DmaAdapter, v130, &DestinationSid);
    if ( result < 0 )
      return result;
    *v12 = 4;
    if ( TokenInformationLength >= 4 )
    {
      v29 = DmaAdapter;
      *(_DWORD *)TokenInformation = *(_DWORD *)&DmaAdapter[12].Version;
LABEL_244:
      HalPutDmaAdapter(v29);
      return 0;
    }
LABEL_45:
    v29 = DmaAdapter;
  }
LABEL_246:
  HalPutDmaAdapter(v29);
  return -1073741789;
}
