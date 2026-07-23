/*
 * XREFs of SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140627300
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x14062723C (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14025F8A0 (AuthzBasepEvaluateAceCondition.c)
 *     SeTokenIsRestricted @ 0x14026D760 (SeTokenIsRestricted.c)
 *     SepTokenIsOwner @ 0x14026D890 (SepTokenIsOwner.c)
 *     SePrivilegePolicyCheck @ 0x14026DA70 (SePrivilegePolicyCheck.c)
 *     SepMandatoryToDiscretionary @ 0x14026DBF0 (SepMandatoryToDiscretionary.c)
 *     SepFilterToDiscretionary @ 0x14026DC14 (SepFilterToDiscretionary.c)
 *     SepTrustLevelCheck @ 0x14026DC30 (SepTrustLevelCheck.c)
 *     SeCaptureObjectTypeList @ 0x14026DD30 (SeCaptureObjectTypeList.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x14026DF40 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     SepLocateTokenTrustLevel @ 0x1402947D8 (SepLocateTokenTrustLevel.c)
 *     SepFreeResourceInfo @ 0x140294B1C (SepFreeResourceInfo.c)
 *     SepMandatoryIntegrityCheck @ 0x14029C910 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x14029CDC0 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x14029D500 (SepAccessCheck.c)
 *     RtlOwnerAcesPresent @ 0x14032A9E0 (RtlOwnerAcesPresent.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140340B78 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepConstrainByConstraintMask @ 0x140343594 (SepConstrainByConstraintMask.c)
 *     SepConstrainByMandatory @ 0x14034486C (SepConstrainByMandatory.c)
 *     SeLogAccessFailure @ 0x140346E78 (SeLogAccessFailure.c)
 *     SepLpacCausedAccessFailure @ 0x1403564A8 (SepLpacCausedAccessFailure.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     SeFreeCapturedObjectTypeList @ 0x140590988 (SeFreeCapturedObjectTypeList.c)
 *     SepBuildCapeSecurityDescriptor @ 0x140590A9C (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x140590B40 (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x140590BF8 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x140590D58 (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x140590E6C (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCapTable @ 0x140590EC0 (SepRmDereferenceCapTable.c)
 *     SepExamineGlobalSaclEx @ 0x140591A58 (SepExamineGlobalSaclEx.c)
 *     SepRmReferenceFindCap @ 0x140592984 (SepRmReferenceFindCap.c)
 *     SeLockSubjectContext @ 0x1405F3C80 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405F3CE0 (SeUnlockSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     SepProbeAndCaptureString_U @ 0x140628538 (SepProbeAndCaptureString_U.c)
 *     SeReleaseSecurityDescriptor @ 0x140628670 (SeReleaseSecurityDescriptor.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406286A0 (SepAdtAuditObjectAccessWithContext.c)
 *     SeCheckAuditPrivilege @ 0x140628954 (SeCheckAuditPrivilege.c)
 *     SeCaptureSid @ 0x1406289EC (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140628AF0 (SeReleaseSid.c)
 *     SeCaptureSecurityDescriptor @ 0x14067DCA0 (SeCaptureSecurityDescriptor.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14068D57C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x14068D710 (SepAdtAuditThisEventWithContext.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091C058 (SepAdtOpenObjectAuditAlarm.c)
 *     SepExamineSaclEx @ 0x14091E900 (SepExamineSaclEx.c)
 *     SepAuditFailed @ 0x1409220D0 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
  int PrimaryToken; // r8d
  __int16 v132; // ax
  __int64 v133; // rdx
  unsigned int v134; // edx
  __int64 v135; // rcx
  unsigned int v136; // eax
  int v137; // r15d
  char v138; // di
  int v139; // r8d
  __int16 v140; // ax
  __int64 v141; // rdx
  unsigned int v142; // eax
  int v143; // r10d
  __int64 v144; // r8
  __int64 *v145; // r10
  __int64 v146; // rdx
  __int64 *v147; // r8
  struct _LIST_ENTRY *Blink; // rcx
  int Object; // [rsp+20h] [rbp-2C8h]
  int HandleInformation; // [rsp+28h] [rbp-2C0h]
  char v151; // [rsp+30h] [rbp-2B8h]
  unsigned int v152; // [rsp+40h] [rbp-2A8h]
  unsigned int v153; // [rsp+40h] [rbp-2A8h]
  char v154; // [rsp+A0h] [rbp-248h]
  unsigned __int8 v155; // [rsp+A1h] [rbp-247h] BYREF
  char v156; // [rsp+A2h] [rbp-246h]
  unsigned __int8 v157; // [rsp+A3h] [rbp-245h] BYREF
  char v158; // [rsp+A4h] [rbp-244h]
  char v159; // [rsp+A5h] [rbp-243h]
  char v160; // [rsp+A6h] [rbp-242h]
  char v161; // [rsp+A7h] [rbp-241h]
  int v162; // [rsp+A8h] [rbp-240h]
  int v163; // [rsp+B0h] [rbp-238h]
  PVOID v164; // [rsp+B8h] [rbp-230h]
  char v165; // [rsp+C0h] [rbp-228h] BYREF
  char v166; // [rsp+C1h] [rbp-227h]
  char v167; // [rsp+C2h] [rbp-226h]
  int v168; // [rsp+C4h] [rbp-224h] BYREF
  char v169; // [rsp+C8h] [rbp-220h] BYREF
  char v170; // [rsp+C9h] [rbp-21Fh] BYREF
  char v171[6]; // [rsp+CAh] [rbp-21Eh] BYREF
  PVOID v172; // [rsp+D0h] [rbp-218h] BYREF
  PVOID v173; // [rsp+D8h] [rbp-210h]
  _WORD v174[2]; // [rsp+E0h] [rbp-208h] BYREF
  int v175; // [rsp+E4h] [rbp-204h] BYREF
  unsigned int v176; // [rsp+E8h] [rbp-200h] BYREF
  char v177; // [rsp+ECh] [rbp-1FCh]
  unsigned __int8 v178; // [rsp+EDh] [rbp-1FBh] BYREF
  unsigned __int8 v179; // [rsp+EEh] [rbp-1FAh] BYREF
  char v180; // [rsp+EFh] [rbp-1F9h]
  char v181; // [rsp+F0h] [rbp-1F8h]
  char v182; // [rsp+F1h] [rbp-1F7h]
  char v183; // [rsp+F5h] [rbp-1F3h]
  int v184; // [rsp+F8h] [rbp-1F0h]
  int v185; // [rsp+FCh] [rbp-1ECh]
  int v186; // [rsp+100h] [rbp-1E8h]
  int v187; // [rsp+104h] [rbp-1E4h]
  unsigned int v188; // [rsp+108h] [rbp-1E0h]
  int v189; // [rsp+10Ch] [rbp-1DCh] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+110h] [rbp-1D8h] BYREF
  unsigned int v191; // [rsp+130h] [rbp-1B8h]
  __int64 v192; // [rsp+138h] [rbp-1B0h] BYREF
  PVOID v193; // [rsp+140h] [rbp-1A8h] BYREF
  int *v194; // [rsp+148h] [rbp-1A0h]
  PVOID v195; // [rsp+150h] [rbp-198h] BYREF
  volatile void *v196; // [rsp+158h] [rbp-190h]
  __int64 v197; // [rsp+160h] [rbp-188h] BYREF
  void *Src; // [rsp+168h] [rbp-180h]
  int v199; // [rsp+170h] [rbp-178h] BYREF
  ACL *v200; // [rsp+178h] [rbp-170h]
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v201; // [rsp+180h] [rbp-168h] BYREF
  volatile void *Address; // [rsp+188h] [rbp-160h]
  PVOID v203; // [rsp+190h] [rbp-158h] BYREF
  int v204; // [rsp+198h] [rbp-150h]
  PVOID P; // [rsp+1A0h] [rbp-148h] BYREF
  PVOID v206; // [rsp+1A8h] [rbp-140h] BYREF
  int v207[2]; // [rsp+1B0h] [rbp-138h] BYREF
  PACCESS_TOKEN v208; // [rsp+1B8h] [rbp-130h]
  _BYTE *v209; // [rsp+1C0h] [rbp-128h]
  int v210; // [rsp+1C8h] [rbp-120h] BYREF
  int v211; // [rsp+1CCh] [rbp-11Ch] BYREF
  __int64 v212; // [rsp+1D0h] [rbp-118h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+1D8h] [rbp-110h]
  PVOID v214; // [rsp+1E0h] [rbp-108h] BYREF
  unsigned __int64 v215; // [rsp+1E8h] [rbp-100h]
  PVOID v216; // [rsp+1F0h] [rbp-F8h] BYREF
  void *v217; // [rsp+1F8h] [rbp-F0h]
  __int64 v218; // [rsp+200h] [rbp-E8h]
  __int64 v219; // [rsp+208h] [rbp-E0h]
  void *v220; // [rsp+220h] [rbp-C8h]
  __int128 v221; // [rsp+228h] [rbp-C0h] BYREF
  void **v222; // [rsp+238h] [rbp-B0h]
  __int64 v223; // [rsp+240h] [rbp-A8h]
  __int64 v224; // [rsp+248h] [rbp-A0h]
  _OWORD SecurityDescriptor[2]; // [rsp+250h] [rbp-98h] BYREF
  __int64 v226; // [rsp+270h] [rbp-78h]
  __int128 v227; // [rsp+278h] [rbp-70h] BYREF
  __int64 v228; // [rsp+288h] [rbp-60h]
  int v229; // [rsp+290h] [rbp-58h]
  __int128 v230; // [rsp+298h] [rbp-50h] BYREF

  v218 = a4;
  v217 = a1;
  v208 = a1;
  v212 = a2;
  v222 = a3;
  v223 = a4;
  v219 = a5;
  v224 = a6;
  Src = a7;
  v215 = a11;
  v163 = a12;
  v19 = a13;
  v196 = a14;
  v20 = (unsigned __int64)a15;
  Address = a15;
  v209 = a16;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v21 = 0LL;
  v162 = 0;
  v176 = 0;
  v22 = 0LL;
  v164 = 0LL;
  v166 = 0;
  v168 = -1073741823;
  v210 = 0;
  v173 = 0LL;
  v211 = 0;
  v194 = 0LL;
  v187 = 0;
  v184 = 0;
  v183 = 0;
  P = 0LL;
  v195 = 0LL;
  v206 = 0LL;
  v172 = 0LL;
  v197 = 0LL;
  v192 = 0LL;
  v175 = 0;
  v230 = 0LL;
  v203 = 0LL;
  v155 = 0;
  v157 = 0;
  v171[0] = 0;
  v165 = 0;
  v180 = 0;
  v161 = 0;
  v158 = 0;
  v178 = 1;
  v179 = 0;
  DmaAdapter = 0LL;
  v220 = 0LL;
  v181 = 0;
  v221 = 0LL;
  v207[1] = 0;
  v200 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v226 = 0LL;
  v201 = 0LL;
  v167 = 0;
  v160 = 0;
  v156 = 0;
  v182 = 0;
  v174[0] = 999;
  v227 = 0LL;
  v228 = 0LL;
  v229 = 0;
  v159 = 0;
  v186 = 0;
  v193 = 0LL;
  v189 = 0;
  v185 = 0;
  v177 = 0;
  v169 = 0;
  v170 = 0;
  v214 = 0LL;
  v199 = -1;
  v207[0] = -1;
  v23 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v154 = v23;
  v171[1] = v23;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a9 )
  {
    if ( a9 != 1 )
    {
      v27 = -1073741811;
      goto LABEL_372;
    }
    v204 = 7;
  }
  else
  {
    v204 = 2;
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
    v28 = (unsigned int *)v172;
    goto LABEL_117;
  }
LABEL_6:
  if ( a17 )
  {
    if ( !v163 || (unsigned int)v163 > 0x1000 )
    {
      v27 = -1073741811;
      v162 = -1073741811;
      goto LABEL_19;
    }
    ProbeForWrite(Address, 4LL * (unsigned int)v163, 4u);
    ProbeForWrite(v196, 4LL * (unsigned int)v163, 4u);
  }
  else
  {
    v25 = v20;
    if ( v20 >= 0x7FFFFFFF0000LL )
      v25 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v25 = *(_DWORD *)v25;
    v26 = (__int64)v196;
    if ( (unsigned __int64)v196 >= 0x7FFFFFFF0000LL )
      v26 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v26 = *(_DWORD *)v26;
  }
  if ( (v19 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v230 = *(_OWORD *)v19;
  ClientToken = SubjectContext.ClientToken;
  v27 = v162;
LABEL_19:
  if ( v27 < 0 )
    goto LABEL_188;
  if ( !a3 )
  {
LABEL_21:
    if ( !ClientToken )
      ClientToken = SubjectContext.PrimaryToken;
    v208 = ClientToken;
    if ( (unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v23) )
    {
LABEL_24:
      if ( (a8 & 0xF0000000) != 0 )
      {
        v27 = -1073741594;
        v22 = (char *)v164;
        v21 = (int *)v164;
        goto LABEL_372;
      }
      v27 = SeCaptureSecurityDescriptor(a6, v23, 1, 0, (__int64)&v172);
      v162 = v27;
      if ( v27 < 0 )
      {
        v28 = 0LL;
        goto LABEL_191;
      }
      v28 = (unsigned int *)v172;
      if ( v172 )
      {
        v29 = *((_WORD *)v172 + 1);
        if ( v29 >= 0 )
        {
          v31 = (char *)*((_QWORD *)v172 + 1);
        }
        else
        {
          v30 = *((unsigned int *)v172 + 1);
          if ( !(_DWORD)v30 )
            goto LABEL_193;
          v31 = (char *)v172 + v30;
        }
        if ( v31 )
        {
          if ( v29 >= 0 )
          {
            v33 = (char *)*((_QWORD *)v172 + 2);
          }
          else
          {
            v32 = *((unsigned int *)v172 + 2);
            if ( !(_DWORD)v32 )
              goto LABEL_193;
            v33 = (char *)v172 + v32;
          }
          if ( v33 )
          {
            v34 = (__int64)v209;
            if ( (unsigned __int64)v209 >= 0x7FFFFFFF0000LL )
              v34 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v34 = *(_BYTE *)v34;
            v27 = SepProbeAndCaptureString_U(v217, &P);
            v162 = v27;
            if ( v27 >= 0 )
            {
              v27 = SepProbeAndCaptureString_U(v218, &v195);
              v162 = v27;
              if ( v27 >= 0 )
              {
                v27 = SepProbeAndCaptureString_U(v219, &v206);
                v162 = v27;
              }
            }
            v35 = v159;
            if ( v27 >= 0 )
            {
              if ( Src )
              {
                v27 = SeCaptureSid(Src, Object, 1, (__int64)&v197);
                if ( v27 < 0 )
                {
                  v197 = 0LL;
                  v22 = (char *)v164;
                  v21 = (int *)v164;
                  goto LABEL_372;
                }
              }
              v27 = SeCaptureObjectTypeList(v215, v163, v23, &v192);
              if ( v27 >= 0 )
              {
                v28 = (unsigned int *)v172;
                v27 = SepTrustLevelCheck(v36, (__int64)v172, &SubjectContext, 0LL, 0LL, 1, &v199);
                if ( v27 < 0 )
                {
LABEL_192:
                  v22 = (char *)v164;
                  v21 = (int *)v164;
                  goto LABEL_117;
                }
                v37 = a8;
                v27 = SepFilterToDiscretionary(&v199, a8);
                v162 = v27;
                if ( v27 < 0 )
                {
                  v169 = 1;
LABEL_48:
                  v38 = a18;
                  if ( v27 < 0 )
                    goto LABEL_54;
                  v27 = SepMandatoryIntegrityCheck(
                          (int *)&v230,
                          (__int64)v28,
                          0LL,
                          (__int64)ClientToken,
                          1,
                          a18,
                          (__int64)&v221);
                  if ( v27 >= 0 )
                  {
                    v39 = SepMandatoryToDiscretionary(&v221, v37);
                    v27 = v39;
                    v162 = v39;
                    if ( (v39 < 0 || (v37 & 0x2000000) != 0)
                      && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0
                      && HIDWORD(v221) <= 0x2000 )
                    {
                      v35 = 1;
                      v159 = 1;
                    }
                    if ( v39 >= 0 || v35 )
                    {
                      v27 = SePrivilegePolicyCheck(&a8, &v175, (__int64 *)&SubjectContext, 0, (__int64)&v203, v154);
                      v162 = v27;
                      v37 = a8;
                      if ( !a8 )
                      {
                        v85 = (unsigned __int8)v185;
                        v40 = v175;
                        if ( v175 )
                          v85 = 1;
                        v185 = v85;
LABEL_55:
                        SeLockSubjectContext(&SubjectContext);
                        if ( v27 < 0 && !v159 )
                        {
                          v157 = 1;
                          v168 = v27;
                          if ( !a17 )
                          {
                            v164 = &v176;
                            v45 = &v168;
                            goto LABEL_71;
                          }
                          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v163, 0x61476553u);
                          v164 = PoolWithTag;
                          if ( !PoolWithTag )
                          {
                            SeUnlockSubjectContext(&SubjectContext);
                            v27 = -1073741670;
                            v23 = v154;
                            v22 = 0LL;
                            v21 = (int *)v173;
                            goto LABEL_117;
                          }
                          v166 = 1;
                          v45 = (int *)&PoolWithTag[4 * v163];
                          v87 = 0;
                          v88 = v163;
                          while ( v87 < v88 )
                          {
                            v89 = v87;
                            *(_DWORD *)&PoolWithTag[v89 * 4] = v176;
                            v45[v89] = v168;
                            ++v87;
                          }
                          goto LABEL_211;
                        }
                        IsOwner = SepTokenIsOwner((__int64)ClientToken, (__int64)v28, v41, v38);
                        v156 = IsOwner;
                        v28 = (unsigned int *)v172;
                        if ( !SepRmEnforceCap )
                          goto LABEL_57;
                        v90 = *((_WORD *)v172 + 1);
                        if ( (v90 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
                          goto LABEL_57;
                        if ( v90 >= 0 )
                        {
                          v92 = (ACL *)*((_QWORD *)v172 + 3);
                        }
                        else
                        {
                          v91 = *((unsigned int *)v172 + 3);
                          if ( !(_DWORD)v91 )
                          {
                            v200 = 0LL;
LABEL_218:
                            IsOwner = v156;
LABEL_57:
                            v27 = v162;
                            goto LABEL_58;
                          }
                          v92 = (ACL *)((char *)v172 + v91);
                        }
                        v200 = v92;
                        if ( v92 )
                        {
                          ScopedPolicySid = SepGetScopedPolicySid(v92);
                          if ( ScopedPolicySid )
                          {
                            Cap = SepRmReferenceFindCap(ScopedPolicySid, &v201);
                            v95 = v201;
                            if ( Cap < 0 )
                              v95 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
                            v201 = v95;
                            v27 = 0;
                            v162 = 0;
                            v167 = 1;
                            IsOwner = v156;
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
                                v40 = v175 | 0x60000;
                              }
                              else
                              {
                                v76 = v37 & 0x60000;
                                v40 = v175 | v37 & 0x60000;
                              }
                              v186 = v76;
                              v175 = v40;
                              v37 &= 0xFFF9FFFF;
                              a8 = v37;
                            }
                            else
                            {
                              v40 = v175;
                            }
                            if ( !v37
                              && (!v167 || (_BYTE)v185)
                              && ((*((_DWORD *)ClientToken + 50) & 0x2000) != 0 || !v186) )
                            {
                              v176 = v40;
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
                              v155 = v83;
                              v157 = v82;
                              v168 = v81;
                              if ( !a17 )
                              {
                                v164 = &v176;
                                v45 = &v168;
LABEL_71:
                                if ( !ClientToken )
                                  goto LABEL_78;
                                if ( v169 || v170 )
                                  goto LABEL_321;
                                if ( !HIDWORD(v227) && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 )
                                {
                                  if ( v27 < 0 )
                                    goto LABEL_78;
                                  if ( v168 < 0 || HIBYTE(v228) )
                                  {
LABEL_321:
                                    CurrentThread = KeGetCurrentThread();
                                    --CurrentThread->KernelApcDisable;
                                    ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
                                    v128 = v168 >= 0;
                                    v129 = a8 | v175;
                                    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)&SubjectContext);
                                    SeLogAccessFailure(
                                      (__int64)ClientToken,
                                      0LL,
                                      0LL,
                                      TokenTrustLevel,
                                      (ULONGLONG)v172,
                                      v129,
                                      v128,
                                      0);
                                    ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
                                    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                                    v37 = a8;
                                    v27 = v162;
                                    v28 = (unsigned int *)v172;
                                    v40 = v175;
                                  }
                                }
                                if ( v27 >= 0
                                  && v168 < 0
                                  && !HIDWORD(v227)
                                  && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0
                                  && SepLpacCausedAccessFailure((__int64)&v227, v37) )
                                {
                                  SepLogLpacAccessFailure();
                                }
LABEL_78:
                                if ( v180 )
                                  goto LABEL_90;
                                v50 = v204;
                                if ( v204 == 2 )
                                {
                                  if ( v155 )
                                  {
                                    LOBYTE(HandleInformation) = 0;
                                    v161 = SepAdtAuditObjectAccessWithContext(
                                             0LL,
                                             v195,
                                             v155,
                                             0LL,
                                             &SubjectContext,
                                             HandleInformation,
                                             v174);
                                  }
                                  if ( !v157 )
                                  {
LABEL_83:
                                    v51 = v158;
                                    goto LABEL_84;
                                  }
                                  LOBYTE(HandleInformation) = 0;
                                  v51 = SepAdtAuditObjectAccessWithContext(
                                          0LL,
                                          v195,
                                          0LL,
                                          v157,
                                          &SubjectContext,
                                          HandleInformation,
                                          v174);
                                  v158 = v51;
                                }
                                else
                                {
                                  if ( v155 )
                                  {
                                    v174[0] = 151;
                                    v161 = SepAdtAuditThisEventWithContext(151LL, v155, 0LL, &SubjectContext);
                                  }
                                  if ( !v157 )
                                    goto LABEL_83;
                                  v174[0] = 151;
                                  v51 = SepAdtAuditThisEventWithContext(151LL, 0LL, v157, &SubjectContext);
                                  v158 = v51;
                                }
LABEL_84:
                                v52 = v161;
                                if ( v161 || v51 )
                                {
                                  PrimaryToken = (int)SubjectContext.PrimaryToken;
                                  if ( SubjectContext.ClientToken )
                                    PrimaryToken = (int)SubjectContext.ClientToken;
                                  v132 = *((_WORD *)v28 + 1);
                                  if ( (v132 & 0x10) != 0 )
                                  {
                                    if ( v132 >= 0 )
                                    {
                                      v133 = *((_QWORD *)v28 + 3);
                                    }
                                    else
                                    {
                                      v134 = v28[3];
                                      if ( v134 )
                                        LODWORD(v133) = (_DWORD)v28 + v134;
                                      else
                                        LODWORD(v133) = 0;
                                    }
                                  }
                                  else
                                  {
                                    LODWORD(v133) = 0;
                                  }
                                  if ( (v132 & 0x10) != 0 )
                                  {
                                    if ( v132 >= 0 )
                                    {
                                      v135 = *((_QWORD *)v28 + 3);
                                    }
                                    else
                                    {
                                      v136 = v28[3];
                                      if ( v136 )
                                        LODWORD(v135) = (_DWORD)v28 + v136;
                                      else
                                        LODWORD(v135) = 0;
                                    }
                                  }
                                  else
                                  {
                                    LODWORD(v135) = 0;
                                  }
                                  v137 = v37 | v40;
                                  v53 = (int *)v164;
                                  v138 = a17;
                                  SepExamineSaclEx(
                                    v135,
                                    v133,
                                    PrimaryToken,
                                    v137,
                                    v192,
                                    v163,
                                    a17,
                                    (__int64)v45,
                                    (__int64)v164,
                                    v197,
                                    v156,
                                    (__int64)v171,
                                    (__int64)&v165);
                                  v139 = (int)SubjectContext.PrimaryToken;
                                  if ( SubjectContext.ClientToken )
                                    v139 = (int)SubjectContext.ClientToken;
                                  v140 = *((_WORD *)v28 + 1);
                                  if ( (v140 & 0x10) != 0 )
                                  {
                                    if ( v140 >= 0 )
                                    {
                                      v141 = *((_QWORD *)v28 + 3);
                                    }
                                    else
                                    {
                                      v142 = v28[3];
                                      if ( v142 )
                                        LODWORD(v141) = (_DWORD)v28 + v142;
                                      else
                                        LODWORD(v141) = 0;
                                    }
                                  }
                                  else
                                  {
                                    LODWORD(v141) = 0;
                                  }
                                  v151 = v138;
                                  v54 = v163;
                                  SepExamineGlobalSaclEx(
                                    (__int64)v195,
                                    v141,
                                    v139,
                                    v137,
                                    v192,
                                    v163,
                                    v151,
                                    (__int64)v45,
                                    (__int64)v53,
                                    v197,
                                    v156,
                                    v171,
                                    &v165);
                                  v52 = v161;
                                  v51 = v158;
                                }
                                else
                                {
                                  v53 = (int *)v164;
                                  v54 = v163;
                                }
                                if ( v171[0] || v165 )
                                {
                                  v143 = (unsigned __int8)v184;
                                  if ( v155 )
                                    v143 = 1;
                                  v184 = v143;
                                  v55 = a17;
                                  if ( v171[0] && v52 )
                                  {
                                    v144 = (__int64)v53;
                                    if ( !a17 )
                                      v144 = 0LL;
                                    v145 = &v212;
                                    if ( !v155 )
                                      LODWORD(v145) = 0;
                                    v28 = (unsigned int *)v172;
                                    SepAdtOpenObjectAuditAlarm(
                                      v174[0],
                                      (int)P,
                                      (int)v145,
                                      (int)v195,
                                      (__int64)v206,
                                      v172,
                                      (__int64)SubjectContext.ClientToken,
                                      (__int64)SubjectContext.PrimaryToken,
                                      *v53,
                                      *v53,
                                      (__int64)v203,
                                      1,
                                      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                                      v50,
                                      v192,
                                      v54,
                                      v144,
                                      0LL,
                                      0LL);
                                    v51 = v158;
                                  }
                                  if ( v165 && v51 )
                                  {
                                    v146 = (__int64)v53;
                                    if ( !v55 )
                                      v146 = 0LL;
                                    v147 = &v212;
                                    if ( !v155 )
                                      LODWORD(v147) = 0;
                                    v28 = (unsigned int *)v172;
                                    SepAdtOpenObjectAuditAlarm(
                                      v174[0],
                                      (int)P,
                                      (int)v147,
                                      (int)v195,
                                      (__int64)v206,
                                      v172,
                                      (__int64)SubjectContext.ClientToken,
                                      (__int64)SubjectContext.PrimaryToken,
                                      a8,
                                      a8,
                                      (__int64)v203,
                                      0,
                                      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                                      v50,
                                      v192,
                                      v54,
                                      v146,
                                      0LL,
                                      0LL);
                                  }
                                  goto LABEL_91;
                                }
                                if ( v203 && v155 )
                                {
                                  SepAdtPrivilegeObjectAuditAlarm(
                                    (_DWORD)P,
                                    (_DWORD)v195,
                                    (_DWORD)v206,
                                    (unsigned int)&v212,
                                    (__int64)SubjectContext.ClientToken,
                                    (__int64)SubjectContext.PrimaryToken,
                                    (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                                    a8,
                                    (__int64)v203,
                                    v155);
                                  v56 = 0;
                                  v28 = (unsigned int *)v172;
                                  v55 = a17;
LABEL_92:
                                  SeUnlockSubjectContext(&SubjectContext);
                                  if ( v55 )
                                  {
                                    v59 = 0;
                                    v191 = 0;
                                    if ( v45 )
                                    {
                                      v22 = (char *)v164;
                                      v66 = Address;
                                      v67 = v196;
                                      while ( v59 < v163 )
                                      {
                                        v68 = v59;
                                        v66[v68] = v45[v68];
                                        v67[v68] = *(_DWORD *)&v22[v68 * 4];
                                        if ( SepRmEnforceCap && v160 && v45[v68] >= 0 )
                                        {
                                          v66[v59] = v194[v59];
                                          v67[v59] &= *((_DWORD *)v173 + v59);
                                        }
                                        v191 = ++v59;
                                        v28 = (unsigned int *)v172;
                                      }
                                      goto LABEL_96;
                                    }
                                    v60 = v168;
                                    v61 = (char *)Address;
                                    v62 = (char *)v196;
                                    v63 = v160;
                                    while ( v59 < v163 )
                                    {
                                      v64 = (int *)&v61[4 * v59];
                                      *v64 = v60;
                                      v65 = (unsigned int *)&v62[4 * v59];
                                      *v65 = v176;
                                      if ( SepRmEnforceCap && v63 )
                                      {
                                        v60 = v168;
                                        if ( v168 >= 0 )
                                        {
                                          *v64 = v168;
                                          *v65 &= v176;
                                        }
                                      }
                                      else
                                      {
                                        v60 = v168;
                                      }
                                      v191 = ++v59;
                                      v28 = (unsigned int *)v172;
                                    }
                                  }
                                  else
                                  {
                                    v57 = Address;
                                    *(_DWORD *)Address = v168;
                                    v58 = v196;
                                    *(_DWORD *)v196 = v176;
                                    if ( SepRmEnforceCap && v160 && v168 >= 0 )
                                    {
                                      *v57 = *v194;
                                      v21 = (int *)v173;
                                      *v58 &= *(_DWORD *)v173;
                                      v28 = (unsigned int *)v172;
                                      v22 = (char *)v164;
                                      goto LABEL_116;
                                    }
                                    v28 = (unsigned int *)v172;
                                  }
                                  v22 = (char *)v164;
LABEL_96:
                                  v21 = (int *)v173;
LABEL_116:
                                  *v209 = v56;
                                  v27 = 0;
                                  v162 = 0;
                                  v23 = v154;
                                  goto LABEL_117;
                                }
LABEL_90:
                                v55 = a17;
LABEL_91:
                                v56 = v184;
                                goto LABEL_92;
                              }
                              v96 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v163, 0x61476553u);
                              v164 = v96;
                              if ( v96 )
                              {
                                v166 = 1;
                                v45 = (int *)&v96[4 * v163];
                                v97 = 0;
                                v98 = v163;
                                while ( v97 < v98 )
                                {
                                  v99 = v97;
                                  *(_DWORD *)&v96[v99 * 4] = v176;
                                  v45[v99] = v168;
                                  ++v97;
                                }
LABEL_211:
                                v37 = a8;
                                goto LABEL_71;
                              }
LABEL_238:
                              v27 = -1073741670;
                              SeUnlockSubjectContext(&SubjectContext);
                              v23 = v154;
                              v22 = (char *)v164;
                              v21 = (int *)v173;
                              goto LABEL_117;
                            }
                            v43 = a17;
                            if ( a17 )
                            {
                              v44 = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v163, 0x61476553u);
                              v164 = v44;
                              if ( !v44 )
                                goto LABEL_238;
                              v166 = 1;
                              v45 = &v44[v163];
                              v43 = a17;
                            }
                            else
                            {
                              v44 = &v176;
                              v164 = &v176;
                              v45 = &v168;
                            }
                            Src = v45;
                            LODWORD(v227) = v186;
                            v152 = v40;
                            v46 = (unsigned int)v163;
                            SepAccessCheck(
                              (__int64)v28,
                              (unsigned __int8 *)v197,
                              (__int64)SubjectContext.PrimaryToken,
                              (__int64)ClientToken,
                              v37,
                              (__int128 *)v192,
                              v163,
                              &v230,
                              v152,
                              v154,
                              v44,
                              0LL,
                              v45,
                              v43,
                              v156,
                              (int *)&v227,
                              (__int64 *)&v193,
                              (char *)&v155,
                              (char *)&v157,
                              v38);
                            if ( SepRmEnforceCap && *v45 >= 0 && v167 )
                            {
                              if ( v43 )
                              {
                                LODWORD(v28) = v46;
                                v100 = (int *)ExAllocatePoolWithTag(PagedPool, 8 * v46, 0x61476553u);
                                v21 = v100;
                                v173 = v100;
                                if ( !v100 )
                                {
                                  SeUnlockSubjectContext(&SubjectContext);
                                  SeReleaseSubjectContext(&SubjectContext);
                                  v27 = -1073741670;
                                  v23 = v154;
                                  v22 = (char *)v164;
                                  goto LABEL_372;
                                }
                                v101 = &v100[v46];
                              }
                              else
                              {
                                v21 = &v210;
                                v173 = &v210;
                                v101 = &v211;
                              }
                              v194 = v101;
                              if ( v163 )
                              {
                                v27 = SepCopyObjectTypeList(v192, v163, &v214);
                                v162 = v27;
                                if ( v27 < 0 )
                                {
                                  v23 = v154;
                                  v22 = (char *)v164;
                                  goto LABEL_372;
                                }
                              }
                              else
                              {
                                v27 = v162;
                              }
                              LOBYTE(v28) = 0;
                              v185 = (int)v28;
                              v102 = 0;
                              v37 = a8;
                              v40 = v175;
                              v47 = v163;
                              while ( 1 )
                              {
                                v188 = v102;
                                if ( v102 >= HIDWORD(v201[2].Linkage.Blink) )
                                  break;
                                v103 = *(&v201[2].Signature + v102);
                                v215 = v103;
                                if ( !*(_QWORD *)(v103 + 24) )
                                  goto LABEL_291;
                                v104 = v193;
                                if ( !v193 )
                                {
                                  LODWORD(v28) = (unsigned __int8)v28;
                                  if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v200, (__int64 *)&v193) < 0 )
                                    LODWORD(v28) = 1;
                                  v185 = (int)v28;
                                  v104 = v193;
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
                                         &v189);
                                v27 = v110;
                                v162 = v110;
                                v111 = v189;
                                if ( v189 == 1 )
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
                                          (__int64)v193,
                                          v116,
                                          v115,
                                          v114,
                                          v113,
                                          *(_DWORD **)(v103 + 24),
                                          *(_DWORD *)(v103 + 16),
                                          1u,
                                          1u,
                                          &v189);
                                  v162 = v27;
                                  if ( v27 < 0 )
                                    goto LABEL_304;
                                  v111 = v189;
                                }
                                if ( (_BYTE)v185 || v111 == 1 )
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
                                          *(unsigned __int8 **)(v215 + 32),
                                          v200);
                                  v162 = v27;
                                  if ( v27 < 0 )
                                  {
LABEL_304:
                                    v23 = v154;
                                    v22 = (char *)v164;
                                    v21 = (int *)v173;
                                    goto LABEL_372;
                                  }
                                  v153 = v118;
                                  v119 = v214;
                                  SepAccessCheck(
                                    (__int64)SecurityDescriptor,
                                    (unsigned __int8 *)v197,
                                    (__int64)SubjectContext.PrimaryToken,
                                    (__int64)SubjectContext.ClientToken,
                                    v117,
                                    (__int128 *)v214,
                                    v163,
                                    &v230,
                                    v153,
                                    v154,
                                    (unsigned int *)v173,
                                    0LL,
                                    v194,
                                    a17,
                                    v156,
                                    (int *)&v227,
                                    (__int64 *)&v193,
                                    (char *)&v178,
                                    (char *)&v179,
                                    v38);
                                  v120 = *(_DWORD *)v173;
                                  if ( v160 )
                                    v120 = v187 & *(_DWORD *)v173;
                                  v187 = v120;
                                  v47 = v163;
                                  if ( v119 )
                                    SepMergeObjectTypeListAccesses(v192, (__int64)v119, v163);
                                  v160 = 1;
                                }
                                else
                                {
                                  v47 = v163;
                                }
                                v102 = v188 + 1;
                                LOBYTE(v28) = v185;
                              }
                              v155 = v178;
                              v157 = v179;
                              v121 = v187;
                              *(_DWORD *)v173 &= v187;
                              v45 = (int *)Src;
                              if ( !v121 )
                              {
                                *v194 = -1073741790;
                                v155 = 0;
                                v157 = 1;
                              }
                            }
                            else
                            {
                              v37 = a8;
                              v27 = v162;
                              v40 = v175;
                              v47 = v163;
                            }
                            if ( (v37 & 0x2000000) != 0 )
                            {
                              if ( !v159
                                || !*(_WORD *)((char *)&v228 + 5)
                                && !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
                              {
                                if ( a17 )
                                  v77 = v47;
                                else
                                  v77 = 0;
                                SepConstrainByMandatory((__int64)&v221, v37, (char *)v164, (char *)v45, 0LL, v77);
                              }
                            }
                            else if ( v159 && !*(_WORD *)((char *)&v228 + 5) )
                            {
                              if ( !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() || HIDWORD(v227) )
                              {
                                v155 = 0;
                                v157 = 1;
                                v123 = 0;
                                v176 = 0;
                                v168 = v122;
                                v48 = a17;
                                if ( a17 )
                                {
                                  v124 = 0;
                                  v49 = (char *)v164;
                                  v125 = v163;
                                  while ( v124 < v125 )
                                  {
                                    v126 = v124;
                                    *(_DWORD *)&v49[v126 * 4] = v123;
                                    v45[v126] = v168;
                                    ++v124;
                                    v123 = v176;
                                  }
                                  v48 = a17;
                                  goto LABEL_69;
                                }
LABEL_68:
                                v49 = (char *)v164;
LABEL_69:
                                if ( (v37 & 0x2000000) != 0 )
                                {
                                  v78 = v163;
                                  if ( v48 )
                                    v79 = v163;
                                  else
                                    v79 = 0;
                                  SepConstrainByConstraintMask(v199, v37, v49, (char *)v45, 0LL, v79, &v169);
                                  if ( a17 )
                                    v80 = v78;
                                  else
                                    v80 = 0;
                                  SepConstrainByConstraintMask(v207[0], v37, (char *)v164, (char *)v45, 0LL, v80, &v170);
                                }
                                v28 = (unsigned int *)v172;
                                goto LABEL_71;
                              }
                              HIBYTE(v228) = 1;
                              v155 = 1;
                              v157 = 0;
                              v176 = v37;
                              v168 = 0;
                            }
                            v48 = a17;
                            goto LABEL_68;
                          }
                        }
                        goto LABEL_218;
                      }
                    }
LABEL_54:
                    v40 = v175;
                    goto LABEL_55;
                  }
                  goto LABEL_191;
                }
                v27 = SepFilterCheck((__int64)v28, (__int64 *)&v193, (__int64)ClientToken, 1, v207);
                if ( v27 >= 0 )
                {
                  v27 = SepFilterToDiscretionary(v207, v37);
                  v162 = v27;
                  if ( v27 < 0 )
                    v170 = 1;
                  goto LABEL_48;
                }
LABEL_191:
                v23 = v154;
                goto LABEL_192;
              }
            }
            goto LABEL_188;
          }
        }
      }
LABEL_193:
      v27 = -1073741703;
      v22 = (char *)v164;
      v21 = (int *)v164;
      goto LABEL_117;
    }
    if ( (a10 & 1) != 0 )
    {
      v180 = 1;
      goto LABEL_24;
    }
    v27 = -1073741727;
LABEL_188:
    v22 = (char *)v164;
    v21 = (int *)v164;
    goto LABEL_372;
  }
  v84 = *a3;
  v216 = 0LL;
  v27 = ObReferenceObjectByHandle(v84, 8u, (POBJECT_TYPE)SeTokenObjectType, v23, &v216, 0LL);
  DmaAdapter = (PADAPTER_OBJECT)v216;
  if ( v27 >= 0 )
  {
    v220 = ClientToken;
    ClientToken = v216;
    SubjectContext.ClientToken = v216;
    v181 = 1;
    goto LABEL_21;
  }
  DmaAdapter = 0LL;
  v28 = (unsigned int *)v172;
  v22 = (char *)v164;
  v21 = (int *)v164;
  if ( v27 != -1073741816 )
    v182 = 1;
LABEL_117:
  if ( v181 )
  {
    HalPutDmaAdapter(DmaAdapter);
    SubjectContext.ClientToken = v220;
  }
  if ( v203 )
    ExFreePoolWithTag(v203, 0);
  SeReleaseSubjectContext(&SubjectContext);
  SeReleaseSecurityDescriptor(v28, v23, 0LL, v69);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v195 )
    ExFreePoolWithTag(v195, 0);
  if ( v206 )
    ExFreePoolWithTag(v206, 0);
  if ( v197 )
  {
    LOBYTE(v70) = 1;
    SeReleaseSid(v197, v23, v70, v71);
  }
  if ( v192 )
    SeFreeCapturedObjectTypeList((void *)v192);
  if ( v166 )
  {
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
  }
  if ( v167 )
  {
    Blink = v201[1].Linkage.Blink;
    if ( Blink )
      SepRmDereferenceCapTable((volatile signed __int64 *)Blink);
  }
  if ( v214 )
    ExFreePoolWithTag(v214, 0);
  SepFreeResourceInfo(v193);
  if ( v27 == -1073741670 || v182 )
    SepAuditFailed((unsigned int)v27);
  return (unsigned int)v27;
}
