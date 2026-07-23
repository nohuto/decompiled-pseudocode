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
  struct _KPROCESS *Process; // r13
  char PreviousMode; // r15
  ULONG v14; // r12d
  NTSTATUS result; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  ULONG v18; // eax
  __int64 v19; // rdx
  NTSTATUS Info; // esi
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
  char Flink; // r13
  int i; // eax
  __int64 v33; // rdx
  PS_PROTECTION v34; // bl
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
  ULONG v49; // esi
  unsigned __int64 v50; // rax
  void *v51; // rsp
  int v52; // r9d
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rbx
  struct _KPROCESS *v58; // r13
  char v59; // al
  ACCESS_MASK v60; // r8d
  ACCESS_MASK v61; // esi
  __int64 v62; // rax
  int inserted; // ebx
  __int64 ProcessServerSilo; // rax
  _OWORD *v65; // rax
  KPROCESSOR_MODE v66; // dl
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
  struct _KPROCESS *Context_48; // [rsp+B0h] [rbp+30h] BYREF
  PADAPTER_OBJECT Context_56; // [rsp+B8h] [rbp+38h] BYREF
  struct _KPROCESS *Context_64; // [rsp+C0h] [rbp+40h]
  struct _KTHREAD *Context_72; // [rsp+C8h] [rbp+48h]
  PVOID Context_80; // [rsp+D0h] [rbp+50h] BYREF
  __int64 Context_88; // [rsp+D8h] [rbp+58h] BYREF
  char *Context_96; // [rsp+E0h] [rbp+60h] BYREF
  POBJECT_ATTRIBUTES Context_104; // [rsp+E8h] [rbp+68h]
  PVOID Context_112; // [rsp+F0h] [rbp+70h] BYREF
  __int64 Context_120; // [rsp+F8h] [rbp+78h] BYREF
  PVOID Context_128; // [rsp+100h] [rbp+80h]
  _QWORD *Context_136; // [rsp+108h] [rbp+88h]
  PHANDLE Context_144; // [rsp+110h] [rbp+90h]
  __int64 Context_152; // [rsp+118h] [rbp+98h] BYREF
  OBJECT_ATTRIBUTES Context_160; // [rsp+120h] [rbp+A0h] BYREF
  PCONTEXT_EX Context_208; // [rsp+150h] [rbp+D0h] BYREF
  POBJECT_ATTRIBUTES Context_216; // [rsp+158h] [rbp+D8h]
  struct _KPROCESS *Context_224; // [rsp+160h] [rbp+E0h]
  __int128 Context_232; // [rsp+168h] [rbp+E8h] BYREF
  struct _IO_STATUS_BLOCK Context_248; // [rsp+178h] [rbp+F8h] BYREF
  struct _IO_DRIVER_CREATE_CONTEXT Context_264; // [rsp+188h] [rbp+108h] BYREF
  __int64 Context_296; // [rsp+1A8h] [rbp+128h]
  __int128 Context_304; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 Context_320; // [rsp+1C0h] [rbp+140h]
  _BYTE Context_336[80]; // [rsp+1D0h] [rbp+150h] BYREF
  _OWORD Context_416[33]; // [rsp+220h] [rbp+1A0h] BYREF
  _BYTE Context_944[400]; // [rsp+430h] [rbp+3B0h] BYREF
  __int64 v106[50]; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v107[2]; // [rsp+750h] [rbp+6D0h] BYREF
  __int128 v108; // [rsp+760h] [rbp+6E0h]

  Context_40 = ThreadDesiredAccess;
  Context_44 = ProcessDesiredAccess;
  Context_136 = ThreadHandle;
  Context_144 = ProcessHandle;
  Context_104 = ProcessObjectAttributes;
  Context_216 = ThreadObjectAttributes;
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
  memset(v106, 0, sizeof(v106));
  Context_208 = 0LL;
  Context_36 = 0;
  Context_152 = 0LL;
  Context_304 = 0LL;
  Context_320 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Context_72 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  Context_64 = Process;
  Context_224 = Process;
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
      goto LABEL_167;
    }
    Info = PspCaptureCreateInfo(PreviousMode, (unsigned __int64)CreateInfo, (__int64)Context_416);
    if ( Info >= 0 )
    {
      v21 = 1;
      if ( (BYTE4(Context_416[0]) & 1) == 0 )
      {
        Context_48 = Process;
LABEL_33:
        *(_QWORD *)&Context_416[29] = PspEstimateNewProcessServerSilo(
                                        (__int64)Process,
                                        *(__int64 *)&Context_416[25],
                                        HIDWORD(Context_416[25]));
        if ( (BYTE9(Context_416[0]) & 0xC) != 4
          || Process == Context_64 && (HIDWORD(Context_64[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          Info = PspReferenceTokenForNewProcess(
                   Process,
                   *(void **)&Context_416[9],
                   PreviousMode,
                   (_QWORD *)&Context_416[9] + 1);
          if ( Info < 0 )
          {
            *((_QWORD *)&Context_416[9] + 1) = 0LL;
            goto LABEL_168;
          }
          if ( !*(_QWORD *)&Context_416[9]
            || (int)SeQueryServerSiloToken(*((_QWORD *)&Context_416[9] + 1), &Context_152) < 0
            || (unsigned __int8)PspIsSiloInSilo(Context_152) )
          {
            if ( (BYTE4(Context_416[0]) & 0x20) != 0 )
            {
              v23 = (DWORD1(Context_416[0]) & 0x20000) != 0 ? LOBYTE(Context_416[24]) : 0;
              Context_4 = v23;
              if ( (NtGlobalFlag & 0x40000) != 0 )
              {
                Context_232 = *(_OWORD *)((char *)&Context_416[14] + 8);
                ZwSystemDebugControl(SysDbgKdPullRemoteFile, &Context_232, 0x10u, 0LL, 0, 0LL);
              }
              Info = SeQuerySigningPolicy(
                       *((void **)&Context_416[9] + 1),
                       (UNICODE_STRING *)((char *)&Context_416[14] + 8),
                       (v14 & 0x40) != 0,
                       v23,
                       (unsigned __int8 *)&Context_6,
                       (unsigned __int8 *)&Context_5,
                       &Context_4);
              if ( Info < 0 )
                goto LABEL_168;
              Context_160.Length = 48;
              Context_160.RootDirectory = 0LL;
              v24 = 1600;
              if ( PreviousMode != 1 )
                v24 = 576;
              Context_160.Attributes = v24;
              Context_160.ObjectName = (PUNICODE_STRING)((char *)&Context_416[14] + 8);
              *(_OWORD *)&Context_160.SecurityDescriptor = 0LL;
              Info = 0;
              if ( qword_140D2D440 )
                Info = qword_140D2D440(*((_QWORD *)&Context_416[9] + 1));
              if ( Info < 0 )
                goto LABEL_168;
              Info = PspGetMemoryPartitionContext(
                       (__int64)Process,
                       v14,
                       *(__int64 *)&Context_416[25],
                       HIDWORD(Context_416[25]),
                       &Context_80);
              if ( Info < 0 )
                goto LABEL_168;
              Info = PspCreateUserProcessEcp((__int64)&Context_264, *((__int64 *)&Context_416[9] + 1));
              if ( Info < 0 )
                goto LABEL_168;
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
                v25 = 1;
LABEL_57:
                PspUpdateCreateInfo(v25, (__int64)Context_416, 0LL);
                goto LABEL_168;
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
                v26 = Context;
LABEL_171:
                if ( Context_80 )
                  ObfDereferenceObjectWithTag(Context_80, 0x624A7350u);
                PspDeleteCreateProcessContext(Context_416);
                if ( Context_264.ExtraCreateParameter )
                  FsRtlFreeExtraCreateParameterList(Context_264.ExtraCreateParameter);
                if ( v26 )
                  HalPutDmaAdapter(Context_56);
                return Info;
              }
              Context_160.ObjectName = 0LL;
              v27 = 1;
              if ( *((_QWORD *)&Context_416[24] + 1) )
                v27 = 5;
              Context_32 = v27;
              if ( *((_QWORD *)&Context_416[26] + 1) )
              {
                v28 = SeDuplicateTokenAndAddOriginClaim(
                        *((_QWORD *)&Context_416[9] + 1),
                        *((_QWORD *)&Context_416[26] + 1),
                        LODWORD(Context_416[27]),
                        &Context_56);
                v29 = (unsigned __int8)Context;
                if ( v28 >= 0 )
                  v29 = 1;
                Context = v29;
                HIBYTE(Context_8) = v29;
              }
              else
              {
                LOBYTE(v29) = Context;
              }
              v30 = Context_56;
              if ( !(_BYTE)v29 )
                v30 = (struct _DMA_ADAPTER *)*((_QWORD *)&Context_416[9] + 1);
              Context_56 = v30;
              Flink = Context_6;
              for ( i = MmCreateSpecialImageSection(
                          (__int64 *)&Context_416[11] + 1,
                          (int)&Context_160,
                          (__int64)v30,
                          Context_6,
                          *((__int64 *)&Context_416[10] + 1),
                          v27);
                    ;
                    i = MmCreateSpecialImageSection(
                          (__int64 *)&Context_416[11] + 1,
                          (int)&Context_160,
                          (__int64)Context_56,
                          v38,
                          *((__int64 *)&Context_416[10] + 1),
                          Context_32) )
              {
                Info = i;
                if ( i < 0 )
                {
                  *((_QWORD *)&Context_416[11] + 1) = 0LL;
                  v25 = 2;
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
                  goto LABEL_168;
                }
                v34.Level = Context_4;
                LOBYTE(v33) = Context_4;
                Info = PspGetProcessProtectionRequirementsFromImage(Context_120, v33, (char *)&Context_6 + 1);
                if ( Info < 0 )
                  goto LABEL_168;
                if ( HIBYTE(Context_6) == v34.Level )
                  break;
                Info = SeQuerySigningPolicy(
                         *((void **)&Context_416[9] + 1),
                         (UNICODE_STRING *)((char *)&Context_416[14] + 8),
                         1,
                         HIBYTE(Context_6),
                         (unsigned __int8 *)&Context_8,
                         (unsigned __int8 *)&Context_5,
                         &Context_4);
                if ( Info < 0 )
                  goto LABEL_168;
                v38 = Context_8;
                if ( (_BYTE)Context_8 == Flink )
                {
                  v34.Level = Context_4;
                  break;
                }
                if ( (Flink & 0x30) != 0 && (Context_8 & 0x30) != (Flink & 0x30) )
                  goto LABEL_167;
                if ( !qword_140C1D980 )
                  goto LABEL_167;
                LOBYTE(v36) = Flink;
                LOBYTE(v37) = Context_8;
                if ( !(unsigned int)qword_140C1D980(v37, v36, v35) )
                  goto LABEL_167;
                ObCloseHandle(*((HANDLE *)&Context_416[11] + 1), 0);
                HalPutDmaAdapter(*((PADAPTER_OBJECT *)&Context_416[12] + 1));
                *((_QWORD *)&Context_416[11] + 1) = 0LL;
                *((_QWORD *)&Context_416[12] + 1) = 0LL;
                Flink = v38;
                LOBYTE(Context_6) = v38;
              }
              LOBYTE(v35) = PreviousMode;
              Info = PspValidateCreateProcessProtection((int)Context_64, (int)Context_416, v35, v14, v34);
              if ( Info < 0 )
                goto LABEL_168;
              if ( (v14 & 0x40000) != 0
                || (v34.Level & 7) != 1
                && (LOBYTE(v41) = v34,
                    LOBYTE(v40) = PreviousMode,
                    LOBYTE(v39) = *(_BYTE *)(v42 + 2170),
                    (unsigned __int8)PspCheckForInvalidAccessByProtection(v40, v39, v41)) )
              {
                BYTE8(Context_416[0]) |= 8u;
              }
              PspGetProcessParameterOverrides(Context_416, Context_80);
              LOBYTE(v43) = PreviousMode;
              Info = PspCaptureProcessParameters(v43, Context_128, Context_416);
              if ( Info < 0 )
              {
                BYTE8(Context_416[0]) &= ~4u;
                goto LABEL_168;
              }
              v46 = v107;
              v47 = Context_5;
              goto LABEL_104;
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
              v34.Level = BYTE2(Process[2].Header.WaitListHead.Flink);
              Context_4 = v34.Level;
              Context_5 = BYTE1(Process[2].Header.WaitListHead.Flink);
              Flink = (char)Process[2].Header.WaitListHead.Flink;
              LOBYTE(Context_6) = Flink;
              if ( (v14 & 0x40) != 0 && (v34.Level & 7) == 0 )
              {
                Info = -1073741790;
                goto LABEL_168;
              }
              LOBYTE(v22) = PreviousMode;
              Info = PspValidateCreateProcessProtection((int)Context_64, (int)Context_416, v22, v14, v34);
              if ( Info < 0 )
                goto LABEL_168;
              v46 = 0LL;
LABEL_104:
              LOBYTE(v45) = v34;
              LOBYTE(v44) = PreviousMode;
              Info = PspAllocateProcess(
                       (_DWORD)Context_48,
                       v44,
                       (_DWORD)Context_104,
                       v45,
                       Flink,
                       v47,
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
                goto LABEL_168;
              v48 = *(_DWORD *)(Context_16 + 2516) & 0x4000;
              Context_104 = v48 != 0 ? (POBJECT_ATTRIBUTES)0x800 : 0LL;
              v49 = (*((_QWORD *)&Context_416[12] + 1) != 0LL ? 1048587 : 1048603) | 0x100040;
              if ( !v48 )
                v49 = *((_QWORD *)&Context_416[12] + 1) != 0LL ? 1048587 : 1048603;
              RtlGetExtendedContextLength2(v49, &Context_36, v48 != 0 ? 0x800 : 0);
              v50 = Context_36 + 15LL;
              if ( v50 <= Context_36 )
                v50 = 0xFFFFFFFFFFFFFF0LL;
              v51 = alloca(v50 & 0xFFFFFFFFFFFFFFF0uLL);
              memset(&Context, 0, Context_36);
              RtlInitializeExtendedContext2((PCONTEXT)&Context, v49, &Context_208, (ULONG64)Context_104);
              if ( *((_QWORD *)&Context_416[12] + 1) )
              {
                v53 = DWORD1(Context_416[14]);
                if ( !*(_QWORD *)(Context_16 + 1408) )
                  v53 = *(_QWORD *)(Context_16 + 1360);
                PspCreateUserContext((unsigned int)&Context, 1, PspUserThreadStart, Context_416[3], v53);
              }
              else
              {
                LOBYTE(v52) = 1;
                Info = PspGetContextThreadInternal((_DWORD)Context_72, (unsigned int)&Context, 0, v52, 1);
                if ( Info < 0 )
                {
                  v54 = Context_16;
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Context_16 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)(v54 + 1080));
                  KeAbPostRelease(v54 + 1080);
                  KeLeaveCriticalRegionThread((__int64)Context_72);
                  PspRundownSingleProcess(Context_16, 0);
                  goto LABEL_168;
                }
                Context_120 = 297LL;
              }
              ObfReferenceObjectWithTag((PVOID)Context_16, 0x72437350u);
              if ( v46 )
              {
                *(_BYTE *)v46 = 0;
                v55 = *(_QWORD *)&Context_416[4];
                if ( *(_QWORD *)&Context_416[4] < 0x40000uLL )
                  v55 = 0x40000LL;
                v46[3] = v55;
                v46[2] = *((_QWORD *)&Context_416[4] + 1);
                v46[1] = DWORD2(Context_416[3]);
              }
              Context_32 = 0;
              PspMapThreadCreationFlags(ThreadFlags, &Context_28);
              if ( (_DWORD)Context_88 )
              {
                Context_32 = 2;
                Context_28 |= 0x10u;
              }
              if ( HIDWORD(Context_88) )
                LOWORD(ProcessFlags) = ProcessFlags | 0x400;
              *(_QWORD *)&Context_304 = Context_336;
              Context_28 |= 0x60u;
              Info = PspAllocateThread(
                       Context_16,
                       (ULONG_PTR)Context_216,
                       PreviousMode,
                       (__int64)Context_416,
                       (__int64)&Context,
                       (__int64 *)&Context_304,
                       0LL,
                       0LL,
                       &Context_28,
                       (PADAPTER_OBJECT *)&Context_96,
                       v46,
                       (_DMA_OPERATIONS **)v106);
              if ( Info < 0 )
              {
                v57 = Context_16;
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Context_16 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v57 + 1080));
                KeAbPostRelease(v57 + 1080);
                KeLeaveCriticalRegionThread((__int64)Context_72);
                PspRundownSingleProcess(Context_16, 0);
                v26 = Context;
                goto LABEL_166;
              }
              v58 = Context_64;
              LOBYTE(v56) = PreviousMode;
              v59 = PsTestProtectedProcessIncompatibility(v56, Context_64, Context_16);
              v60 = Context_44;
              if ( v59 )
              {
                if ( (Context_44 & 0x2000000) != 0 )
                {
                  v60 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v34.Level >> 4) + 4] & 0x1FFFFF | Context_44 & 0xFDFFFFFF;
                  if ( !*(_QWORD *)&Context_416[8] || v58 == *(struct _KPROCESS **)&Context_416[8] )
                    v60 |= 1u;
                }
                v61 = Context_40;
                if ( (Context_40 & 0x2000000) != 0 )
                {
                  v61 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v34.Level >> 4) + 8] & 0x1FFFFF | Context_40 & 0xFDFFFFFF;
                  if ( !*(_QWORD *)&Context_416[8] || v58 == *(struct _KPROCESS **)&Context_416[8] )
                    v61 |= 1u;
                }
              }
              else
              {
                v61 = Context_40;
              }
              if ( *(_QWORD *)&Context_416[13] )
                v62 = *(_QWORD *)&Context_416[13] + 112LL;
              else
                v62 = 0LL;
              inserted = PspInsertProcess(
                           (struct _KPROCESS *)Context_16,
                           Context_48,
                           v60,
                           ProcessFlags,
                           *((HANDLE *)&Context_416[8] + 1),
                           Context_32,
                           v62,
                           (struct _ACCESS_STATE *)Context_944);
              Info = PspInsertThread(
                       Context_96,
                       Context_16,
                       (__int64)Context_336,
                       &Context_28,
                       v61,
                       v46,
                       (__int64)Context_416,
                       0LL,
                       (__int64)v106,
                       Context_136,
                       *(struct _DMA_ADAPTER **)&Context_416[1]);
              KeLeaveCriticalRegionThread((__int64)Context_72);
              if ( inserted < 0 )
              {
                PspRundownSingleProcess(Context_16, 0);
                Info = inserted;
                v26 = Context;
LABEL_165:
                HalPutDmaAdapter((PADAPTER_OBJECT)Context_96);
LABEL_166:
                ObfDereferenceObjectWithTag((PVOID)Context_16, 0x72437350u);
                goto LABEL_169;
              }
              if ( Info < 0 )
              {
                v26 = Context;
LABEL_163:
                if ( Info >= 0 )
                  goto LABEL_165;
LABEL_164:
                PsTerminateProcess(Context_16, (unsigned int)Info);
                goto LABEL_165;
              }
              ProcessServerSilo = PsGetProcessServerSilo(Context_16);
              if ( ProcessServerSilo != *(_QWORD *)&Context_416[29] )
              {
                Info = -1073741267;
                v26 = Context;
                goto LABEL_164;
              }
              Info = PspCreateObjectHandle(
                       (void *)Context_16,
                       (__int64)Context_944,
                       (struct _OBJECT_TYPE *)PsProcessType);
              if ( Info < 0 )
              {
                v26 = Context;
              }
              else
              {
                v65 = *(_OWORD **)&Context_416[2];
                if ( *(_QWORD *)&Context_416[2] )
                {
                  **(_OWORD **)&Context_416[2] = Context_416[3];
                  v65[1] = Context_416[4];
                  v65[2] = Context_416[5];
                  v65[3] = Context_416[6];
                }
                *Context_144 = *(HANDLE *)&Context_944[392];
                v26 = Context;
                Info = PspUpdateCreateInfo(6, (__int64)Context_416, Context_16);
                if ( Info >= 0 )
                  goto LABEL_161;
                if ( (*(_WORD *)&Context_944[384] & 0x200) != 0
                  || (v66 = 1, (HIDWORD(v58[2].Header.WaitListHead.Flink) & 0x1000) != 0) )
                {
                  v66 = 0;
                }
                ObCloseHandle(*(HANDLE *)&Context_944[392], v66);
              }
              if ( (v106[48] & 0x200) != 0 || (HIDWORD(v58[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                v21 = 0;
              ObCloseHandle((HANDLE)v106[49], v21);
LABEL_161:
              SepDeleteAccessState((__int64)Context_944);
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&Context_944[32]);
              goto LABEL_163;
            }
          }
        }
LABEL_167:
        Info = -1073741811;
        goto LABEL_168;
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
LABEL_168:
    v26 = Context;
LABEL_169:
    if ( *(_QWORD *)&Context_416[11] )
      SeDeleteCodeIntegrityOriginClaimForFileObject();
    goto LABEL_171;
  }
  return result;
}
