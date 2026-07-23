/*
 * XREFs of NtSetInformationToken @ 0x140694530
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SepRemoveAceFromTokenDefaultDacl @ 0x140242534 (SepRemoveAceFromTokenDefaultDacl.c)
 *     SepLinkLogonSessions @ 0x1402438E4 (SepLinkLogonSessions.c)
 *     RtlEqualSid @ 0x14026A980 (RtlEqualSid.c)
 *     RtlSubAuthorityCountSid @ 0x14026D6B0 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x14026D6C0 (RtlSubAuthoritySid.c)
 *     SepLocateTokenIntegrity @ 0x14028587C (SepLocateTokenIntegrity.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402F50F0 (AuthzBasepSetSecurityAttributesToken.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     KeEnterCriticalRegion @ 0x14035BF60 (KeEnterCriticalRegion.c)
 *     Feature_RelaxTcbForUWP__private_ReportDeviceUsage @ 0x1403F8C0C (Feature_RelaxTcbForUWP__private_ReportDeviceUsage.c)
 *     memset @ 0x140414300 (memset.c)
 *     SepIdAssignableAsOwner @ 0x1405FBFDC (SepIdAssignableAsOwner.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140600E20 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepShouldSetDelinkFlags @ 0x14060E6EC (SepShouldSetDelinkFlags.c)
 *     SeSetMandatoryPolicyToken @ 0x140610854 (SeSetMandatoryPolicyToken.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x140611B50 (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     SepStopReferencingLogonSession @ 0x140612358 (SepStopReferencingLogonSession.c)
 *     SepAppendDefaultDacl @ 0x140615BE8 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x140615C48 (SepFreeDefaultDacl.c)
 *     SepExpandDynamic @ 0x140615C94 (SepExpandDynamic.c)
 *     SeSetSessionIdToken @ 0x140619180 (SeSetSessionIdToken.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14061B478 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSetVirtualizationToken @ 0x14061DD08 (SeSetVirtualizationToken.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1406980D0 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureAcl @ 0x1406CB390 (SeCaptureAcl.c)
 *     SeReleaseAcl @ 0x1406CB4CC (SeReleaseAcl.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406CCCC0 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x1406CDBCC (SeCaptureSid.c)
 *     SeReleaseSid @ 0x1406CDCD0 (SeReleaseSid.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1406FF29C (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceCachedHandlesEntry @ 0x1406FF3E0 (SepDereferenceCachedHandlesEntry.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     SeSetPrivateNameSpaceToken @ 0x14091C9C8 (SeSetPrivateNameSpaceToken.c)
 *     SepAppendPrimaryGroup @ 0x14091CC24 (SepAppendPrimaryGroup.c)
 *     SepFreePrimaryGroup @ 0x14091CC90 (SepFreePrimaryGroup.c)
 *     SepModifyTokenPolicyCounter @ 0x14091CCF0 (SepModifyTokenPolicyCounter.c)
 *     SepCaptureAuditPolicy @ 0x140920C54 (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x14092114C (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x140921228 (SepIdAssignableAsGroup.c)
 *     SepRemoveTokenLogonSession @ 0x140923D30 (SepRemoveTokenLogonSession.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  NTSTATUS v8; // edi
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v10; // rcx
  ACCESS_MASK v11; // edx
  NTSTATUS result; // eax
  char *v13; // rsi
  __int32 v14; // ebx
  __int32 v15; // ebx
  __int32 v16; // ebx
  __int32 v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  NTSTATUS v21; // ebx
  int v22; // eax
  _QWORD *v23; // rdx
  char v24; // bl
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  struct _ERESOURCE *v28; // rcx
  _QWORD *v29; // r8
  char *v30; // rbx
  _OWORD *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  int v34; // ebx
  struct _ERESOURCE **v35; // r15
  ULONG v36; // ebx
  void *v37; // rcx
  _QWORD *v38; // rbx
  unsigned int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // rdx
  void *v42; // rcx
  __int64 v43; // rcx
  ACL *v44; // r14
  __int64 v45; // rdx
  struct _DMA_ADAPTER *v46; // rcx
  unsigned int v47; // r12d
  _QWORD *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // r9
  unsigned int v53; // ebx
  PADAPTER_OBJECT v54; // rsi
  char v55; // al
  struct _DMA_ADAPTER *v56; // rbx
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // r9
  struct _DMA_ADAPTER *v60; // rbx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // r9
  int v64; // eax
  unsigned int v65; // eax
  __int32 v66; // ebx
  __int32 v67; // ebx
  __int32 v68; // ebx
  __int32 v69; // ebx
  int v70; // ebx
  int v71; // ebx
  ULONG v72; // ebx
  NTSTATUS v73; // r14d
  PVOID v74; // rbx
  bool v75; // r12
  int *v76; // rdx
  _DWORD *v77; // rbx
  _QWORD *v78; // rdx
  int v79; // eax
  unsigned int v80; // eax
  __int64 v81; // r13
  _WORD *v82; // rbx
  int v83; // ecx
  ULONG v84; // r12d
  char *v85; // rbx
  PSID *TokenIntegrity; // rax
  int v87; // r13d
  ULONG v88; // eax
  int v89; // edx
  ULONG v90; // eax
  int v91; // eax
  void *v92; // rcx
  void *v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rdx
  signed __int32 v96[8]; // [rsp+0h] [rbp-118h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-F0h]
  __int64 v99; // [rsp+30h] [rbp-E8h]
  PVOID Token; // [rsp+50h] [rbp-C8h] BYREF
  NTSTATUS v101; // [rsp+58h] [rbp-C0h]
  char v102; // [rsp+5Ch] [rbp-BCh]
  KPROCESSOR_MODE v103; // [rsp+5Dh] [rbp-BBh]
  unsigned int v104; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v106; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v107; // [rsp+70h] [rbp-A8h] BYREF
  PSID Sid1; // [rsp+78h] [rbp-A0h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-98h]
  PVOID P; // [rsp+88h] [rbp-90h] BYREF
  _OWORD *v111; // [rsp+90h] [rbp-88h] BYREF
  PSID Sid; // [rsp+98h] [rbp-80h]
  int v113; // [rsp+A0h] [rbp-78h] BYREF
  ULONG v114; // [rsp+A4h] [rbp-74h]
  ULONG v115; // [rsp+A8h] [rbp-70h] BYREF
  ULONG v116; // [rsp+ACh] [rbp-6Ch]
  __int64 v117; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v118; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v119; // [rsp+C0h] [rbp-58h] BYREF
  int v120; // [rsp+C8h] [rbp-50h]
  ULONG v121; // [rsp+CCh] [rbp-4Ch]
  ULONG v122; // [rsp+D0h] [rbp-48h]
  ULONG v123; // [rsp+D4h] [rbp-44h]
  int v124; // [rsp+D8h] [rbp-40h]
  void *v125; // [rsp+E0h] [rbp-38h]
  PSID *v126; // [rsp+E8h] [rbp-30h]
  void *v127; // [rsp+F0h] [rbp-28h]

  v8 = 0;
  v102 = 0;
  v104 = 0;
  v113 = 0;
  Sid1 = 0LL;
  v107 = 0LL;
  v106 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  LODWORD(v117) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v103 = PreviousMode;
  if ( PreviousMode && TokenInformationLength )
  {
    if ( ((unsigned __int8)TokenInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)TokenInformation + TokenInformationLength > 0x7FFFFFFF0000LL
      || (char *)TokenInformation + TokenInformationLength < TokenInformation )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( (unsigned int)TokenInformationClass > TokenChildProcessFlags )
    return -1073741821;
  v10 = 0x24800F8B5070LL;
  if ( !_bittest64(&v10, TokenInformationClass) )
    return -1073741821;
  v11 = 128;
  if ( TokenInformationClass == TokenSessionId )
  {
    v11 = 384;
  }
  else if ( TokenInformationClass == TokenLinkedToken )
  {
    v11 = 136;
  }
  Token = 0LL;
  result = ObReferenceObjectByHandle(TokenHandle, v11, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  v13 = (char *)Token;
  DmaAdapter = (PADAPTER_OBJECT)Token;
  if ( result >= 0 )
  {
    if ( TokenInformationClass <= TokenVirtualizationAllowed )
    {
      if ( TokenInformationClass != TokenVirtualizationAllowed )
      {
        v14 = TokenInformationClass - 4;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              v17 = v16 - 6;
              if ( v17 )
              {
                v18 = v17 - 2;
                if ( v18 )
                {
                  v19 = v18 - 2;
                  if ( v19 )
                  {
                    v20 = v19 - 1;
                    if ( v20 )
                    {
                      if ( v20 == 2 )
                      {
                        if ( TokenInformationLength != 8 )
                        {
LABEL_25:
                          v21 = -1073741820;
LABEL_93:
                          v46 = (struct _DMA_ADAPTER *)v13;
                          goto LABEL_94;
                        }
                        v127 = *(void **)TokenInformation;
                        v22 = SepLinkLogonSessions((__int64)Token, v127, PreviousMode);
LABEL_54:
                        v21 = v22;
                        goto LABEL_93;
                      }
                      return -1073741811;
                    }
                    if ( TokenInformationLength != 8 )
                      goto LABEL_25;
                    v125 = *(void **)TokenInformation;
                    if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                    {
                      KeEnterCriticalRegion();
                      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 6), 1u);
                      _InterlockedOr(v96, 0);
                      v23 = Token;
                      if ( !*((_QWORD *)Token + 28) )
                        *((_QWORD *)Token + 28) = v125;
LABEL_31:
                      v23[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                      _InterlockedOr(v96, 0);
                      ExReleaseResourceLite(*((PERESOURCE *)v13 + 6));
                      KeLeaveCriticalRegion();
                      v21 = 0;
LABEL_32:
                      v13 = (char *)Token;
                      goto LABEL_93;
                    }
                    goto LABEL_52;
                  }
                  v111 = 0LL;
                  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                    goto LABEL_52;
                  KeEnterCriticalRegion();
                  ExAcquireResourceSharedLite(*((PERESOURCE *)v13 + 6), 1u);
                  v24 = v13[119];
                  ExReleaseResourceLite(*((PERESOURCE *)v13 + 6));
                  KeLeaveCriticalRegion();
                  if ( !v24 )
                  {
                    if ( !TokenInformation )
                    {
                      KeEnterCriticalRegion();
                      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 6), 1u);
                      _InterlockedOr(v96, 0);
                      v13[119] = 1;
                      *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                      _InterlockedOr(v96, 0);
                      v28 = (struct _ERESOURCE *)*((_QWORD *)v13 + 6);
LABEL_48:
                      ExReleaseResourceLite(v28);
                      KeLeaveCriticalRegion();
                      v13 = (char *)Token;
                      goto LABEL_49;
                    }
                    LOBYTE(v25) = PreviousMode;
                    v21 = SepCaptureAuditPolicy(
                            (_DWORD)TokenInformation,
                            v25,
                            v26,
                            v27,
                            (_DWORD)Object,
                            (_DWORD)HandleInformation,
                            (__int64)&v111);
                    v101 = v21;
                    if ( v21 < 0 )
                      goto LABEL_93;
                    KeEnterCriticalRegion();
                    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 6), 1u);
                    _InterlockedOr(v96, 0);
                    v13[119] = 2;
                    v29 = Token;
                    v30 = (char *)Token + 88;
                    v31 = v111;
                    *(_OWORD *)((char *)Token + 88) = *v111;
                    *((_QWORD *)v30 + 2) = *((_QWORD *)v31 + 2);
                    *((_DWORD *)v30 + 6) = *((_DWORD *)v31 + 6);
                    *((_WORD *)v30 + 14) = *((_WORD *)v31 + 14);
                    v30[30] = *((_BYTE *)v31 + 30);
                    v29[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                    _InterlockedOr(v96, 0);
                    ExReleaseResourceLite(*((PERESOURCE *)v13 + 6));
                    KeLeaveCriticalRegion();
                    LOBYTE(v32) = 1;
                    SepModifyTokenPolicyCounter(v30, v32);
                    HalPutDmaAdapter((PADAPTER_OBJECT)Token);
                    LOBYTE(v33) = PreviousMode;
                    SepReleaseAuditPolicy(v111, v33);
                    return 0;
                  }
                }
                else
                {
                  if ( TokenInformationLength != 4 )
                    goto LABEL_25;
                  v34 = *(_DWORD *)TokenInformation;
                  v120 = *(_DWORD *)TokenInformation;
                  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                    goto LABEL_52;
                  if ( !v34 )
                  {
                    KeEnterCriticalRegion();
                    v35 = (struct _ERESOURCE **)(v13 + 48);
                    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 6), 1u);
                    _InterlockedOr(v96, 0);
                    v13 = (char *)Token;
                    if ( (*((_DWORD *)Token + 50) & 0x20) == 0 )
                    {
                      if ( SeTokenLeakTracking )
                        SepRemoveTokenLogonSession(Token);
                      v21 = SepStopReferencingLogonSession((__int64)v13);
                      v101 = v21;
                      if ( v21 < 0 )
                        goto LABEL_93;
                    }
                    _InterlockedOr(v96, 0);
                    v28 = *v35;
                    goto LABEL_48;
                  }
                }
                v21 = -1073741811;
                goto LABEL_93;
              }
              if ( TokenInformationLength == 4 )
              {
                v36 = *(_DWORD *)TokenInformation;
                v121 = *(_DWORD *)TokenInformation;
                if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                {
                  v22 = SeSetSessionIdToken(v13, v36);
                  goto LABEL_54;
                }
                goto LABEL_52;
              }
LABEL_91:
              HalPutDmaAdapter((PADAPTER_OBJECT)Token);
              return -1073741820;
            }
            if ( TokenInformationLength < 8 )
              goto LABEL_91;
            v37 = *(void **)TokenInformation;
            v106 = (__int64)v37;
            if ( v37 )
            {
              v21 = SeCaptureAcl(v37, PagedPool, (int)HandleInformation, (__int64)&v106, (__int64)&v104);
              v101 = v21;
            }
            else
            {
              v104 = 0;
              v21 = 0;
              v101 = 0;
            }
            if ( v21 < 0 )
              goto LABEL_93;
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 6), 1u);
            _InterlockedOr(v96, 0);
            v38 = Token;
            v39 = v104 + 8 + 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL);
            v104 = v39;
            if ( v39 <= *((_DWORD *)Token + 34) )
            {
              v101 = SepExpandDynamic((__int64)Token, v39);
              if ( v101 >= 0 )
              {
                v42 = (void *)v38[23];
                if ( !v42
                  || (v101 = SeCaptureAcl(v42, PagedPool, (int)HandleInformation, (__int64)&v118, (__int64)&v113),
                      v101 >= 0) )
                {
                  SepFreeDefaultDacl((__int64)v38);
                  v44 = (ACL *)v106;
                  if ( v106 )
                    SepAppendDefaultDacl((__int64)v38, (unsigned __int16 *)v106);
                  SeTokenDefaultDaclChangedAuditAlarm(v43, (__int64)v38, (__int64)TokenHandle, (ACL *)v118, v44);
                  v38[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v96, 0);
                  ExReleaseResourceLite(*((PERESOURCE *)v13 + 6));
                  KeLeaveCriticalRegion();
                  HalPutDmaAdapter((PADAPTER_OBJECT)Token);
                  if ( v106 )
                  {
                    LOBYTE(v45) = PreviousMode;
                    SeReleaseAcl(v106, v45);
                  }
                  if ( v118 )
                    SeReleaseAcl(v118, 0LL);
                  return 0;
                }
              }
              _InterlockedOr(v96, 0);
              ExReleaseResourceLite(*((PERESOURCE *)v13 + 6));
              KeLeaveCriticalRegion();
              HalPutDmaAdapter((PADAPTER_OBJECT)Token);
              if ( v106 )
              {
                LOBYTE(v41) = PreviousMode;
                SeReleaseAcl(v106, v41);
              }
              return v101;
            }
            else
            {
              _InterlockedOr(v96, 0);
              ExReleaseResourceLite(*((PERESOURCE *)v13 + 6));
              KeLeaveCriticalRegion();
              HalPutDmaAdapter((PADAPTER_OBJECT)Token);
              if ( v106 )
              {
                LOBYTE(v40) = PreviousMode;
                SeReleaseAcl(v106, v40);
              }
              return -1073741671;
            }
          }
          else
          {
            if ( TokenInformationLength < 8 )
              goto LABEL_91;
            v107 = *(_QWORD *)TokenInformation;
            v21 = SeCaptureSid((void *)v107, (int)Object, 1, (__int64)&v107);
            v101 = v21;
            v46 = (struct _DMA_ADAPTER *)v13;
            if ( v21 < 0 )
            {
LABEL_94:
              HalPutDmaAdapter(v46);
              return v21;
            }
            if ( (unsigned __int8)SepIdAssignableAsGroup(v13, v107) )
            {
              v47 = 4 * *(unsigned __int8 *)(v107 + 1) + 8;
              v104 = v47;
              KeEnterCriticalRegion();
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 6), 1u);
              _InterlockedOr(v96, 0);
              v48 = Token;
              v49 = *((_QWORD *)Token + 23);
              if ( v49 )
              {
                v47 += *(unsigned __int16 *)(v49 + 2);
                v104 = v47;
              }
              if ( v47 <= *((_DWORD *)Token + 34) )
              {
                v101 = SepExpandDynamic((__int64)Token, v104);
                if ( v101 >= 0 )
                {
                  SepFreePrimaryGroup(v48);
                  SepAppendPrimaryGroup(v48, v107);
                  v48[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v96, 0);
                  ExReleaseResourceLite(*((PERESOURCE *)v13 + 6));
                  KeLeaveCriticalRegion();
                }
                else
                {
                  _InterlockedOr(v96, 0);
                  ExReleaseResourceLite(*((PERESOURCE *)v13 + 6));
                  KeLeaveCriticalRegion();
                  v8 = v101;
                }
              }
              else
              {
                _InterlockedOr(v96, 0);
                ExReleaseResourceLite(*((PERESOURCE *)v13 + 6));
                KeLeaveCriticalRegion();
                v8 = -1073741671;
              }
              v13 = (char *)Token;
            }
            else
            {
              v8 = -1073741733;
            }
            HalPutDmaAdapter((PADAPTER_OBJECT)v13);
            LOBYTE(v50) = 1;
            LOBYTE(v51) = PreviousMode;
            SeReleaseSid(v107, v51, v50, v52);
            return v8;
          }
        }
        else
        {
          if ( TokenInformationLength < 8 )
            goto LABEL_91;
          Sid1 = *(PSID *)TokenInformation;
          v21 = SeCaptureSid(Sid1, (int)Object, 1, (__int64)&Sid1);
          v101 = v21;
          if ( v21 < 0 )
            goto LABEL_93;
          v53 = 0;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 6), 1u);
          _InterlockedOr(v96, 0);
          v54 = DmaAdapter;
          while ( 1 )
          {
            if ( v53 >= HIDWORD(v54[7].DmaOperations) )
            {
              _InterlockedOr(v96, 0);
              v60 = DmaAdapter;
              ExReleaseResourceLite(*(PERESOURCE *)&DmaAdapter[3].Version);
              KeLeaveCriticalRegion();
              HalPutDmaAdapter(v60);
              LOBYTE(v61) = 1;
              LOBYTE(v62) = PreviousMode;
              SeReleaseSid(Sid1, v62, v61, v63);
              return -1073741734;
            }
            if ( RtlEqualSid(Sid1, *((PSID *)&v54[9].DmaOperations->Size + 2 * v53)) )
              break;
            ++v53;
          }
          if ( SepIdAssignableAsOwner((__int64)v54, v53) )
          {
            *(_DWORD *)&v54[9].Version = v53;
            v55 = 1;
            v102 = 1;
            v101 = 0;
          }
          else
          {
            v101 = -1073741734;
            v55 = v102;
          }
          if ( v55 )
          {
            Sid = (PSID)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
            v54[3].DmaOperations = (_DMA_OPERATIONS *)Sid;
          }
          _InterlockedOr(v96, 0);
          v56 = DmaAdapter;
          ExReleaseResourceLite(*(PERESOURCE *)&DmaAdapter[3].Version);
          KeLeaveCriticalRegion();
          HalPutDmaAdapter(v56);
          LOBYTE(v57) = 1;
          LOBYTE(v58) = PreviousMode;
          SeReleaseSid(Sid1, v58, v57, v59);
          return v101;
        }
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_25;
      v114 = *(_DWORD *)TokenInformation;
      if ( SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 6), 1u);
        _InterlockedOr(v96, 0);
        v23 = Token;
        v64 = *((_DWORD *)Token + 50);
        if ( v114 )
          v65 = v64 | 0x200;
        else
          v65 = v64 & 0xFFFFFDFF;
        *((_DWORD *)Token + 50) = v65;
        goto LABEL_31;
      }
LABEL_52:
      v21 = -1073741727;
      goto LABEL_93;
    }
    v66 = TokenInformationClass - 24;
    if ( !v66 )
    {
      if ( TokenInformationLength != 4 )
        goto LABEL_25;
      v124 = *(_DWORD *)TokenInformation;
      SeSetVirtualizationToken((__int64)Token, v124);
LABEL_49:
      v21 = 0;
      goto LABEL_93;
    }
    v67 = v66 - 1;
    if ( v67 )
    {
      v68 = v67 - 1;
      if ( !v68 )
      {
        if ( TokenInformationLength != 4 )
          goto LABEL_25;
        v116 = *(_DWORD *)TokenInformation;
        if ( !v116 || SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 6), 1u);
          _InterlockedOr(v96, 0);
          v78 = Token;
          v79 = *((_DWORD *)Token + 50);
          if ( v116 )
            v80 = v79 | 0x1000;
          else
            v80 = v79 & 0xFFFFEFFF;
          *((_DWORD *)Token + 50) = v80;
          v78[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          _InterlockedOr(v96, 0);
          ExReleaseResourceLite(*((PERESOURCE *)v13 + 6));
          KeLeaveCriticalRegion();
          v21 = 0;
          goto LABEL_32;
        }
        goto LABEL_52;
      }
      v69 = v68 - 1;
      if ( !v69 )
      {
        if ( TokenInformationLength != 4 )
          goto LABEL_25;
        v115 = *(_DWORD *)TokenInformation;
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          if ( v13[204] )
          {
            v21 = -1073741525;
            goto LABEL_93;
          }
          v22 = SeSetMandatoryPolicyToken((__int64)v13, &v115);
          goto LABEL_54;
        }
        goto LABEL_52;
      }
      v70 = v69 - 12;
      if ( !v70 )
      {
        P = 0LL;
        if ( !TokenInformation || TokenInformationLength < 0x10 )
          goto LABEL_25;
        v73 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, PreviousMode, &P);
        if ( v73 >= 0 )
        {
          Feature_RelaxTcbForUWP__private_ReportDeviceUsage();
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            v73 = -1073741727;
          v101 = v73;
          if ( v73 >= 0 )
          {
            v74 = P;
            v75 = SepShouldSetDelinkFlags(*((_DWORD **)P + 1), *(_QWORD *)P) != 0;
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 6), 1u);
            _InterlockedOr(v96, 0);
            v76 = (int *)*((_QWORD *)v74 + 1);
            v77 = Token;
            v101 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)Token + 97), v76, *(_QWORD *)P);
            if ( v101 >= 0 && v75 )
              v77[50] |= 0x20000u;
            *((_QWORD *)v77 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v96, 0);
            ExReleaseResourceLite(*((PERESOURCE *)v13 + 6));
            KeLeaveCriticalRegion();
            SepReleaseTokenSecurityAttributesAndOperationsInformation((PVOID *)P, PreviousMode);
            v21 = v101;
            goto LABEL_32;
          }
          SepReleaseTokenSecurityAttributesAndOperationsInformation((PVOID *)P, PreviousMode);
        }
        v21 = v73;
        goto LABEL_93;
      }
      v71 = v70 - 3;
      if ( !v71 )
      {
        if ( TokenInformationLength != 4 )
          goto LABEL_25;
        v72 = *(_DWORD *)TokenInformation;
        v123 = *(_DWORD *)TokenInformation;
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          v22 = SeSetPrivateNameSpaceToken(v13, v72);
          goto LABEL_54;
        }
        goto LABEL_52;
      }
      if ( v71 != 3 )
        return -1073741811;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        if ( TokenInformationLength != 4 )
          goto LABEL_25;
        v122 = *(_DWORD *)TokenInformation;
        if ( !v122 && (*((_DWORD *)v13 + 50) & 0x80000) != 0 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 6), 1u);
          _InterlockedOr(v96, 0);
          *((_DWORD *)v13 + 50) &= ~0x80000u;
          *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          _InterlockedOr(v96, 0);
          ExReleaseResourceLite(*((PERESOURCE *)v13 + 6));
          KeLeaveCriticalRegion();
          v13 = (char *)Token;
        }
        HalPutDmaAdapter((PADAPTER_OBJECT)v13);
        return 0;
      }
      goto LABEL_52;
    }
    if ( TokenInformationLength < 0x10 )
      goto LABEL_25;
    v22 = SeCaptureSidAndAttributesArray(
            TokenInformation,
            0,
            (int)HandleInformation,
            v99,
            (__int64)&v119,
            (__int64)&v117);
    v101 = v22;
    if ( v22 < 0 )
      goto LABEL_54;
    v81 = v119;
    v82 = *(_WORD **)v119;
    if ( *(_DWORD *)(*(_QWORD *)v119 + 2LL) == *(_DWORD *)((char *)SeUntrustedMandatorySid + 2)
      && v82[3] == *((_WORD *)SeUntrustedMandatorySid + 3) )
    {
      v83 = *RtlSubAuthorityCountSid(*(PSID *)v119);
      if ( !(_BYTE)v83 )
      {
        v84 = 0;
        goto LABEL_161;
      }
      v84 = *RtlSubAuthoritySid(v82, v83 - 1);
      if ( v84 <= 0x4000 )
      {
LABEL_161:
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 6), 1u);
        _InterlockedOr(v96, 0);
        v85 = (char *)Token;
        TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)Token);
        v126 = TokenIntegrity;
        if ( !TokenIntegrity )
        {
          v21 = -1073740730;
LABEL_193:
          _InterlockedOr(v96, 0);
          ExReleaseResourceLite(*((PERESOURCE *)v13 + 6));
          KeLeaveCriticalRegion();
          HalPutDmaAdapter((PADAPTER_OBJECT)Token);
          LOBYTE(v94) = PreviousMode;
          SeReleaseLuidAndAttributesArray(v119, v94);
          return v21;
        }
        Sid = *TokenIntegrity;
        v87 = *RtlSubAuthorityCountSid(Sid);
        if ( (_BYTE)v87 )
        {
          v88 = *RtlSubAuthoritySid(Sid, v87 - 1);
          v89 = v87;
        }
        else
        {
          v88 = 0;
          v89 = 0;
        }
        if ( v84 <= v88 )
        {
          if ( (_BYTE)v87 )
            v90 = *RtlSubAuthoritySid(Sid, v89 - 1);
          else
            v90 = 0;
          if ( v84 < v90 )
            *((_DWORD *)v85 + 50) &= ~0x1000u;
        }
        else
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            v21 = -1073741727;
            goto LABEL_193;
          }
          if ( v85[204] )
          {
            v21 = -1073741525;
            goto LABEL_193;
          }
        }
        v91 = *((unsigned __int8 *)*v126 + 1);
        if ( (_BYTE)v91 )
        {
          *RtlSubAuthoritySid(*v126, v91 - 1) = v84;
          if ( v84 < 0x3000 )
          {
            *((_QWORD *)v85 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
            *((_QWORD *)v85 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
          }
          if ( v84 >= 0x2000 )
          {
            if ( (*((_DWORD *)v85 + 50) & 0x4000) != 0 )
            {
              SepRemoveAceFromTokenDefaultDacl((__int64)v85, *((_QWORD *)v85 + 98));
              *((_DWORD *)v85 + 50) &= ~0x4000u;
              v92 = (void *)*((_QWORD *)v85 + 98);
              if ( v92 )
              {
                ExFreePoolWithTag(v92, 0);
                *((_QWORD *)v85 + 98) = 0LL;
              }
              v93 = (void *)*((_QWORD *)v85 + 99);
              if ( v93 )
              {
                ExFreePoolWithTag(v93, 0);
                *((_QWORD *)v85 + 99) = 0LL;
                *((_DWORD *)v85 + 200) = 0;
                memset(v85 + 808, 0, 0x110uLL);
              }
              if ( *((_QWORD *)v85 + 135) )
              {
                SepDereferenceLowBoxNumberEntry(*((unsigned int *)v85 + 30));
                *((_QWORD *)v85 + 135) = 0LL;
              }
              if ( *((_QWORD *)v85 + 136) )
              {
                SepDereferenceCachedHandlesEntry(*((_QWORD *)v85 + 27));
                *((_QWORD *)v85 + 136) = 0LL;
              }
            }
            *((_DWORD *)v85 + 50) |= 0x2000u;
          }
          else
          {
            *((_QWORD *)v85 + 9) &= 0x202800000uLL;
            *((_QWORD *)v85 + 10) &= 0x202800000uLL;
            *((_DWORD *)v85 + 50) &= ~0x2000u;
          }
          *((_QWORD *)v85 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          v21 = 0;
        }
        else
        {
          v21 = -1073741811;
        }
        goto LABEL_193;
      }
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v13);
    LOBYTE(v95) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v81, v95);
    return -1073740730;
  }
  return result;
}
