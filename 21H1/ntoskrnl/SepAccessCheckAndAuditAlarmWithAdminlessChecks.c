/*
 * XREFs of SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1405E18A0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SeCaptureObjectTypeList @ 0x140204740 (SeCaptureObjectTypeList.c)
 *     SepTrustLevelCheck @ 0x140204950 (SepTrustLevelCheck.c)
 *     SepFilterToDiscretionary @ 0x140204A48 (SepFilterToDiscretionary.c)
 *     SepMandatoryToDiscretionary @ 0x140204A64 (SepMandatoryToDiscretionary.c)
 *     SePrivilegePolicyCheck @ 0x140204A90 (SePrivilegePolicyCheck.c)
 *     SepTokenIsOwner @ 0x140204D30 (SepTokenIsOwner.c)
 *     SepMandatoryIntegrityCheck @ 0x140209E00 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x14020A2B0 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x14020A9F0 (SepAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     SepLocateTokenTrustLevel @ 0x140257F58 (SepLocateTokenTrustLevel.c)
 *     SepFreeResourceInfo @ 0x14025829C (SepFreeResourceInfo.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402B88D0 (AuthzBasepEvaluateAceCondition.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1402C1180 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     SeTokenIsRestricted @ 0x1402C12C0 (SeTokenIsRestricted.c)
 *     RtlOwnerAcesPresent @ 0x1402EFB50 (RtlOwnerAcesPresent.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140303DA8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepConstrainByConstraintMask @ 0x140305AE4 (SepConstrainByConstraintMask.c)
 *     SepConstrainByMandatory @ 0x140306A68 (SepConstrainByMandatory.c)
 *     SeLogAccessFailure @ 0x14030A578 (SeLogAccessFailure.c)
 *     SepLpacCausedAccessFailure @ 0x1403188AC (SepLpacCausedAccessFailure.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     SeFreeCapturedObjectTypeList @ 0x140590298 (SeFreeCapturedObjectTypeList.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1405903AC (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x140590450 (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x140590508 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x140590668 (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x14059077C (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCapTable @ 0x1405907D0 (SepRmDereferenceCapTable.c)
 *     SepExamineGlobalSaclEx @ 0x140591368 (SepExamineGlobalSaclEx.c)
 *     SepRmReferenceFindCap @ 0x140592294 (SepRmReferenceFindCap.c)
 *     SepProbeAndCaptureString_U @ 0x1405E2DC8 (SepProbeAndCaptureString_U.c)
 *     SeReleaseSecurityDescriptor @ 0x1405E2F00 (SeReleaseSecurityDescriptor.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1405E2F30 (SepAdtAuditObjectAccessWithContext.c)
 *     SeCheckAuditPrivilege @ 0x1405E2FB8 (SeCheckAuditPrivilege.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405E326C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x1405E3400 (SepAdtAuditThisEventWithContext.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     SeCaptureSecurityDescriptor @ 0x140605BC0 (SeCaptureSecurityDescriptor.c)
 *     SeLockSubjectContext @ 0x1406291F0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140629250 (SeUnlockSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     SeCaptureSid @ 0x1406465B0 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x1406466B4 (SeReleaseSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091ADA8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepExamineSaclEx @ 0x14091D650 (SepExamineSaclEx.c)
 *     SepAuditFailed @ 0x140920E20 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepAccessCheckAndAuditAlarmWithAdminlessChecks(
        void *a1,
        __int64 a2,
        void **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        int a8,
        int a9,
        char a10,
        unsigned __int64 a11,
        int a12,
        __int64 a13,
        volatile void *a14,
        volatile void *a15,
        _BYTE *a16,
        char a17,
        char a18)
{
  __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  int *v21; // r12
  char *v22; // r13
  unsigned __int8 v23; // si
  PACCESS_TOKEN ClientToken; // r13
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // edi
  unsigned int *v28; // rbx
  __int16 v29; // cx
  __int64 v30; // rax
  char *v31; // rax
  __int64 v32; // rax
  char *v33; // rax
  __int64 v34; // rdx
  char v35; // r15
  __int64 v36; // rcx
  unsigned int v37; // esi
  char v38; // r14
  int v39; // eax
  int v40; // r15d
  __int64 v41; // r8
  char IsOwner; // al
  char v43; // di
  _DWORD *v44; // rax
  int *v45; // r12
  __int64 v46; // r15
  int v47; // r8d
  char v48; // al
  char *v49; // r10
  int v50; // r13d
  char v51; // r9
  char v52; // r8
  int *v53; // rsi
  int v54; // edi
  char v55; // r15
  char v56; // di
  _DWORD *v57; // rcx
  _DWORD *v58; // rdx
  unsigned int v59; // ecx
  int v60; // edx
  char *v61; // r10
  char *v62; // r11
  char v63; // r12
  int *v64; // r9
  unsigned int *v65; // r8
  _DWORD *v66; // r8
  _DWORD *v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r9
  __int64 v70; // r8
  __int64 v71; // r9
  __int16 v73; // ax
  __int64 v74; // rax
  ACL *v75; // rcx
  int v76; // eax
  unsigned int v77; // eax
  int v78; // ebx
  unsigned int v79; // eax
  unsigned int v80; // eax
  int v81; // ecx
  unsigned __int8 v82; // al
  unsigned __int8 v83; // dl
  void *v84; // rcx
  int v85; // ecx
  char *PoolWithTag; // rax
  unsigned int v87; // edx
  unsigned int v88; // esi
  __int64 v89; // rcx
  __int16 v90; // dx
  __int64 v91; // rax
  ACL *v92; // rax
  _BYTE *ScopedPolicySid; // rax
  int Cap; // eax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v95; // rdx
  char *v96; // rax
  unsigned int v97; // edx
  unsigned int v98; // esi
  __int64 v99; // rcx
  int *v100; // rax
  int *v101; // rdx
  unsigned int v102; // eax
  unsigned __int64 v103; // r12
  PVOID v104; // r8
  _QWORD *v105; // rax
  __int64 v106; // r10
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r9
  int v110; // eax
  int v111; // ebx
  _QWORD *v112; // rax
  __int64 v113; // r8
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r9
  unsigned int v117; // r12d
  unsigned int v118; // ebx
  PVOID v119; // rbx
  int v120; // edx
  int v121; // eax
  int v122; // ecx
  unsigned int v123; // r8d
  unsigned int v124; // edx
  unsigned int v125; // r9d
  __int64 v126; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v128; // bl
  char v129; // di
  ULONGLONG TokenTrustLevel; // rax
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  int PrimaryToken; // r8d
  __int16 v135; // ax
  __int64 v136; // rdx
  unsigned int v137; // edx
  __int64 v138; // rcx
  unsigned int v139; // eax
  int v140; // r15d
  char v141; // di
  int v142; // r8d
  __int16 v143; // ax
  __int64 v144; // rdx
  unsigned int v145; // eax
  int v146; // r10d
  __int64 v147; // r8
  __int64 *v148; // r10
  __int64 v149; // rdx
  __int64 *v150; // r8
  struct _LIST_ENTRY *Blink; // rcx
  int Object; // [rsp+20h] [rbp-2C8h]
  int HandleInformation; // [rsp+28h] [rbp-2C0h]
  char v154; // [rsp+30h] [rbp-2B8h]
  unsigned int v155; // [rsp+40h] [rbp-2A8h]
  unsigned int v156; // [rsp+40h] [rbp-2A8h]
  char v157; // [rsp+A0h] [rbp-248h]
  unsigned __int8 v158; // [rsp+A1h] [rbp-247h] BYREF
  char v159; // [rsp+A2h] [rbp-246h]
  unsigned __int8 v160; // [rsp+A3h] [rbp-245h] BYREF
  char v161; // [rsp+A4h] [rbp-244h]
  char v162; // [rsp+A5h] [rbp-243h]
  char v163; // [rsp+A6h] [rbp-242h]
  char v164; // [rsp+A7h] [rbp-241h]
  int v165; // [rsp+A8h] [rbp-240h]
  int v166; // [rsp+B0h] [rbp-238h]
  PVOID v167; // [rsp+B8h] [rbp-230h]
  char v168; // [rsp+C0h] [rbp-228h] BYREF
  char v169; // [rsp+C1h] [rbp-227h]
  char v170; // [rsp+C2h] [rbp-226h]
  int v171; // [rsp+C4h] [rbp-224h] BYREF
  char v172; // [rsp+C8h] [rbp-220h] BYREF
  char v173; // [rsp+C9h] [rbp-21Fh] BYREF
  char v174[6]; // [rsp+CAh] [rbp-21Eh] BYREF
  PVOID v175; // [rsp+D0h] [rbp-218h] BYREF
  PVOID v176; // [rsp+D8h] [rbp-210h]
  _WORD v177[2]; // [rsp+E0h] [rbp-208h] BYREF
  int v178; // [rsp+E4h] [rbp-204h] BYREF
  unsigned int v179; // [rsp+E8h] [rbp-200h] BYREF
  char v180; // [rsp+ECh] [rbp-1FCh]
  unsigned __int8 v181; // [rsp+EDh] [rbp-1FBh] BYREF
  unsigned __int8 v182; // [rsp+EEh] [rbp-1FAh] BYREF
  char v183; // [rsp+EFh] [rbp-1F9h]
  char v184; // [rsp+F0h] [rbp-1F8h]
  char v185; // [rsp+F1h] [rbp-1F7h]
  char v186; // [rsp+F5h] [rbp-1F3h]
  int v187; // [rsp+F8h] [rbp-1F0h]
  int v188; // [rsp+FCh] [rbp-1ECh]
  int v189; // [rsp+100h] [rbp-1E8h]
  int v190; // [rsp+104h] [rbp-1E4h]
  unsigned int v191; // [rsp+108h] [rbp-1E0h]
  int v192; // [rsp+10Ch] [rbp-1DCh] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+110h] [rbp-1D8h] BYREF
  unsigned int v194; // [rsp+130h] [rbp-1B8h]
  __int64 v195; // [rsp+138h] [rbp-1B0h] BYREF
  PVOID v196; // [rsp+140h] [rbp-1A8h] BYREF
  int *v197; // [rsp+148h] [rbp-1A0h]
  PVOID v198; // [rsp+150h] [rbp-198h] BYREF
  volatile void *v199; // [rsp+158h] [rbp-190h]
  __int64 v200; // [rsp+160h] [rbp-188h] BYREF
  void *Src; // [rsp+168h] [rbp-180h]
  int v202; // [rsp+170h] [rbp-178h] BYREF
  ACL *v203; // [rsp+178h] [rbp-170h]
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v204; // [rsp+180h] [rbp-168h] BYREF
  volatile void *Address; // [rsp+188h] [rbp-160h]
  PVOID v206; // [rsp+190h] [rbp-158h] BYREF
  int v207; // [rsp+198h] [rbp-150h]
  PVOID P; // [rsp+1A0h] [rbp-148h] BYREF
  PVOID v209; // [rsp+1A8h] [rbp-140h] BYREF
  int v210[2]; // [rsp+1B0h] [rbp-138h] BYREF
  PACCESS_TOKEN v211; // [rsp+1B8h] [rbp-130h]
  _BYTE *v212; // [rsp+1C0h] [rbp-128h]
  int v213; // [rsp+1C8h] [rbp-120h] BYREF
  int v214; // [rsp+1CCh] [rbp-11Ch] BYREF
  __int64 v215; // [rsp+1D0h] [rbp-118h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+1D8h] [rbp-110h]
  PVOID v217; // [rsp+1E0h] [rbp-108h] BYREF
  unsigned __int64 v218; // [rsp+1E8h] [rbp-100h]
  PVOID v219; // [rsp+1F0h] [rbp-F8h] BYREF
  void *v220; // [rsp+1F8h] [rbp-F0h]
  __int64 v221; // [rsp+200h] [rbp-E8h]
  __int64 v222; // [rsp+208h] [rbp-E0h]
  void *v223; // [rsp+220h] [rbp-C8h]
  __int128 v224; // [rsp+228h] [rbp-C0h] BYREF
  void **v225; // [rsp+238h] [rbp-B0h]
  __int64 v226; // [rsp+240h] [rbp-A8h]
  __int64 v227; // [rsp+248h] [rbp-A0h]
  _OWORD SecurityDescriptor[2]; // [rsp+250h] [rbp-98h] BYREF
  __int64 v229; // [rsp+270h] [rbp-78h]
  __int128 v230; // [rsp+278h] [rbp-70h] BYREF
  __int64 v231; // [rsp+288h] [rbp-60h]
  int v232; // [rsp+290h] [rbp-58h]
  __int128 v233; // [rsp+298h] [rbp-50h] BYREF

  v221 = a4;
  v220 = a1;
  v211 = a1;
  v215 = a2;
  v225 = a3;
  v226 = a4;
  v222 = a5;
  v227 = a6;
  Src = a7;
  v218 = a11;
  v166 = a12;
  v19 = a13;
  v199 = a14;
  v20 = (unsigned __int64)a15;
  Address = a15;
  v212 = a16;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v21 = 0LL;
  v165 = 0;
  v179 = 0;
  v22 = 0LL;
  v167 = 0LL;
  v169 = 0;
  v171 = -1073741823;
  v213 = 0;
  v176 = 0LL;
  v214 = 0;
  v197 = 0LL;
  v190 = 0;
  v187 = 0;
  v186 = 0;
  P = 0LL;
  v198 = 0LL;
  v209 = 0LL;
  v175 = 0LL;
  v200 = 0LL;
  v195 = 0LL;
  v178 = 0;
  v233 = 0LL;
  v206 = 0LL;
  v158 = 0;
  v160 = 0;
  v174[0] = 0;
  v168 = 0;
  v183 = 0;
  v164 = 0;
  v161 = 0;
  v181 = 1;
  v182 = 0;
  DmaAdapter = 0LL;
  v223 = 0LL;
  v184 = 0;
  v224 = 0LL;
  v210[1] = 0;
  v203 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v229 = 0LL;
  v204 = 0LL;
  v170 = 0;
  v163 = 0;
  v159 = 0;
  v185 = 0;
  v177[0] = 999;
  v230 = 0LL;
  v231 = 0LL;
  v232 = 0;
  v162 = 0;
  v189 = 0;
  v196 = 0LL;
  v192 = 0;
  v188 = 0;
  v180 = 0;
  v172 = 0;
  v173 = 0;
  v217 = 0LL;
  v202 = -1;
  v210[0] = -1;
  v23 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v157 = v23;
  v174[1] = v23;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a9 )
  {
    if ( a9 != 1 )
    {
      v27 = -1073741811;
      goto LABEL_372;
    }
    v207 = 7;
  }
  else
  {
    v207 = 2;
  }
  ClientToken = SubjectContext.ClientToken;
  if ( !a3 )
  {
    if ( SubjectContext.ClientToken )
    {
      if ( SubjectContext.ImpersonationLevel >= SecurityIdentification )
        goto LABEL_6;
      v27 = -1073741659;
      v22 = 0LL;
    }
    else
    {
      v27 = -1073741732;
      v22 = 0LL;
    }
LABEL_372:
    v28 = (unsigned int *)v175;
    goto LABEL_117;
  }
LABEL_6:
  if ( a17 )
  {
    if ( !v166 || (unsigned int)v166 > 0x1000 )
    {
      v27 = -1073741811;
      v165 = -1073741811;
      goto LABEL_19;
    }
    ProbeForWrite(Address, 4LL * (unsigned int)v166, 4u);
    ProbeForWrite(v199, 4LL * (unsigned int)v166, 4u);
  }
  else
  {
    v25 = v20;
    if ( v20 >= 0x7FFFFFFF0000LL )
      v25 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v25 = *(_DWORD *)v25;
    v26 = (__int64)v199;
    if ( (unsigned __int64)v199 >= 0x7FFFFFFF0000LL )
      v26 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v26 = *(_DWORD *)v26;
  }
  if ( (v19 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v233 = *(_OWORD *)v19;
  ClientToken = SubjectContext.ClientToken;
  v27 = v165;
LABEL_19:
  if ( v27 < 0 )
    goto LABEL_188;
  if ( !a3 )
  {
LABEL_21:
    if ( !ClientToken )
      ClientToken = SubjectContext.PrimaryToken;
    v211 = ClientToken;
    if ( (unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v23) )
    {
LABEL_24:
      if ( (a8 & 0xF0000000) != 0 )
      {
        v27 = -1073741594;
        v22 = (char *)v167;
        v21 = (int *)v167;
        goto LABEL_372;
      }
      v27 = SeCaptureSecurityDescriptor(a6, v23, 1, 0, (__int64)&v175);
      v165 = v27;
      if ( v27 < 0 )
      {
        v28 = 0LL;
        goto LABEL_191;
      }
      v28 = (unsigned int *)v175;
      if ( v175 )
      {
        v29 = *((_WORD *)v175 + 1);
        if ( v29 >= 0 )
        {
          v31 = (char *)*((_QWORD *)v175 + 1);
        }
        else
        {
          v30 = *((unsigned int *)v175 + 1);
          if ( !(_DWORD)v30 )
            goto LABEL_193;
          v31 = (char *)v175 + v30;
        }
        if ( v31 )
        {
          if ( v29 >= 0 )
          {
            v33 = (char *)*((_QWORD *)v175 + 2);
          }
          else
          {
            v32 = *((unsigned int *)v175 + 2);
            if ( !(_DWORD)v32 )
              goto LABEL_193;
            v33 = (char *)v175 + v32;
          }
          if ( v33 )
          {
            v34 = (__int64)v212;
            if ( (unsigned __int64)v212 >= 0x7FFFFFFF0000LL )
              v34 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v34 = *(_BYTE *)v34;
            v27 = SepProbeAndCaptureString_U(v220, &P);
            v165 = v27;
            if ( v27 >= 0 )
            {
              v27 = SepProbeAndCaptureString_U(v221, &v198);
              v165 = v27;
              if ( v27 >= 0 )
              {
                v27 = SepProbeAndCaptureString_U(v222, &v209);
                v165 = v27;
              }
            }
            v35 = v162;
            if ( v27 >= 0 )
            {
              if ( Src )
              {
                v27 = SeCaptureSid(Src, Object, 1, (__int64)&v200);
                if ( v27 < 0 )
                {
                  v200 = 0LL;
                  v22 = (char *)v167;
                  v21 = (int *)v167;
                  goto LABEL_372;
                }
              }
              v27 = SeCaptureObjectTypeList(v218, v166, v23, &v195);
              if ( v27 >= 0 )
              {
                v28 = (unsigned int *)v175;
                v27 = SepTrustLevelCheck(v36, (__int64)v175, &SubjectContext, 0LL, 0LL, 1, &v202);
                if ( v27 < 0 )
                {
LABEL_192:
                  v22 = (char *)v167;
                  v21 = (int *)v167;
                  goto LABEL_117;
                }
                v37 = a8;
                v27 = SepFilterToDiscretionary(&v202, a8);
                v165 = v27;
                if ( v27 < 0 )
                {
                  v172 = 1;
LABEL_48:
                  v38 = a18;
                  if ( v27 < 0 )
                    goto LABEL_54;
                  v27 = SepMandatoryIntegrityCheck(
                          (int *)&v233,
                          (__int64)v28,
                          0,
                          (__int64)ClientToken,
                          1,
                          a18,
                          (__int64)&v224);
                  if ( v27 >= 0 )
                  {
                    v39 = SepMandatoryToDiscretionary(&v224, v37);
                    v27 = v39;
                    v165 = v39;
                    if ( (v39 < 0 || (v37 & 0x2000000) != 0)
                      && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0
                      && HIDWORD(v224) <= 0x2000 )
                    {
                      v35 = 1;
                      v162 = 1;
                    }
                    if ( v39 >= 0 || v35 )
                    {
                      v27 = SePrivilegePolicyCheck(&a8, &v178, (__int64 *)&SubjectContext, 0, (__int64)&v206, v157);
                      v165 = v27;
                      v37 = a8;
                      if ( !a8 )
                      {
                        v85 = (unsigned __int8)v188;
                        v40 = v178;
                        if ( v178 )
                          v85 = 1;
                        v188 = v85;
LABEL_55:
                        SeLockSubjectContext(&SubjectContext);
                        if ( v27 < 0 && !v162 )
                        {
                          v160 = 1;
                          v171 = v27;
                          if ( !a17 )
                          {
                            v167 = &v179;
                            v45 = &v171;
                            goto LABEL_71;
                          }
                          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v166, 0x61476553u);
                          v167 = PoolWithTag;
                          if ( !PoolWithTag )
                          {
                            SeUnlockSubjectContext(&SubjectContext);
                            v27 = -1073741670;
                            v23 = v157;
                            v22 = 0LL;
                            v21 = (int *)v176;
                            goto LABEL_117;
                          }
                          v169 = 1;
                          v45 = (int *)&PoolWithTag[4 * v166];
                          v87 = 0;
                          v88 = v166;
                          while ( v87 < v88 )
                          {
                            v89 = v87;
                            *(_DWORD *)&PoolWithTag[v89 * 4] = v179;
                            v45[v89] = v171;
                            ++v87;
                          }
                          goto LABEL_211;
                        }
                        IsOwner = SepTokenIsOwner((__int64)ClientToken, (__int64)v28, v41, v38);
                        v159 = IsOwner;
                        v28 = (unsigned int *)v175;
                        if ( !SepRmEnforceCap )
                          goto LABEL_57;
                        v90 = *((_WORD *)v175 + 1);
                        if ( (v90 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
                          goto LABEL_57;
                        if ( v90 >= 0 )
                        {
                          v92 = (ACL *)*((_QWORD *)v175 + 3);
                        }
                        else
                        {
                          v91 = *((unsigned int *)v175 + 3);
                          if ( !(_DWORD)v91 )
                          {
                            v203 = 0LL;
LABEL_218:
                            IsOwner = v159;
LABEL_57:
                            v27 = v165;
                            goto LABEL_58;
                          }
                          v92 = (ACL *)((char *)v175 + v91);
                        }
                        v203 = v92;
                        if ( v92 )
                        {
                          ScopedPolicySid = SepGetScopedPolicySid(v92);
                          if ( ScopedPolicySid )
                          {
                            Cap = SepRmReferenceFindCap(ScopedPolicySid, &v204);
                            v95 = v204;
                            if ( Cap < 0 )
                              v95 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
                            v204 = v95;
                            v27 = 0;
                            v165 = 0;
                            v170 = 1;
                            IsOwner = v159;
LABEL_58:
                            v37 = a8;
                            if ( (a8 & 0x2060000) != 0
                              && IsOwner
                              && ((v73 = *((_WORD *)v28 + 1), (v73 & 4) == 0)
                                ? (v75 = 0LL)
                                : v73 >= 0
                                ? (v75 = (ACL *)*((_QWORD *)v28 + 4))
                                : (v74 = v28[4], !(_DWORD)v74)
                                ? (v75 = 0LL)
                                : (v75 = (ACL *)((char *)v28 + v74)),
                                  !RtlOwnerAcesPresent(v75)) )
                            {
                              if ( (v37 & 0x2000000) != 0 )
                              {
                                v76 = 393216;
                                v40 = v178 | 0x60000;
                              }
                              else
                              {
                                v76 = v37 & 0x60000;
                                v40 = v178 | v37 & 0x60000;
                              }
                              v189 = v76;
                              v178 = v40;
                              v37 &= 0xFFF9FFFF;
                              a8 = v37;
                            }
                            else
                            {
                              v40 = v178;
                            }
                            if ( !v37
                              && (!v170 || (_BYTE)v188)
                              && ((*((_DWORD *)ClientToken + 50) & 0x2000) != 0 || !v189) )
                            {
                              v179 = v40;
                              if ( v40 )
                              {
                                v81 = 0;
                                v82 = 0;
                                v83 = 1;
                              }
                              else
                              {
                                v81 = -1073741790;
                                v82 = 1;
                                v83 = 0;
                              }
                              v158 = v83;
                              v160 = v82;
                              v171 = v81;
                              if ( !a17 )
                              {
                                v167 = &v179;
                                v45 = &v171;
LABEL_71:
                                if ( !ClientToken )
                                  goto LABEL_78;
                                if ( v172 || v173 )
                                  goto LABEL_321;
                                if ( !HIDWORD(v230) && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 )
                                {
                                  if ( v27 < 0 )
                                    goto LABEL_78;
                                  if ( v171 < 0 || HIBYTE(v231) )
                                  {
LABEL_321:
                                    CurrentThread = KeGetCurrentThread();
                                    --CurrentThread->KernelApcDisable;
                                    ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
                                    v128 = v171 >= 0;
                                    v129 = a8 | v178;
                                    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)&SubjectContext);
                                    SeLogAccessFailure(
                                      (__int64)ClientToken,
                                      0LL,
                                      0LL,
                                      TokenTrustLevel,
                                      (ULONGLONG)v175,
                                      v129,
                                      v128,
                                      0);
                                    ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
                                    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v131, v132, v133);
                                    v37 = a8;
                                    v27 = v165;
                                    v28 = (unsigned int *)v175;
                                    v40 = v178;
                                  }
                                }
                                if ( v27 >= 0
                                  && v171 < 0
                                  && !HIDWORD(v230)
                                  && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0
                                  && SepLpacCausedAccessFailure((__int64)&v230, v37) )
                                {
                                  SepLogLpacAccessFailure();
                                }
LABEL_78:
                                if ( v183 )
                                  goto LABEL_90;
                                v50 = v207;
                                if ( v207 == 2 )
                                {
                                  if ( v158 )
                                  {
                                    LOBYTE(HandleInformation) = 0;
                                    v164 = SepAdtAuditObjectAccessWithContext(
                                             0LL,
                                             v198,
                                             v158,
                                             0LL,
                                             &SubjectContext,
                                             HandleInformation,
                                             v177);
                                  }
                                  if ( !v160 )
                                  {
LABEL_83:
                                    v51 = v161;
                                    goto LABEL_84;
                                  }
                                  LOBYTE(HandleInformation) = 0;
                                  v51 = SepAdtAuditObjectAccessWithContext(
                                          0LL,
                                          v198,
                                          0LL,
                                          v160,
                                          &SubjectContext,
                                          HandleInformation,
                                          v177);
                                  v161 = v51;
                                }
                                else
                                {
                                  if ( v158 )
                                  {
                                    v177[0] = 151;
                                    v164 = SepAdtAuditThisEventWithContext(151LL, v158, 0LL, &SubjectContext);
                                  }
                                  if ( !v160 )
                                    goto LABEL_83;
                                  v177[0] = 151;
                                  v51 = SepAdtAuditThisEventWithContext(151LL, 0LL, v160, &SubjectContext);
                                  v161 = v51;
                                }
LABEL_84:
                                v52 = v164;
                                if ( v164 || v51 )
                                {
                                  PrimaryToken = (int)SubjectContext.PrimaryToken;
                                  if ( SubjectContext.ClientToken )
                                    PrimaryToken = (int)SubjectContext.ClientToken;
                                  v135 = *((_WORD *)v28 + 1);
                                  if ( (v135 & 0x10) != 0 )
                                  {
                                    if ( v135 >= 0 )
                                    {
                                      v136 = *((_QWORD *)v28 + 3);
                                    }
                                    else
                                    {
                                      v137 = v28[3];
                                      if ( v137 )
                                        LODWORD(v136) = (_DWORD)v28 + v137;
                                      else
                                        LODWORD(v136) = 0;
                                    }
                                  }
                                  else
                                  {
                                    LODWORD(v136) = 0;
                                  }
                                  if ( (v135 & 0x10) != 0 )
                                  {
                                    if ( v135 >= 0 )
                                    {
                                      v138 = *((_QWORD *)v28 + 3);
                                    }
                                    else
                                    {
                                      v139 = v28[3];
                                      if ( v139 )
                                        LODWORD(v138) = (_DWORD)v28 + v139;
                                      else
                                        LODWORD(v138) = 0;
                                    }
                                  }
                                  else
                                  {
                                    LODWORD(v138) = 0;
                                  }
                                  v140 = v37 | v40;
                                  v53 = (int *)v167;
                                  v141 = a17;
                                  SepExamineSaclEx(
                                    v138,
                                    v136,
                                    PrimaryToken,
                                    v140,
                                    v195,
                                    v166,
                                    a17,
                                    (__int64)v45,
                                    (__int64)v167,
                                    v200,
                                    v159,
                                    (__int64)v174,
                                    (__int64)&v168);
                                  v142 = (int)SubjectContext.PrimaryToken;
                                  if ( SubjectContext.ClientToken )
                                    v142 = (int)SubjectContext.ClientToken;
                                  v143 = *((_WORD *)v28 + 1);
                                  if ( (v143 & 0x10) != 0 )
                                  {
                                    if ( v143 >= 0 )
                                    {
                                      v144 = *((_QWORD *)v28 + 3);
                                    }
                                    else
                                    {
                                      v145 = v28[3];
                                      if ( v145 )
                                        LODWORD(v144) = (_DWORD)v28 + v145;
                                      else
                                        LODWORD(v144) = 0;
                                    }
                                  }
                                  else
                                  {
                                    LODWORD(v144) = 0;
                                  }
                                  v154 = v141;
                                  v54 = v166;
                                  SepExamineGlobalSaclEx(
                                    (__int64)v198,
                                    v144,
                                    v142,
                                    v140,
                                    v195,
                                    v166,
                                    v154,
                                    (__int64)v45,
                                    (__int64)v53,
                                    v200,
                                    v159,
                                    v174,
                                    &v168);
                                  v52 = v164;
                                  v51 = v161;
                                }
                                else
                                {
                                  v53 = (int *)v167;
                                  v54 = v166;
                                }
                                if ( v174[0] || v168 )
                                {
                                  v146 = (unsigned __int8)v187;
                                  if ( v158 )
                                    v146 = 1;
                                  v187 = v146;
                                  v55 = a17;
                                  if ( v174[0] && v52 )
                                  {
                                    v147 = (__int64)v53;
                                    if ( !a17 )
                                      v147 = 0LL;
                                    v148 = &v215;
                                    if ( !v158 )
                                      LODWORD(v148) = 0;
                                    v28 = (unsigned int *)v175;
                                    SepAdtOpenObjectAuditAlarm(
                                      v177[0],
                                      (int)P,
                                      (int)v148,
                                      (int)v198,
                                      (__int64)v209,
                                      v175,
                                      (__int64)SubjectContext.ClientToken,
                                      (__int64)SubjectContext.PrimaryToken,
                                      *v53,
                                      *v53,
                                      (__int64)v206,
                                      1,
                                      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                                      v50,
                                      v195,
                                      v54,
                                      v147,
                                      0LL,
                                      0LL);
                                    v51 = v161;
                                  }
                                  if ( v168 && v51 )
                                  {
                                    v149 = (__int64)v53;
                                    if ( !v55 )
                                      v149 = 0LL;
                                    v150 = &v215;
                                    if ( !v158 )
                                      LODWORD(v150) = 0;
                                    v28 = (unsigned int *)v175;
                                    SepAdtOpenObjectAuditAlarm(
                                      v177[0],
                                      (int)P,
                                      (int)v150,
                                      (int)v198,
                                      (__int64)v209,
                                      v175,
                                      (__int64)SubjectContext.ClientToken,
                                      (__int64)SubjectContext.PrimaryToken,
                                      a8,
                                      a8,
                                      (__int64)v206,
                                      0,
                                      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                                      v50,
                                      v195,
                                      v54,
                                      v149,
                                      0LL,
                                      0LL);
                                  }
                                  goto LABEL_91;
                                }
                                if ( v206 && v158 )
                                {
                                  SepAdtPrivilegeObjectAuditAlarm(
                                    (_DWORD)P,
                                    (_DWORD)v198,
                                    (_DWORD)v209,
                                    (unsigned int)&v215,
                                    (__int64)SubjectContext.ClientToken,
                                    (__int64)SubjectContext.PrimaryToken,
                                    (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                                    a8,
                                    (__int64)v206,
                                    v158);
                                  v56 = 0;
                                  v28 = (unsigned int *)v175;
                                  v55 = a17;
LABEL_92:
                                  SeUnlockSubjectContext(&SubjectContext);
                                  if ( v55 )
                                  {
                                    v59 = 0;
                                    v194 = 0;
                                    if ( v45 )
                                    {
                                      v22 = (char *)v167;
                                      v66 = Address;
                                      v67 = v199;
                                      while ( v59 < v166 )
                                      {
                                        v68 = v59;
                                        v66[v68] = v45[v68];
                                        v67[v68] = *(_DWORD *)&v22[v68 * 4];
                                        if ( SepRmEnforceCap && v163 && v45[v68] >= 0 )
                                        {
                                          v66[v59] = v197[v59];
                                          v67[v59] &= *((_DWORD *)v176 + v59);
                                        }
                                        v194 = ++v59;
                                        v28 = (unsigned int *)v175;
                                      }
                                      goto LABEL_96;
                                    }
                                    v60 = v171;
                                    v61 = (char *)Address;
                                    v62 = (char *)v199;
                                    v63 = v163;
                                    while ( v59 < v166 )
                                    {
                                      v64 = (int *)&v61[4 * v59];
                                      *v64 = v60;
                                      v65 = (unsigned int *)&v62[4 * v59];
                                      *v65 = v179;
                                      if ( SepRmEnforceCap && v63 )
                                      {
                                        v60 = v171;
                                        if ( v171 >= 0 )
                                        {
                                          *v64 = v171;
                                          *v65 &= v179;
                                        }
                                      }
                                      else
                                      {
                                        v60 = v171;
                                      }
                                      v194 = ++v59;
                                      v28 = (unsigned int *)v175;
                                    }
                                  }
                                  else
                                  {
                                    v57 = Address;
                                    *(_DWORD *)Address = v171;
                                    v58 = v199;
                                    *(_DWORD *)v199 = v179;
                                    if ( SepRmEnforceCap && v163 && v171 >= 0 )
                                    {
                                      *v57 = *v197;
                                      v21 = (int *)v176;
                                      *v58 &= *(_DWORD *)v176;
                                      v28 = (unsigned int *)v175;
                                      v22 = (char *)v167;
                                      goto LABEL_116;
                                    }
                                    v28 = (unsigned int *)v175;
                                  }
                                  v22 = (char *)v167;
LABEL_96:
                                  v21 = (int *)v176;
LABEL_116:
                                  *v212 = v56;
                                  v27 = 0;
                                  v165 = 0;
                                  v23 = v157;
                                  goto LABEL_117;
                                }
LABEL_90:
                                v55 = a17;
LABEL_91:
                                v56 = v187;
                                goto LABEL_92;
                              }
                              v96 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v166, 0x61476553u);
                              v167 = v96;
                              if ( v96 )
                              {
                                v169 = 1;
                                v45 = (int *)&v96[4 * v166];
                                v97 = 0;
                                v98 = v166;
                                while ( v97 < v98 )
                                {
                                  v99 = v97;
                                  *(_DWORD *)&v96[v99 * 4] = v179;
                                  v45[v99] = v171;
                                  ++v97;
                                }
LABEL_211:
                                v37 = a8;
                                goto LABEL_71;
                              }
LABEL_238:
                              v27 = -1073741670;
                              SeUnlockSubjectContext(&SubjectContext);
                              v23 = v157;
                              v22 = (char *)v167;
                              v21 = (int *)v176;
                              goto LABEL_117;
                            }
                            v43 = a17;
                            if ( a17 )
                            {
                              v44 = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v166, 0x61476553u);
                              v167 = v44;
                              if ( !v44 )
                                goto LABEL_238;
                              v169 = 1;
                              v45 = &v44[v166];
                              v43 = a17;
                            }
                            else
                            {
                              v44 = &v179;
                              v167 = &v179;
                              v45 = &v171;
                            }
                            Src = v45;
                            LODWORD(v230) = v189;
                            v155 = v40;
                            v46 = (unsigned int)v166;
                            SepAccessCheck(
                              (__int64)v28,
                              (unsigned __int8 *)v200,
                              (__int64)SubjectContext.PrimaryToken,
                              (__int64)ClientToken,
                              v37,
                              (__int128 *)v195,
                              v166,
                              &v233,
                              v155,
                              v157,
                              v44,
                              0LL,
                              v45,
                              v43,
                              v159,
                              (int *)&v230,
                              &v196,
                              (char *)&v158,
                              (char *)&v160,
                              v38);
                            if ( SepRmEnforceCap && *v45 >= 0 && v170 )
                            {
                              if ( v43 )
                              {
                                LODWORD(v28) = v46;
                                v100 = (int *)ExAllocatePoolWithTag(PagedPool, 8 * v46, 0x61476553u);
                                v21 = v100;
                                v176 = v100;
                                if ( !v100 )
                                {
                                  SeUnlockSubjectContext(&SubjectContext);
                                  SeReleaseSubjectContext(&SubjectContext);
                                  v27 = -1073741670;
                                  v23 = v157;
                                  v22 = (char *)v167;
                                  goto LABEL_372;
                                }
                                v101 = &v100[v46];
                              }
                              else
                              {
                                v21 = &v213;
                                v176 = &v213;
                                v101 = &v214;
                              }
                              v197 = v101;
                              if ( v166 )
                              {
                                v27 = SepCopyObjectTypeList(v195, v166, &v217);
                                v165 = v27;
                                if ( v27 < 0 )
                                {
                                  v23 = v157;
                                  v22 = (char *)v167;
                                  goto LABEL_372;
                                }
                              }
                              else
                              {
                                v27 = v165;
                              }
                              LOBYTE(v28) = 0;
                              v188 = (int)v28;
                              v102 = 0;
                              v37 = a8;
                              v40 = v178;
                              v47 = v166;
                              while ( 1 )
                              {
                                v191 = v102;
                                if ( v102 >= HIDWORD(v204[2].Linkage.Blink) )
                                  break;
                                v103 = *(&v204[2].Signature + v102);
                                v218 = v103;
                                if ( !*(_QWORD *)(v103 + 24) )
                                  goto LABEL_291;
                                v104 = v196;
                                if ( !v196 )
                                {
                                  LODWORD(v28) = (unsigned __int8)v28;
                                  if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v203, &v196) < 0 )
                                    LODWORD(v28) = 1;
                                  v188 = (int)v28;
                                  v104 = v196;
                                }
                                v105 = (_QWORD *)*((_QWORD *)ClientToken + 137);
                                v106 = v105 ? v105[75] : 0LL;
                                v107 = v105 ? v105[73] : 0LL;
                                v108 = v105 ? v105[74] : 0LL;
                                v109 = v105 ? v105[72] : 0LL;
                                v110 = AuthzBasepEvaluateAceCondition(
                                         (__int64)ClientToken,
                                         *((_QWORD *)ClientToken + 97),
                                         (__int64)v104,
                                         v109,
                                         v108,
                                         v107,
                                         v106,
                                         *(_DWORD **)(v103 + 24),
                                         *(_DWORD *)(v103 + 16),
                                         1u,
                                         0,
                                         &v192);
                                v27 = v110;
                                v165 = v110;
                                v111 = v192;
                                if ( v192 == 1 )
                                  goto LABEL_291;
                                if ( v110 < 0 )
                                  goto LABEL_304;
                                if ( SeTokenIsRestricted(ClientToken) )
                                {
                                  v112 = (_QWORD *)*((_QWORD *)ClientToken + 137);
                                  if ( v112 )
                                    v113 = v112[75];
                                  else
                                    v113 = 0LL;
                                  if ( v112 )
                                    v114 = v112[73];
                                  else
                                    v114 = 0LL;
                                  if ( v112 )
                                    v115 = v112[74];
                                  else
                                    v115 = 0LL;
                                  if ( v112 )
                                    v116 = v112[72];
                                  else
                                    v116 = 0LL;
                                  v27 = AuthzBasepEvaluateAceCondition(
                                          (__int64)ClientToken,
                                          *((_QWORD *)ClientToken + 97),
                                          (__int64)v196,
                                          v116,
                                          v115,
                                          v114,
                                          v113,
                                          *(_DWORD **)(v103 + 24),
                                          *(_DWORD *)(v103 + 16),
                                          1u,
                                          1u,
                                          &v192);
                                  v165 = v27;
                                  if ( v27 < 0 )
                                    goto LABEL_304;
                                  v111 = v192;
                                }
                                if ( (_BYTE)v188 || v111 == 1 )
                                {
LABEL_291:
                                  if ( (*(_DWORD *)(v103 + 48) & 1) != 0 )
                                  {
                                    if ( (v37 & 0x2000000) != 0 )
                                      v117 = v37;
                                    else
                                      v117 = v37 | v40;
                                    v118 = 0;
                                  }
                                  else
                                  {
                                    v117 = v37;
                                    v118 = v40;
                                  }
                                  v27 = SepBuildCapeSecurityDescriptor(
                                          SecurityDescriptor,
                                          *(unsigned __int8 **)(v218 + 32),
                                          v203);
                                  v165 = v27;
                                  if ( v27 < 0 )
                                  {
LABEL_304:
                                    v23 = v157;
                                    v22 = (char *)v167;
                                    v21 = (int *)v176;
                                    goto LABEL_372;
                                  }
                                  v156 = v118;
                                  v119 = v217;
                                  SepAccessCheck(
                                    (__int64)SecurityDescriptor,
                                    (unsigned __int8 *)v200,
                                    (__int64)SubjectContext.PrimaryToken,
                                    (__int64)SubjectContext.ClientToken,
                                    v117,
                                    (__int128 *)v217,
                                    v166,
                                    &v233,
                                    v156,
                                    v157,
                                    (unsigned int *)v176,
                                    0LL,
                                    v197,
                                    a17,
                                    v159,
                                    (int *)&v230,
                                    &v196,
                                    (char *)&v181,
                                    (char *)&v182,
                                    v38);
                                  v120 = *(_DWORD *)v176;
                                  if ( v163 )
                                    v120 = v190 & *(_DWORD *)v176;
                                  v190 = v120;
                                  v47 = v166;
                                  if ( v119 )
                                    SepMergeObjectTypeListAccesses(v195, (__int64)v119, v166);
                                  v163 = 1;
                                }
                                else
                                {
                                  v47 = v166;
                                }
                                v102 = v191 + 1;
                                LOBYTE(v28) = v188;
                              }
                              v158 = v181;
                              v160 = v182;
                              v121 = v190;
                              *(_DWORD *)v176 &= v190;
                              v45 = (int *)Src;
                              if ( !v121 )
                              {
                                *v197 = -1073741790;
                                v158 = 0;
                                v160 = 1;
                              }
                            }
                            else
                            {
                              v37 = a8;
                              v27 = v165;
                              v40 = v178;
                              v47 = v166;
                            }
                            if ( (v37 & 0x2000000) != 0 )
                            {
                              if ( !v162
                                || !*(_WORD *)((char *)&v231 + 5)
                                && !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
                              {
                                if ( a17 )
                                  v77 = v47;
                                else
                                  v77 = 0;
                                SepConstrainByMandatory((__int64)&v224, v37, (char *)v167, (char *)v45, 0LL, v77);
                              }
                            }
                            else if ( v162 && !*(_WORD *)((char *)&v231 + 5) )
                            {
                              if ( !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() || HIDWORD(v230) )
                              {
                                v158 = 0;
                                v160 = 1;
                                v123 = 0;
                                v179 = 0;
                                v171 = v122;
                                v48 = a17;
                                if ( a17 )
                                {
                                  v124 = 0;
                                  v49 = (char *)v167;
                                  v125 = v166;
                                  while ( v124 < v125 )
                                  {
                                    v126 = v124;
                                    *(_DWORD *)&v49[v126 * 4] = v123;
                                    v45[v126] = v171;
                                    ++v124;
                                    v123 = v179;
                                  }
                                  v48 = a17;
                                  goto LABEL_69;
                                }
LABEL_68:
                                v49 = (char *)v167;
LABEL_69:
                                if ( (v37 & 0x2000000) != 0 )
                                {
                                  v78 = v166;
                                  if ( v48 )
                                    v79 = v166;
                                  else
                                    v79 = 0;
                                  SepConstrainByConstraintMask(v202, v37, v49, (char *)v45, 0LL, v79, &v172);
                                  if ( a17 )
                                    v80 = v78;
                                  else
                                    v80 = 0;
                                  SepConstrainByConstraintMask(v210[0], v37, (char *)v167, (char *)v45, 0LL, v80, &v173);
                                }
                                v28 = (unsigned int *)v175;
                                goto LABEL_71;
                              }
                              HIBYTE(v231) = 1;
                              v158 = 1;
                              v160 = 0;
                              v179 = v37;
                              v171 = 0;
                            }
                            v48 = a17;
                            goto LABEL_68;
                          }
                        }
                        goto LABEL_218;
                      }
                    }
LABEL_54:
                    v40 = v178;
                    goto LABEL_55;
                  }
                  goto LABEL_191;
                }
                v27 = SepFilterCheck((__int64)v28, &v196, (__int64)ClientToken, 1, v210);
                if ( v27 >= 0 )
                {
                  v27 = SepFilterToDiscretionary(v210, v37);
                  v165 = v27;
                  if ( v27 < 0 )
                    v173 = 1;
                  goto LABEL_48;
                }
LABEL_191:
                v23 = v157;
                goto LABEL_192;
              }
            }
            goto LABEL_188;
          }
        }
      }
LABEL_193:
      v27 = -1073741703;
      v22 = (char *)v167;
      v21 = (int *)v167;
      goto LABEL_117;
    }
    if ( (a10 & 1) != 0 )
    {
      v183 = 1;
      goto LABEL_24;
    }
    v27 = -1073741727;
LABEL_188:
    v22 = (char *)v167;
    v21 = (int *)v167;
    goto LABEL_372;
  }
  v84 = *a3;
  v219 = 0LL;
  v27 = ObReferenceObjectByHandle(v84, 8u, (POBJECT_TYPE)SeTokenObjectType, v23, &v219, 0LL);
  DmaAdapter = (PADAPTER_OBJECT)v219;
  if ( v27 >= 0 )
  {
    v223 = ClientToken;
    ClientToken = v219;
    SubjectContext.ClientToken = v219;
    v184 = 1;
    goto LABEL_21;
  }
  DmaAdapter = 0LL;
  v28 = (unsigned int *)v175;
  v22 = (char *)v167;
  v21 = (int *)v167;
  if ( v27 != -1073741816 )
    v185 = 1;
LABEL_117:
  if ( v184 )
  {
    HalPutDmaAdapter(DmaAdapter);
    SubjectContext.ClientToken = v223;
  }
  if ( v206 )
    ExFreePoolWithTag(v206, 0);
  SeReleaseSubjectContext(&SubjectContext);
  SeReleaseSecurityDescriptor(v28, v23, 0LL, v69);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v198 )
    ExFreePoolWithTag(v198, 0);
  if ( v209 )
    ExFreePoolWithTag(v209, 0);
  if ( v200 )
  {
    LOBYTE(v70) = 1;
    SeReleaseSid(v200, v23, v70, v71);
  }
  if ( v195 )
    SeFreeCapturedObjectTypeList((void *)v195);
  if ( v169 )
  {
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
  }
  if ( v170 )
  {
    Blink = v204[1].Linkage.Blink;
    if ( Blink )
      SepRmDereferenceCapTable((volatile signed __int64 *)Blink);
  }
  if ( v217 )
    ExFreePoolWithTag(v217, 0);
  SepFreeResourceInfo(v196);
  if ( v27 == -1073741670 || v185 )
    SepAuditFailed((unsigned int)v27);
  return (unsigned int)v27;
}
