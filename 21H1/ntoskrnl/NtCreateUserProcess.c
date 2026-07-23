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
  char PreviousMode; // r12
  ULONG v14; // r15d
  NTSTATUS result; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  ULONG v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  NTSTATUS Info; // esi
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
  PS_PROTECTION v38; // bl
  int v39; // r8d
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  char v43; // bl
  int v44; // r9d
  PS_PROTECTION *v45; // r11
  __int64 v46; // rcx
  int v47; // edx
  int v48; // r9d
  __int64 *v49; // r15
  char v50; // r11
  int v51; // ecx
  ULONG v52; // esi
  unsigned __int64 v53; // rax
  void *v54; // rsp
  int v55; // r9d
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  char v67; // bl
  __int64 v68; // r13
  unsigned int v69; // esi
  __int64 v70; // rax
  int inserted; // ebx
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 ProcessServerSilo; // rax
  _OWORD *v76; // rax
  KPROCESSOR_MODE v77; // dl
  _QWORD *OutputBufferLength; // [rsp+20h] [rbp-60h]
  int Context; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int8 Context_4; // [rsp+84h] [rbp+4h] BYREF
  char Context_5; // [rsp+85h] [rbp+5h] BYREF
  __int16 Context_6; // [rsp+86h] [rbp+6h] BYREF
  __int16 Context_8; // [rsp+88h] [rbp+8h] BYREF
  __int64 Context_16; // [rsp+90h] [rbp+10h] BYREF
  char Context_24; // [rsp+98h] [rbp+18h]
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
  POBJECT_ATTRIBUTES Context_104; // [rsp+E8h] [rbp+68h]
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
  _OWORD Context_416[32]; // [rsp+220h] [rbp+1A0h] BYREF
  _BYTE Context_928[400]; // [rsp+420h] [rbp+3A0h] BYREF
  __int64 v116[50]; // [rsp+5B0h] [rbp+530h] BYREF
  __int64 v117[2]; // [rsp+740h] [rbp+6C0h] BYREF
  __int128 v118; // [rsp+750h] [rbp+6D0h]

  Context_40 = ThreadDesiredAccess;
  Context_44 = ProcessDesiredAccess;
  Context_136 = ThreadHandle;
  Context_144 = ProcessHandle;
  Context_104 = ProcessObjectAttributes;
  Context_208[1] = (PCONTEXT_EX)ThreadObjectAttributes;
  Context_128 = ProcessParameters;
  Context_88 = 0LL;
  Context_28 = 0;
  Context_248 = 0LL;
  Context_16 = 0LL;
  Context_96 = 0LL;
  memset(&Context_160, 0, sizeof(Context_160));
  Context_48 = 0LL;
  memset(Context_928, 0, sizeof(Context_928));
  Context_232 = 0LL;
  Context_6 = 0;
  Context_5 = 0;
  Context_8 = 0;
  *(_OWORD *)v117 = 0LL;
  v118 = 0LL;
  memset(v116, 0, sizeof(v116));
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
  Context_928[388] = PreviousMode;
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
    *(_DWORD *)&Context_928[384] = v18;
  }
  memset(Context_416, 0, sizeof(Context_416));
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
      v23 = 1;
      if ( (BYTE4(Context_416[0]) & 1) == 0 )
      {
        Context_48 = Process;
LABEL_33:
        *(_QWORD *)&Context_416[29] = PspEstimateNewProcessServerSilo(
                                        Process,
                                        *(__int64 *)&Context_416[25],
                                        HIDWORD(Context_416[25]));
        if ( (BYTE9(Context_416[0]) & 0xC) != 4
          || Process == Context_64 && (*(_DWORD *)(Context_64 + 2172) & 0x1000) == 0 )
        {
          LOBYTE(v24) = PreviousMode;
          Info = PspReferenceTokenForNewProcess(Process, *(_QWORD *)&Context_416[9], v24, (char *)&Context_416[9] + 8);
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
              v27 = (DWORD1(Context_416[0]) & 0x20000) != 0 ? LOBYTE(Context_416[24]) : 0;
              Context_4 = v27;
              if ( (NtGlobalFlag & 0x40000) != 0 )
              {
                Context_232 = *(_OWORD *)((char *)&Context_416[14] + 8);
                ZwSystemDebugControl(SysDbgKdPullRemoteFile, &Context_232, 0x10u, 0LL, 0, 0LL);
              }
              LOBYTE(v26) = v27;
              Info = SeQuerySigningPolicy(
                       *((_QWORD *)&Context_416[9] + 1),
                       (char *)&Context_416[14] + 8,
                       (v14 >> 6) & 1,
                       v26,
                       &Context_6,
                       &Context_5,
                       &Context_4);
              if ( Info < 0 )
                goto LABEL_162;
              Context_160.Length = 48;
              Context_160.RootDirectory = 0LL;
              v28 = 1600;
              if ( PreviousMode != 1 )
                v28 = 576;
              Context_160.Attributes = v28;
              Context_160.ObjectName = (PUNICODE_STRING)((char *)&Context_416[14] + 8);
              *(_OWORD *)&Context_160.SecurityDescriptor = 0LL;
              Info = 0;
              if ( qword_140D2C440 )
                Info = qword_140D2C440(*((_QWORD *)&Context_416[9] + 1));
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
                v29 = 1LL;
LABEL_57:
                PspUpdateCreateInfo(v29, Context_416, 0LL);
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
              v31 = 1;
              if ( *((_QWORD *)&Context_416[24] + 1) )
                v31 = 5;
              Context_32 = v31;
              if ( *((_QWORD *)&Context_416[26] + 1) )
              {
                v32 = SeDuplicateTokenAndAddOriginClaim(
                        *((_QWORD *)&Context_416[9] + 1),
                        *((_QWORD *)&Context_416[26] + 1),
                        LODWORD(Context_416[27]),
                        &Context_56);
                v33 = (unsigned __int8)Context;
                if ( v32 >= 0 )
                  v33 = 1;
                Context = v33;
                HIBYTE(Context_8) = v33;
              }
              else
              {
                LOBYTE(v33) = Context;
              }
              v34 = Context_56;
              if ( !(_BYTE)v33 )
                v34 = (struct _DMA_ADAPTER *)*((_QWORD *)&Context_416[9] + 1);
              Context_56 = v34;
              v35 = Context_6;
              LOBYTE(v30) = Context_6;
              for ( i = MmCreateSpecialImageSection(
                          (unsigned int)&Context_416[11] + 8,
                          (unsigned int)&Context_160,
                          (_DWORD)v34,
                          v30,
                          *((__int64 *)&Context_416[10] + 1),
                          v31);
                    ;
                    i = MmCreateSpecialImageSection(
                          (unsigned int)&Context_416[11] + 8,
                          (unsigned int)&Context_160,
                          (_DWORD)Context_56,
                          v44,
                          *((__int64 *)&Context_416[10] + 1),
                          Context_32) )
              {
                Info = i;
                if ( i < 0 )
                {
                  *((_QWORD *)&Context_416[11] + 1) = 0LL;
                  v29 = 2LL;
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
                v38.Level = Context_4;
                LOBYTE(v37) = Context_4;
                Info = PspGetProcessProtectionRequirementsFromImage(Context_120, v37, (char *)&Context_6 + 1);
                if ( Info < 0 )
                  goto LABEL_162;
                LOBYTE(v40) = HIBYTE(Context_6);
                if ( HIBYTE(Context_6) == v38.Level )
                  break;
                Info = SeQuerySigningPolicy(
                         *((_QWORD *)&Context_416[9] + 1),
                         (char *)&Context_416[14] + 8,
                         1LL,
                         v40,
                         &Context_8,
                         &Context_5,
                         &Context_4);
                if ( Info < 0 )
                  goto LABEL_162;
                v43 = Context_8;
                if ( (_BYTE)Context_8 == v35 )
                {
                  v38.Level = Context_4;
                  break;
                }
                if ( (v35 & 0x30) != 0 && (Context_8 & 0x30) != (v35 & 0x30) )
                  goto LABEL_161;
                if ( !qword_140C1DAA0 )
                  goto LABEL_161;
                LOBYTE(v41) = v35;
                LOBYTE(v42) = Context_8;
                if ( !(unsigned int)qword_140C1DAA0(v42, v41) )
                  goto LABEL_161;
                ObCloseHandle(*((HANDLE *)&Context_416[11] + 1), 0);
                HalPutDmaAdapter(*((PADAPTER_OBJECT *)&Context_416[12] + 1));
                *((_QWORD *)&Context_416[11] + 1) = 0LL;
                *((_QWORD *)&Context_416[12] + 1) = 0LL;
                v35 = v43;
                LOBYTE(Context_6) = v43;
                LOBYTE(v44) = v43;
              }
              LOBYTE(v39) = PreviousMode;
              Info = PspValidateCreateProcessProtection(Context_64, (int)Context_416, v39, v14, v38);
              if ( Info < 0 )
                goto LABEL_162;
              if ( (v14 & 0x40000) != 0
                || (v38.Level & 7) != 1 && PspCheckForInvalidAccessByProtection(PreviousMode, v45[2170], v38) )
              {
                BYTE8(Context_416[0]) |= 8u;
              }
              PspGetProcessParameterOverrides(Context_416, Context_80);
              LOBYTE(v46) = PreviousMode;
              Info = PspCaptureProcessParameters(v46, Context_128, Context_416);
              if ( Info < 0 )
              {
                BYTE8(Context_416[0]) &= ~4u;
                goto LABEL_162;
              }
              v49 = v117;
              v50 = Context_5;
LABEL_104:
              LOBYTE(v48) = v38;
              LOBYTE(v47) = PreviousMode;
              Info = PspAllocateProcess(
                       Context_48,
                       v47,
                       (_DWORD)Context_104,
                       v48,
                       v35,
                       v50,
                       *((__int64 *)&Context_416[12] + 1),
                       *((__int64 *)&Context_416[9] + 1),
                       ProcessFlags,
                       0,
                       (__int64)Context_416,
                       *(_QWORD *)&Context_416[9] != 0LL,
                       (__int64)Context_80,
                       (__int64)&Context_88,
                       (__int64)&Context_16);
              if ( Info < 0 )
                goto LABEL_162;
              v51 = *(_DWORD *)(Context_16 + 2516) & 0x4000;
              Context_104 = v51 != 0 ? (POBJECT_ATTRIBUTES)0x800 : 0LL;
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
                    ExfTryToWakePushLock(v57 + 1080);
                  KeAbPostRelease(v57 + 1080);
                  KeLeaveCriticalRegionThread((__int64)Context_72, v58, v59, v60);
                  PspRundownSingleProcess(Context_16, 0);
                  goto LABEL_162;
                }
                Context_120 = 297LL;
              }
              ObfReferenceObjectWithTag((PVOID)Context_16, 0x72437350u);
              if ( v49 )
              {
                *(_BYTE *)v49 = 0;
                v61 = *(_QWORD *)&Context_416[4];
                if ( *(_QWORD *)&Context_416[4] < 0x40000uLL )
                  v61 = 0x40000LL;
                v49[3] = v61;
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
                       (__int64)v116);
              if ( Info < 0 )
              {
                v63 = Context_16;
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Context_16 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v63 + 1080);
                KeAbPostRelease(v63 + 1080);
                KeLeaveCriticalRegionThread((__int64)Context_72, v64, v65, v66);
                PspRundownSingleProcess(Context_16, 0);
                v67 = Context;
                goto LABEL_160;
              }
              v68 = Context_64;
              LOBYTE(v62) = PreviousMode;
              if ( PsTestProtectedProcessIncompatibility(v62, Context_64, Context_16) )
              {
                v69 = Context_40;
                if ( (Context_40 & 0x2000000) != 0 )
                {
                  v69 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v38.Level >> 4) + 8] & 0x1FFFFF | Context_40 & 0xFDFFFFFF;
                  if ( !*(_QWORD *)&Context_416[8] || v68 == *(_QWORD *)&Context_416[8] )
                    v69 |= 1u;
                }
              }
              else
              {
                v69 = Context_40;
              }
              if ( *(_QWORD *)&Context_416[13] )
                v70 = *(_QWORD *)&Context_416[13] + 112LL;
              else
                v70 = 0LL;
              inserted = PspInsertProcess(
                           (PADAPTER_OBJECT)Context_16,
                           *((HANDLE *)&Context_416[8] + 1),
                           Context_32,
                           v70,
                           (__int64)Context_928);
              Info = PspInsertThread(
                       Context_96,
                       Context_16,
                       v69,
                       (__int64)v49,
                       (__int64)Context_416,
                       0LL,
                       (__int64)v116,
                       (__int64)Context_136,
                       *(__int64 *)&Context_416[1]);
              KeLeaveCriticalRegionThread((__int64)Context_72, v72, v73, v74);
              if ( inserted < 0 )
              {
                PspRundownSingleProcess(Context_16, 0);
                Info = inserted;
                v67 = Context;
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
                if ( v67 )
                  HalPutDmaAdapter(Context_56);
                return Info;
              }
              if ( Info < 0 )
              {
                v67 = Context;
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
                v67 = Context;
                goto LABEL_158;
              }
              Info = PspCreateObjectHandle(Context_16, Context_928, PsProcessType);
              if ( Info < 0 )
              {
                v67 = Context;
              }
              else
              {
                v76 = *(_OWORD **)&Context_416[2];
                if ( *(_QWORD *)&Context_416[2] )
                {
                  **(_OWORD **)&Context_416[2] = Context_416[3];
                  v76[1] = Context_416[4];
                  v76[2] = Context_416[5];
                  v76[3] = Context_416[6];
                }
                *Context_144 = *(HANDLE *)&Context_928[392];
                v67 = Context;
                Info = PspUpdateCreateInfo(6LL, Context_416, Context_16);
                if ( Info >= 0 )
                  goto LABEL_155;
                if ( (*(_WORD *)&Context_928[384] & 0x200) != 0 || (v77 = 1, (*(_DWORD *)(v68 + 2172) & 0x1000) != 0) )
                  v77 = 0;
                ObCloseHandle(*(HANDLE *)&Context_928[392], v77);
              }
              if ( (v116[48] & 0x200) != 0 || (*(_DWORD *)(v68 + 2172) & 0x1000) != 0 )
                v23 = 0;
              ObCloseHandle((HANDLE)v116[49], v23);
LABEL_155:
              SepDeleteAccessState((__int64)Context_928);
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&Context_928[32]);
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
              v38.Level = *(_BYTE *)(Process + 2170);
              Context_4 = v38.Level;
              Context_5 = *(_BYTE *)(Process + 2169);
              v35 = *(_BYTE *)(Process + 2168);
              LOBYTE(Context_6) = v35;
              if ( (v14 & 0x40) != 0 && (v38.Level & 7) == 0 )
              {
                Info = -1073741790;
                goto LABEL_162;
              }
              LOBYTE(v25) = PreviousMode;
              Info = PspValidateCreateProcessProtection(Context_64, (int)Context_416, v25, v14, v38);
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
      LODWORD(OutputBufferLength) = 1917023056;
      LOBYTE(v22) = PreviousMode;
      Info = ObpReferenceObjectByHandleWithTag(
               *((ULONG_PTR *)&Context_416[7] + 1),
               128LL,
               PsProcessType,
               v22,
               OutputBufferLength,
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
    v67 = Context;
    goto LABEL_163;
  }
  return result;
}
