/*
 * XREFs of NtCreateUserProcess @ 0x14066BF50
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     SepDeleteAccessState @ 0x140206590 (SepDeleteAccessState.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlGetExtendedContextLength2 @ 0x14032EEA0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14032F8A0 (RtlInitializeExtendedContext2.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwSystemDebugControl @ 0x1403F5AD0 (ZwSystemDebugControl.c)
 *     _alloca_probe @ 0x1403FE8D0 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14064CEC8 (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x14064CF1C (PspCheckForInvalidAccessByProtection.c)
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x14066BEE0 (PspEstimateNewProcessServerSilo.c)
 *     IoCreateFileEx @ 0x14066CFE0 (IoCreateFileEx.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14066E250 (FsRtlFreeExtraCreateParameterList.c)
 *     PspUpdateCreateInfo @ 0x14066E454 (PspUpdateCreateInfo.c)
 *     PspCreateUserProcessEcp @ 0x14066E6B4 (PspCreateUserProcessEcp.c)
 *     PspGetMemoryPartitionContext @ 0x14066E8B0 (PspGetMemoryPartitionContext.c)
 *     SeQuerySigningPolicy @ 0x14066E920 (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x14066EBF4 (PspReferenceTokenForNewProcess.c)
 *     PspCaptureCreateInfo @ 0x14066EC78 (PspCaptureCreateInfo.c)
 *     MmCreateSpecialImageSection @ 0x14066F58C (MmCreateSpecialImageSection.c)
 *     PspInsertProcess @ 0x14066F7BC (PspInsertProcess.c)
 *     PspCaptureProcessParameters @ 0x1406B65F0 (PspCaptureProcessParameters.c)
 *     SeQueryServerSiloToken @ 0x1406DC060 (SeQueryServerSiloToken.c)
 *     PspValidateCreateProcessProtection @ 0x1406DF0D0 (PspValidateCreateProcessProtection.c)
 *     PspGetProcessParameterOverrides @ 0x1406E02D8 (PspGetProcessParameterOverrides.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406E0B20 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PsTerminateProcess @ 0x1406E666C (PsTerminateProcess.c)
 *     PspIsSiloInSilo @ 0x1406E918C (PspIsSiloInSilo.c)
 *     PspGetContextThreadInternal @ 0x1406F2448 (PspGetContextThreadInternal.c)
 *     PspInsertThread @ 0x1406F3184 (PspInsertThread.c)
 *     PspCreateObjectHandle @ 0x1406F3A00 (PspCreateObjectHandle.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 *     PspMapThreadCreationFlags @ 0x140707500 (PspMapThreadCreationFlags.c)
 *     PspDeleteCreateProcessContext @ 0x140707894 (PspDeleteCreateProcessContext.c)
 *     PspCreateUserContext @ 0x140707A4C (PspCreateUserContext.c)
 *     PspBuildCreateProcessContext @ 0x140707AB4 (PspBuildCreateProcessContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x14091E0AC (SeDuplicateTokenAndAddOriginClaim.c)
 */

__int64 __fastcall NtCreateUserProcess(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *Process; // r13
  char PreviousMode; // r12
  unsigned int v14; // r15d
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int Info; // esi
  ULONG v22; // r9d
  KPROCESSOR_MODE v23; // r14
  __int64 v24; // r8
  int v25; // r8d
  __int64 v26; // r9
  unsigned __int8 v27; // bl
  ULONG v28; // eax
  __int64 v29; // rcx
  int v30; // r9d
  int v31; // ebx
  int v32; // eax
  int v33; // ecx
  struct _DMA_ADAPTER *v34; // r8
  char v35; // r13
  int i; // eax
  __int64 v37; // rdx
  unsigned __int8 v38; // bl
  int v39; // r8d
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  char v43; // bl
  int v44; // r9d
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r11
  __int64 v48; // rcx
  int v49; // edx
  int v50; // r9d
  __int64 *v51; // r15
  char v52; // r11
  int v53; // ecx
  unsigned int v54; // esi
  unsigned __int64 v55; // rax
  void *v56; // rsp
  int v57; // r9d
  __int64 v58; // rax
  char *v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rcx
  char *v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  char v69; // bl
  __int64 v70; // r13
  int v71; // esi
  __int64 v72; // rax
  int inserted; // ebx
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 ProcessServerSilo; // rax
  _OWORD *v78; // rax
  KPROCESSOR_MODE v79; // dl
  PLARGE_INTEGER AllocationSize; // [rsp+20h] [rbp-60h]
  int v81; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int8 v82; // [rsp+84h] [rbp+4h] BYREF
  char v83; // [rsp+85h] [rbp+5h] BYREF
  __int16 v84; // [rsp+86h] [rbp+6h] BYREF
  char v85; // [rsp+88h] [rbp+8h] BYREF
  char v86; // [rsp+89h] [rbp+9h]
  PVOID v87; // [rsp+90h] [rbp+10h] BYREF
  char v88; // [rsp+98h] [rbp+18h]
  char v89[8]; // [rsp+9Ch] [rbp+1Ch] BYREF
  unsigned int v90; // [rsp+A4h] [rbp+24h] BYREF
  int v91; // [rsp+A8h] [rbp+28h]
  int v92; // [rsp+ACh] [rbp+2Ch]
  __int64 v93; // [rsp+B0h] [rbp+30h] BYREF
  PADAPTER_OBJECT v94; // [rsp+B8h] [rbp+38h] BYREF
  _BYTE *v95; // [rsp+C0h] [rbp+40h]
  struct _KTHREAD *v96; // [rsp+C8h] [rbp+48h]
  PVOID v97; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v98; // [rsp+D8h] [rbp+58h] BYREF
  PADAPTER_OBJECT v99; // [rsp+E0h] [rbp+60h] BYREF
  unsigned __int64 v100; // [rsp+E8h] [rbp+68h]
  PVOID Object; // [rsp+F0h] [rbp+70h] BYREF
  PVOID v102; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v103; // [rsp+100h] [rbp+80h]
  __int64 v104; // [rsp+108h] [rbp+88h]
  _QWORD *v105; // [rsp+110h] [rbp+90h]
  __int64 v106; // [rsp+118h] [rbp+98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+120h] [rbp+A0h] BYREF
  _QWORD v108[3]; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v109; // [rsp+168h] [rbp+E8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+178h] [rbp+F8h] BYREF
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+188h] [rbp+108h] BYREF
  __int64 v112; // [rsp+1A8h] [rbp+128h]
  __int64 v113[2]; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v114; // [rsp+1C0h] [rbp+140h]
  _BYTE v115[80]; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v116[64]; // [rsp+220h] [rbp+1A0h] BYREF
  _BYTE v117[400]; // [rsp+420h] [rbp+3A0h] BYREF
  __int64 v118[50]; // [rsp+5B0h] [rbp+530h] BYREF
  __int64 v119[2]; // [rsp+740h] [rbp+6C0h] BYREF
  __int128 v120; // [rsp+750h] [rbp+6D0h]

  v91 = a4;
  v92 = a3;
  v104 = a2;
  v105 = a1;
  v100 = a5;
  v108[1] = a6;
  v103 = a9;
  v98 = 0LL;
  *(_DWORD *)v89 = 0;
  IoStatusBlock = 0LL;
  v87 = 0LL;
  v99 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v93 = 0LL;
  memset(v117, 0, sizeof(v117));
  v109 = 0LL;
  v84 = 0;
  v83 = 0;
  v85 = 0;
  *(_OWORD *)v119 = 0LL;
  v120 = 0LL;
  memset(v118, 0, sizeof(v118));
  v108[0] = 0LL;
  v90 = 0;
  v106 = 0LL;
  *(_OWORD *)v113 = 0LL;
  v114 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v96 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v95 = Process;
  v108[2] = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v88 = PreviousMode;
  v97 = 0LL;
  v94 = 0LL;
  LOBYTE(CurrentThread) = 0;
  v81 = (int)CurrentThread;
  v86 = 0;
  memset(&DriverContext, 0, sizeof(DriverContext));
  v112 = 0LL;
  memset(v115, 0, 0x48uLL);
  v14 = a7;
  if ( (a7 & 0xFFFB6838) != 0 || (a8 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (a7 & 0x8400) == 0x8400 )
    return 3221225520LL;
  v117[388] = PreviousMode;
  if ( PreviousMode )
  {
    v16 = (__int64)v105;
    if ( (unsigned __int64)v105 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
    v17 = v104;
    if ( (unsigned __int64)v104 >= 0x7FFFFFFF0000LL )
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
    *(_DWORD *)&v117[384] = v18;
  }
  memset(v116, 0, sizeof(v116));
  if ( !a11
    || (LOBYTE(v19) = PreviousMode, result = PspBuildCreateProcessContext(a11, v19, 0LL, v116), (int)result >= 0) )
  {
    if ( (a7 & 0x40) != 0 && (v116[0] & 0x2000000000000LL) != 0 && !LOBYTE(v116[48]) )
    {
      v14 = a7 & 0xFFFFFFBF;
      a7 &= ~0x40u;
      HIDWORD(v116[0]) &= ~0x20000u;
    }
    if ( (v14 & 4) == 0 && (v116[0] & 0x80000000000LL) != 0 || (v116[0] & 0x2000000000000LL) != 0 && (v14 & 0x40) == 0 )
      goto LABEL_161;
    LOBYTE(v20) = PreviousMode;
    Info = PspCaptureCreateInfo(v20, a10, v116);
    if ( Info >= 0 )
    {
      v23 = 1;
      if ( (v116[0] & 0x100000000LL) == 0 )
      {
        v93 = (__int64)Process;
LABEL_33:
        v116[58] = PspEstimateNewProcessServerSilo((__int64)Process, v116[50], HIDWORD(v116[51]));
        if ( (BYTE1(v116[1]) & 0xC) != 4 || Process == v95 && (*((_DWORD *)v95 + 543) & 0x1000) == 0 )
        {
          LOBYTE(v24) = PreviousMode;
          Info = PspReferenceTokenForNewProcess(Process, v116[18], v24, &v116[19]);
          if ( Info < 0 )
          {
            v116[19] = 0LL;
            goto LABEL_162;
          }
          if ( !v116[18] || (int)SeQueryServerSiloToken(v116[19], &v106) < 0 || (unsigned __int8)PspIsSiloInSilo(v106) )
          {
            if ( (v116[0] & 0x2000000000LL) != 0 )
            {
              v27 = (v116[0] & 0x2000000000000LL) != 0 ? LOBYTE(v116[48]) : 0;
              v82 = v27;
              if ( (NtGlobalFlag & 0x40000) != 0 )
              {
                v109 = *(_OWORD *)&v116[29];
                ZwSystemDebugControl(38LL, (__int64)&v109);
              }
              LOBYTE(v26) = v27;
              Info = SeQuerySigningPolicy(v116[19], &v116[29], (v14 >> 6) & 1, v26, &v84, &v83, &v82);
              if ( Info < 0 )
                goto LABEL_162;
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              v28 = 1600;
              if ( PreviousMode != 1 )
                v28 = 576;
              ObjectAttributes.Attributes = v28;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&v116[29];
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              Info = 0;
              if ( qword_140D2C440 )
                Info = qword_140D2C440(v116[19]);
              if ( Info < 0 )
                goto LABEL_162;
              Info = PspGetMemoryPartitionContext((_DWORD)Process, v14, v116[50], HIDWORD(v116[51]), (__int64)&v97);
              if ( Info < 0 )
                goto LABEL_162;
              Info = PspCreateUserProcessEcp(&DriverContext, v116[19]);
              if ( Info < 0 )
                goto LABEL_162;
              Info = IoCreateFileEx(
                       (PHANDLE)&v116[21],
                       LODWORD(v116[20]) | 0x100020,
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
              if ( Info < 0 && LODWORD(v116[20]) )
                Info = IoCreateFileEx(
                         (PHANDLE)&v116[21],
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
                v116[21] = 0LL;
                v29 = 1LL;
LABEL_57:
                PspUpdateCreateInfo(v29, v116, 0LL);
                goto LABEL_162;
              }
              Object = 0LL;
              Info = ObReferenceObjectByHandle(
                       (HANDLE)v116[21],
                       0x100020u,
                       (POBJECT_TYPE)IoFileObjectType,
                       0,
                       &Object,
                       0LL);
              v116[22] = (__int64)Object;
              if ( Info < 0 )
              {
                v116[22] = 0LL;
                goto LABEL_162;
              }
              ObjectAttributes.ObjectName = 0LL;
              v31 = 1;
              if ( v116[49] )
                v31 = 5;
              *(_DWORD *)&v89[4] = v31;
              if ( v116[53] )
              {
                v32 = SeDuplicateTokenAndAddOriginClaim(v116[19], v116[53], LODWORD(v116[54]), &v94);
                v33 = (unsigned __int8)v81;
                if ( v32 >= 0 )
                  v33 = 1;
                v81 = v33;
                v86 = v33;
              }
              else
              {
                LOBYTE(v33) = v81;
              }
              v34 = v94;
              if ( !(_BYTE)v33 )
                v34 = (struct _DMA_ADAPTER *)v116[19];
              v94 = v34;
              v35 = v84;
              LOBYTE(v30) = v84;
              for ( i = MmCreateSpecialImageSection(
                          (unsigned int)&v116[23],
                          (unsigned int)&ObjectAttributes,
                          (_DWORD)v34,
                          v30,
                          v116[21],
                          v31);
                    ;
                    i = MmCreateSpecialImageSection(
                          (unsigned int)&v116[23],
                          (unsigned int)&ObjectAttributes,
                          (_DWORD)v94,
                          v44,
                          v116[21],
                          *(_DWORD *)&v89[4]) )
              {
                Info = i;
                if ( i < 0 )
                {
                  v116[23] = 0LL;
                  v29 = 2LL;
                  goto LABEL_57;
                }
                v102 = 0LL;
                Info = ObReferenceObjectByHandle((HANDLE)v116[23], 8u, MmSectionObjectType, 0, &v102, 0LL);
                v116[25] = (__int64)v102;
                if ( Info < 0 )
                {
                  v116[25] = 0LL;
                  goto LABEL_162;
                }
                v38 = v82;
                LOBYTE(v37) = v82;
                Info = PspGetProcessProtectionRequirementsFromImage(v102, v37, (char *)&v84 + 1);
                if ( Info < 0 )
                  goto LABEL_162;
                LOBYTE(v40) = HIBYTE(v84);
                if ( HIBYTE(v84) == v38 )
                  break;
                Info = SeQuerySigningPolicy(v116[19], &v116[29], 1LL, v40, &v85, &v83, &v82);
                if ( Info < 0 )
                  goto LABEL_162;
                v43 = v85;
                if ( v85 == v35 )
                {
                  v38 = v82;
                  break;
                }
                if ( (v35 & 0x30) != 0 && (v85 & 0x30) != (v35 & 0x30) )
                  goto LABEL_161;
                if ( !qword_140C1DAA0 )
                  goto LABEL_161;
                LOBYTE(v41) = v35;
                LOBYTE(v42) = v85;
                if ( !(unsigned int)qword_140C1DAA0(v42, v41) )
                  goto LABEL_161;
                ObCloseHandle((HANDLE)v116[23], 0);
                HalPutDmaAdapter((PADAPTER_OBJECT)v116[25]);
                v116[23] = 0LL;
                v116[25] = 0LL;
                v35 = v43;
                LOBYTE(v84) = v43;
                LOBYTE(v44) = v43;
              }
              LOBYTE(v39) = PreviousMode;
              Info = PspValidateCreateProcessProtection((_DWORD)v95, (unsigned int)v116, v39, v14, v38);
              if ( Info < 0 )
                goto LABEL_162;
              if ( (v14 & 0x40000) != 0
                || (v38 & 7) != 1
                && (LOBYTE(v46) = PreviousMode,
                    LOBYTE(v45) = *(_BYTE *)(v47 + 2170),
                    PspCheckForInvalidAccessByProtection(v46, v45, v38)) )
              {
                LOBYTE(v116[1]) |= 8u;
              }
              PspGetProcessParameterOverrides(v116, v97);
              LOBYTE(v48) = PreviousMode;
              Info = PspCaptureProcessParameters(v48, v103, v116);
              if ( Info < 0 )
              {
                LOBYTE(v116[1]) &= ~4u;
                goto LABEL_162;
              }
              v51 = v119;
              v52 = v83;
LABEL_104:
              LOBYTE(v50) = v38;
              LOBYTE(v49) = PreviousMode;
              Info = PspAllocateProcess(
                       v93,
                       v49,
                       v100,
                       v50,
                       v35,
                       v52,
                       v116[25],
                       v116[19],
                       a7,
                       0,
                       (__int64)v116,
                       v116[18] != 0,
                       (__int64)v97,
                       (__int64)&v98,
                       (__int64)&v87);
              if ( Info < 0 )
                goto LABEL_162;
              v53 = *((_DWORD *)v87 + 629) & 0x4000;
              v100 = v53 != 0 ? 0x800 : 0;
              v54 = (v116[25] != 0 ? 1048587 : 1048603) | 0x100040;
              if ( !v53 )
                v54 = v116[25] != 0 ? 1048587 : 1048603;
              RtlGetExtendedContextLength2(v54, &v90, v53 != 0 ? 0x800 : 0);
              v55 = v90 + 15LL;
              if ( v55 <= v90 )
                v55 = 0xFFFFFFFFFFFFFF0LL;
              v56 = alloca(v55 & 0xFFFFFFFFFFFFFFF0uLL);
              memset(&v81, 0, v90);
              RtlInitializeExtendedContext2((__int64)&v81, v54, v108, v100);
              if ( v116[25] )
              {
                v58 = HIDWORD(v116[28]);
                if ( !*((_QWORD *)v87 + 176) )
                  v58 = *((_QWORD *)v87 + 170);
                PspCreateUserContext((unsigned int)&v81, 1, PspUserThreadStart, v116[6], v58);
              }
              else
              {
                LOBYTE(v57) = 1;
                Info = PspGetContextThreadInternal((_DWORD)v96, (unsigned int)&v81, 0, v57, 1);
                if ( Info < 0 )
                {
                  v59 = (char *)v87;
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v87 + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock(v59 + 1080);
                  KeAbPostRelease((ULONG_PTR)(v59 + 1080));
                  KeLeaveCriticalRegionThread((__int64)v96, v60, v61, v62);
                  PspRundownSingleProcess((ULONG_PTR)v87, 0);
                  goto LABEL_162;
                }
                v102 = (PVOID)297;
              }
              ObfReferenceObjectWithTag(v87, 0x72437350u);
              if ( v51 )
              {
                *(_BYTE *)v51 = 0;
                v63 = v116[8];
                if ( v116[8] < 0x40000uLL )
                  v63 = 0x40000LL;
                v51[3] = v63;
                v51[2] = v116[9];
                v51[1] = LODWORD(v116[7]);
              }
              *(_DWORD *)&v89[4] = 0;
              PspMapThreadCreationFlags(a8, v89);
              if ( (_DWORD)v98 )
              {
                *(_DWORD *)&v89[4] = 2;
                *(_DWORD *)v89 |= 0x10u;
              }
              v113[0] = (__int64)v115;
              *(_DWORD *)v89 |= 0x60u;
              Info = PspAllocateThread(
                       (ULONG_PTR)v87,
                       (__int64)&v81,
                       (__int64)v113,
                       0LL,
                       0LL,
                       (__int64)v89,
                       (__int64)&v99,
                       (__int64)v51,
                       (__int64)v118);
              if ( Info < 0 )
              {
                v65 = (char *)v87;
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v87 + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v65 + 1080);
                KeAbPostRelease((ULONG_PTR)(v65 + 1080));
                KeLeaveCriticalRegionThread((__int64)v96, v66, v67, v68);
                PspRundownSingleProcess((ULONG_PTR)v87, 0);
                v69 = v81;
                goto LABEL_160;
              }
              v70 = (__int64)v95;
              LOBYTE(v64) = PreviousMode;
              if ( PsTestProtectedProcessIncompatibility(v64, (__int64)v95, (__int64)v87) )
              {
                v71 = v91;
                if ( (v91 & 0x2000000) != 0 )
                {
                  v71 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v38 >> 4) + 8] & 0x1FFFFF | v91 & 0xFDFFFFFF;
                  if ( !v116[16] || v70 == v116[16] )
                    v71 |= 1u;
                }
              }
              else
              {
                v71 = v91;
              }
              if ( v116[26] )
                v72 = v116[26] + 112;
              else
                v72 = 0LL;
              inserted = PspInsertProcess((PADAPTER_OBJECT)v87, (HANDLE)v116[17], v89[4], v72, (__int64)v117);
              Info = PspInsertThread(
                       v99,
                       (ULONG_PTR)v87,
                       v71,
                       (__int64)v51,
                       (__int64)v116,
                       0LL,
                       (__int64)v118,
                       v104,
                       v116[2]);
              KeLeaveCriticalRegionThread((__int64)v96, v74, v75, v76);
              if ( inserted < 0 )
              {
                PspRundownSingleProcess((ULONG_PTR)v87, 0);
                Info = inserted;
                v69 = v81;
LABEL_159:
                HalPutDmaAdapter(v99);
LABEL_160:
                ObfDereferenceObjectWithTag(v87, 0x72437350u);
LABEL_163:
                if ( v97 )
                  ObfDereferenceObjectWithTag(v97, 0x624A7350u);
                PspDeleteCreateProcessContext(v116);
                if ( DriverContext.ExtraCreateParameter )
                  FsRtlFreeExtraCreateParameterList(DriverContext.ExtraCreateParameter);
                if ( v69 )
                  HalPutDmaAdapter(v94);
                return (unsigned int)Info;
              }
              if ( Info < 0 )
              {
                v69 = v81;
LABEL_157:
                if ( Info >= 0 )
                  goto LABEL_159;
LABEL_158:
                PsTerminateProcess(v87, (unsigned int)Info);
                goto LABEL_159;
              }
              ProcessServerSilo = PsGetProcessServerSilo((__int64)v87);
              if ( ProcessServerSilo != v116[58] )
              {
                Info = -1073741267;
                v69 = v81;
                goto LABEL_158;
              }
              Info = PspCreateObjectHandle(v87, v117, PsProcessType);
              if ( Info < 0 )
              {
                v69 = v81;
              }
              else
              {
                v78 = (_OWORD *)v116[4];
                if ( v116[4] )
                {
                  *(_OWORD *)v116[4] = *(_OWORD *)&v116[6];
                  v78[1] = *(_OWORD *)&v116[8];
                  v78[2] = *(_OWORD *)&v116[10];
                  v78[3] = *(_OWORD *)&v116[12];
                }
                *v105 = *(_QWORD *)&v117[392];
                v69 = v81;
                Info = PspUpdateCreateInfo(6LL, v116, v87);
                if ( Info >= 0 )
                  goto LABEL_155;
                if ( (*(_WORD *)&v117[384] & 0x200) != 0 || (v79 = 1, (*(_DWORD *)(v70 + 2172) & 0x1000) != 0) )
                  v79 = 0;
                ObCloseHandle(*(HANDLE *)&v117[392], v79);
              }
              if ( (v118[48] & 0x200) != 0 || (*(_DWORD *)(v70 + 2172) & 0x1000) != 0 )
                v23 = 0;
              ObCloseHandle((HANDLE)v118[49], v23);
LABEL_155:
              SepDeleteAccessState((__int64)v117);
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v117[32]);
              goto LABEL_157;
            }
            if ( Process == v95
              && PreviousMode
              && !v103
              && (v116[1] & 0xC00) == 0
              && (v116[0] & 0x8000000000LL) == 0
              && (v116[0] & 0x2000000000000LL) == 0
              && (v116[1] & 0x10) == 0 )
            {
              LOBYTE(v116[1]) &= ~4u;
              v38 = Process[2170];
              v82 = v38;
              v83 = Process[2169];
              v35 = Process[2168];
              LOBYTE(v84) = v35;
              if ( (v14 & 0x40) != 0 && (v38 & 7) == 0 )
              {
                Info = -1073741790;
                goto LABEL_162;
              }
              LOBYTE(v25) = PreviousMode;
              Info = PspValidateCreateProcessProtection((_DWORD)v95, (unsigned int)v116, v25, v14, v38);
              if ( Info < 0 )
                goto LABEL_162;
              v51 = 0LL;
              goto LABEL_104;
            }
          }
        }
LABEL_161:
        Info = -1073741811;
        goto LABEL_162;
      }
      LODWORD(AllocationSize) = 1917023056;
      LOBYTE(v22) = PreviousMode;
      Info = ObpReferenceObjectByHandleWithTag(v116[15], 128LL, PsProcessType, v22, AllocationSize, &v93, 0LL, 0LL);
      if ( Info >= 0 )
      {
        Process = (_BYTE *)v93;
        v116[16] = v93;
        goto LABEL_33;
      }
    }
LABEL_162:
    v69 = v81;
    goto LABEL_163;
  }
  return result;
}
