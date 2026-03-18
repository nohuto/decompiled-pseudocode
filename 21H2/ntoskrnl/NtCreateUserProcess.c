/*
 * XREFs of NtCreateUserProcess @ 0x14066D650
 * Callers:
 *     <none>
 * Callees:
 *     PtrToUlong @ 0x140251BD0 (PtrToUlong.c)
 *     PspUnlockProcessExclusive @ 0x14025302C (PspUnlockProcessExclusive.c)
 *     PsIsSystemProcess @ 0x1402820E0 (PsIsSystemProcess.c)
 *     RtlGetExtendedContextLength2 @ 0x1402956D0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x140297D10 (RtlInitializeExtendedContext2.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     PsGetProcessSignatureLevel @ 0x1403A1460 (PsGetProcessSignatureLevel.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwSystemDebugControl @ 0x14041F080 (ZwSystemDebugControl.c)
 *     _alloca_probe @ 0x14042A4D0 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14066CFE4 (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x14066D038 (PspCheckForInvalidAccessByProtection.c)
 *     PspInsertProcess @ 0x14066D0AC (PspInsertProcess.c)
 *     MmCreateSpecialImageSection @ 0x14066D4BC (MmCreateSpecialImageSection.c)
 *     SeDeleteCodeIntegrityOriginClaimForFileObject @ 0x14066D620 (SeDeleteCodeIntegrityOriginClaimForFileObject.c)
 *     IoCreateFileEx @ 0x14066E670 (IoCreateFileEx.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14066EEA0 (FsRtlFreeExtraCreateParameterList.c)
 *     PspDeleteMemoryPartitionContext @ 0x14066EFCC (PspDeleteMemoryPartitionContext.c)
 *     PspUpdateCreateInfo @ 0x14066EFE8 (PspUpdateCreateInfo.c)
 *     PspCreateUserProcessEcp @ 0x14066F248 (PspCreateUserProcessEcp.c)
 *     PspGetMemoryPartitionContext @ 0x14066F440 (PspGetMemoryPartitionContext.c)
 *     SeQuerySigningPolicy @ 0x14066F4C0 (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x14066F864 (PspReferenceTokenForNewProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x14066F8EC (PspEstimateNewProcessServerSilo.c)
 *     PspCaptureCreateInfo @ 0x1406703B8 (PspCaptureCreateInfo.c)
 *     PspBuildCreateProcessContext @ 0x140670488 (PspBuildCreateProcessContext.c)
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 *     PspCaptureProcessParameters @ 0x14069D410 (PspCaptureProcessParameters.c)
 *     SeQueryServerSiloToken @ 0x1406C1480 (SeQueryServerSiloToken.c)
 *     PspValidateCreateProcessProtection @ 0x1406D6DA8 (PspValidateCreateProcessProtection.c)
 *     PspGetProcessParameterOverrides @ 0x1406D7C10 (PspGetProcessParameterOverrides.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406D833C (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspIsSiloInSilo @ 0x1406E1570 (PspIsSiloInSilo.c)
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 *     PspCreateObjectHandle @ 0x140701A98 (PspCreateObjectHandle.c)
 *     PspMapThreadCreationFlags @ 0x140701EB4 (PspMapThreadCreationFlags.c)
 *     PspDeleteCreateProcessContext @ 0x1407021EC (PspDeleteCreateProcessContext.c)
 *     PspCreateUserContext @ 0x140702C3C (PspCreateUserContext.c)
 *     PspGetContextThreadInternal @ 0x1407045D0 (PspGetContextThreadInternal.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 *     PsTerminateProcess @ 0x1407D80A4 (PsTerminateProcess.c)
 *     SeCompareSigningLevels @ 0x140811D10 (SeCompareSigningLevels.c)
 *     PspDeleteObjectAccessState @ 0x140882484 (PspDeleteObjectAccessState.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x1409CC1BC (SeDuplicateTokenAndAddOriginClaim.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtCreateUserProcess(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  _KPROCESS *Process; // rbx
  KPROCESSOR_MODE PreviousMode; // r15
  unsigned int v13; // r12d
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r13d
  int Info; // esi
  KPROCESSOR_MODE v22; // r14
  _KPROCESS *v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int8 v26; // bl
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  ULONG v30; // eax
  __int64 v31; // rcx
  int v32; // esi
  int v33; // eax
  int v34; // ecx
  PVOID v35; // rcx
  __int64 v36; // rdx
  unsigned __int8 v37; // bl
  int v38; // r8d
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  char v42; // bl
  __int64 v43; // r13
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // edx
  int v48; // r9d
  __int64 *v49; // r13
  char v50; // r11
  int v51; // r8d
  unsigned int v52; // esi
  int v53; // ecx
  unsigned __int64 v54; // rax
  void *v55; // rsp
  unsigned int v56; // edx
  __int64 v57; // rsi
  int v58; // r9d
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rsi
  bool v63; // al
  unsigned int v64; // r8d
  int v65; // r15d
  __int64 v66; // rax
  int inserted; // ebx
  __int64 ProcessServerSilo; // rax
  _OWORD *v69; // rax
  __int64 v70; // rbx
  bool IsSystemProcess; // al
  KPROCESSOR_MODE v72; // dl
  unsigned __int8 v73; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int8 v74; // [rsp+81h] [rbp+1h] BYREF
  char v75; // [rsp+82h] [rbp+2h] BYREF
  char v76; // [rsp+83h] [rbp+3h] BYREF
  char v77; // [rsp+84h] [rbp+4h] BYREF
  char v78; // [rsp+85h] [rbp+5h]
  PVOID v79; // [rsp+88h] [rbp+8h] BYREF
  KPROCESSOR_MODE v80; // [rsp+90h] [rbp+10h]
  __int64 v81; // [rsp+94h] [rbp+14h] BYREF
  char v82[4]; // [rsp+9Ch] [rbp+1Ch] BYREF
  PVOID Object; // [rsp+A0h] [rbp+20h] BYREF
  PVOID v84; // [rsp+A8h] [rbp+28h]
  void *v85; // [rsp+B0h] [rbp+30h] BYREF
  _KPROCESS *v86; // [rsp+B8h] [rbp+38h]
  __int64 v87; // [rsp+C0h] [rbp+40h] BYREF
  int v88; // [rsp+C8h] [rbp+48h]
  unsigned int v89; // [rsp+CCh] [rbp+4Ch]
  PVOID v90; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v91; // [rsp+D8h] [rbp+58h]
  __int64 v92; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v93; // [rsp+E8h] [rbp+68h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp+70h]
  __int64 v95; // [rsp+F8h] [rbp+78h] BYREF
  PVOID v96; // [rsp+100h] [rbp+80h] BYREF
  __int64 v97; // [rsp+108h] [rbp+88h]
  __int64 v98; // [rsp+110h] [rbp+90h]
  _QWORD *v99; // [rsp+118h] [rbp+98h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v101; // [rsp+150h] [rbp+D0h]
  _KPROCESS *v102; // [rsp+158h] [rbp+D8h]
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v104; // [rsp+180h] [rbp+100h]
  __int128 v105; // [rsp+188h] [rbp+108h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+198h] [rbp+118h] BYREF
  __int64 v107[2]; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v108; // [rsp+1B8h] [rbp+138h]
  _BYTE v109[80]; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v110[64]; // [rsp+210h] [rbp+190h] BYREF
  _BYTE v111[400]; // [rsp+410h] [rbp+390h] BYREF
  __int64 v112[50]; // [rsp+5A0h] [rbp+520h] BYREF
  __int64 v113[2]; // [rsp+730h] [rbp+6B0h] BYREF
  __int64 v114; // [rsp+740h] [rbp+6C0h]
  char v115; // [rsp+748h] [rbp+6C8h]

  v88 = a4;
  v89 = a3;
  v98 = a2;
  v99 = a1;
  v97 = a5;
  v101 = a6;
  v91 = a9;
  v95 = 0LL;
  *(_WORD *)((char *)v110 + 1) = 0;
  BYTE3(v110[0]) = 0;
  v81 = 0LL;
  *(_DWORD *)(&DriverContext.Size + 1) = 0;
  *(&DriverContext.Size + 3) = 0;
  IoStatusBlock = 0LL;
  v79 = 0LL;
  v96 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Object = 0LL;
  memset(v111, 0, sizeof(v111));
  v105 = 0LL;
  v76 = 0;
  v73 = 0;
  v75 = 0;
  v77 = 0;
  *(_OWORD *)v113 = 0LL;
  v114 = 0LL;
  v115 = 0;
  memset(v112, 0, sizeof(v112));
  v87 = 0LL;
  *(_DWORD *)v82 = 0;
  v93 = 0LL;
  *(_OWORD *)v107 = 0LL;
  v108 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v86 = Process;
  v102 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v80 = PreviousMode;
  v92 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v78 = 0;
  memset(&DriverContext, 0, sizeof(DriverContext));
  v104 = 0LL;
  memset(v109, 0, 0x48uLL);
  v13 = a7;
  if ( (a7 & 0xFFF97838) != 0 || (a8 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (a7 & 0x8400) == 0x8400 )
    return 3221225520LL;
  v111[388] = PreviousMode;
  if ( PreviousMode )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v99 < 0x7FFFFFFF0000LL )
      v15 = (__int64)v99;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v98 < 0x7FFFFFFF0000LL )
      v16 = v98;
    *(_QWORD *)v16 = *(_QWORD *)v16;
    v84 = v85;
  }
  if ( a5 )
  {
    if ( PreviousMode )
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v84 = v85;
    }
    if ( PreviousMode )
      v17 = *(_DWORD *)(a5 + 24) & 0x1DF2;
    else
      v17 = *(_DWORD *)(a5 + 24) & 0x11FF2;
    *(_DWORD *)&v111[384] = v17;
  }
  memset(v110, 0, 0x1F8uLL);
  if ( !a11
    || (LOBYTE(v18) = PreviousMode, result = PspBuildCreateProcessContext(a11, v18, 0LL, v110), (int)result >= 0) )
  {
    v20 = 0x20000;
    if ( (a7 & 0x40) != 0 && (v110[0] & 0x2000000000000LL) != 0 && !LOBYTE(v110[45]) )
    {
      v13 = a7 & 0xFFFFFFBF;
      HIDWORD(v110[0]) &= ~0x20000u;
    }
    if ( (v13 & 4) == 0 && (v110[0] & 0x80000000000LL) != 0 || (v110[0] & 0x2000000000000LL) != 0 && (v13 & 0x40) == 0 )
      goto LABEL_166;
    LOBYTE(v19) = PreviousMode;
    Info = PspCaptureCreateInfo(v19, a10, v110);
    if ( Info < 0 )
      goto LABEL_167;
    v22 = 1;
    if ( (v110[0] & 0x100000000LL) != 0 )
    {
      Info = ObReferenceObjectByHandleWithTag(
               (HANDLE)v110[15],
               0x80u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x72437350u,
               &Object,
               0LL);
      if ( Info < 0 )
        goto LABEL_167;
      v23 = (_KPROCESS *)Object;
      v110[16] = (__int64)Object;
    }
    else
    {
      v23 = Process;
      Object = Process;
    }
    v110[55] = PspEstimateNewProcessServerSilo(v23, v110[47], HIDWORD(v110[48]));
    if ( (BYTE1(v110[1]) & 0xC) == 4 && (v23 != Process || PsIsSystemProcess((__int64)Process)) )
      goto LABEL_166;
    LOBYTE(v24) = PreviousMode;
    Info = PspReferenceTokenForNewProcess(v23, v110[18], v24, &v110[19]);
    if ( Info < 0 )
    {
      v110[19] = 0LL;
      goto LABEL_167;
    }
    if ( v110[18] && (int)SeQueryServerSiloToken(v110[19], &v93) >= 0 && !(unsigned __int8)PspIsSiloInSilo(v93) )
      goto LABEL_166;
    if ( (v110[0] & 0x2000000000LL) != 0 )
    {
      v26 = (v110[0] & 0x2000000000000LL) != 0 ? LOBYTE(v110[45]) : 0;
      v74 = v26;
      if ( (NtGlobalFlag & 0x40000) != 0 )
      {
        v105 = *(_OWORD *)&v110[29];
        ZwSystemDebugControl(38LL, (__int64)&v105);
      }
      LOBYTE(v25) = v26;
      Info = SeQuerySigningPolicy(v110[19], &v110[29], (v13 >> 6) & 1, v25, &v73, &v75, &v74);
      if ( Info < 0 )
        goto LABEL_167;
      if ( (v13 & 0x20000) != 0 )
      {
        LOBYTE(v27) = 8;
        LOBYTE(v28) = v73;
        v29 = SeCompareSigningLevels(v28, v27);
        v20 = v73;
        if ( !v29 )
          v20 = 8;
      }
      else
      {
        LOBYTE(v20) = v73;
      }
      LODWORD(v87) = v20;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      v30 = 1600;
      if ( PreviousMode != 1 )
        v30 = 576;
      ObjectAttributes.Attributes = v30;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v110[29];
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      Info = 0;
      if ( qword_140D3B3F0 )
        Info = qword_140D3B3F0(v110[19]);
      if ( Info < 0 )
        goto LABEL_167;
      Info = PspGetMemoryPartitionContext((_DWORD)Object, v13, v110[47], HIDWORD(v110[48]), (__int64)&v92);
      if ( Info < 0 )
        goto LABEL_167;
      Info = PspCreateUserProcessEcp(&DriverContext, v110[19]);
      if ( Info < 0 )
        goto LABEL_167;
      Info = IoCreateFileEx(
               (PHANDLE)&v110[21],
               HIDWORD(v110[20]) | 0x100020,
               &ObjectAttributes,
               &IoStatusBlock,
               0LL,
               0x80u,
               5u,
               1u,
               0x60u,
               0LL,
               0,
               CreateFileTypeNone,
               0LL,
               0,
               &DriverContext);
      if ( Info < 0 && HIDWORD(v110[20]) )
        Info = IoCreateFileEx(
                 (PHANDLE)&v110[21],
                 0x100020u,
                 &ObjectAttributes,
                 &IoStatusBlock,
                 0LL,
                 0x80u,
                 5u,
                 1u,
                 0x60u,
                 0LL,
                 0,
                 CreateFileTypeNone,
                 0LL,
                 0,
                 &DriverContext);
      if ( Info < 0 )
      {
        v110[21] = 0LL;
        v31 = 1LL;
LABEL_63:
        PspUpdateCreateInfo(v31, v110, 0LL);
        goto LABEL_167;
      }
      v90 = 0LL;
      Info = ObReferenceObjectByHandle((HANDLE)v110[21], 0x100020u, (POBJECT_TYPE)IoFileObjectType, 0, &v90, 0LL);
      v110[22] = (__int64)v90;
      if ( Info < 0 )
      {
        v110[22] = 0LL;
LABEL_169:
        PspDeleteMemoryPartitionContext(v92);
        PspDeleteCreateProcessContext(v110);
        if ( DriverContext.ExtraCreateParameter )
          FsRtlFreeExtraCreateParameterList(DriverContext.ExtraCreateParameter);
        if ( BYTE4(v81) )
          ObfDereferenceObject(v84);
        return (unsigned int)Info;
      }
      ObjectAttributes.ObjectName = 0LL;
      v32 = 1;
      if ( v110[46] )
        v32 = 5;
      LODWORD(v93) = v32;
      if ( v110[50] )
      {
        v33 = SeDuplicateTokenAndAddOriginClaim(v110[19], v110[50], LODWORD(v110[51]), &v85);
        v34 = BYTE4(v81);
        if ( v33 >= 0 )
          v34 = 1;
        HIDWORD(v81) = v34;
        v78 = v34;
        v35 = v85;
      }
      else
      {
        v35 = v84;
      }
      if ( !BYTE4(v81) )
        v35 = (PVOID)v110[19];
      v84 = v35;
      v85 = v35;
      Info = MmCreateSpecialImageSection(&v110[23], (int)&ObjectAttributes, (__int64)v35, v20, v110[21], v32);
      if ( Info < 0 )
      {
LABEL_96:
        v110[23] = 0LL;
        v31 = 2LL;
        goto LABEL_63;
      }
      while ( 1 )
      {
        v90 = 0LL;
        Info = ObReferenceObjectByHandle((HANDLE)v110[23], 8u, MmSectionObjectType, 0, &v90, 0LL);
        v110[25] = (__int64)v90;
        if ( Info < 0 )
        {
          v110[25] = 0LL;
          goto LABEL_167;
        }
        v37 = v74;
        LOBYTE(v36) = v74;
        Info = PspGetProcessProtectionRequirementsFromImage(v90, v36, &v76);
        if ( Info < 0 )
          goto LABEL_167;
        LOBYTE(v39) = v76;
        if ( v76 == v37 )
          break;
        Info = SeQuerySigningPolicy(v110[19], &v110[29], 1LL, v39, &v77, &v75, &v74);
        if ( Info < 0 )
          goto LABEL_167;
        v42 = v77;
        if ( v77 == (_BYTE)v20 )
        {
          v37 = v74;
          break;
        }
        if ( (v20 & 0x30) != 0 && (v77 & 0x30) != (v20 & 0x30) )
          goto LABEL_166;
        LOBYTE(v40) = v20;
        LOBYTE(v41) = v77;
        if ( !(unsigned int)SeCompareSigningLevels(v41, v40) )
          goto LABEL_166;
        ObCloseHandle((HANDLE)v110[23], 0);
        ObfDereferenceObject((PVOID)v110[25]);
        v110[23] = 0LL;
        v110[25] = 0LL;
        LOBYTE(v20) = v42;
        LODWORD(v87) = v20;
        Info = MmCreateSpecialImageSection(&v110[23], (int)&ObjectAttributes, (__int64)v84, v42, v110[21], v93);
        if ( Info < 0 )
          goto LABEL_96;
      }
      LOBYTE(v38) = PreviousMode;
      v43 = (__int64)v86;
      Info = PspValidateCreateProcessProtection((_DWORD)v86, (unsigned int)v110, v38, v13, v37);
      if ( Info < 0 )
        goto LABEL_167;
      if ( (v13 & 0x40000) != 0
        || (v37 & 7) != 1
        && (LOBYTE(v45) = PreviousMode,
            LOBYTE(v44) = *(_BYTE *)(v43 + 2170),
            PspCheckForInvalidAccessByProtection(v45, v44, v37)) )
      {
        LOBYTE(v110[1]) |= 8u;
      }
      PspGetProcessParameterOverrides(v110, v92);
      LOBYTE(v46) = PreviousMode;
      Info = PspCaptureProcessParameters(v46, v91, v110);
      if ( Info < 0 )
      {
        LOBYTE(v110[1]) &= ~4u;
        goto LABEL_167;
      }
      v49 = v113;
      v50 = v87;
LABEL_109:
      LOBYTE(v48) = v37;
      LOBYTE(v47) = PreviousMode;
      Info = PspAllocateProcess(
               (_DWORD)Object,
               v47,
               v97,
               v48,
               v50,
               v75,
               v110[25],
               v110[19],
               v13,
               0,
               (__int64)v110,
               v110[18] != 0,
               v92,
               (__int64)&v95,
               (__int64)&v79);
      if ( Info < 0 )
        goto LABEL_167;
      v52 = v110[25] != 0 ? 1048587 : 1048603;
      v53 = *((_DWORD *)v79 + 629) & 0x4000;
      v97 = v53 != 0 ? 0x800 : 0;
      if ( v53 )
        v52 |= 0x100040u;
      RtlGetExtendedContextLength2(v52, v82, v53 != 0 ? 0x800 : 0);
      v54 = *(unsigned int *)v82 + 15LL;
      if ( v54 <= *(unsigned int *)v82 )
        v54 = 0xFFFFFFFFFFFFFF0LL;
      v55 = alloca(v54 & 0xFFFFFFFFFFFFFFF0uLL);
      v91 = (__int64)&v73;
      memset(&v73, 0, *(unsigned int *)v82);
      v56 = v52;
      v57 = v91;
      RtlInitializeExtendedContext2(v91, v56, &v87, v97);
      if ( v110[25] )
      {
        if ( *((_QWORD *)v79 + 176) )
          LODWORD(v59) = PtrToUlong((const void *)HIDWORD(v110[28]));
        else
          v59 = *((_QWORD *)v79 + 170);
        PspCreateUserContext(v57, 1, qword_140D07170, v110[6], v59);
      }
      else
      {
        LOBYTE(v58) = 1;
        Info = PspGetContextThreadInternal((_DWORD)CurrentThread, v57, 0, v58, 1);
        if ( Info < 0 )
        {
          PspUnlockProcessExclusive((__int64)v79, (__int64)CurrentThread);
          PspRundownSingleProcess((ULONG_PTR)v79);
          goto LABEL_167;
        }
        v57 = v91;
        *(_QWORD *)(v91 + 120) = 297LL;
      }
      ObfReferenceObjectWithTag(v79, 0x72437350u);
      if ( v49 )
      {
        *(_BYTE *)v49 = 0;
        v60 = v110[8];
        if ( v110[8] < 0x40000uLL )
          v60 = 0x40000LL;
        v49[3] = v60;
        v49[2] = v110[9];
        v49[1] = LODWORD(v110[7]);
      }
      *(_DWORD *)v82 = 0;
      PspMapThreadCreationFlags(a8, &v81);
      if ( (_DWORD)v95 )
      {
        *(_DWORD *)v82 = 2;
        LODWORD(v81) = v81 | 0x10;
      }
      if ( HIDWORD(v95) )
        v13 |= 0x400u;
      v107[0] = (__int64)v109;
      LODWORD(v81) = v81 | 0x60;
      Info = PspAllocateThread(
               (ULONG_PTR)v79,
               v57,
               (__int64)v107,
               0LL,
               0LL,
               (__int64)&v81,
               (__int64)&v96,
               (__int64)v49,
               (__int64)v112);
      if ( Info < 0 )
      {
        PspUnlockProcessExclusive((__int64)v79, (__int64)CurrentThread);
        PspRundownSingleProcess((ULONG_PTR)v79);
LABEL_165:
        ObfDereferenceObjectWithTag(v79, 0x72437350u);
        goto LABEL_167;
      }
      v62 = (__int64)v86;
      LOBYTE(v61) = PreviousMode;
      v63 = PsTestProtectedProcessIncompatibility(v61, (__int64)v86, (__int64)v79);
      v64 = v89;
      if ( v63 )
      {
        if ( (v89 & 0x2000000) != 0 )
        {
          v64 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v37 >> 4) + 4] & 0x1FFFFF | v89 & 0xFDFFFFFF;
          if ( !v110[16] || v62 == v110[16] )
            v64 |= 1u;
        }
        v65 = v88;
        if ( (v88 & 0x2000000) != 0 )
        {
          v65 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v37 >> 4) + 8] & 0x1FFFFF | v88 & 0xFDFFFFFF;
          if ( !v110[16] || v62 == v110[16] )
            v65 |= 1u;
        }
      }
      else
      {
        v65 = v88;
      }
      if ( v110[26] )
        v66 = v110[26] + 112;
      else
        v66 = 0LL;
      inserted = PspInsertProcess(
                   (char *)v79,
                   (__int64)Object,
                   v64,
                   v13,
                   (HANDLE)v110[17],
                   v82[0],
                   v66,
                   (PACCESS_STATE)v111);
      Info = PspInsertThread(
               (ULONG_PTR)v96,
               (ULONG_PTR)v79,
               v65,
               (__int64)v49,
               (__int64)v110,
               0LL,
               (__int64)v112,
               v98,
               v110[2]);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( inserted < 0 )
      {
        PspRundownSingleProcess((ULONG_PTR)v79);
        Info = inserted;
LABEL_164:
        ObfDereferenceObject(v96);
        goto LABEL_165;
      }
      if ( Info < 0 )
      {
LABEL_163:
        PsTerminateProcess(v79, (unsigned int)Info);
        goto LABEL_164;
      }
      ProcessServerSilo = PsGetProcessServerSilo((__int64)v79);
      if ( ProcessServerSilo != v110[55] )
      {
        Info = -1073741267;
        goto LABEL_163;
      }
      Info = PspCreateObjectHandle(v79, v111, PsProcessType);
      if ( Info >= 0 )
      {
        v69 = (_OWORD *)v110[4];
        if ( v110[4] )
        {
          *(_OWORD *)v110[4] = *(_OWORD *)&v110[6];
          v69[1] = *(_OWORD *)&v110[8];
          v69[2] = *(_OWORD *)&v110[10];
          v69[3] = *(_OWORD *)&v110[12];
        }
        *v99 = *(_QWORD *)&v111[392];
        v70 = (__int64)v86;
        Info = PspUpdateCreateInfo(6LL, v110, v79);
        if ( Info >= 0 )
        {
LABEL_162:
          PspDeleteObjectAccessState(v111);
          if ( Info >= 0 )
            goto LABEL_164;
          goto LABEL_163;
        }
        if ( (*(_WORD *)&v111[384] & 0x200) != 0 || (IsSystemProcess = PsIsSystemProcess(v70), v72 = 1, IsSystemProcess) )
          v72 = 0;
        ObCloseHandle(*(HANDLE *)&v111[392], v72);
      }
      if ( (v112[48] & 0x200) != 0 || PsIsSystemProcess((__int64)v86) )
        v22 = 0;
      ObCloseHandle((HANDLE)v112[49], v22);
      goto LABEL_162;
    }
    if ( Object != Process
      || !PreviousMode
      || v91
      || (v110[1] & 0xC00) != 0
      || (v110[0] & 0x8000000000LL) != 0
      || (v110[0] & 0x2000000000000LL) != 0
      || (v110[1] & 0x10) != 0 )
    {
LABEL_166:
      Info = -1073741811;
    }
    else
    {
      LOBYTE(v110[1]) &= ~4u;
      v37 = *((_BYTE *)Object + 2170);
      PsGetProcessSignatureLevel((__int64)Object, &v75);
      if ( (v13 & 0x40) != 0 && (v37 & 7) == 0 )
      {
        Info = -1073741790;
        goto LABEL_167;
      }
      LOBYTE(v51) = PreviousMode;
      Info = PspValidateCreateProcessProtection((_DWORD)v86, (unsigned int)v110, v51, v13, v37);
      if ( Info >= 0 )
      {
        v49 = 0LL;
        goto LABEL_109;
      }
    }
LABEL_167:
    if ( v110[22] )
      SeDeleteCodeIntegrityOriginClaimForFileObject();
    goto LABEL_169;
  }
  return result;
}
