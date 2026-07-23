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

NTSTATUS __cdecl NtCreateUserProcess(
        PHANDLE ProcessHandle,
        PHANDLE ThreadHandle,
        ACCESS_MASK ProcessDesiredAccess,
        ACCESS_MASK ThreadDesiredAccess,
        POBJECT_ATTRIBUTES ProcessObjectAttributes,
        POBJECT_ATTRIBUTES ThreadObjectAttributes,
        ULONG ProcessFlags,
        ULONG ThreadFlags,
        PVOID ProcessParameters,
        PPS_CREATE_INFO CreateInfo,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // r13
  KPROCESSOR_MODE PreviousMode; // r15
  ULONG v14; // r12d
  NTSTATUS result; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  ULONG v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  NTSTATUS Info; // esi
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
  ULONG v52; // esi
  unsigned __int64 v53; // rax
  void *v54; // rsp
  int v55; // r9d
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rbx
  char v61; // bl
  __int64 v62; // r13
  unsigned int v63; // esi
  __int64 v64; // rax
  int inserted; // ebx
  __int64 ProcessServerSilo; // rax
  _OWORD *v67; // rax
  KPROCESSOR_MODE v68; // dl
  int Context; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int8 Context_4; // [rsp+84h] [rbp+4h] BYREF
  char Context_5; // [rsp+85h] [rbp+5h] BYREF
  __int16 Context_6; // [rsp+86h] [rbp+6h] BYREF
  __int16 Context_8; // [rsp+88h] [rbp+8h] BYREF
  __int64 Context_16; // [rsp+90h] [rbp+10h] BYREF
  KPROCESSOR_MODE Context_24; // [rsp+98h] [rbp+18h]
  int Context_28; // [rsp+9Ch] [rbp+1Ch] BYREF
  int Context_32; // [rsp+A0h] [rbp+20h]
  ULONG Context_36; // [rsp+A4h] [rbp+24h] BYREF
  ACCESS_MASK Context_40; // [rsp+A8h] [rbp+28h]
  ACCESS_MASK Context_44; // [rsp+ACh] [rbp+2Ch]
  __int64 Context_48; // [rsp+B0h] [rbp+30h] BYREF
  PADAPTER_OBJECT Context_56; // [rsp+B8h] [rbp+38h] BYREF
  __int64 Context_64; // [rsp+C0h] [rbp+40h]
  struct _KTHREAD *Context_72; // [rsp+C8h] [rbp+48h]
  PVOID Context_80; // [rsp+D0h] [rbp+50h] BYREF
  __int64 Context_88; // [rsp+D8h] [rbp+58h] BYREF
  PADAPTER_OBJECT Context_96; // [rsp+E0h] [rbp+60h] BYREF
  volatile signed __int32 *Context_104; // [rsp+E8h] [rbp+68h]
  PVOID Context_112; // [rsp+F0h] [rbp+70h] BYREF
  __int64 Context_120; // [rsp+F8h] [rbp+78h] BYREF
  PVOID Context_128; // [rsp+100h] [rbp+80h]
  PHANDLE Context_136; // [rsp+108h] [rbp+88h]
  PHANDLE Context_144; // [rsp+110h] [rbp+90h]
  __int64 Context_152; // [rsp+118h] [rbp+98h] BYREF
  OBJECT_ATTRIBUTES Context_160; // [rsp+120h] [rbp+A0h] BYREF
  PCONTEXT_EX Context_208[3]; // [rsp+150h] [rbp+D0h] BYREF
  __int128 Context_232; // [rsp+168h] [rbp+E8h] BYREF
  struct _IO_STATUS_BLOCK Context_248; // [rsp+178h] [rbp+F8h] BYREF
  struct _IO_DRIVER_CREATE_CONTEXT Context_264; // [rsp+188h] [rbp+108h] BYREF
  __int64 Context_296; // [rsp+1A8h] [rbp+128h]
  __int128 Context_304; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 Context_320; // [rsp+1C0h] [rbp+140h]
  _BYTE Context_336[80]; // [rsp+1D0h] [rbp+150h] BYREF
  _OWORD Context_416[33]; // [rsp+220h] [rbp+1A0h] BYREF
  _BYTE Context_944[400]; // [rsp+430h] [rbp+3B0h] BYREF
  _BYTE AccessState[400]; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v107[2]; // [rsp+750h] [rbp+6D0h] BYREF
  __int128 v108; // [rsp+760h] [rbp+6E0h]

  Context_40 = ThreadDesiredAccess;
  Context_44 = ProcessDesiredAccess;
  Context_136 = ThreadHandle;
  Context_144 = ProcessHandle;
  Context_104 = (volatile signed __int32 *)ProcessObjectAttributes;
  Context_208[1] = (PCONTEXT_EX)ThreadObjectAttributes;
  Context_128 = ProcessParameters;
  Context_88 = 0LL;
  Context_28 = 0;
  Context_248 = 0LL;
  Context_16 = 0LL;
  Context_96 = 0LL;
  memset(&Context_160, 0, sizeof(Context_160));
  Context_48 = 0LL;
  memset(Context_944, 0, sizeof(Context_944));
  Context_232 = 0LL;
  Context_6 = 0;
  Context_5 = 0;
  Context_8 = 0;
  *(_OWORD *)v107 = 0LL;
  v108 = 0LL;
  memset(AccessState, 0, sizeof(AccessState));
  Context_208[0] = 0LL;
  Context_36 = 0;
  Context_152 = 0LL;
  Context_304 = 0LL;
  Context_320 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Context_72 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  Context_64 = Process;
  Context_208[2] = (PCONTEXT_EX)Process;
  PreviousMode = CurrentThread->PreviousMode;
  Context_24 = PreviousMode;
  Context_80 = 0LL;
  Context_56 = 0LL;
  LOBYTE(CurrentThread) = 0;
  Context = (int)CurrentThread;
  memset(&Context_264, 0, sizeof(Context_264));
  Context_296 = 0LL;
  memset(Context_336, 0, 0x48uLL);
  v14 = ProcessFlags;
  if ( (ProcessFlags & 0xFFFB6838) != 0 || (ThreadFlags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( (ProcessFlags & 0x8400) == 0x8400 )
    return -1073741776;
  Context_944[388] = PreviousMode;
  if ( PreviousMode )
  {
    v16 = (__int64)Context_144;
    if ( (unsigned __int64)Context_144 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
    v17 = (__int64)Context_136;
    if ( (unsigned __int64)Context_136 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v17 = *(_QWORD *)v17;
  }
  if ( ProcessObjectAttributes )
  {
    if ( PreviousMode && ((unsigned __int8)ProcessObjectAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v18 = ProcessObjectAttributes->Attributes & 0x1DF2;
    else
      v18 = ProcessObjectAttributes->Attributes & 0x11FF2;
    *(_DWORD *)&Context_944[384] = v18;
  }
  memset(Context_416, 0, 0x208uLL);
  if ( !AttributeList
    || (LOBYTE(v19) = PreviousMode,
        result = PspBuildCreateProcessContext(AttributeList, v19, 0LL, Context_416),
        result >= 0) )
  {
    if ( (ProcessFlags & 0x40) != 0 && (DWORD1(Context_416[0]) & 0x20000) != 0 && !LOBYTE(Context_416[24]) )
    {
      v14 = ProcessFlags & 0xFFFFFFBF;
      ProcessFlags &= ~0x40u;
      DWORD1(Context_416[0]) &= ~0x20000u;
    }
    if ( (v14 & 4) == 0 && (WORD2(Context_416[0]) & 0x800) != 0
      || (DWORD1(Context_416[0]) & 0x20000) != 0 && (v14 & 0x40) == 0 )
    {
      goto LABEL_161;
    }
    LOBYTE(v20) = PreviousMode;
    Info = PspCaptureCreateInfo(v20, CreateInfo, Context_416);
    if ( Info >= 0 )
    {
      v22 = 1;
      if ( (BYTE4(Context_416[0]) & 1) == 0 )
      {
        Context_48 = Process;
LABEL_33:
        *(_QWORD *)&Context_416[29] = PspEstimateNewProcessServerSilo(
                                        Process,
                                        *(_QWORD *)&Context_416[25],
                                        HIDWORD(Context_416[25]));
        if ( (BYTE9(Context_416[0]) & 0xC) != 4
          || Process == Context_64 && (*(_DWORD *)(Context_64 + 2172) & 0x1000) == 0 )
        {
          LOBYTE(v23) = PreviousMode;
          Info = PspReferenceTokenForNewProcess(Process, *(_QWORD *)&Context_416[9], v23, (char *)&Context_416[9] + 8);
          if ( Info < 0 )
          {
            *((_QWORD *)&Context_416[9] + 1) = 0LL;
            goto LABEL_162;
          }
          if ( !*(_QWORD *)&Context_416[9]
            || (int)SeQueryServerSiloToken(*((_QWORD *)&Context_416[9] + 1), &Context_152) < 0
            || (unsigned __int8)PspIsSiloInSilo(Context_152) )
          {
            if ( (BYTE4(Context_416[0]) & 0x20) != 0 )
            {
              v26 = (DWORD1(Context_416[0]) & 0x20000) != 0 ? LOBYTE(Context_416[24]) : 0;
              Context_4 = v26;
              if ( (NtGlobalFlag & 0x40000) != 0 )
              {
                Context_232 = *(_OWORD *)((char *)&Context_416[14] + 8);
                ZwSystemDebugControl(SysDbgKdPullRemoteFile, &Context_232, 0x10u, 0LL, 0, 0LL);
              }
              LOBYTE(v25) = v26;
              Info = SeQuerySigningPolicy(
                       *((_QWORD *)&Context_416[9] + 1),
                       (char *)&Context_416[14] + 8,
                       (v14 >> 6) & 1,
                       v25,
                       &Context_6,
                       &Context_5,
                       &Context_4);
              if ( Info < 0 )
                goto LABEL_162;
              Context_160.Length = 48;
              Context_160.RootDirectory = 0LL;
              v27 = 1600;
              if ( PreviousMode != 1 )
                v27 = 576;
              Context_160.Attributes = v27;
              Context_160.ObjectName = (PUNICODE_STRING)((char *)&Context_416[14] + 8);
              *(_OWORD *)&Context_160.SecurityDescriptor = 0LL;
              Info = 0;
              if ( qword_140D2D440 )
                Info = qword_140D2D440(*((_QWORD *)&Context_416[9] + 1));
              if ( Info < 0 )
                goto LABEL_162;
              Info = PspGetMemoryPartitionContext(
                       Process,
                       v14,
                       Context_416[25],
                       HIDWORD(Context_416[25]),
                       (__int64)&Context_80);
              if ( Info < 0 )
                goto LABEL_162;
              Info = PspCreateUserProcessEcp(&Context_264, *((_QWORD *)&Context_416[9] + 1));
              if ( Info < 0 )
                goto LABEL_162;
              Info = IoCreateFileEx(
                       (PHANDLE)&Context_416[10] + 1,
                       LODWORD(Context_416[10]) | 0x100020,
                       &Context_160,
                       &Context_248,
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
                       &Context_264);
              if ( Info < 0 && LODWORD(Context_416[10]) )
                Info = IoCreateFileEx(
                         (PHANDLE)&Context_416[10] + 1,
                         0x100020u,
                         &Context_160,
                         &Context_248,
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
                         &Context_264);
              if ( Info < 0 )
              {
                *((_QWORD *)&Context_416[10] + 1) = 0LL;
                v28 = 1LL;
LABEL_57:
                PspUpdateCreateInfo(v28, Context_416, 0LL);
                goto LABEL_162;
              }
              Context_112 = 0LL;
              Info = ObReferenceObjectByHandle(
                       *((HANDLE *)&Context_416[10] + 1),
                       0x100020u,
                       (POBJECT_TYPE)IoFileObjectType,
                       0,
                       &Context_112,
                       0LL);
              *(_QWORD *)&Context_416[11] = Context_112;
              if ( Info < 0 )
              {
                *(_QWORD *)&Context_416[11] = 0LL;
                goto LABEL_162;
              }
              Context_160.ObjectName = 0LL;
              v30 = 1;
              if ( *((_QWORD *)&Context_416[24] + 1) )
                v30 = 5;
              Context_32 = v30;
              if ( *((_QWORD *)&Context_416[26] + 1) )
              {
                v31 = SeDuplicateTokenAndAddOriginClaim(
                        *((_QWORD *)&Context_416[9] + 1),
                        *((_QWORD *)&Context_416[26] + 1),
                        LODWORD(Context_416[27]),
                        &Context_56);
                v32 = (unsigned __int8)Context;
                if ( v31 >= 0 )
                  v32 = 1;
                Context = v32;
                HIBYTE(Context_8) = v32;
              }
              else
              {
                LOBYTE(v32) = Context;
              }
              v33 = Context_56;
              if ( !(_BYTE)v32 )
                v33 = (struct _DMA_ADAPTER *)*((_QWORD *)&Context_416[9] + 1);
              Context_56 = v33;
              v34 = Context_6;
              LOBYTE(v29) = Context_6;
              for ( i = MmCreateSpecialImageSection(
                          (unsigned int)&Context_416[11] + 8,
                          (unsigned int)&Context_160,
                          (_DWORD)v33,
                          v29,
                          *((__int64 *)&Context_416[10] + 1),
                          v30);
                    ;
                    i = MmCreateSpecialImageSection(
                          (unsigned int)&Context_416[11] + 8,
                          (unsigned int)&Context_160,
                          (_DWORD)Context_56,
                          v43,
                          *((__int64 *)&Context_416[10] + 1),
                          Context_32) )
              {
                Info = i;
                if ( i < 0 )
                {
                  *((_QWORD *)&Context_416[11] + 1) = 0LL;
                  v28 = 2LL;
                  goto LABEL_57;
                }
                Context_120 = 0LL;
                Info = ObReferenceObjectByHandle(
                         *((HANDLE *)&Context_416[11] + 1),
                         8u,
                         MmSectionObjectType,
                         0,
                         (PVOID *)&Context_120,
                         0LL);
                *((_QWORD *)&Context_416[12] + 1) = Context_120;
                if ( Info < 0 )
                {
                  *((_QWORD *)&Context_416[12] + 1) = 0LL;
                  goto LABEL_162;
                }
                v37 = Context_4;
                LOBYTE(v36) = Context_4;
                Info = PspGetProcessProtectionRequirementsFromImage(Context_120, v36, (char *)&Context_6 + 1);
                if ( Info < 0 )
                  goto LABEL_162;
                LOBYTE(v39) = HIBYTE(Context_6);
                if ( HIBYTE(Context_6) == v37 )
                  break;
                Info = SeQuerySigningPolicy(
                         *((_QWORD *)&Context_416[9] + 1),
                         (char *)&Context_416[14] + 8,
                         1LL,
                         v39,
                         &Context_8,
                         &Context_5,
                         &Context_4);
                if ( Info < 0 )
                  goto LABEL_162;
                v42 = Context_8;
                if ( (_BYTE)Context_8 == v34 )
                {
                  v37 = Context_4;
                  break;
                }
                if ( (v34 & 0x30) != 0 && (Context_8 & 0x30) != (v34 & 0x30) )
                  goto LABEL_161;
                if ( !qword_140C1D8E0 )
                  goto LABEL_161;
                LOBYTE(v40) = v34;
                LOBYTE(v41) = Context_8;
                if ( !(unsigned int)qword_140C1D8E0(v41, v40, v38) )
                  goto LABEL_161;
                ObCloseHandle(*((HANDLE *)&Context_416[11] + 1), 0);
                HalPutDmaAdapter(*((PADAPTER_OBJECT *)&Context_416[12] + 1));
                *((_QWORD *)&Context_416[11] + 1) = 0LL;
                *((_QWORD *)&Context_416[12] + 1) = 0LL;
                v34 = v42;
                LOBYTE(Context_6) = v42;
                LOBYTE(v43) = v42;
              }
              LOBYTE(v38) = PreviousMode;
              Info = PspValidateCreateProcessProtection(Context_64, (int)Context_416, v38, v14, (PS_PROTECTION)v37);
              if ( Info < 0 )
                goto LABEL_162;
              if ( (v14 & 0x40000) != 0
                || (v37 & 7) != 1
                && (LOBYTE(v46) = v37,
                    LOBYTE(v45) = PreviousMode,
                    LOBYTE(v44) = *(_BYTE *)(v47 + 2170),
                    (unsigned __int8)PspCheckForInvalidAccessByProtection(v45, v44, v46)) )
              {
                BYTE8(Context_416[0]) |= 8u;
              }
              PspGetProcessParameterOverrides(Context_416, Context_80);
              LOBYTE(v48) = PreviousMode;
              Info = PspCaptureProcessParameters(v48, Context_128, Context_416);
              if ( Info < 0 )
              {
                BYTE8(Context_416[0]) &= ~4u;
                goto LABEL_162;
              }
              v49 = v107;
              v50 = Context_5;
LABEL_104:
              Info = PspAllocateProcess(
                       Context_48,
                       PreviousMode,
                       Context_104,
                       v37,
                       v34,
                       v50,
                       *((void **)&Context_416[12] + 1),
                       *((void **)&Context_416[9] + 1),
                       ProcessFlags,
                       0,
                       (__int64)Context_416,
                       *(_QWORD *)&Context_416[9] != 0LL,
                       Context_80,
                       (__int64)&Context_88,
                       &Context_16);
              if ( Info < 0 )
                goto LABEL_162;
              v51 = *(_DWORD *)(Context_16 + 2516) & 0x4000;
              Context_104 = v51 != 0 ? (volatile signed __int32 *)0x800 : 0LL;
              v52 = (*((_QWORD *)&Context_416[12] + 1) != 0LL ? 1048587 : 1048603) | 0x100040;
              if ( !v51 )
                v52 = *((_QWORD *)&Context_416[12] + 1) != 0LL ? 1048587 : 1048603;
              RtlGetExtendedContextLength2(v52, &Context_36, v51 != 0 ? 0x800 : 0);
              v53 = Context_36 + 15LL;
              if ( v53 <= Context_36 )
                v53 = 0xFFFFFFFFFFFFFF0LL;
              v54 = alloca(v53 & 0xFFFFFFFFFFFFFFF0uLL);
              memset(&Context, 0, Context_36);
              RtlInitializeExtendedContext2((PCONTEXT)&Context, v52, Context_208, (ULONG64)Context_104);
              if ( *((_QWORD *)&Context_416[12] + 1) )
              {
                v56 = DWORD1(Context_416[14]);
                if ( !*(_QWORD *)(Context_16 + 1408) )
                  v56 = *(_QWORD *)(Context_16 + 1360);
                PspCreateUserContext((unsigned int)&Context, 1, PspUserThreadStart, Context_416[3], v56);
              }
              else
              {
                LOBYTE(v55) = 1;
                Info = PspGetContextThreadInternal((_DWORD)Context_72, (unsigned int)&Context, 0, v55, 1);
                if ( Info < 0 )
                {
                  v57 = Context_16;
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Context_16 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)(v57 + 1080));
                  KeAbPostRelease(v57 + 1080);
                  KeLeaveCriticalRegionThread((__int64)Context_72);
                  PspRundownSingleProcess(Context_16);
                  goto LABEL_162;
                }
                Context_120 = 297LL;
              }
              ObfReferenceObjectWithTag((PVOID)Context_16, 0x72437350u);
              if ( v49 )
              {
                *(_BYTE *)v49 = 0;
                v58 = *(_QWORD *)&Context_416[4];
                if ( *(_QWORD *)&Context_416[4] < 0x40000uLL )
                  v58 = 0x40000LL;
                v49[3] = v58;
                v49[2] = *((_QWORD *)&Context_416[4] + 1);
                v49[1] = DWORD2(Context_416[3]);
              }
              Context_32 = 0;
              PspMapThreadCreationFlags(ThreadFlags, &Context_28);
              if ( (_DWORD)Context_88 )
              {
                Context_32 = 2;
                Context_28 |= 0x10u;
              }
              *(_QWORD *)&Context_304 = Context_336;
              Context_28 |= 0x60u;
              Info = PspAllocateThread(
                       Context_16,
                       (__int64)&Context,
                       (__int64)&Context_304,
                       0LL,
                       0LL,
                       (__int64)&Context_28,
                       (__int64)&Context_96,
                       (__int64)v49,
                       (__int64)AccessState);
              if ( Info < 0 )
              {
                v60 = Context_16;
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Context_16 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v60 + 1080));
                KeAbPostRelease(v60 + 1080);
                KeLeaveCriticalRegionThread((__int64)Context_72);
                PspRundownSingleProcess(Context_16);
                v61 = Context;
                goto LABEL_160;
              }
              v62 = Context_64;
              LOBYTE(v59) = PreviousMode;
              if ( (unsigned __int8)PsTestProtectedProcessIncompatibility(v59, Context_64, Context_16) )
              {
                v63 = Context_40;
                if ( (Context_40 & 0x2000000) != 0 )
                {
                  v63 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v37 >> 4) + 8] & 0x1FFFFF | Context_40 & 0xFDFFFFFF;
                  if ( !*(_QWORD *)&Context_416[8] || v62 == *(_QWORD *)&Context_416[8] )
                    v63 |= 1u;
                }
              }
              else
              {
                v63 = Context_40;
              }
              if ( *(_QWORD *)&Context_416[13] )
                v64 = *(_QWORD *)&Context_416[13] + 112LL;
              else
                v64 = 0LL;
              inserted = PspInsertProcess(
                           (PVOID)Context_16,
                           *((HANDLE *)&Context_416[8] + 1),
                           Context_32,
                           v64,
                           (__int64)Context_944);
              Info = PspInsertThread(
                       Context_96,
                       (PEPROCESS)Context_16,
                       v63,
                       (__int64)v49,
                       (__int64)Context_416,
                       0LL,
                       (PACCESS_STATE)AccessState,
                       (__int64)Context_136,
                       *(__int64 *)&Context_416[1]);
              KeLeaveCriticalRegionThread((__int64)Context_72);
              if ( inserted < 0 )
              {
                PspRundownSingleProcess(Context_16);
                Info = inserted;
                v61 = Context;
LABEL_159:
                HalPutDmaAdapter(Context_96);
LABEL_160:
                ObfDereferenceObjectWithTag((PVOID)Context_16, 0x72437350u);
LABEL_163:
                if ( Context_80 )
                  ObfDereferenceObjectWithTag(Context_80, 0x624A7350u);
                PspDeleteCreateProcessContext(Context_416);
                if ( Context_264.ExtraCreateParameter )
                  FsRtlFreeExtraCreateParameterList(Context_264.ExtraCreateParameter);
                if ( v61 )
                  HalPutDmaAdapter(Context_56);
                return Info;
              }
              if ( Info < 0 )
              {
                v61 = Context;
LABEL_157:
                if ( Info >= 0 )
                  goto LABEL_159;
LABEL_158:
                PsTerminateProcess(Context_16, (unsigned int)Info);
                goto LABEL_159;
              }
              ProcessServerSilo = PsGetProcessServerSilo(Context_16);
              if ( ProcessServerSilo != *(_QWORD *)&Context_416[29] )
              {
                Info = -1073741267;
                v61 = Context;
                goto LABEL_158;
              }
              Info = PspCreateObjectHandle(Context_16, Context_944, PsProcessType);
              if ( Info < 0 )
              {
                v61 = Context;
              }
              else
              {
                v67 = *(_OWORD **)&Context_416[2];
                if ( *(_QWORD *)&Context_416[2] )
                {
                  **(_OWORD **)&Context_416[2] = Context_416[3];
                  v67[1] = Context_416[4];
                  v67[2] = Context_416[5];
                  v67[3] = Context_416[6];
                }
                *Context_144 = *(HANDLE *)&Context_944[392];
                v61 = Context;
                Info = PspUpdateCreateInfo(6LL, Context_416, Context_16);
                if ( Info >= 0 )
                  goto LABEL_155;
                if ( (*(_WORD *)&Context_944[384] & 0x200) != 0 || (v68 = 1, (*(_DWORD *)(v62 + 2172) & 0x1000) != 0) )
                  v68 = 0;
                ObCloseHandle(*(HANDLE *)&Context_944[392], v68);
              }
              if ( (*(_WORD *)&AccessState[384] & 0x200) != 0 || (*(_DWORD *)(v62 + 2172) & 0x1000) != 0 )
                v22 = 0;
              ObCloseHandle(*(HANDLE *)&AccessState[392], v22);
LABEL_155:
              SepDeleteAccessState((__int64)Context_944);
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&Context_944[32]);
              goto LABEL_157;
            }
            if ( Process == Context_64
              && PreviousMode
              && !Context_128
              && (BYTE9(Context_416[0]) & 0xC) == 0
              && (SBYTE4(Context_416[0]) & 0x80u) == 0
              && (DWORD1(Context_416[0]) & 0x20000) == 0
              && (BYTE8(Context_416[0]) & 0x10) == 0 )
            {
              BYTE8(Context_416[0]) &= ~4u;
              v37 = *(_BYTE *)(Process + 2170);
              Context_4 = v37;
              Context_5 = *(_BYTE *)(Process + 2169);
              v34 = *(_BYTE *)(Process + 2168);
              LOBYTE(Context_6) = v34;
              if ( (v14 & 0x40) != 0 && (v37 & 7) == 0 )
              {
                Info = -1073741790;
                goto LABEL_162;
              }
              LOBYTE(v24) = PreviousMode;
              Info = PspValidateCreateProcessProtection(Context_64, (int)Context_416, v24, v14, (PS_PROTECTION)v37);
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
               *((ULONG_PTR *)&Context_416[7] + 1),
               128,
               (__int64)PsProcessType,
               PreviousMode,
               0x72437350u,
               &Context_48,
               0LL,
               0LL);
      if ( Info >= 0 )
      {
        Process = Context_48;
        *(_QWORD *)&Context_416[8] = Context_48;
        goto LABEL_33;
      }
    }
LABEL_162:
    v61 = Context;
    goto LABEL_163;
  }
  return result;
}
