/*
 * XREFs of NtCreateUserProcess @ 0x140690C20
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     SepDeleteAccessState @ 0x140210E90 (SepDeleteAccessState.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PsGetProcessServerSilo @ 0x14023F1B0 (PsGetProcessServerSilo.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E6680 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1402E7080 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwSystemDebugControl @ 0x1403FB930 (ZwSystemDebugControl.c)
 *     _alloca_probe @ 0x140405E30 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     SeDeleteCodeIntegrityOriginClaimForFileObject @ 0x1405CDD14 (SeDeleteCodeIntegrityOriginClaimForFileObject.c)
 *     IoCreateFileEx @ 0x1405FA7E0 (IoCreateFileEx.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1405FD390 (FsRtlFreeExtraCreateParameterList.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140611900 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     PspInsertProcess @ 0x1406302B8 (PspInsertProcess.c)
 *     PspRundownSingleProcess @ 0x140631344 (PspRundownSingleProcess.c)
 *     PspAllocateThread @ 0x14068411C (PspAllocateThread.c)
 *     PspMapThreadCreationFlags @ 0x140686784 (PspMapThreadCreationFlags.c)
 *     PspInsertThread @ 0x1406867E0 (PspInsertThread.c)
 *     PspCreateObjectHandle @ 0x1406880AC (PspCreateObjectHandle.c)
 *     MmCreateSpecialImageSection @ 0x14068FA78 (MmCreateSpecialImageSection.c)
 *     PspCaptureCreateInfo @ 0x1406902C4 (PspCaptureCreateInfo.c)
 *     PspEstimateNewProcessServerSilo @ 0x140690394 (PspEstimateNewProcessServerSilo.c)
 *     PspReferenceTokenForNewProcess @ 0x140690400 (PspReferenceTokenForNewProcess.c)
 *     SeQuerySigningPolicy @ 0x140690484 (SeQuerySigningPolicy.c)
 *     PspGetMemoryPartitionContext @ 0x140690758 (PspGetMemoryPartitionContext.c)
 *     PspCreateUserProcessEcp @ 0x1406907C8 (PspCreateUserProcessEcp.c)
 *     PspUpdateCreateInfo @ 0x1406909C0 (PspUpdateCreateInfo.c)
 *     PspDeleteCreateProcessContext @ 0x140692B54 (PspDeleteCreateProcessContext.c)
 *     PspGetContextThreadInternal @ 0x140693928 (PspGetContextThreadInternal.c)
 *     PspCreateUserContext @ 0x140694230 (PspCreateUserContext.c)
 *     PspBuildCreateProcessContext @ 0x140694298 (PspBuildCreateProcessContext.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     PspCaptureProcessParameters @ 0x1406A6360 (PspCaptureProcessParameters.c)
 *     PspValidateCreateProcessProtection @ 0x1406B303C (PspValidateCreateProcessProtection.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1406B3408 (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1406B345C (PspCheckForInvalidAccessByProtection.c)
 *     SeQueryServerSiloToken @ 0x1406D1C50 (SeQueryServerSiloToken.c)
 *     PspGetProcessParameterOverrides @ 0x1406D60AC (PspGetProcessParameterOverrides.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406D69C0 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PsTerminateProcess @ 0x1406DC8DC (PsTerminateProcess.c)
 *     PspIsSiloInSilo @ 0x1406DF41C (PspIsSiloInSilo.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x140924FDC (SeDuplicateTokenAndAddOriginClaim.c)
 */

__int64 __fastcall NtCreateUserProcess(
        _QWORD *a1,
        __int64 a2,
        ACCESS_MASK a3,
        int a4,
        unsigned __int64 a5,
        ULONG_PTR a6,
        unsigned int a7,
        int a8,
        __int64 a9,
        unsigned __int64 a10,
        __int64 a11)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // r13
  char PreviousMode; // r15
  unsigned int v14; // r12d
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  int Info; // esi
  KPROCESSOR_MODE v21; // r14
  int v22; // r8d
  unsigned __int8 v23; // bl
  ULONG v24; // eax
  int v25; // ecx
  char v26; // bl
  int v27; // ebx
  int v28; // eax
  int v29; // ecx
  struct _DMA_ADAPTER *v30; // r8
  char v31; // r13
  int i; // eax
  __int64 v33; // rdx
  unsigned __int8 v34; // bl
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  char v38; // bl
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r11
  __int64 v43; // rcx
  int v44; // edx
  int v45; // r9d
  __int64 *v46; // r12
  char v47; // r11
  int v48; // ecx
  unsigned int v49; // esi
  unsigned __int64 v50; // rax
  void *v51; // rsp
  int v52; // r9d
  __int64 v53; // rax
  volatile signed __int64 *v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rcx
  volatile signed __int64 *v57; // rbx
  __int64 v58; // r13
  char v59; // al
  ACCESS_MASK v60; // r8d
  ACCESS_MASK v61; // esi
  __int64 v62; // rax
  int inserted; // ebx
  __int64 ProcessServerSilo; // rax
  _OWORD *v65; // rax
  KPROCESSOR_MODE v66; // dl
  int v67; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int8 v68; // [rsp+84h] [rbp+4h] BYREF
  char v69; // [rsp+85h] [rbp+5h] BYREF
  __int16 v70; // [rsp+86h] [rbp+6h] BYREF
  char v71; // [rsp+88h] [rbp+8h] BYREF
  char v72; // [rsp+89h] [rbp+9h]
  PVOID v73; // [rsp+90h] [rbp+10h] BYREF
  char v74; // [rsp+98h] [rbp+18h]
  char v75[8]; // [rsp+9Ch] [rbp+1Ch] BYREF
  unsigned int v76; // [rsp+A4h] [rbp+24h] BYREF
  int v77; // [rsp+A8h] [rbp+28h]
  ACCESS_MASK v78; // [rsp+ACh] [rbp+2Ch]
  __int64 v79; // [rsp+B0h] [rbp+30h] BYREF
  PADAPTER_OBJECT v80; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v81; // [rsp+C0h] [rbp+40h]
  struct _KTHREAD *v82; // [rsp+C8h] [rbp+48h]
  PVOID v83; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v84; // [rsp+D8h] [rbp+58h] BYREF
  PADAPTER_OBJECT v85; // [rsp+E0h] [rbp+60h] BYREF
  unsigned __int64 v86; // [rsp+E8h] [rbp+68h]
  PVOID Object; // [rsp+F0h] [rbp+70h] BYREF
  PVOID v88; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v89; // [rsp+100h] [rbp+80h]
  __int64 v90; // [rsp+108h] [rbp+88h]
  _QWORD *v91; // [rsp+110h] [rbp+90h]
  __int64 v92; // [rsp+118h] [rbp+98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v94; // [rsp+150h] [rbp+D0h] BYREF
  ULONG_PTR v95; // [rsp+158h] [rbp+D8h]
  __int64 v96; // [rsp+160h] [rbp+E0h]
  __int128 v97; // [rsp+168h] [rbp+E8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+178h] [rbp+F8h] BYREF
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+188h] [rbp+108h] BYREF
  __int64 v100; // [rsp+1A8h] [rbp+128h]
  __int64 v101[2]; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v102; // [rsp+1C0h] [rbp+140h]
  _BYTE v103[80]; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v104[66]; // [rsp+220h] [rbp+1A0h] BYREF
  _BYTE v105[400]; // [rsp+430h] [rbp+3B0h] BYREF
  __int64 v106[50]; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v107[2]; // [rsp+750h] [rbp+6D0h] BYREF
  __int128 v108; // [rsp+760h] [rbp+6E0h]

  v77 = a4;
  v78 = a3;
  v90 = a2;
  v91 = a1;
  v86 = a5;
  v95 = a6;
  v89 = a9;
  v84 = 0LL;
  *(_DWORD *)v75 = 0;
  IoStatusBlock = 0LL;
  v73 = 0LL;
  v85 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v79 = 0LL;
  memset(v105, 0, sizeof(v105));
  v97 = 0LL;
  v70 = 0;
  v69 = 0;
  v71 = 0;
  *(_OWORD *)v107 = 0LL;
  v108 = 0LL;
  memset(v106, 0, sizeof(v106));
  v94 = 0LL;
  v76 = 0;
  v92 = 0LL;
  *(_OWORD *)v101 = 0LL;
  v102 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v82 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  v81 = Process;
  v96 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v74 = PreviousMode;
  v83 = 0LL;
  v80 = 0LL;
  LOBYTE(CurrentThread) = 0;
  v67 = (int)CurrentThread;
  v72 = 0;
  memset(&DriverContext, 0, sizeof(DriverContext));
  v100 = 0LL;
  memset(v103, 0, 0x48uLL);
  v14 = a7;
  if ( (a7 & 0xFFFB6838) != 0 || (a8 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (a7 & 0x8400) == 0x8400 )
    return 3221225520LL;
  v105[388] = PreviousMode;
  if ( PreviousMode )
  {
    v16 = (__int64)v91;
    if ( (unsigned __int64)v91 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
    v17 = v90;
    if ( (unsigned __int64)v90 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v17 = *(_QWORD *)v17;
  }
  if ( a5 )
  {
    if ( PreviousMode && (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v18 = *(_DWORD *)(a5 + 24) & 0x1DF2;
    else
      v18 = *(_DWORD *)(a5 + 24) & 0x11FF2;
    *(_DWORD *)&v105[384] = v18;
  }
  memset(v104, 0, 0x208uLL);
  if ( !a11
    || (LOBYTE(v19) = PreviousMode, result = PspBuildCreateProcessContext(a11, v19, 0LL, v104), (int)result >= 0) )
  {
    if ( (a7 & 0x40) != 0 && (v104[0] & 0x2000000000000LL) != 0 && !LOBYTE(v104[48]) )
    {
      v14 = a7 & 0xFFFFFFBF;
      a7 &= ~0x40u;
      HIDWORD(v104[0]) &= ~0x20000u;
    }
    if ( (v14 & 4) == 0 && (v104[0] & 0x80000000000LL) != 0 || (v104[0] & 0x2000000000000LL) != 0 && (v14 & 0x40) == 0 )
      goto LABEL_167;
    Info = PspCaptureCreateInfo(PreviousMode, a10, (__int64)v104);
    if ( Info >= 0 )
    {
      v21 = 1;
      if ( (v104[0] & 0x100000000LL) == 0 )
      {
        v79 = Process;
LABEL_33:
        v104[58] = PspEstimateNewProcessServerSilo(Process, v104[50], HIDWORD(v104[51]));
        if ( (BYTE1(v104[1]) & 0xC) != 4 || Process == v81 && (*(_DWORD *)(v81 + 2172) & 0x1000) == 0 )
        {
          Info = PspReferenceTokenForNewProcess((struct _KPROCESS *)Process, (void *)v104[18], PreviousMode, &v104[19]);
          if ( Info < 0 )
          {
            v104[19] = 0LL;
            goto LABEL_168;
          }
          if ( !v104[18] || (int)SeQueryServerSiloToken(v104[19], &v92) < 0 || (unsigned __int8)PspIsSiloInSilo(v92) )
          {
            if ( (v104[0] & 0x2000000000LL) != 0 )
            {
              v23 = (v104[0] & 0x2000000000000LL) != 0 ? LOBYTE(v104[48]) : 0;
              v68 = v23;
              if ( (NtGlobalFlag & 0x40000) != 0 )
              {
                v97 = *(_OWORD *)&v104[29];
                ZwSystemDebugControl(38LL, (__int64)&v97);
              }
              Info = SeQuerySigningPolicy(
                       (void *)v104[19],
                       (UNICODE_STRING *)&v104[29],
                       (v14 & 0x40) != 0,
                       v23,
                       (unsigned __int8 *)&v70,
                       (unsigned __int8 *)&v69,
                       &v68);
              if ( Info < 0 )
                goto LABEL_168;
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              v24 = 1600;
              if ( PreviousMode != 1 )
                v24 = 576;
              ObjectAttributes.Attributes = v24;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&v104[29];
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              Info = 0;
              if ( qword_140D2D440 )
                Info = qword_140D2D440(v104[19]);
              if ( Info < 0 )
                goto LABEL_168;
              Info = PspGetMemoryPartitionContext(Process, v14, v104[50], HIDWORD(v104[51]), &v83);
              if ( Info < 0 )
                goto LABEL_168;
              Info = PspCreateUserProcessEcp((__int64)&DriverContext, v104[19]);
              if ( Info < 0 )
                goto LABEL_168;
              Info = IoCreateFileEx(
                       (PHANDLE)&v104[21],
                       LODWORD(v104[20]) | 0x100020,
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
              if ( Info < 0 && LODWORD(v104[20]) )
                Info = IoCreateFileEx(
                         (PHANDLE)&v104[21],
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
                v104[21] = 0LL;
                v25 = 1;
LABEL_57:
                PspUpdateCreateInfo(v25, (__int64)v104, 0LL);
                goto LABEL_168;
              }
              Object = 0LL;
              Info = ObReferenceObjectByHandle(
                       (HANDLE)v104[21],
                       0x100020u,
                       (POBJECT_TYPE)IoFileObjectType,
                       0,
                       &Object,
                       0LL);
              v104[22] = (__int64)Object;
              if ( Info < 0 )
              {
                v104[22] = 0LL;
                v26 = v67;
LABEL_171:
                if ( v83 )
                  ObfDereferenceObjectWithTag(v83, 0x624A7350u);
                PspDeleteCreateProcessContext(v104);
                if ( DriverContext.ExtraCreateParameter )
                  FsRtlFreeExtraCreateParameterList(DriverContext.ExtraCreateParameter);
                if ( v26 )
                  HalPutDmaAdapter(v80);
                return (unsigned int)Info;
              }
              ObjectAttributes.ObjectName = 0LL;
              v27 = 1;
              if ( v104[49] )
                v27 = 5;
              *(_DWORD *)&v75[4] = v27;
              if ( v104[53] )
              {
                v28 = SeDuplicateTokenAndAddOriginClaim(v104[19], v104[53], LODWORD(v104[54]), &v80);
                v29 = (unsigned __int8)v67;
                if ( v28 >= 0 )
                  v29 = 1;
                v67 = v29;
                v72 = v29;
              }
              else
              {
                LOBYTE(v29) = v67;
              }
              v30 = v80;
              if ( !(_BYTE)v29 )
                v30 = (struct _DMA_ADAPTER *)v104[19];
              v80 = v30;
              v31 = v70;
              for ( i = MmCreateSpecialImageSection(&v104[23], (int)&ObjectAttributes, (__int64)v30, v70, v104[21], v27);
                    ;
                    i = MmCreateSpecialImageSection(
                          &v104[23],
                          (int)&ObjectAttributes,
                          (__int64)v80,
                          v38,
                          v104[21],
                          v75[4]) )
              {
                Info = i;
                if ( i < 0 )
                {
                  v104[23] = 0LL;
                  v25 = 2;
                  goto LABEL_57;
                }
                v88 = 0LL;
                Info = ObReferenceObjectByHandle((HANDLE)v104[23], 8u, MmSectionObjectType, 0, &v88, 0LL);
                v104[25] = (__int64)v88;
                if ( Info < 0 )
                {
                  v104[25] = 0LL;
                  goto LABEL_168;
                }
                v34 = v68;
                LOBYTE(v33) = v68;
                Info = PspGetProcessProtectionRequirementsFromImage(v88, v33, (char *)&v70 + 1);
                if ( Info < 0 )
                  goto LABEL_168;
                if ( HIBYTE(v70) == v34 )
                  break;
                Info = SeQuerySigningPolicy(
                         (void *)v104[19],
                         (UNICODE_STRING *)&v104[29],
                         1,
                         HIBYTE(v70),
                         (unsigned __int8 *)&v71,
                         (unsigned __int8 *)&v69,
                         &v68);
                if ( Info < 0 )
                  goto LABEL_168;
                v38 = v71;
                if ( v71 == v31 )
                {
                  v34 = v68;
                  break;
                }
                if ( (v31 & 0x30) != 0 && (v71 & 0x30) != (v31 & 0x30) )
                  goto LABEL_167;
                if ( !qword_140C1D980 )
                  goto LABEL_167;
                LOBYTE(v36) = v31;
                LOBYTE(v37) = v71;
                if ( !(unsigned int)qword_140C1D980(v37, v36, v35) )
                  goto LABEL_167;
                ObCloseHandle((HANDLE)v104[23], 0);
                HalPutDmaAdapter((PADAPTER_OBJECT)v104[25]);
                v104[23] = 0LL;
                v104[25] = 0LL;
                v31 = v38;
                LOBYTE(v70) = v38;
              }
              LOBYTE(v35) = PreviousMode;
              Info = PspValidateCreateProcessProtection(v81, (unsigned int)v104, v35, v14, v34);
              if ( Info < 0 )
                goto LABEL_168;
              if ( (v14 & 0x40000) != 0
                || (v34 & 7) != 1
                && (LOBYTE(v41) = v34,
                    LOBYTE(v40) = PreviousMode,
                    LOBYTE(v39) = *(_BYTE *)(v42 + 2170),
                    (unsigned __int8)PspCheckForInvalidAccessByProtection(v40, v39, v41)) )
              {
                LOBYTE(v104[1]) |= 8u;
              }
              PspGetProcessParameterOverrides(v104, v83);
              LOBYTE(v43) = PreviousMode;
              Info = PspCaptureProcessParameters(v43, v89, v104);
              if ( Info < 0 )
              {
                LOBYTE(v104[1]) &= ~4u;
                goto LABEL_168;
              }
              v46 = v107;
              v47 = v69;
              goto LABEL_104;
            }
            if ( Process == v81
              && PreviousMode
              && !v89
              && (v104[1] & 0xC00) == 0
              && (v104[0] & 0x8000000000LL) == 0
              && (v104[0] & 0x2000000000000LL) == 0
              && (v104[1] & 0x10) == 0 )
            {
              LOBYTE(v104[1]) &= ~4u;
              v34 = *(_BYTE *)(Process + 2170);
              v68 = v34;
              v69 = *(_BYTE *)(Process + 2169);
              v31 = *(_BYTE *)(Process + 2168);
              LOBYTE(v70) = v31;
              if ( (v14 & 0x40) != 0 && (v34 & 7) == 0 )
              {
                Info = -1073741790;
                goto LABEL_168;
              }
              LOBYTE(v22) = PreviousMode;
              Info = PspValidateCreateProcessProtection(v81, (unsigned int)v104, v22, v14, v34);
              if ( Info < 0 )
                goto LABEL_168;
              v46 = 0LL;
LABEL_104:
              LOBYTE(v45) = v34;
              LOBYTE(v44) = PreviousMode;
              Info = PspAllocateProcess(
                       v79,
                       v44,
                       v86,
                       v45,
                       v31,
                       v47,
                       v104[25],
                       v104[19],
                       a7,
                       0,
                       (__int64)v104,
                       v104[18] != 0,
                       (__int64)v83,
                       (__int64)&v84,
                       (__int64)&v73);
              if ( Info < 0 )
                goto LABEL_168;
              v48 = *((_DWORD *)v73 + 629) & 0x4000;
              v86 = v48 != 0 ? 0x800 : 0;
              v49 = (v104[25] != 0 ? 1048587 : 1048603) | 0x100040;
              if ( !v48 )
                v49 = v104[25] != 0 ? 1048587 : 1048603;
              RtlGetExtendedContextLength2(v49, &v76, v48 != 0 ? 0x800 : 0);
              v50 = v76 + 15LL;
              if ( v50 <= v76 )
                v50 = 0xFFFFFFFFFFFFFF0LL;
              v51 = alloca(v50 & 0xFFFFFFFFFFFFFFF0uLL);
              memset(&v67, 0, v76);
              RtlInitializeExtendedContext2((__int64)&v67, v49, &v94, v86);
              if ( v104[25] )
              {
                v53 = HIDWORD(v104[28]);
                if ( !*((_QWORD *)v73 + 176) )
                  v53 = *((_QWORD *)v73 + 170);
                PspCreateUserContext((unsigned int)&v67, 1, PspUserThreadStart, v104[6], v53);
              }
              else
              {
                LOBYTE(v52) = 1;
                Info = PspGetContextThreadInternal((_DWORD)v82, (unsigned int)&v67, 0, v52, 1);
                if ( Info < 0 )
                {
                  v54 = (volatile signed __int64 *)v73;
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v73 + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock(v54 + 135);
                  KeAbPostRelease((ULONG_PTR)(v54 + 135));
                  KeLeaveCriticalRegionThread((__int64)v82);
                  PspRundownSingleProcess((__int64)v73, 0);
                  goto LABEL_168;
                }
                v88 = (PVOID)297;
              }
              ObfReferenceObjectWithTag(v73, 0x72437350u);
              if ( v46 )
              {
                *(_BYTE *)v46 = 0;
                v55 = v104[8];
                if ( v104[8] < 0x40000uLL )
                  v55 = 0x40000LL;
                v46[3] = v55;
                v46[2] = v104[9];
                v46[1] = LODWORD(v104[7]);
              }
              *(_DWORD *)&v75[4] = 0;
              PspMapThreadCreationFlags(a8, (int *)v75);
              if ( (_DWORD)v84 )
              {
                *(_DWORD *)&v75[4] = 2;
                *(_DWORD *)v75 |= 0x10u;
              }
              if ( HIDWORD(v84) )
                LOWORD(a7) = a7 | 0x400;
              v101[0] = (__int64)v103;
              *(_DWORD *)v75 |= 0x60u;
              Info = PspAllocateThread(
                       (ULONG_PTR)v73,
                       v95,
                       PreviousMode,
                       (__int64)v104,
                       (__int64)&v67,
                       v101,
                       0LL,
                       0LL,
                       (int *)v75,
                       &v85,
                       v46,
                       (_DMA_OPERATIONS **)v106);
              if ( Info < 0 )
              {
                v57 = (volatile signed __int64 *)v73;
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v73 + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v57 + 135);
                KeAbPostRelease((ULONG_PTR)(v57 + 135));
                KeLeaveCriticalRegionThread((__int64)v82);
                PspRundownSingleProcess((__int64)v73, 0);
                v26 = v67;
                goto LABEL_166;
              }
              v58 = v81;
              LOBYTE(v56) = PreviousMode;
              v59 = PsTestProtectedProcessIncompatibility(v56, v81, v73);
              v60 = v78;
              if ( v59 )
              {
                if ( (v78 & 0x2000000) != 0 )
                {
                  v60 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v34 >> 4) + 4] & 0x1FFFFF | v78 & 0xFDFFFFFF;
                  if ( !v104[16] || v58 == v104[16] )
                    v60 |= 1u;
                }
                v61 = v77;
                if ( (v77 & 0x2000000) != 0 )
                {
                  v61 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v34 >> 4) + 8] & 0x1FFFFF | v77 & 0xFDFFFFFF;
                  if ( !v104[16] || v58 == v104[16] )
                    v61 |= 1u;
                }
              }
              else
              {
                v61 = v77;
              }
              if ( v104[26] )
                v62 = v104[26] + 112;
              else
                v62 = 0LL;
              inserted = PspInsertProcess(
                           (struct _KPROCESS *)v73,
                           (struct _KPROCESS *)v79,
                           v60,
                           a7,
                           (HANDLE)v104[17],
                           v75[4],
                           v62,
                           (struct _ACCESS_STATE *)v105);
              Info = PspInsertThread(
                       (char *)v85,
                       (ULONG_PTR)v73,
                       (__int64)v103,
                       v75,
                       v61,
                       v46,
                       (__int64)v104,
                       0LL,
                       (__int64)v106,
                       (_QWORD *)v90,
                       (struct _DMA_ADAPTER *)v104[2]);
              KeLeaveCriticalRegionThread((__int64)v82);
              if ( inserted < 0 )
              {
                PspRundownSingleProcess((__int64)v73, 0);
                Info = inserted;
                v26 = v67;
LABEL_165:
                HalPutDmaAdapter(v85);
LABEL_166:
                ObfDereferenceObjectWithTag(v73, 0x72437350u);
                goto LABEL_169;
              }
              if ( Info < 0 )
              {
                v26 = v67;
LABEL_163:
                if ( Info >= 0 )
                  goto LABEL_165;
LABEL_164:
                PsTerminateProcess(v73, (unsigned int)Info);
                goto LABEL_165;
              }
              ProcessServerSilo = PsGetProcessServerSilo((__int64)v73);
              if ( ProcessServerSilo != v104[58] )
              {
                Info = -1073741267;
                v26 = v67;
                goto LABEL_164;
              }
              Info = PspCreateObjectHandle(v73, (__int64)v105, (struct _OBJECT_TYPE *)PsProcessType);
              if ( Info < 0 )
              {
                v26 = v67;
              }
              else
              {
                v65 = (_OWORD *)v104[4];
                if ( v104[4] )
                {
                  *(_OWORD *)v104[4] = *(_OWORD *)&v104[6];
                  v65[1] = *(_OWORD *)&v104[8];
                  v65[2] = *(_OWORD *)&v104[10];
                  v65[3] = *(_OWORD *)&v104[12];
                }
                *v91 = *(_QWORD *)&v105[392];
                v26 = v67;
                Info = PspUpdateCreateInfo(6, (__int64)v104, (__int64)v73);
                if ( Info >= 0 )
                  goto LABEL_161;
                if ( (*(_WORD *)&v105[384] & 0x200) != 0 || (v66 = 1, (*(_DWORD *)(v58 + 2172) & 0x1000) != 0) )
                  v66 = 0;
                ObCloseHandle(*(HANDLE *)&v105[392], v66);
              }
              if ( (v106[48] & 0x200) != 0 || (*(_DWORD *)(v58 + 2172) & 0x1000) != 0 )
                v21 = 0;
              ObCloseHandle((HANDLE)v106[49], v21);
LABEL_161:
              SepDeleteAccessState((__int64)v105);
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v105[32]);
              goto LABEL_163;
            }
          }
        }
LABEL_167:
        Info = -1073741811;
        goto LABEL_168;
      }
      Info = ObpReferenceObjectByHandleWithTag(
               v104[15],
               128,
               (__int64)PsProcessType,
               PreviousMode,
               0x72437350u,
               &v79,
               0LL,
               0LL);
      if ( Info >= 0 )
      {
        Process = v79;
        v104[16] = v79;
        goto LABEL_33;
      }
    }
LABEL_168:
    v26 = v67;
LABEL_169:
    if ( v104[22] )
      SeDeleteCodeIntegrityOriginClaimForFileObject();
    goto LABEL_171;
  }
  return result;
}
