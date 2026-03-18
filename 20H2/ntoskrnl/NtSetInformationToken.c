/*
 * XREFs of NtSetInformationToken @ 0x1406AB220
 * Callers:
 *     <none>
 * Callees:
 *     SepLocateTokenIntegrity @ 0x14020F958 (SepLocateTokenIntegrity.c)
 *     RtlEqualSid @ 0x140210C40 (RtlEqualSid.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402E2490 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepLinkLogonSessions @ 0x1402FB3D4 (SepLinkLogonSessions.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402FD704 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     SepRemoveAceFromTokenDefaultDacl @ 0x140322F44 (SepRemoveAceFromTokenDefaultDacl.c)
 *     RtlSubAuthorityCountSid @ 0x140340E40 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x140340E50 (RtlSubAuthoritySid.c)
 *     memset @ 0x140411300 (memset.c)
 *     SeCaptureSid @ 0x1405E5438 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x1405E553C (SeReleaseSid.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1406311E0 (SeReleaseLuidAndAttributesArray.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14068D15C (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceCachedHandlesEntry @ 0x14068D2A0 (SepDereferenceCachedHandlesEntry.c)
 *     SeSetSessionIdToken @ 0x1406A8CE8 (SeSetSessionIdToken.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406A99F0 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureAcl @ 0x1406AA12C (SeCaptureAcl.c)
 *     SeReleaseAcl @ 0x1406AA268 (SeReleaseAcl.c)
 *     SepStopReferencingLogonSession @ 0x1406AA888 (SepStopReferencingLogonSession.c)
 *     SeSetMandatoryPolicyToken @ 0x1406AA8C8 (SeSetMandatoryPolicyToken.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1406AA960 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepShouldSetDelinkFlags @ 0x1406AB0C4 (SepShouldSetDelinkFlags.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x1406AB124 (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     SepIdAssignableAsOwner @ 0x1406C1E3C (SepIdAssignableAsOwner.c)
 *     SepAppendDefaultDacl @ 0x1406D7CA8 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x1406D7D08 (SepFreeDefaultDacl.c)
 *     SepExpandDynamic @ 0x1406D7D54 (SepExpandDynamic.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1406DC5F8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSetVirtualizationToken @ 0x1406DED9C (SeSetVirtualizationToken.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     SeSetPrivateNameSpaceToken @ 0x14091F0A8 (SeSetPrivateNameSpaceToken.c)
 *     SepAppendPrimaryGroup @ 0x14091F304 (SepAppendPrimaryGroup.c)
 *     SepFreePrimaryGroup @ 0x14091F370 (SepFreePrimaryGroup.c)
 *     SepModifyTokenPolicyCounter @ 0x14091F3D0 (SepModifyTokenPolicyCounter.c)
 *     SepCaptureAuditPolicy @ 0x140923334 (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x140923824 (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x140923900 (SepIdAssignableAsGroup.c)
 *     SepRemoveTokenLogonSession @ 0x140926400 (SepRemoveTokenLogonSession.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  NTSTATUS v8; // edi
  char PreviousMode; // r15
  __int64 v10; // rcx
  ACCESS_MASK v11; // edx
  NTSTATUS result; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  PVOID v15; // rsi
  __int32 v16; // ebx
  __int32 v17; // ebx
  __int32 v18; // ebx
  __int32 v19; // ebx
  int v20; // ebx
  NTSTATUS v21; // r14d
  PVOID v22; // rbx
  bool v23; // si
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v25; // r13
  int *v26; // rdx
  _DWORD *v27; // rbx
  NTSTATUS v28; // ebx
  __int32 v29; // ebx
  __int32 v30; // ebx
  __int32 v31; // ebx
  __int32 v32; // ebx
  int v33; // ebx
  int v34; // ebx
  struct _KTHREAD *v35; // rax
  char v36; // bl
  int v37; // edx
  int v38; // r8d
  int v39; // r9d
  struct _KTHREAD *v40; // rax
  struct _ERESOURCE *v41; // rcx
  struct _DMA_ADAPTER *v42; // rcx
  int v43; // eax
  ULONG v44; // ebx
  struct _KTHREAD *v45; // rax
  PVOID v46; // r15
  void *v47; // r13
  unsigned __int16 *v48; // rbx
  int v49; // edx
  int v50; // ecx
  ULONG v51; // r12d
  struct _KTHREAD *v52; // rax
  char *v53; // rbx
  PSID *TokenIntegrity; // rax
  PSID *v55; // rsi
  PSID v56; // r13
  int v57; // ecx
  ULONG v58; // eax
  int v59; // eax
  void *v60; // rcx
  void *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rdx
  ULONG v64; // ebx
  char *v65; // rcx
  struct _KTHREAD *v66; // rax
  PERESOURCE *v67; // rsi
  PVOID v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  char *v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // r14
  int v75; // ebx
  struct _KTHREAD *v76; // rax
  PERESOURCE *v77; // rbx
  _QWORD *v78; // rdx
  struct _KTHREAD *v79; // rax
  int v80; // eax
  unsigned int v81; // eax
  unsigned int v82; // ebx
  struct _KTHREAD *v83; // rax
  PADAPTER_OBJECT v84; // rsi
  char v85; // al
  struct _DMA_ADAPTER *v86; // rbx
  struct _KTHREAD *v87; // rax
  PERESOURCE *v88; // rbx
  _QWORD *v89; // rdx
  int v90; // eax
  unsigned int v91; // eax
  struct _KTHREAD *v92; // rax
  _QWORD *v93; // r8
  char *v94; // rbx
  _OWORD *v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rdx
  unsigned int v98; // esi
  struct _KTHREAD *v99; // rax
  PERESOURCE *v100; // r13
  _QWORD *v101; // rbx
  __int64 v102; // rax
  struct _DMA_ADAPTER *v103; // rbx
  int v104; // ebx
  struct _KTHREAD *v105; // rax
  PERESOURCE *v106; // rbx
  ULONG v107; // ebx
  signed __int32 v108[8]; // [rsp+0h] [rbp-108h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-E8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-E0h]
  __int64 v111; // [rsp+30h] [rbp-D8h]
  PVOID Token; // [rsp+50h] [rbp-B8h] BYREF
  NTSTATUS v113; // [rsp+58h] [rbp-B0h]
  char v114; // [rsp+5Ch] [rbp-ACh]
  char v115; // [rsp+5Dh] [rbp-ABh]
  unsigned int v116; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v118; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v119; // [rsp+70h] [rbp-98h] BYREF
  PSID Sid1; // [rsp+78h] [rbp-90h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-88h]
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  _OWORD *v123; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v124; // [rsp+98h] [rbp-70h] BYREF
  ULONG v125; // [rsp+9Ch] [rbp-6Ch]
  ULONG v126; // [rsp+A0h] [rbp-68h] BYREF
  ULONG v127; // [rsp+A4h] [rbp-64h]
  __int64 v128; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v129; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v130; // [rsp+B8h] [rbp-50h] BYREF
  PERESOURCE *v131; // [rsp+C0h] [rbp-48h]
  ULONG v132; // [rsp+C8h] [rbp-40h]
  ULONG v133; // [rsp+CCh] [rbp-3Ch]
  ULONG v134; // [rsp+D0h] [rbp-38h]
  ULONG v135; // [rsp+D4h] [rbp-34h]
  ULONG v136; // [rsp+D8h] [rbp-30h]
  __int64 v137; // [rsp+E0h] [rbp-28h]
  void *v138; // [rsp+E8h] [rbp-20h]

  v8 = 0;
  v114 = 0;
  v116 = 0;
  v124 = 0;
  Sid1 = 0LL;
  v119 = 0LL;
  v118 = 0LL;
  v129 = 0LL;
  v130 = 0LL;
  LODWORD(v128) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v115 = PreviousMode;
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
  v15 = Token;
  DmaAdapter = (PADAPTER_OBJECT)Token;
  if ( result >= 0 )
  {
    if ( TokenInformationClass > TokenVirtualizationAllowed )
    {
      v16 = TokenInformationClass - 24;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 12;
              if ( !v20 )
              {
                P = 0LL;
                if ( TokenInformation && TokenInformationLength >= 0x10 )
                {
                  v21 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, PreviousMode, &P);
                  if ( v21 >= 0 )
                  {
                    wil_details_FeatureReporting_ReportUsageToService(
                      (int)&Feature_RelaxTcbForUWP__private_reporting,
                      0xFC13FCu,
                      0,
                      0,
                      (__int64)&Feature_PdttSupport_logged_traits,
                      0,
                      v111);
                    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                      v21 = -1073741727;
                    v113 = v21;
                    if ( v21 >= 0 )
                    {
                      v22 = P;
                      v23 = SepShouldSetDelinkFlags(*((_DWORD **)P + 1), *(_QWORD *)P) != 0;
                      CurrentThread = KeGetCurrentThread();
                      --CurrentThread->KernelApcDisable;
                      v25 = (PERESOURCE *)Token;
                      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                      _InterlockedOr(v108, 0);
                      v26 = (int *)*((_QWORD *)v22 + 1);
                      v27 = Token;
                      v113 = AuthzBasepSetSecurityAttributesToken(*((_DWORD **)Token + 97), v26, *(_QWORD *)P);
                      if ( v113 >= 0 && v23 )
                        v27[50] |= 0x20000u;
                      *((_QWORD *)v27 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                      _InterlockedOr(v108, 0);
                      ExReleaseResourceLite(v25[6]);
                      KeLeaveCriticalRegion();
                      SepReleaseTokenSecurityAttributesAndOperationsInformation((PVOID *)P, PreviousMode);
                      v28 = v113;
                      goto LABEL_28;
                    }
                    SepReleaseTokenSecurityAttributesAndOperationsInformation((PVOID *)P, PreviousMode);
                  }
                  v28 = v21;
                  goto LABEL_42;
                }
LABEL_146:
                v28 = -1073741820;
                goto LABEL_42;
              }
              v104 = v20 - 3;
              if ( v104 )
              {
                if ( v104 == 3 )
                {
                  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                  {
                    if ( TokenInformationLength != 4 )
                      goto LABEL_146;
                    v134 = *(_DWORD *)TokenInformation;
                    if ( !v134 && (*((_DWORD *)v15 + 50) & 0x80000) != 0 )
                    {
                      v105 = KeGetCurrentThread();
                      --v105->KernelApcDisable;
                      v106 = (PERESOURCE *)Token;
                      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                      _InterlockedOr(v108, 0);
                      *((_DWORD *)v15 + 50) &= ~0x80000u;
                      *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                      _InterlockedOr(v108, 0);
                      ExReleaseResourceLite(v106[6]);
                      KeLeaveCriticalRegion();
                      v15 = Token;
                    }
                    HalPutDmaAdapter((PADAPTER_OBJECT)v15);
                    return 0;
                  }
LABEL_150:
                  v28 = -1073741727;
                  goto LABEL_42;
                }
                return -1073741811;
              }
              if ( TokenInformationLength != 4 )
                goto LABEL_146;
              v107 = *(_DWORD *)TokenInformation;
              v135 = *(_DWORD *)TokenInformation;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_150;
              v43 = SeSetPrivateNameSpaceToken(v15, v107);
            }
            else
            {
              if ( TokenInformationLength != 4 )
                goto LABEL_146;
              v126 = *(_DWORD *)TokenInformation;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_150;
              if ( *((_BYTE *)v15 + 204) )
              {
                v28 = -1073741525;
                goto LABEL_42;
              }
              v43 = SeSetMandatoryPolicyToken((__int64)v15, &v126);
            }
LABEL_50:
            v28 = v43;
            goto LABEL_42;
          }
          if ( TokenInformationLength != 4 )
            goto LABEL_146;
          v127 = *(_DWORD *)TokenInformation;
          if ( v127 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_150;
          v87 = KeGetCurrentThread();
          --v87->KernelApcDisable;
          v88 = (PERESOURCE *)Token;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v108, 0);
          v89 = Token;
          v90 = *((_DWORD *)Token + 50);
          if ( v127 )
            v91 = v90 | 0x1000;
          else
            v91 = v90 & 0xFFFFEFFF;
          *((_DWORD *)Token + 50) = v91;
          v89[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          _InterlockedOr(v108, 0);
          ExReleaseResourceLite(v88[6]);
          KeLeaveCriticalRegion();
          v28 = 0;
LABEL_28:
          v15 = Token;
LABEL_42:
          v42 = (struct _DMA_ADAPTER *)v15;
LABEL_43:
          HalPutDmaAdapter(v42);
          return v28;
        }
        if ( TokenInformationLength < 0x10 )
          goto LABEL_146;
        v43 = SeCaptureSidAndAttributesArray(
                (char *)TokenInformation,
                1u,
                PreviousMode,
                0LL,
                0,
                (int)HandleInformation,
                v111,
                (PVOID *)&v130,
                (unsigned int *)&v128);
        v113 = v43;
        if ( v43 < 0 )
          goto LABEL_50;
        v47 = (void *)v130;
        v48 = *(unsigned __int16 **)v130;
        v49 = *(_DWORD *)(*(_QWORD *)v130 + 2LL) - *(_DWORD *)((char *)SeUntrustedMandatorySid + 2);
        if ( !v49 )
          v49 = v48[3] - *((unsigned __int16 *)SeUntrustedMandatorySid + 3);
        if ( !v49 )
        {
          v50 = *RtlSubAuthorityCountSid(*(PSID *)v130);
          if ( !(_BYTE)v50 )
          {
            v51 = 0;
LABEL_68:
            v52 = KeGetCurrentThread();
            --v52->KernelApcDisable;
            v131 = (PERESOURCE *)Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v108, 0);
            v53 = (char *)Token;
            TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)Token);
            v55 = TokenIntegrity;
            if ( TokenIntegrity )
            {
              v56 = *TokenIntegrity;
              v57 = *RtlSubAuthorityCountSid(*TokenIntegrity);
              if ( (_BYTE)v57 )
                v58 = *RtlSubAuthoritySid(v56, v57 - 1);
              else
                v58 = 0;
              if ( v51 <= v58 )
              {
LABEL_74:
                v59 = *((unsigned __int8 *)*v55 + 1);
                if ( (_BYTE)v59 )
                {
                  *RtlSubAuthoritySid(*v55, v59 - 1) = v51;
                  if ( v51 < 0x3000 )
                  {
                    *((_QWORD *)v53 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
                    *((_QWORD *)v53 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
                  }
                  if ( v51 < 0x2000 )
                  {
                    *((_QWORD *)v53 + 9) &= 0x202800000uLL;
                    *((_QWORD *)v53 + 10) &= 0x202800000uLL;
                    *((_DWORD *)v53 + 50) &= ~0x2000u;
                  }
                  else
                  {
                    if ( (*((_DWORD *)v53 + 50) & 0x4000) != 0 )
                    {
                      SepRemoveAceFromTokenDefaultDacl((__int64)v53, *((_WORD **)v53 + 98));
                      *((_DWORD *)v53 + 50) &= ~0x4000u;
                      v60 = (void *)*((_QWORD *)v53 + 98);
                      if ( v60 )
                      {
                        ExFreePoolWithTag(v60, 0);
                        *((_QWORD *)v53 + 98) = 0LL;
                      }
                      v61 = (void *)*((_QWORD *)v53 + 99);
                      if ( v61 )
                      {
                        ExFreePoolWithTag(v61, 0);
                        *((_QWORD *)v53 + 99) = 0LL;
                        *((_DWORD *)v53 + 200) = 0;
                        memset(v53 + 808, 0, 0x110uLL);
                      }
                      v62 = *((_QWORD *)v53 + 135);
                      if ( v62 )
                      {
                        SepDereferenceLowBoxNumberEntry(*((_DWORD *)v53 + 30), v62);
                        *((_QWORD *)v53 + 135) = 0LL;
                      }
                      v63 = *((_QWORD *)v53 + 136);
                      if ( v63 )
                      {
                        SepDereferenceCachedHandlesEntry(*((_QWORD *)v53 + 27), v63);
                        *((_QWORD *)v53 + 136) = 0LL;
                      }
                    }
                    *((_DWORD *)v53 + 50) |= 0x2000u;
                  }
                  *((_QWORD *)v53 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  v28 = 0;
                }
                else
                {
                  v28 = -1073741811;
                }
                goto LABEL_89;
              }
              if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              {
                if ( !v53[204] )
                  goto LABEL_74;
                v28 = -1073741525;
              }
              else
              {
                v28 = -1073741727;
              }
            }
            else
            {
              v28 = -1073740730;
            }
LABEL_89:
            _InterlockedOr(v108, 0);
            ExReleaseResourceLite(v131[6]);
            KeLeaveCriticalRegion();
            HalPutDmaAdapter((PADAPTER_OBJECT)Token);
            SeReleaseLuidAndAttributesArray((void *)v130, PreviousMode);
            return v28;
          }
          v51 = *RtlSubAuthoritySid(v48, v50 - 1);
          if ( v51 <= 0x4000 )
            goto LABEL_68;
        }
        HalPutDmaAdapter((PADAPTER_OBJECT)v15);
        SeReleaseLuidAndAttributesArray(v47, PreviousMode);
        return -1073740730;
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_146;
      v136 = *(_DWORD *)TokenInformation;
      SeSetVirtualizationToken(Token, v136);
LABEL_41:
      v28 = 0;
      goto LABEL_42;
    }
    if ( TokenInformationClass == TokenVirtualizationAllowed )
    {
      if ( TokenInformationLength != 4 )
        goto LABEL_146;
      v125 = *(_DWORD *)TokenInformation;
      if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
        goto LABEL_150;
      v79 = KeGetCurrentThread();
      --v79->KernelApcDisable;
      v77 = (PERESOURCE *)Token;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v108, 0);
      v78 = Token;
      v80 = *((_DWORD *)Token + 50);
      if ( v125 )
        v81 = v80 | 0x200;
      else
        v81 = v80 & 0xFFFFFDFF;
      *((_DWORD *)Token + 50) = v81;
      goto LABEL_115;
    }
    v29 = TokenInformationClass - 4;
    if ( v29 )
    {
      v30 = v29 - 1;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( v31 )
        {
          v32 = v31 - 6;
          if ( v32 )
          {
            v33 = v32 - 2;
            if ( !v33 )
            {
              if ( TokenInformationLength != 4 )
                goto LABEL_146;
              v44 = *(_DWORD *)TokenInformation;
              v132 = *(_DWORD *)TokenInformation;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_150;
              if ( !v44 )
              {
                v45 = KeGetCurrentThread();
                --v45->KernelApcDisable;
                v46 = Token;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                _InterlockedOr(v108, 0);
                v15 = Token;
                if ( (*((_DWORD *)Token + 50) & 0x20) == 0 )
                {
                  if ( SeTokenLeakTracking )
                    SepRemoveTokenLogonSession(Token);
                  v28 = SepStopReferencingLogonSession((__int64)v15);
                  v113 = v28;
                  if ( v28 < 0 )
                    goto LABEL_42;
                }
                _InterlockedOr(v108, 0);
                v41 = (struct _ERESOURCE *)*((_QWORD *)v46 + 6);
LABEL_40:
                ExReleaseResourceLite(v41);
                KeLeaveCriticalRegion();
                v15 = Token;
                goto LABEL_41;
              }
LABEL_149:
              v28 = -1073741811;
              goto LABEL_42;
            }
            v34 = v33 - 2;
            if ( !v34 )
            {
              v123 = 0LL;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_150;
              v35 = KeGetCurrentThread();
              --v35->KernelApcDisable;
              v15 = Token;
              ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
              v36 = *((_BYTE *)v15 + 118);
              ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
              KeLeaveCriticalRegion();
              if ( !v36 )
              {
                if ( TokenInformation )
                {
                  LOBYTE(v37) = PreviousMode;
                  v28 = SepCaptureAuditPolicy(
                          (_DWORD)TokenInformation,
                          v37,
                          v38,
                          v39,
                          (_DWORD)Object,
                          (_DWORD)HandleInformation,
                          (__int64)&v123);
                  v113 = v28;
                  if ( v28 < 0 )
                    goto LABEL_42;
                  v92 = KeGetCurrentThread();
                  --v92->KernelApcDisable;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
                  _InterlockedOr(v108, 0);
                  *((_BYTE *)v15 + 118) = 2;
                  v93 = Token;
                  v94 = (char *)Token + 88;
                  v95 = v123;
                  *(_OWORD *)((char *)Token + 88) = *v123;
                  *((_QWORD *)v94 + 2) = *((_QWORD *)v95 + 2);
                  *((_DWORD *)v94 + 6) = *((_DWORD *)v95 + 6);
                  *((_WORD *)v94 + 14) = *((_WORD *)v95 + 14);
                  v93[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v108, 0);
                  ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                  KeLeaveCriticalRegion();
                  LOBYTE(v96) = 1;
                  SepModifyTokenPolicyCounter(v94, v96);
                  HalPutDmaAdapter((PADAPTER_OBJECT)Token);
                  LOBYTE(v97) = PreviousMode;
                  SepReleaseAuditPolicy(v123, v97);
                  return 0;
                }
                v40 = KeGetCurrentThread();
                --v40->KernelApcDisable;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
                _InterlockedOr(v108, 0);
                *((_BYTE *)v15 + 118) = 1;
                *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v108, 0);
                v41 = (struct _ERESOURCE *)*((_QWORD *)v15 + 6);
                goto LABEL_40;
              }
              goto LABEL_149;
            }
            v75 = v34 - 1;
            if ( v75 )
            {
              if ( v75 != 2 )
                return -1073741811;
              if ( TokenInformationLength != 8 )
                goto LABEL_146;
              v138 = *(void **)TokenInformation;
              v43 = SepLinkLogonSessions((__int64)Token, v138, PreviousMode);
              goto LABEL_50;
            }
            if ( TokenInformationLength != 8 )
              goto LABEL_146;
            v137 = *(_QWORD *)TokenInformation;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_150;
            v76 = KeGetCurrentThread();
            --v76->KernelApcDisable;
            v77 = (PERESOURCE *)Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v108, 0);
            v78 = Token;
            if ( !*((_QWORD *)Token + 28) )
              *((_QWORD *)Token + 28) = v137;
LABEL_115:
            v78[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v108, 0);
            ExReleaseResourceLite(v77[6]);
            KeLeaveCriticalRegion();
            v28 = 0;
            goto LABEL_28;
          }
          if ( TokenInformationLength == 4 )
          {
            v64 = *(_DWORD *)TokenInformation;
            v133 = *(_DWORD *)TokenInformation;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_150;
            v43 = SeSetSessionIdToken(v15, v64);
            goto LABEL_50;
          }
LABEL_170:
          HalPutDmaAdapter((PADAPTER_OBJECT)Token);
          return -1073741820;
        }
        if ( TokenInformationLength < 8 )
          goto LABEL_170;
        v65 = *(char **)TokenInformation;
        v118 = (__int64)v65;
        if ( v65 )
        {
          v28 = SeCaptureAcl(v65, PreviousMode, v13, v14, PagedPool, (int)HandleInformation, (PVOID *)&v118, &v116);
          v113 = v28;
        }
        else
        {
          v116 = 0;
          v28 = 0;
          v113 = 0;
        }
        if ( v28 < 0 )
          goto LABEL_42;
        v66 = KeGetCurrentThread();
        --v66->KernelApcDisable;
        v67 = (PERESOURCE *)Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v108, 0);
        v68 = Token;
        v69 = v116 + 8 + 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL);
        v116 = v69;
        if ( (unsigned int)v69 > *((_DWORD *)Token + 34) )
        {
          _InterlockedOr(v108, 0);
          ExReleaseResourceLite(v67[6]);
          KeLeaveCriticalRegion();
          HalPutDmaAdapter((PADAPTER_OBJECT)Token);
          if ( v118 )
            SeReleaseAcl((void *)v118, PreviousMode);
          return -1073741671;
        }
        else
        {
          v113 = SepExpandDynamic(Token, v69);
          if ( v113 >= 0 )
          {
            v72 = (char *)*((_QWORD *)v68 + 23);
            if ( !v72
              || (v113 = SeCaptureAcl(v72, 0, v70, v71, PagedPool, (int)HandleInformation, (PVOID *)&v129, &v124),
                  v113 >= 0) )
            {
              SepFreeDefaultDacl(v68);
              v74 = v118;
              if ( v118 )
                SepAppendDefaultDacl(v68, v118);
              SeTokenDefaultDaclChangedAuditAlarm(v73, v68, TokenHandle, v129, v74);
              *((_QWORD *)v68 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v108, 0);
              ExReleaseResourceLite(v67[6]);
              KeLeaveCriticalRegion();
              HalPutDmaAdapter((PADAPTER_OBJECT)Token);
              if ( v118 )
                SeReleaseAcl((void *)v118, PreviousMode);
              if ( v129 )
                SeReleaseAcl((void *)v129, 0);
              return 0;
            }
          }
          _InterlockedOr(v108, 0);
          ExReleaseResourceLite(v67[6]);
          KeLeaveCriticalRegion();
          HalPutDmaAdapter((PADAPTER_OBJECT)Token);
          if ( v118 )
            SeReleaseAcl((void *)v118, PreviousMode);
          return v113;
        }
      }
      else
      {
        if ( TokenInformationLength < 8 )
          goto LABEL_170;
        v119 = *(_QWORD *)TokenInformation;
        v28 = SeCaptureSid((char *)v119, PreviousMode, v13, v14, (int)Object, 1, (PSID *)&v119);
        v113 = v28;
        v42 = (struct _DMA_ADAPTER *)v15;
        if ( v28 < 0 )
          goto LABEL_43;
        if ( (unsigned __int8)SepIdAssignableAsGroup(v15, v119) )
        {
          v98 = 4 * *(unsigned __int8 *)(v119 + 1) + 8;
          v116 = v98;
          v99 = KeGetCurrentThread();
          --v99->KernelApcDisable;
          v100 = (PERESOURCE *)Token;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v108, 0);
          v101 = Token;
          v102 = *((_QWORD *)Token + 23);
          if ( v102 )
          {
            v98 += *(unsigned __int16 *)(v102 + 2);
            v116 = v98;
          }
          if ( v98 <= *((_DWORD *)Token + 34) )
          {
            v113 = SepExpandDynamic(Token, v116);
            if ( v113 >= 0 )
            {
              SepFreePrimaryGroup(v101);
              SepAppendPrimaryGroup(v101, v119);
              v101[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v108, 0);
              ExReleaseResourceLite(v100[6]);
              KeLeaveCriticalRegion();
            }
            else
            {
              _InterlockedOr(v108, 0);
              ExReleaseResourceLite(v100[6]);
              KeLeaveCriticalRegion();
              v8 = v113;
            }
          }
          else
          {
            _InterlockedOr(v108, 0);
            ExReleaseResourceLite(v100[6]);
            KeLeaveCriticalRegion();
            v8 = -1073741671;
          }
          v15 = Token;
        }
        else
        {
          v8 = -1073741733;
        }
        HalPutDmaAdapter((PADAPTER_OBJECT)v15);
        SeReleaseSid((void *)v119, PreviousMode, 1);
        return v8;
      }
    }
    else
    {
      if ( TokenInformationLength < 8 )
        goto LABEL_170;
      Sid1 = *(PSID *)TokenInformation;
      v28 = SeCaptureSid((char *)Sid1, PreviousMode, v13, v14, (int)Object, 1, &Sid1);
      v113 = v28;
      if ( v28 < 0 )
        goto LABEL_42;
      v82 = 0;
      v83 = KeGetCurrentThread();
      --v83->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v108, 0);
      v84 = DmaAdapter;
      while ( 1 )
      {
        if ( v82 >= HIDWORD(v84[7].DmaOperations) )
        {
          _InterlockedOr(v108, 0);
          v103 = DmaAdapter;
          ExReleaseResourceLite(*(PERESOURCE *)&DmaAdapter[3].Version);
          KeLeaveCriticalRegion();
          HalPutDmaAdapter(v103);
          SeReleaseSid(Sid1, PreviousMode, 1);
          return -1073741734;
        }
        if ( RtlEqualSid(Sid1, *((PSID *)&v84[9].DmaOperations->Size + 2 * v82)) )
          break;
        ++v82;
      }
      if ( (unsigned __int8)SepIdAssignableAsOwner(v84, v82) )
      {
        *(_DWORD *)&v84[9].Version = v82;
        v85 = 1;
        v114 = 1;
        v113 = 0;
      }
      else
      {
        v113 = -1073741734;
        v85 = v114;
      }
      if ( v85 )
      {
        v131 = (PERESOURCE *)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
        v84[3].DmaOperations = (_DMA_OPERATIONS *)v131;
      }
      _InterlockedOr(v108, 0);
      v86 = DmaAdapter;
      ExReleaseResourceLite(*(PERESOURCE *)&DmaAdapter[3].Version);
      KeLeaveCriticalRegion();
      HalPutDmaAdapter(v86);
      SeReleaseSid(Sid1, PreviousMode, 1);
      return v113;
    }
  }
  return result;
}
