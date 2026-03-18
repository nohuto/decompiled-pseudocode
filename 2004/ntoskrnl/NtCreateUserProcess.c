/*
 * XREFs of NtCreateUserProcess @ 0x1406149A0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PsGetProcessServerSilo @ 0x14027D870 (PsGetProcessServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     SepDeleteAccessState @ 0x1402990A0 (SepDeleteAccessState.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E9D60 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1402EA760 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwSystemDebugControl @ 0x1403F6D60 (ZwSystemDebugControl.c)
 *     _alloca_probe @ 0x1403FFB60 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     IoCreateFileEx @ 0x140615A30 (IoCreateFileEx.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140616CA0 (FsRtlFreeExtraCreateParameterList.c)
 *     PspUpdateCreateInfo @ 0x140616EA4 (PspUpdateCreateInfo.c)
 *     PspCreateUserProcessEcp @ 0x140617104 (PspCreateUserProcessEcp.c)
 *     PspGetMemoryPartitionContext @ 0x140617300 (PspGetMemoryPartitionContext.c)
 *     SeQuerySigningPolicy @ 0x140617370 (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x140617644 (PspReferenceTokenForNewProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x1406176C8 (PspEstimateNewProcessServerSilo.c)
 *     PspCaptureCreateInfo @ 0x140617734 (PspCaptureCreateInfo.c)
 *     MmCreateSpecialImageSection @ 0x140617E6C (MmCreateSpecialImageSection.c)
 *     PspInsertProcess @ 0x14061809C (PspInsertProcess.c)
 *     PsTerminateProcess @ 0x14065797C (PsTerminateProcess.c)
 *     PspRundownSingleProcess @ 0x14065C39C (PspRundownSingleProcess.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     PspGetContextThreadInternal @ 0x1406AD5A8 (PspGetContextThreadInternal.c)
 *     PspInsertThread @ 0x1406AE2E4 (PspInsertThread.c)
 *     PspCreateObjectHandle @ 0x1406AEB60 (PspCreateObjectHandle.c)
 *     PspAllocateThread @ 0x1406AF6DC (PspAllocateThread.c)
 *     PspMapThreadCreationFlags @ 0x1406B1640 (PspMapThreadCreationFlags.c)
 *     PspDeleteCreateProcessContext @ 0x1406B19D4 (PspDeleteCreateProcessContext.c)
 *     PspCreateUserContext @ 0x1406B1B8C (PspCreateUserContext.c)
 *     PspBuildCreateProcessContext @ 0x1406B1BF4 (PspBuildCreateProcessContext.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1406B5EA8 (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1406B5EFC (PspCheckForInvalidAccessByProtection.c)
 *     PspCaptureProcessParameters @ 0x1406D4980 (PspCaptureProcessParameters.c)
 *     SeQueryServerSiloToken @ 0x1406FF000 (SeQueryServerSiloToken.c)
 *     PspValidateCreateProcessProtection @ 0x140701E60 (PspValidateCreateProcessProtection.c)
 *     PspGetProcessParameterOverrides @ 0x140703068 (PspGetProcessParameterOverrides.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1407038B0 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspIsSiloInSilo @ 0x14070CFEC (PspIsSiloInSilo.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x14091F35C (SeDuplicateTokenAndAddOriginClaim.c)
 */

__int64 __fastcall NtCreateUserProcess(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *Process; // r13
  KPROCESSOR_MODE PreviousMode; // r15
  unsigned int v14; // r12d
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int Info; // esi
  KPROCESSOR_MODE v22; // r14
  __int64 v23; // r8
  int v24; // r8d
  __int64 v25; // r9
  unsigned __int8 v26; // bl
  ULONG v27; // eax
  __int64 v28; // rcx
  int v29; // r9d
  int v30; // ebx
  int v31; // eax
  int v32; // ecx
  struct _DMA_ADAPTER *v33; // r8
  char v34; // r13
  int i; // eax
  __int64 v36; // rdx
  unsigned __int8 v37; // bl
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  char v42; // bl
  int v43; // r9d
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r11
  __int64 v48; // rcx
  __int64 *v49; // r12
  char v50; // r11
  int v51; // ecx
  unsigned int v52; // esi
  unsigned __int64 v53; // rax
  void *v54; // rsp
  int v55; // r9d
  __int64 v56; // rax
  volatile signed __int64 *v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rcx
  volatile signed __int64 *v60; // rbx
  char v61; // bl
  _BYTE *v62; // r13
  int v63; // esi
  __int64 v64; // rax
  int inserted; // ebx
  __int64 ProcessServerSilo; // rax
  _OWORD *v67; // rax
  KPROCESSOR_MODE v68; // dl
  int v69; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int8 v70; // [rsp+84h] [rbp+4h] BYREF
  char v71; // [rsp+85h] [rbp+5h] BYREF
  __int16 v72; // [rsp+86h] [rbp+6h] BYREF
  char v73; // [rsp+88h] [rbp+8h] BYREF
  char v74; // [rsp+89h] [rbp+9h]
  PVOID v75; // [rsp+90h] [rbp+10h] BYREF
  KPROCESSOR_MODE v76; // [rsp+98h] [rbp+18h]
  char v77[8]; // [rsp+9Ch] [rbp+1Ch] BYREF
  unsigned int v78; // [rsp+A4h] [rbp+24h] BYREF
  int v79; // [rsp+A8h] [rbp+28h]
  int v80; // [rsp+ACh] [rbp+2Ch]
  __int64 v81; // [rsp+B0h] [rbp+30h] BYREF
  PADAPTER_OBJECT v82; // [rsp+B8h] [rbp+38h] BYREF
  _BYTE *v83; // [rsp+C0h] [rbp+40h]
  struct _KTHREAD *v84; // [rsp+C8h] [rbp+48h]
  PVOID v85; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v86; // [rsp+D8h] [rbp+58h] BYREF
  PADAPTER_OBJECT v87; // [rsp+E0h] [rbp+60h] BYREF
  volatile signed __int32 *v88; // [rsp+E8h] [rbp+68h]
  PVOID Object; // [rsp+F0h] [rbp+70h] BYREF
  PVOID v90; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v91; // [rsp+100h] [rbp+80h]
  __int64 v92; // [rsp+108h] [rbp+88h]
  _QWORD *v93; // [rsp+110h] [rbp+90h]
  __int64 v94; // [rsp+118h] [rbp+98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+120h] [rbp+A0h] BYREF
  _QWORD v96[3]; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v97; // [rsp+168h] [rbp+E8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+178h] [rbp+F8h] BYREF
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+188h] [rbp+108h] BYREF
  __int64 v100; // [rsp+1A8h] [rbp+128h]
  __int64 v101[2]; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v102; // [rsp+1C0h] [rbp+140h]
  _BYTE v103[80]; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v104[66]; // [rsp+220h] [rbp+1A0h] BYREF
  _BYTE v105[400]; // [rsp+430h] [rbp+3B0h] BYREF
  _BYTE AccessState[400]; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v107[2]; // [rsp+750h] [rbp+6D0h] BYREF
  __int128 v108; // [rsp+760h] [rbp+6E0h]

  v79 = a4;
  v80 = a3;
  v92 = a2;
  v93 = a1;
  v88 = (volatile signed __int32 *)a5;
  v96[1] = a6;
  v91 = a9;
  v86 = 0LL;
  *(_DWORD *)v77 = 0;
  IoStatusBlock = 0LL;
  v75 = 0LL;
  v87 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v81 = 0LL;
  memset(v105, 0, sizeof(v105));
  v97 = 0LL;
  v72 = 0;
  v71 = 0;
  v73 = 0;
  *(_OWORD *)v107 = 0LL;
  v108 = 0LL;
  memset(AccessState, 0, sizeof(AccessState));
  v96[0] = 0LL;
  v78 = 0;
  v94 = 0LL;
  *(_OWORD *)v101 = 0LL;
  v102 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v84 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v83 = Process;
  v96[2] = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v76 = PreviousMode;
  v85 = 0LL;
  v82 = 0LL;
  LOBYTE(CurrentThread) = 0;
  v69 = (int)CurrentThread;
  v74 = 0;
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
    v16 = (__int64)v93;
    if ( (unsigned __int64)v93 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
    v17 = v92;
    if ( (unsigned __int64)v92 >= 0x7FFFFFFF0000LL )
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
      goto LABEL_161;
    LOBYTE(v20) = PreviousMode;
    Info = PspCaptureCreateInfo(v20, a10, v104);
    if ( Info >= 0 )
    {
      v22 = 1;
      if ( (v104[0] & 0x100000000LL) == 0 )
      {
        v81 = (__int64)Process;
LABEL_33:
        v104[58] = PspEstimateNewProcessServerSilo(Process, v104[50], HIDWORD(v104[51]));
        if ( (BYTE1(v104[1]) & 0xC) != 4 || Process == v83 && (*((_DWORD *)v83 + 543) & 0x1000) == 0 )
        {
          LOBYTE(v23) = PreviousMode;
          Info = PspReferenceTokenForNewProcess(Process, v104[18], v23, &v104[19]);
          if ( Info < 0 )
          {
            v104[19] = 0LL;
            goto LABEL_162;
          }
          if ( !v104[18] || (int)SeQueryServerSiloToken(v104[19], &v94) < 0 || (unsigned __int8)PspIsSiloInSilo(v94) )
          {
            if ( (v104[0] & 0x2000000000LL) != 0 )
            {
              v26 = (v104[0] & 0x2000000000000LL) != 0 ? LOBYTE(v104[48]) : 0;
              v70 = v26;
              if ( (NtGlobalFlag & 0x40000) != 0 )
              {
                v97 = *(_OWORD *)&v104[29];
                ZwSystemDebugControl(38LL, (__int64)&v97);
              }
              LOBYTE(v25) = v26;
              Info = SeQuerySigningPolicy(v104[19], &v104[29], (v14 >> 6) & 1, v25, &v72, &v71, &v70);
              if ( Info < 0 )
                goto LABEL_162;
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              v27 = 1600;
              if ( PreviousMode != 1 )
                v27 = 576;
              ObjectAttributes.Attributes = v27;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&v104[29];
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              Info = 0;
              if ( qword_140D2D440 )
                Info = qword_140D2D440(v104[19]);
              if ( Info < 0 )
                goto LABEL_162;
              Info = PspGetMemoryPartitionContext((_DWORD)Process, v14, v104[50], HIDWORD(v104[51]), (__int64)&v85);
              if ( Info < 0 )
                goto LABEL_162;
              Info = PspCreateUserProcessEcp(&DriverContext, v104[19]);
              if ( Info < 0 )
                goto LABEL_162;
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
                v28 = 1LL;
LABEL_57:
                PspUpdateCreateInfo(v28, v104, 0LL);
                goto LABEL_162;
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
                goto LABEL_162;
              }
              ObjectAttributes.ObjectName = 0LL;
              v30 = 1;
              if ( v104[49] )
                v30 = 5;
              *(_DWORD *)&v77[4] = v30;
              if ( v104[53] )
              {
                v31 = SeDuplicateTokenAndAddOriginClaim(v104[19], v104[53], LODWORD(v104[54]), &v82);
                v32 = (unsigned __int8)v69;
                if ( v31 >= 0 )
                  v32 = 1;
                v69 = v32;
                v74 = v32;
              }
              else
              {
                LOBYTE(v32) = v69;
              }
              v33 = v82;
              if ( !(_BYTE)v32 )
                v33 = (struct _DMA_ADAPTER *)v104[19];
              v82 = v33;
              v34 = v72;
              LOBYTE(v29) = v72;
              for ( i = MmCreateSpecialImageSection(
                          (unsigned int)&v104[23],
                          (unsigned int)&ObjectAttributes,
                          (_DWORD)v33,
                          v29,
                          v104[21],
                          v30);
                    ;
                    i = MmCreateSpecialImageSection(
                          (unsigned int)&v104[23],
                          (unsigned int)&ObjectAttributes,
                          (_DWORD)v82,
                          v43,
                          v104[21],
                          *(_DWORD *)&v77[4]) )
              {
                Info = i;
                if ( i < 0 )
                {
                  v104[23] = 0LL;
                  v28 = 2LL;
                  goto LABEL_57;
                }
                v90 = 0LL;
                Info = ObReferenceObjectByHandle((HANDLE)v104[23], 8u, MmSectionObjectType, 0, &v90, 0LL);
                v104[25] = (__int64)v90;
                if ( Info < 0 )
                {
                  v104[25] = 0LL;
                  goto LABEL_162;
                }
                v37 = v70;
                LOBYTE(v36) = v70;
                Info = PspGetProcessProtectionRequirementsFromImage(v90, v36, (char *)&v72 + 1);
                if ( Info < 0 )
                  goto LABEL_162;
                LOBYTE(v39) = HIBYTE(v72);
                if ( HIBYTE(v72) == v37 )
                  break;
                Info = SeQuerySigningPolicy(v104[19], &v104[29], 1LL, v39, &v73, &v71, &v70);
                if ( Info < 0 )
                  goto LABEL_162;
                v42 = v73;
                if ( v73 == v34 )
                {
                  v37 = v70;
                  break;
                }
                if ( (v34 & 0x30) != 0 && (v73 & 0x30) != (v34 & 0x30) )
                  goto LABEL_161;
                if ( !qword_140C1D8E0 )
                  goto LABEL_161;
                LOBYTE(v40) = v34;
                LOBYTE(v41) = v73;
                if ( !(unsigned int)qword_140C1D8E0(v41, v40, v38) )
                  goto LABEL_161;
                ObCloseHandle((HANDLE)v104[23], 0);
                HalPutDmaAdapter((PADAPTER_OBJECT)v104[25]);
                v104[23] = 0LL;
                v104[25] = 0LL;
                v34 = v42;
                LOBYTE(v72) = v42;
                LOBYTE(v43) = v42;
              }
              LOBYTE(v38) = PreviousMode;
              Info = PspValidateCreateProcessProtection((_DWORD)v83, (unsigned int)v104, v38, v14, v37);
              if ( Info < 0 )
                goto LABEL_162;
              if ( (v14 & 0x40000) != 0
                || (v37 & 7) != 1
                && (LOBYTE(v46) = v37,
                    LOBYTE(v45) = PreviousMode,
                    LOBYTE(v44) = *(_BYTE *)(v47 + 2170),
                    (unsigned __int8)PspCheckForInvalidAccessByProtection(v45, v44, v46)) )
              {
                LOBYTE(v104[1]) |= 8u;
              }
              PspGetProcessParameterOverrides(v104, v85);
              LOBYTE(v48) = PreviousMode;
              Info = PspCaptureProcessParameters(v48, v91, v104);
              if ( Info < 0 )
              {
                LOBYTE(v104[1]) &= ~4u;
                goto LABEL_162;
              }
              v49 = v107;
              v50 = v71;
LABEL_104:
              Info = PspAllocateProcess(
                       v81,
                       PreviousMode,
                       v88,
                       v37,
                       v34,
                       v50,
                       (void *)v104[25],
                       (void *)v104[19],
                       a7,
                       0,
                       (__int64)v104,
                       v104[18] != 0,
                       v85,
                       (__int64)&v86,
                       &v75);
              if ( Info < 0 )
                goto LABEL_162;
              v51 = *((_DWORD *)v75 + 629) & 0x4000;
              v88 = v51 != 0 ? (volatile signed __int32 *)0x800 : 0LL;
              v52 = (v104[25] != 0 ? 1048587 : 1048603) | 0x100040;
              if ( !v51 )
                v52 = v104[25] != 0 ? 1048587 : 1048603;
              RtlGetExtendedContextLength2(v52, &v78, v51 != 0 ? 0x800 : 0);
              v53 = v78 + 15LL;
              if ( v53 <= v78 )
                v53 = 0xFFFFFFFFFFFFFF0LL;
              v54 = alloca(v53 & 0xFFFFFFFFFFFFFFF0uLL);
              memset(&v69, 0, v78);
              RtlInitializeExtendedContext2((__int64)&v69, v52, v96, (unsigned __int64)v88);
              if ( v104[25] )
              {
                v56 = HIDWORD(v104[28]);
                if ( !*((_QWORD *)v75 + 176) )
                  v56 = *((_QWORD *)v75 + 170);
                PspCreateUserContext((unsigned int)&v69, 1, PspUserThreadStart, v104[6], v56);
              }
              else
              {
                LOBYTE(v55) = 1;
                Info = PspGetContextThreadInternal((_DWORD)v84, (unsigned int)&v69, 0, v55, 1);
                if ( Info < 0 )
                {
                  v57 = (volatile signed __int64 *)v75;
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock(v57 + 135);
                  KeAbPostRelease((ULONG_PTR)(v57 + 135));
                  KeLeaveCriticalRegionThread((__int64)v84);
                  PspRundownSingleProcess((ULONG_PTR)v75);
                  goto LABEL_162;
                }
                v90 = (PVOID)297;
              }
              ObfReferenceObjectWithTag(v75, 0x72437350u);
              if ( v49 )
              {
                *(_BYTE *)v49 = 0;
                v58 = v104[8];
                if ( v104[8] < 0x40000uLL )
                  v58 = 0x40000LL;
                v49[3] = v58;
                v49[2] = v104[9];
                v49[1] = LODWORD(v104[7]);
              }
              *(_DWORD *)&v77[4] = 0;
              PspMapThreadCreationFlags(a8, v77);
              if ( (_DWORD)v86 )
              {
                *(_DWORD *)&v77[4] = 2;
                *(_DWORD *)v77 |= 0x10u;
              }
              v101[0] = (__int64)v103;
              *(_DWORD *)v77 |= 0x60u;
              Info = PspAllocateThread(
                       (ULONG_PTR)v75,
                       (__int64)&v69,
                       (__int64)v101,
                       0LL,
                       0LL,
                       (__int64)v77,
                       (__int64)&v87,
                       (__int64)v49,
                       (__int64)AccessState);
              if ( Info < 0 )
              {
                v60 = (volatile signed __int64 *)v75;
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v60 + 135);
                KeAbPostRelease((ULONG_PTR)(v60 + 135));
                KeLeaveCriticalRegionThread((__int64)v84);
                PspRundownSingleProcess((ULONG_PTR)v75);
                v61 = v69;
                goto LABEL_160;
              }
              v62 = v83;
              LOBYTE(v59) = PreviousMode;
              if ( (unsigned __int8)PsTestProtectedProcessIncompatibility(v59, v83, v75) )
              {
                v63 = v79;
                if ( (v79 & 0x2000000) != 0 )
                {
                  v63 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v37 >> 4) + 8] & 0x1FFFFF | v79 & 0xFDFFFFFF;
                  if ( !v104[16] || v62 == (_BYTE *)v104[16] )
                    v63 |= 1u;
                }
              }
              else
              {
                v63 = v79;
              }
              if ( v104[26] )
                v64 = v104[26] + 112;
              else
                v64 = 0LL;
              inserted = PspInsertProcess(v75, (HANDLE)v104[17], v77[4], v64, (__int64)v105);
              Info = PspInsertThread(
                       v87,
                       (PEPROCESS)v75,
                       v63,
                       (__int64)v49,
                       (__int64)v104,
                       0LL,
                       (PACCESS_STATE)AccessState,
                       v92,
                       v104[2]);
              KeLeaveCriticalRegionThread((__int64)v84);
              if ( inserted < 0 )
              {
                PspRundownSingleProcess((ULONG_PTR)v75);
                Info = inserted;
                v61 = v69;
LABEL_159:
                HalPutDmaAdapter(v87);
LABEL_160:
                ObfDereferenceObjectWithTag(v75, 0x72437350u);
LABEL_163:
                if ( v85 )
                  ObfDereferenceObjectWithTag(v85, 0x624A7350u);
                PspDeleteCreateProcessContext(v104);
                if ( DriverContext.ExtraCreateParameter )
                  FsRtlFreeExtraCreateParameterList(DriverContext.ExtraCreateParameter);
                if ( v61 )
                  HalPutDmaAdapter(v82);
                return (unsigned int)Info;
              }
              if ( Info < 0 )
              {
                v61 = v69;
LABEL_157:
                if ( Info >= 0 )
                  goto LABEL_159;
LABEL_158:
                PsTerminateProcess(v75, (unsigned int)Info);
                goto LABEL_159;
              }
              ProcessServerSilo = PsGetProcessServerSilo((__int64)v75);
              if ( ProcessServerSilo != v104[58] )
              {
                Info = -1073741267;
                v61 = v69;
                goto LABEL_158;
              }
              Info = PspCreateObjectHandle(v75, v105, PsProcessType);
              if ( Info < 0 )
              {
                v61 = v69;
              }
              else
              {
                v67 = (_OWORD *)v104[4];
                if ( v104[4] )
                {
                  *(_OWORD *)v104[4] = *(_OWORD *)&v104[6];
                  v67[1] = *(_OWORD *)&v104[8];
                  v67[2] = *(_OWORD *)&v104[10];
                  v67[3] = *(_OWORD *)&v104[12];
                }
                *v93 = *(_QWORD *)&v105[392];
                v61 = v69;
                Info = PspUpdateCreateInfo(6LL, v104, v75);
                if ( Info >= 0 )
                  goto LABEL_155;
                if ( (*(_WORD *)&v105[384] & 0x200) != 0 || (v68 = 1, (*((_DWORD *)v62 + 543) & 0x1000) != 0) )
                  v68 = 0;
                ObCloseHandle(*(HANDLE *)&v105[392], v68);
              }
              if ( (*(_WORD *)&AccessState[384] & 0x200) != 0 || (*((_DWORD *)v62 + 543) & 0x1000) != 0 )
                v22 = 0;
              ObCloseHandle(*(HANDLE *)&AccessState[392], v22);
LABEL_155:
              SepDeleteAccessState((__int64)v105);
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v105[32]);
              goto LABEL_157;
            }
            if ( Process == v83
              && PreviousMode
              && !v91
              && (v104[1] & 0xC00) == 0
              && (v104[0] & 0x8000000000LL) == 0
              && (v104[0] & 0x2000000000000LL) == 0
              && (v104[1] & 0x10) == 0 )
            {
              LOBYTE(v104[1]) &= ~4u;
              v37 = Process[2170];
              v70 = v37;
              v71 = Process[2169];
              v34 = Process[2168];
              LOBYTE(v72) = v34;
              if ( (v14 & 0x40) != 0 && (v37 & 7) == 0 )
              {
                Info = -1073741790;
                goto LABEL_162;
              }
              LOBYTE(v24) = PreviousMode;
              Info = PspValidateCreateProcessProtection((_DWORD)v83, (unsigned int)v104, v24, v14, v37);
              if ( Info < 0 )
                goto LABEL_162;
              v49 = 0LL;
              goto LABEL_104;
            }
          }
        }
LABEL_161:
        Info = -1073741811;
        goto LABEL_162;
      }
      Info = ObpReferenceObjectByHandleWithTag(
               v104[15],
               128,
               (__int64)PsProcessType,
               PreviousMode,
               0x72437350u,
               &v81,
               0LL,
               0LL);
      if ( Info >= 0 )
      {
        Process = (_BYTE *)v81;
        v104[16] = v81;
        goto LABEL_33;
      }
    }
LABEL_162:
    v61 = v69;
    goto LABEL_163;
  }
  return result;
}
