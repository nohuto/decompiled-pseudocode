/*
 * XREFs of RaidUnitCompleteRequest @ 0x1C00079D0
 * Callers:
 *     <none>
 * Callees:
 *     StorpTelemetryCollectErrorData @ 0x1C0006C5C (StorpTelemetryCollectErrorData.c)
 *     RaidDmaPutScatterGatherList @ 0x1C00071FC (RaidDmaPutScatterGatherList.c)
 *     RaUnitAsyncError @ 0x1C00073AC (RaUnitAsyncError.c)
 *     RaidNormalizeDeviceQueue @ 0x1C0007968 (RaidNormalizeDeviceQueue.c)
 *     StorRemoveIoGatewayItem @ 0x1C0008D50 (StorRemoveIoGatewayItem.c)
 *     StorUnmapSenseInfo @ 0x1C0008E80 (StorUnmapSenseInfo.c)
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 *     StorpTelemetryCollectPerfData @ 0x1C00090D0 (StorpTelemetryCollectPerfData.c)
 *     RiNormalizeDeviceQueue @ 0x1C000ACFC (RiNormalizeDeviceQueue.c)
 *     RiDeleteDeviceQueueEntry @ 0x1C000AEA0 (RiDeleteDeviceQueueEntry.c)
 *     StorSubmitIoGatewayItem @ 0x1C000AEF4 (StorSubmitIoGatewayItem.c)
 *     RaidAllocatePool @ 0x1C000BD70 (RaidAllocatePool.c)
 *     RaidAdapterRestartQueues @ 0x1C001362C (RaidAdapterRestartQueues.c)
 *     IsZonedWriteRequest @ 0x1C00159B0 (IsZonedWriteRequest.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 *     McTemplateK0zqjuuussssx_EtwWriteTransfer @ 0x1C001DD94 (McTemplateK0zqjuuussssx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001F8C0 (memset.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D480 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x1C002DCDC (RaidAdapterReleaseCryptoKeyResources.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0032D48 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C0033520 (WPP_SF_qqD.c)
 *     StorRemoveEventQueue @ 0x1C00346F4 (StorRemoveEventQueue.c)
 *     StorRemoveEventQueueInternal @ 0x1C00347B0 (StorRemoveEventQueueInternal.c)
 *     McTemplateK0pquuqqd_EtwWriteTransfer @ 0x1C0034844 (McTemplateK0pquuqqd_EtwWriteTransfer.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0036404 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C004296C (RaidSrbExGetBidirectionalData.c)
 *     TranslateResultToScsiRequestBlock @ 0x1C0042A94 (TranslateResultToScsiRequestBlock.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x1C004615C (McTemplateK0dud_EtwWriteTransfer.c)
 *     RaidLogRequestComplete @ 0x1C0049BEC (RaidLogRequestComplete.c)
 *     RaidFreeRemappedScatterGatherListMdl @ 0x1C004D3D4 (RaidFreeRemappedScatterGatherListMdl.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C004F514 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C004F80C (StorEtwLogoRequestServiceTimeEventData.c)
 */

void __fastcall RaidUnitCompleteRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  IRP *v5; // rcx
  char v6; // r13
  __int64 v7; // r14
  __int64 v8; // rsi
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rdi
  __int64 Length; // rbx
  __int64 *v12; // rdi
  unsigned int *v13; // r15
  unsigned int *v14; // rbx
  KSPIN_LOCK *v15; // rcx
  char v16; // al
  int v17; // r9d
  __int64 *v18; // rcx
  __int64 *v19; // r8
  __int64 **v20; // rax
  __int64 *v21; // rcx
  __int64 *v22; // rdx
  __int64 **v23; // rax
  int v24; // edx
  int v25; // ecx
  unsigned __int8 *v26; // rcx
  unsigned int v27; // r11d
  unsigned int v28; // r10d
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  int v32; // ecx
  int v33; // ecx
  unsigned __int64 v34; // rcx
  int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rdx
  char v38; // bl
  unsigned __int8 v39; // r12
  unsigned int v40; // edi
  _BYTE *v41; // r15
  unsigned int v42; // r11d
  __int64 v43; // r10
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // r9
  __int64 v47; // r8
  int v48; // ecx
  int v49; // ecx
  unsigned __int64 v50; // rcx
  unsigned int v51; // r11d
  __int64 i; // r10
  __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  __int64 v55; // r9
  __int64 v56; // r8
  int v57; // ecx
  int v58; // ecx
  unsigned __int64 v59; // rcx
  char v60; // cl
  char v61; // al
  PIRP v62; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char CompletionFilter; // bl
  unsigned __int8 v65; // bl
  __int64 v66; // rdi
  unsigned int HighestNodeNumber; // r8d
  __int64 v68; // rcx
  int v69; // ecx
  bool v70; // zf
  unsigned int v71; // r11d
  unsigned int v72; // r9d
  __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  __int64 v75; // r10
  __int64 v76; // r8
  int v77; // ecx
  int v78; // ecx
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // r15
  bool v81; // r12
  _BYTE *v82; // rbx
  unsigned __int64 v83; // rax
  _IO_STACK_LOCATION *v84; // rax
  _IO_SECURITY_CONTEXT *v85; // rdi
  _SECURITY_QUALITY_OF_SERVICE *v86; // rbx
  __int64 v87; // r13
  _SECURITY_QUALITY_OF_SERVICE *v88; // rdx
  int v89; // edx
  int v90; // ecx
  int v91; // r9d
  __int64 v92; // rcx
  __int64 v93; // r12
  __int64 BidirectionalData; // rax
  __int64 v95; // rax
  int v96; // edi
  bool v97; // di
  __int64 *v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  void (__fastcall *v101)(__int64, _QWORD, bool); // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  struct _MDL *v104; // rcx
  unsigned __int64 v105; // r8
  signed __int32 v106; // eax
  signed __int32 v107; // ett
  _OWORD *Pool; // rax
  _OWORD *v109; // rbx
  PIO_WORKITEM WorkItem; // rax
  char v111; // cl
  IRP *v112; // rbx
  unsigned int v113; // ecx
  unsigned __int8 v114; // al
  __int64 v115; // rax
  __int64 v116; // rdi
  _BYTE *v117; // rcx
  char v118; // al
  int v119; // ebx
  __int64 v120; // rax
  _BYTE *v121; // rcx
  __int64 v122; // rdx
  char v123; // al
  unsigned __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rcx
  unsigned int v127; // eax
  void *v128; // r8
  __int64 v129; // r9
  void *v130; // rdi
  unsigned __int64 v131; // rdi
  void *v132; // rax
  ULONG *v133; // rax
  void *v134; // rcx
  char v135; // al
  __int64 v136; // rcx
  __int64 v137; // rax
  bool v138; // r12
  __int64 v139; // r14
  unsigned int v140; // edi
  KSPIN_LOCK *v141; // rbx
  unsigned __int64 v142; // rbx
  KIRQL v143; // al
  KIRQL v144; // bl
  __int64 v145; // r15
  __int64 j; // rbx
  int v147; // [rsp+70h] [rbp-90h]
  int v148; // [rsp+74h] [rbp-8Ch]
  int v149; // [rsp+78h] [rbp-88h]
  bool v150; // [rsp+78h] [rbp-88h]
  char v151; // [rsp+7Ch] [rbp-84h]
  unsigned int v152; // [rsp+80h] [rbp-80h]
  unsigned int v153; // [rsp+84h] [rbp-7Ch]
  unsigned int v154; // [rsp+84h] [rbp-7Ch]
  PIRP Irp; // [rsp+88h] [rbp-78h]
  unsigned int v156; // [rsp+90h] [rbp-70h]
  __int64 v157; // [rsp+98h] [rbp-68h]
  unsigned __int8 *v158; // [rsp+A0h] [rbp-60h]
  __int64 v160; // [rsp+B0h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v162; // [rsp+E0h] [rbp-20h]
  __int64 v163; // [rsp+E8h] [rbp-18h]
  __int64 v164; // [rsp+F0h] [rbp-10h]
  __int64 v165; // [rsp+F8h] [rbp-8h]
  _OWORD v166[2]; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v167; // [rsp+120h] [rbp+20h] BYREF
  __int128 v168; // [rsp+138h] [rbp+38h] BYREF
  __int128 v169; // [rsp+148h] [rbp+48h] BYREF
  __int128 v170; // [rsp+158h] [rbp+58h] BYREF

  v4 = a1;
  v5 = *(IRP **)(a1 + 160);
  v6 = 0;
  v162 = 0LL;
  v164 = v4;
  v7 = *(_QWORD *)(v4 + 168);
  v8 = *(_QWORD *)(v4 + 224);
  v151 = *(_BYTE *)(v4 + 16);
  Irp = v5;
  if ( *(_BYTE *)(v7 + 2) == 40 )
  {
    LODWORD(a4) = *(_DWORD *)(v7 + 20);
    v163 = *(_QWORD *)(v7 + 104);
    v165 = v4 + 800;
    v149 = *(_DWORD *)(v7 + 24);
    v156 = *(_DWORD *)(v7 + 60);
    v152 = a4;
    v153 = *(_DWORD *)(v7 + 32);
  }
  else
  {
    v152 = *(unsigned __int8 *)(v7 + 2);
    v163 = *(_QWORD *)(v7 + 56);
    v165 = *(_QWORD *)(v7 + 32);
    v153 = *(unsigned __int8 *)(v7 + 8);
    v149 = *(_DWORD *)(v7 + 12);
    v156 = *(_DWORD *)(v7 + 16);
  }
  SecurityContext = v5->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SecurityQos = SecurityContext[4].SecurityQos;
  else
    SecurityQos = SecurityContext[2].SecurityQos;
  if ( (SecurityQos[1].ImpersonationLevel & 2) == 0 )
    goto LABEL_29;
  Length = SecurityQos[7].Length;
  v12 = (__int64 *)&SecurityQos[4];
  v13 = *(unsigned int **)(v8 + 504);
  v14 = &v13[16 * Length + 16];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v15 = (KSPIN_LOCK *)(v14 + 10);
  if ( KeGetCurrentIrql() != 2 )
  {
    KeAcquireInStackQueuedSpinLock(v15, &LockHandle);
    StorRemoveEventQueueInternal(v14, *v13, v12);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_26;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v15, &LockHandle);
  v16 = *((_BYTE *)v12 - 32);
  v17 = *v13;
  if ( (v16 & 2) != 0 )
  {
    *((_BYTE *)v12 - 32) = v16 & 0xFD;
    v18 = (__int64 *)*v12;
    v19 = *(__int64 **)v14;
    if ( *(__int64 **)(*v12 + 8) == v12 )
    {
      v20 = (__int64 **)v12[1];
      if ( *v20 == v12 )
      {
        *v20 = v18;
        v18[1] = (__int64)v20;
        if ( (v12[6] & 1) == 0 )
        {
LABEL_18:
          if ( (v17 & 4) == 0 && v19 == v12 )
          {
            if ( *(unsigned int **)v14 == v14 )
              v14[12] = -1;
            else
              v14[12] = *(_DWORD *)(*(_QWORD *)v14 + 32LL);
          }
          goto LABEL_22;
        }
        v21 = v12 + 2;
        if ( *((__int64 **)v14 + 4) == v12 + 2 )
          *((_QWORD *)v14 + 4) = *v21;
        v22 = (__int64 *)*v21;
        if ( *(__int64 **)(*v21 + 8) == v21 )
        {
          v23 = (__int64 **)v12[3];
          if ( *v23 == v21 )
          {
            *v23 = v22;
            v22[1] = (__int64)v23;
            *((_DWORD *)v12 + 12) &= ~1u;
            goto LABEL_18;
          }
        }
      }
    }
    __fastfail(3u);
  }
LABEL_22:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_26:
  if ( !StorEtwLoggingEnabled )
    goto LABEL_35;
  v168 = 0LL;
  IoGetActivityIdIrp(Irp, &v168);
  if ( byte_1C0069842 < 0 )
    McTemplateK0dud_EtwWriteTransfer(v25, v24, (unsigned int)&v168, a4, 4);
LABEL_29:
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0069841 & 2) != 0 )
      StorEtwIORequestServiceTimeEventData(v4, 0LL, 0LL);
    if ( *(_DWORD *)(v8 + 1812) && (byte_1C0069843 & 2) != 0 )
      StorEtwLogoRequestServiceTimeEventData(v4, 0LL, 0LL);
  }
LABEL_35:
  if ( *(_BYTE *)(v7 + 2) != 40 )
  {
    v26 = (unsigned __int8 *)(v7 + 72);
    goto LABEL_55;
  }
  v26 = 0LL;
  v158 = 0LL;
  if ( !*(_DWORD *)(v7 + 20) )
  {
    v27 = *(_DWORD *)(v7 + 56);
    v28 = 0;
    if ( v27 )
    {
      while ( 1 )
      {
        v29 = *(unsigned int *)(v7 + 4LL * v28 + 120);
        if ( (unsigned int)v29 < 0x80 )
          goto LABEL_50;
        v30 = *(unsigned int *)(v7 + 16);
        if ( (unsigned int)v29 >= (unsigned int)v30 )
          goto LABEL_50;
        a4 = v29 + v7;
        v31 = (unsigned int)v29;
        v32 = *(_DWORD *)(v29 + v7) - 64;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            if ( v33 == 1 && v31 + 40 <= v30 )
            {
              v26 = (unsigned __int8 *)(a4 + 32);
              if ( !*(_DWORD *)(a4 + 12) )
                v26 = 0LL;
              goto LABEL_55;
            }
            goto LABEL_50;
          }
          v34 = v31 + 56;
        }
        else
        {
          v34 = v31 + 40;
        }
        if ( v34 <= v30 )
        {
          if ( !*(_BYTE *)(a4 + 10) )
          {
LABEL_51:
            v26 = 0LL;
            break;
          }
          v26 = (unsigned __int8 *)(a4 + 24);
LABEL_55:
          v158 = v26;
          break;
        }
LABEL_50:
        if ( ++v28 >= v27 )
          goto LABEL_51;
      }
    }
  }
  if ( *(_DWORD *)(v8 + 2244) && v26 )
  {
    v35 = *v26;
    if ( !v152 )
    {
      if ( (unsigned __int8)(v35 - 8) <= 0x3Au && (v36 = 0x400200500000005LL, _bittest64(&v36, (unsigned int)(v35 - 8)))
        || (unsigned __int8)(v35 + 120) <= 0x22u && (v37 = 0x500000205LL, _bittest64(&v37, (unsigned int)(v35 + 120))) )
      {
        StorpTelemetryCollectPerfData(v4, v7, v8, a4, v35);
      }
    }
    v26 = v158;
  }
  if ( !g_StorpTraceLoggingErrorDataEnabled || !v26 )
    goto LABEL_113;
  v38 = *(_BYTE *)(v7 + 2);
  v39 = 0;
  v40 = *(unsigned __int8 *)(v7 + 3);
  v41 = 0LL;
  BYTE2(v147) = *(_BYTE *)(v7 + 3);
  LOWORD(v147) = 0;
  if ( v38 == 40 )
  {
    if ( *(_DWORD *)(v7 + 20) )
    {
      v38 = 40;
    }
    else
    {
      v42 = *(_DWORD *)(v7 + 56);
      v43 = 0LL;
      if ( v42 )
      {
        while ( 1 )
        {
          v44 = *(unsigned int *)(v7 + 4 * v43 + 120);
          if ( (unsigned int)v44 < 0x80 )
            goto LABEL_77;
          v45 = *(unsigned int *)(v7 + 16);
          if ( (unsigned int)v44 >= (unsigned int)v45 )
            goto LABEL_77;
          v46 = v44 + v7;
          v47 = (unsigned int)v44;
          v48 = *(_DWORD *)(v44 + v7) - 64;
          if ( !v48 )
            goto LABEL_75;
          v49 = v48 - 1;
          if ( v49 )
            break;
          v50 = v47 + 56;
LABEL_76:
          if ( v50 <= v45 )
          {
            v6 = *(_BYTE *)(v46 + 8);
            goto LABEL_83;
          }
LABEL_77:
          v43 = (unsigned int)(v43 + 1);
          if ( (unsigned int)v43 >= v42 )
            goto LABEL_84;
        }
        if ( v49 != 1 )
          goto LABEL_77;
LABEL_75:
        v50 = v47 + 40;
        goto LABEL_76;
      }
    }
  }
  else
  {
    v6 = *(_BYTE *)(v7 + 4);
LABEL_83:
    LOBYTE(v147) = v6;
  }
LABEL_84:
  LOBYTE(v40) = v40 & 0x3F;
  if ( v38 == 40 )
  {
    if ( !*(_DWORD *)(v7 + 20) )
    {
      v51 = *(_DWORD *)(v7 + 56);
      for ( i = 0LL; (unsigned int)i < v51; i = (unsigned int)(i + 1) )
      {
        v53 = *(unsigned int *)(v7 + 4 * i + 120);
        if ( (unsigned int)v53 < 0x80 )
          continue;
        v54 = *(unsigned int *)(v7 + 16);
        if ( (unsigned int)v53 >= (unsigned int)v54 )
          continue;
        v55 = v53 + v7;
        v56 = (unsigned int)v53;
        v57 = *(_DWORD *)(v53 + v7) - 64;
        if ( v57 )
        {
          v58 = v57 - 1;
          if ( v58 )
          {
            if ( v58 == 1 && v56 + 40 <= v54 )
            {
              v41 = *(_BYTE **)(v55 + 24);
              v39 = *(_BYTE *)(v55 + 9);
              goto LABEL_102;
            }
            continue;
          }
          v59 = v56 + 56;
        }
        else
        {
          v59 = v56 + 40;
        }
        if ( v59 <= v54 )
        {
          v41 = *(_BYTE **)(v55 + 16);
          v39 = *(_BYTE *)(v55 + 9);
          goto LABEL_102;
        }
      }
    }
  }
  else if ( !v38 )
  {
    v41 = *(_BYTE **)(v7 + 32);
    v39 = *(_BYTE *)(v7 + 11);
LABEL_102:
    BYTE1(v147) = v39;
  }
  if ( (v147 & 0x800000) == 0 )
  {
    if ( v6 != 2 && (unsigned __int8)v40 <= 0x12u )
    {
      v69 = 262211;
      if ( _bittest(&v69, v40) )
      {
LABEL_112:
        v4 = a1;
LABEL_113:
        v62 = Irp;
        goto LABEL_114;
      }
    }
  }
  else
  {
    if ( v41 && v39 >= 8u && (unsigned __int8)((*v41 & 0x7F) - 112) <= 1u )
    {
      v60 = v41[12];
      v61 = v41[2] & 0xF;
    }
    else
    {
      v61 = 0;
      v60 = 0;
    }
    if ( (_BYTE)v40 == 1 && !v61 && !v60 )
      goto LABEL_112;
  }
  v4 = a1;
  v62 = Irp;
  StorpTelemetryCollectErrorData(v8, (int)Irp, a1, v7);
LABEL_114:
  if ( (*(_BYTE *)(v4 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v8, *(unsigned int *)(v4 + 748));
    *(_BYTE *)(v4 + 17) &= ~2u;
  }
  CurrentStackLocation = v62->Tail.Overlay.CurrentStackLocation;
  CompletionFilter = CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  CurrentStackLocation->Parameters.QueryDirectory.FileName = 0LL;
  v65 = CompletionFilter & 3;
  v66 = *(_QWORD *)(v8 + 24);
  if ( (v65 & 1) != 0
    && *(char *)(v8 + 449) < 0
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1736)) )
  {
    PoFxIdleComponent(**(_QWORD **)(v8 + 1744), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1736));
  }
  if ( v65 >= 2u && *(_QWORD *)(v66 + 5088) )
    RaidAdapterPoFxIdleComponent(v66, 0LL, 0LL);
  HighestNodeNumber = KeQueryHighestNodeNumber();
  if ( v153 / *(_DWORD *)(v8 + 584) < HighestNodeNumber + 1 )
    HighestNodeNumber = v153 / *(_DWORD *)(v8 + 584);
  ExpInterlockedPushEntrySList(
    (PSLIST_HEADER)(*(_QWORD *)(v8 + 512) + ((unsigned __int64)HighestNodeNumber << 6)),
    (PSLIST_ENTRY)(*(_QWORD *)(v8 + 576) + 16LL * v153));
  v154 = 0;
  if ( (v149 & 0x102) != 0x102 && (v149 & 0x80010) == 0 )
  {
    if ( v152 > 0x20 || (v68 = 0x1000D0000LL, !_bittest64(&v68, v152)) )
      v154 = 1;
  }
  if ( (*(_BYTE *)(v8 + 450) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v7) )
  {
    v70 = *(_BYTE *)(v7 + 2) == 40;
    *(_BYTE *)(v7 + 3) = 56;
    if ( v70 )
    {
      if ( !*(_DWORD *)(v7 + 20) )
      {
        v71 = *(_DWORD *)(v7 + 56);
        v72 = 0;
        if ( v71 )
        {
          while ( 1 )
          {
            v73 = *(unsigned int *)(v7 + 4LL * v72 + 120);
            if ( (unsigned int)v73 < 0x80 )
              goto LABEL_147;
            v74 = *(unsigned int *)(v7 + 16);
            if ( (unsigned int)v73 >= (unsigned int)v74 )
              goto LABEL_147;
            v75 = v73 + v7;
            v76 = (unsigned int)v73;
            v77 = *(_DWORD *)(v73 + v7) - 64;
            if ( !v77 )
              goto LABEL_145;
            v78 = v77 - 1;
            if ( v78 )
              break;
            v79 = v76 + 56;
LABEL_146:
            if ( v79 <= v74 )
            {
              *(_BYTE *)(v75 + 8) = 0;
              goto LABEL_152;
            }
LABEL_147:
            if ( ++v72 >= v71 )
              goto LABEL_152;
          }
          if ( v78 != 1 )
            goto LABEL_147;
LABEL_145:
          v79 = v76 + 40;
          goto LABEL_146;
        }
      }
    }
    else
    {
      *(_BYTE *)(v7 + 4) = 0;
    }
LABEL_152:
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 2104));
  }
  v80 = -1LL;
  if ( (*(_BYTE *)(v7 + 3) & 0x3F) == 1 )
  {
    v81 = 0;
    v150 = 0;
    if ( v158
      && *v158 == 29
      && (*(_BYTE *)(v7 + 2) != 40 ? (v82 = *(_BYTE **)(v7 + 24)) : (v82 = *(_BYTE **)(v7 + 64)), v82) )
    {
      v70 = MmIsAddressValid(v82) == 0;
      v83 = v156;
      if ( !v70 && v156 >= 9 && *v82 == 14 )
      {
        v81 = v82[8] == 15;
        v150 = v81;
      }
    }
    else
    {
      v83 = v156;
    }
    Irp->IoStatus.Information = v83;
    v84 = Irp->Tail.Overlay.CurrentStackLocation;
    Irp->IoStatus.Status = 0;
    v85 = v84->Parameters.Create.SecurityContext;
    if ( BYTE2(v85->SecurityQos) == 40 )
      v86 = v85[4].SecurityQos;
    else
      v86 = v85[2].SecurityQos;
    v87 = *(_QWORD *)&v86[18].ContextTrackingMode;
    if ( BYTE2(v85->SecurityQos) == 40 )
      v88 = v85[4].SecurityQos;
    else
      v88 = v85[2].SecurityQos;
    if ( (v88[1].ImpersonationLevel & 2) != 0 )
    {
      StorRemoveEventQueue(*(_QWORD *)(v87 + 504), &v88[4]);
      if ( StorEtwLoggingEnabled )
      {
        v169 = 0LL;
        IoGetActivityIdIrp(Irp, &v169);
        if ( byte_1C0069842 < 0 )
          McTemplateK0dud_EtwWriteTransfer(v90, v89, (unsigned int)&v169, v91, 4);
      }
    }
    StorUnmapSenseInfo(v86, *(_QWORD *)(*(_QWORD *)(v87 + 24) + 8LL));
    v92 = *(_QWORD *)(v87 + 24);
    if ( *(_QWORD *)(v92 + 5736) )
      RaidAdapterReleaseCryptoKeyResources(v92, v86);
    if ( BYTE2(v85->SecurityQos) == 40 )
    {
      if ( (v86[1].ImpersonationLevel & 0x40) != 0 )
      {
        TranslateResultToScsiRequestBlock(*(_QWORD *)&v86[62].ContextTrackingMode, v85);
        *(_QWORD *)(*(_QWORD *)&v86[62].ContextTrackingMode + 48LL) = *(_QWORD *)&v86[14].ContextTrackingMode;
        *(_QWORD *)(*(_QWORD *)&v86[62].ContextTrackingMode + 24LL) = *(_QWORD *)&v86[15].ImpersonationLevel;
        *(_QWORD *)(*(_QWORD *)&v86[62].ContextTrackingMode + 56LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)&v86[62].ContextTrackingMode + 40LL) = 0LL;
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId = *(_QWORD *)&v86[62].ContextTrackingMode;
        LOBYTE(v86[1].ImpersonationLevel) &= ~0x40u;
        *(_QWORD *)&v86[62].ContextTrackingMode = 0LL;
      }
      else
      {
        v85[4].SecurityQos = 0LL;
        *(_QWORD *)&v85[2].DesiredAccess = *(_QWORD *)&v86[15].ImpersonationLevel;
        v85[4].AccessState = 0LL;
        v93 = *(_QWORD *)&v86[16].Length;
        if ( v93 )
        {
          BidirectionalData = RaidSrbExGetBidirectionalData(v85);
          if ( BidirectionalData )
            *(_QWORD *)(BidirectionalData + 16) = v93;
        }
        v81 = v150;
      }
    }
    else
    {
      v85[2].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v86[14].ContextTrackingMode;
      v85[1].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v86[15].ImpersonationLevel;
      v85[2].AccessState = 0LL;
      *(_QWORD *)&v85[1].DesiredAccess = 0LL;
    }
    if ( *(_QWORD *)&v86[9].ImpersonationLevel )
    {
      v95 = *(_QWORD *)&v86[14].Length;
      if ( *(_BYTE *)(v95 + 2) == 40 )
        v96 = *(_DWORD *)(v95 + 24) >> 6;
      else
        LOBYTE(v96) = *(_BYTE *)(v95 + 12) >> 6;
      v97 = (v96 & 1) == 0;
      if ( RaidVerifierEnabled )
        RaidFreeRemappedScatterGatherListMdl(v86);
      v98 = (__int64 *)(*(_QWORD *)&v86[18].Length + 728LL);
      if ( *(_QWORD *)&v86[18].Length != -728LL )
      {
        v99 = *v98;
        if ( *v98 )
        {
          v100 = *(_QWORD *)(v99 + 8);
          if ( v100 )
          {
            v101 = *(void (__fastcall **)(__int64, _QWORD, bool))(v100 + 96);
            if ( v101 )
              v101(v99, *(_QWORD *)&v86[9].ImpersonationLevel, v97);
          }
        }
      }
      v102 = *(_QWORD *)&v86[12].ContextTrackingMode;
      *(_QWORD *)&v86[9].ImpersonationLevel = 0LL;
      *(_QWORD *)&v86[12].Length = 0LL;
      if ( v102 )
      {
        RaidDmaPutScatterGatherList((__int64 *)(*(_QWORD *)&v86[18].Length + 728LL));
        *(_QWORD *)&v86[12].ContextTrackingMode = 0LL;
      }
    }
    v103 = *(_QWORD *)&v86[8].ContextTrackingMode;
    if ( v103 && (v86[1].ImpersonationLevel & 1) != 0 )
    {
      if ( (*(_BYTE *)(v103 + 10) & 2) != 0 )
      {
        MmUnlockPages((PMDL)v103);
        v103 = *(_QWORD *)&v86[8].ContextTrackingMode;
      }
      IoFreeMdl((PMDL)v103);
      LOBYTE(v86[1].ImpersonationLevel) &= ~1u;
      *(_QWORD *)&v86[8].ContextTrackingMode = 0LL;
    }
    v104 = *(struct _MDL **)&v86[11].ImpersonationLevel;
    if ( v104 )
    {
      MmUnlockPages(v104);
      IoFreeMdl(*(PMDL *)&v86[11].ImpersonationLevel);
      *(_QWORD *)&v86[11].ImpersonationLevel = 0LL;
    }
    v105 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v106 = *(_DWORD *)(v105 + *(_QWORD *)(v87 + 32));
    if ( (v106 & 1) != 0 )
    {
LABEL_208:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v87 + 912), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v87 + 464), 0, 0);
    }
    else
    {
      while ( 1 )
      {
        v107 = v106;
        v106 = _InterlockedCompareExchange((volatile signed __int32 *)(v105 + *(_QWORD *)(v87 + 32)), v106 - 2, v106);
        if ( v107 == v106 )
          break;
        if ( (v106 & 1) != 0 )
          goto LABEL_208;
      }
    }
    if ( v158 && *v158 == 59 && (v158[1] & 0x1F) == 0xF || v81 )
    {
      Pool = (_OWORD *)RaidAllocatePool(512LL, 16LL, 1230463314LL, *(_QWORD *)(v8 + 8));
      v109 = Pool;
      if ( Pool )
      {
        *Pool = 0LL;
        WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v8 + 8));
        *(_QWORD *)v109 = WorkItem;
        if ( WorkItem )
        {
          *((_QWORD *)v109 + 1) = Irp;
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 912));
          IoQueueWorkItem(*(PIO_WORKITEM *)v109, RaidUnitIdentityUpdateWorkRoutine, CriticalWorkQueue, v109);
          v111 = 1;
          goto LABEL_284;
        }
        ExFreePoolWithTag(v109, 0x49576152u);
      }
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(v8 + 24) + 32LL), BusRelations);
      goto LABEL_219;
    }
    if ( *(_BYTE *)(v8 + 129) )
    {
      v113 = v152;
      if ( !v158 || (v114 = *v158, v152) || v114 != 37 && v114 != 0x9E || *(_DWORD *)(v8 + 812) )
      {
        v116 = a1;
        goto LABEL_245;
      }
      if ( *(_BYTE *)(v7 + 2) == 40 )
        v115 = *(_QWORD *)(v7 + 64);
      else
        v115 = *(_QWORD *)(v7 + 24);
      v116 = a1;
      if ( !v115 )
      {
LABEL_245:
        if ( *(_BYTE *)(v8 + 129) && v158 && !v113 && *v158 == 0x95 && !v158[1] && *(_DWORD *)(v8 + 812) )
        {
          v120 = *(_BYTE *)(v7 + 2) == 40 ? *(_QWORD *)(v7 + 64) : *(_QWORD *)(v7 + 24);
          if ( v120 && MmIsAddressValid(*(PVOID *)(v116 + 184)) )
          {
            v121 = *(_BYTE **)(v116 + 184);
            v122 = *(unsigned int *)(v8 + 812);
            HIBYTE(v160) = v121[72];
            BYTE6(v160) = v121[73];
            BYTE5(v160) = v121[74];
            BYTE4(v160) = v121[75];
            BYTE3(v160) = v121[76];
            BYTE2(v160) = v121[77];
            BYTE1(v160) = v121[78];
            v123 = v121[79];
            v124 = *(_QWORD *)(v8 + 3264);
            LOBYTE(v160) = v123;
            v125 = v160 * (unsigned int)v122;
            if ( v124 != v125 )
            {
              *(_QWORD *)(v8 + 3264) = v125;
              v124 = v160 * (unsigned int)v122;
            }
            if ( v124 )
            {
              if ( !*(_QWORD *)(v8 + 3288) )
              {
                v131 = v122 * *(_QWORD *)(v8 + 3312) / v124;
                v132 = (void *)RaidAllocatePool(512LL, (unsigned int)v131, 1381654866LL, *(_QWORD *)(v8 + 8));
                *(_QWORD *)(v8 + 3288) = v132;
                if ( v132
                  && (memset(v132, 0, (unsigned int)v131),
                      (v133 = (ULONG *)RaidAllocatePool(
                                         512LL,
                                         ((_DWORD)v131 + 3) & 0xFFFFFFFC,
                                         1381654866LL,
                                         *(_QWORD *)(v8 + 8))) != 0LL) )
                {
                  RtlInitializeBitMap((PRTL_BITMAP)(v8 + 3296), v133, v131);
                  RtlClearAllBits((PRTL_BITMAP)(v8 + 3296));
                }
                else
                {
                  v134 = *(void **)(v8 + 3288);
                  if ( v134 )
                  {
                    ExFreePoolWithTag(v134, 0x525A6152u);
                    *(_QWORD *)(v8 + 3288) = 0LL;
                  }
                  *(_BYTE *)(v8 + 451) |= 1u;
                  IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(v8 + 8));
                }
              }
            }
            else
            {
              v126 = *(_QWORD *)(v8 + 152);
              v128 = 0LL;
              if ( v126 )
              {
                v128 = (void *)(v126 + 90);
              }
              else
              {
                v129 = *(_QWORD *)(v8 + 144);
                if ( v129 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 552LL) + 184LL) & 0x40) != 0 )
                  v128 = (void *)(v129 + 41);
              }
              if ( byte_1C0069843 < 0 )
              {
                v130 = &unk_1C005B660;
                if ( v128 )
                  v130 = v128;
                v127 = *(_DWORD *)(v8 + 96);
                McTemplateK0zqjuuussssx_EtwWriteTransfer(
                  v127 >> 8,
                  *(_QWORD *)(v8 + 24) + 5192,
                  v8 + 186,
                  *(_QWORD *)(*(_QWORD *)(v8 + 24) + 4864LL),
                  *(_DWORD *)(*(_QWORD *)(v8 + 24) + 56LL),
                  *(_QWORD *)(v8 + 24) + 5192LL,
                  v127,
                  SBYTE1(v127),
                  SBYTE2(v127),
                  v8 + 160,
                  v8 + 169,
                  v8 + 186,
                  (__int64)v130,
                  0LL,
                  v147);
              }
            }
          }
        }
        goto LABEL_219;
      }
      if ( MmIsAddressValid(*(PVOID *)(a1 + 184)) )
      {
        v117 = *(_BYTE **)(a1 + 184);
        HIDWORD(v157) = 0;
        if ( *v158 == 37 )
        {
          HIBYTE(v148) = v117[4];
          BYTE2(v148) = v117[5];
          BYTE1(v148) = v117[6];
          LOBYTE(v148) = v117[7];
          BYTE3(v157) = *v117;
          BYTE2(v157) = v117[1];
          BYTE1(v157) = v117[2];
          v118 = v117[3];
        }
        else
        {
          HIBYTE(v148) = v117[8];
          BYTE2(v148) = v117[9];
          BYTE1(v148) = v117[10];
          LOBYTE(v148) = v117[11];
          HIBYTE(v157) = *v117;
          BYTE6(v157) = v117[1];
          BYTE5(v157) = v117[2];
          BYTE4(v157) = v117[3];
          BYTE3(v157) = v117[4];
          BYTE2(v157) = v117[5];
          BYTE1(v157) = v117[6];
          v118 = v117[7];
        }
        v119 = v148;
        LOBYTE(v157) = v118;
        if ( v148 )
        {
          if ( ((v148 - 1) & v148) != 0 )
          {
            do
              v119 &= v119 - 1;
            while ( ((v119 - 1) & v119) != 0 );
          }
        }
        else
        {
          v119 = 512;
        }
        *(_QWORD *)(v8 + 3312) = v157;
        *(_DWORD *)(v8 + 812) = v119;
LABEL_219:
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0 )
        {
          v112 = Irp;
        }
        else
        {
          v112 = Irp;
          if ( BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_qqD(
              WPP_GLOBAL_Control->AttachedDevice,
              23LL,
              &WPP_af1ac7e2487a3dc41c42fd4890c580b6_Traceguids,
              v8,
              Irp,
              Irp->IoStatus.Status);
        }
        if ( (qword_1C0069310 & 0x10) != 0 )
          RaidLogRequestComplete(*(_QWORD *)(v8 + 24), v112, v7);
        RaidCompleteRequestEx(v112);
        v111 = 1;
        goto LABEL_284;
      }
    }
    else
    {
      v116 = a1;
    }
    v113 = v152;
    goto LABEL_245;
  }
  if ( *(_BYTE *)(v8 + 129) )
  {
    v135 = IsZonedWriteRequest(v8, 0LL, v4, 0LL);
    v136 = *(_QWORD *)(v8 + 24);
    if ( v135 )
    {
      ++*(_DWORD *)(v136 + 5768);
      ++*(_DWORD *)(v8 + 2156);
    }
    else
    {
      ++*(_DWORD *)(v136 + 5772);
    }
  }
  v111 = RaUnitAsyncError(v8, v4);
LABEL_284:
  if ( (v151 & 0x1C) != 0xC && v111 )
  {
    if ( (unsigned __int8)StorRemoveIoGatewayItem((PKSPIN_LOCK)(*(_QWORD *)(v8 + 24) + 832LL)) )
      RaidAdapterRestartQueues(*(_QWORD *)(v8 + 24));
    v137 = *(_QWORD *)(v8 + 24);
    v138 = 0;
    memset(v166, 0, sizeof(v166));
    if ( v137 )
    {
      v139 = *(_QWORD *)(v8 + 504);
      if ( v139 )
      {
        if ( *(_QWORD *)(v137 + 5048) )
        {
          v140 = 0;
          memset(&v167, 0, sizeof(v167));
          if ( *(_DWORD *)(v139 + 8) )
          {
            do
            {
              v141 = (KSPIN_LOCK *)(v139 + ((v140 + 1LL) << 6));
              KeAcquireInStackQueuedSpinLock(v141 + 5, &v167);
              if ( (KSPIN_LOCK *)*v141 != v141 && *(_QWORD *)(*v141 + 40) < v80 )
                v80 = *(_QWORD *)(*v141 + 40);
              KeReleaseInStackQueuedSpinLock(&v167);
              ++v140;
            }
            while ( v140 < *(_DWORD *)(v139 + 8) );
          }
          v142 = 0LL;
          if ( v80 != -1LL )
            v142 = v80;
          if ( v142 )
            v138 = KeQueryUnbiasedInterruptTime() - v142 > *(_QWORD *)(*(_QWORD *)(v8 + 24) + 5048LL);
        }
      }
    }
    v143 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v8 + 728));
    if ( !v154
      && !*(_DWORD *)(v8 + 688)
      && *(_DWORD *)(v8 + 696) == v154
      && *(_DWORD *)(v8 + 676) == v154
      && *(_DWORD *)(v8 + 672) == v154 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 732));
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v8 + 728), v143);
    }
    else
    {
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v8 + 728), v143);
      v144 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 728));
      RiDeleteDeviceQueueEntry(v8 + 656, v154);
      v145 = RiNormalizeDeviceQueue(v8 + 656, v138);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 728), v144);
      if ( v145 )
      {
        if ( StorEtwLoggingEnabled )
        {
          if ( byte_1C0069842 < 0 )
          {
            v170 = 0LL;
            IoGetActivityIdIrp(v145 - 120, &v170);
            if ( byte_1C0069842 < 0 )
              McTemplateK0pquuqqd_EtwWriteTransfer(
                *(_DWORD *)(v8 + 672) + *(_DWORD *)(v8 + 676),
                ((*(_BYTE *)(v145 + 22) & 6) != 0) + 1,
                (unsigned int)&v170,
                v8 + 656,
                ((*(_BYTE *)(v145 + 22) & 6) != 0) + 1,
                5,
                0,
                *(_BYTE *)(v8 + 672) + *(_BYTE *)(v8 + 676),
                *(_DWORD *)(v8 + 732));
          }
        }
        if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v8 + 664)) )
          (*(void (__fastcall **)(_QWORD, __int64, _OWORD *))(v8 + 648))(*(_QWORD *)(v8 + 640), v145 - 120, v166);
      }
      if ( v154 )
      {
        for ( j = RaidNormalizeDeviceQueue(v8 + 656); j; j = RaidNormalizeDeviceQueue(v8 + 656) )
        {
          if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v8 + 664)) )
            (*(void (__fastcall **)(_QWORD, __int64, _OWORD *))(v8 + 648))(*(_QWORD *)(v8 + 640), j - 120, v166);
        }
      }
    }
  }
}
