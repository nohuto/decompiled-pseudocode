/*
 * XREFs of RaidUnitCompleteRequest @ 0x1C00089E0
 * Callers:
 *     <none>
 * Callees:
 *     StorpTelemetryCollectErrorData @ 0x1C0007CD8 (StorpTelemetryCollectErrorData.c)
 *     RaidAllocatePool @ 0x1C0008278 (RaidAllocatePool.c)
 *     RaidDmaPutScatterGatherList @ 0x1C00082DC (RaidDmaPutScatterGatherList.c)
 *     RaidNormalizeDeviceQueue @ 0x1C0008978 (RaidNormalizeDeviceQueue.c)
 *     StorRemoveIoGatewayItem @ 0x1C0009CC0 (StorRemoveIoGatewayItem.c)
 *     StorUnmapSenseInfo @ 0x1C0009DF0 (StorUnmapSenseInfo.c)
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 *     StorpTelemetryCollectPerfData @ 0x1C000A040 (StorpTelemetryCollectPerfData.c)
 *     RiNormalizeDeviceQueue @ 0x1C000BA3C (RiNormalizeDeviceQueue.c)
 *     RiDeleteDeviceQueueEntry @ 0x1C000BBE0 (RiDeleteDeviceQueueEntry.c)
 *     StorSubmitIoGatewayItem @ 0x1C000BC34 (StorSubmitIoGatewayItem.c)
 *     RaUnitAsyncError @ 0x1C000C438 (RaUnitAsyncError.c)
 *     RaidAdapterRestartQueues @ 0x1C00120DC (RaidAdapterRestartQueues.c)
 *     IsZonedWriteRequest @ 0x1C0014400 (IsZonedWriteRequest.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DA00 (memset.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002C628 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x1C002CE7C (RaidAdapterReleaseCryptoKeyResources.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0031ED8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C00326A0 (WPP_SF_qqD.c)
 *     StorRemoveEventQueue @ 0x1C0033874 (StorRemoveEventQueue.c)
 *     StorRemoveEventQueueInternal @ 0x1C0033930 (StorRemoveEventQueueInternal.c)
 *     McTemplateK0pquuqqd_EtwWriteTransfer @ 0x1C00339C4 (McTemplateK0pquuqqd_EtwWriteTransfer.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0035594 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0041A60 (RaidSrbExGetBidirectionalData.c)
 *     TranslateResultToScsiRequestBlock @ 0x1C0041B88 (TranslateResultToScsiRequestBlock.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x1C0045258 (McTemplateK0dud_EtwWriteTransfer.c)
 *     RaidLogRequestComplete @ 0x1C0048DDC (RaidLogRequestComplete.c)
 *     RaidFreeRemappedScatterGatherListMdl @ 0x1C004C5C0 (RaidFreeRemappedScatterGatherListMdl.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C004E65C (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C004E954 (StorEtwLogoRequestServiceTimeEventData.c)
 */

void __fastcall RaidUnitCompleteRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  IRP *v5; // rcx
  char v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rsi
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // r14
  __int64 Length; // rbx
  __int64 *v12; // r14
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
  _BYTE *v26; // r15
  unsigned int v27; // r11d
  unsigned int i; // r10d
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
  unsigned int v40; // r14d
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
  __int64 j; // r10
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
  __int64 v66; // r14
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
  unsigned __int64 v80; // r14
  bool v81; // r12
  _BYTE *v82; // rbx
  unsigned __int64 v83; // rax
  _IO_STACK_LOCATION *v84; // rax
  _IO_SECURITY_CONTEXT *v85; // r15
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
  int v96; // r15d
  bool v97; // r15
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
  char v114; // al
  __int64 v115; // rax
  __int64 v116; // r15
  _BYTE *v117; // rcx
  char v118; // al
  int v119; // ebx
  __int64 v120; // rax
  _BYTE *v121; // rcx
  __int64 v122; // rdx
  char v123; // al
  unsigned __int64 v124; // rcx
  __int64 v125; // rax
  unsigned __int64 v126; // r15
  PVOID v127; // rax
  ULONG *v128; // rax
  void *v129; // rcx
  char v130; // al
  __int64 v131; // rcx
  __int64 v132; // rax
  bool v133; // r12
  __int64 v134; // r15
  unsigned int v135; // edi
  KSPIN_LOCK *v136; // rbx
  unsigned __int64 v137; // rbx
  KIRQL v138; // al
  KIRQL v139; // bl
  __int64 v140; // r15
  __int64 k; // rbx
  int v142; // [rsp+54h] [rbp-ACh]
  int v143; // [rsp+58h] [rbp-A8h]
  bool v144; // [rsp+58h] [rbp-A8h]
  char v145; // [rsp+5Ch] [rbp-A4h]
  unsigned int v146; // [rsp+60h] [rbp-A0h]
  unsigned int v147; // [rsp+64h] [rbp-9Ch]
  unsigned int v148; // [rsp+64h] [rbp-9Ch]
  PIRP Irp; // [rsp+68h] [rbp-98h]
  unsigned int v150; // [rsp+70h] [rbp-90h]
  __int64 v151; // [rsp+78h] [rbp-88h]
  _BYTE *v153; // [rsp+88h] [rbp-78h]
  __int64 v154; // [rsp+90h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v156; // [rsp+C0h] [rbp-40h]
  __int64 v157; // [rsp+C8h] [rbp-38h]
  __int64 v158; // [rsp+D0h] [rbp-30h]
  __int64 v159; // [rsp+D8h] [rbp-28h]
  _OWORD v160[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE v161; // [rsp+100h] [rbp+0h] BYREF
  __int128 v162; // [rsp+118h] [rbp+18h] BYREF
  __int128 v163; // [rsp+128h] [rbp+28h] BYREF
  __int128 v164; // [rsp+138h] [rbp+38h] BYREF

  v4 = a1;
  v5 = *(IRP **)(a1 + 160);
  v6 = 0;
  v156 = 0LL;
  v158 = v4;
  v7 = *(_QWORD *)(v4 + 168);
  v8 = *(_QWORD *)(v4 + 224);
  v145 = *(_BYTE *)(v4 + 16);
  Irp = v5;
  if ( *(_BYTE *)(v7 + 2) == 40 )
  {
    LODWORD(a4) = *(_DWORD *)(v7 + 20);
    v157 = *(_QWORD *)(v7 + 104);
    v159 = v4 + 800;
    v143 = *(_DWORD *)(v7 + 24);
    v150 = *(_DWORD *)(v7 + 60);
    v146 = a4;
    v147 = *(_DWORD *)(v7 + 32);
  }
  else
  {
    v146 = *(unsigned __int8 *)(v7 + 2);
    v157 = *(_QWORD *)(v7 + 56);
    v159 = *(_QWORD *)(v7 + 32);
    v147 = *(unsigned __int8 *)(v7 + 8);
    v143 = *(_DWORD *)(v7 + 12);
    v150 = *(_DWORD *)(v7 + 16);
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
  v162 = 0LL;
  IoGetActivityIdIrp(Irp, &v162);
  if ( byte_1C0068842 < 0 )
    McTemplateK0dud_EtwWriteTransfer(v25, v24, (unsigned int)&v162, a4, 4);
LABEL_29:
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0068841 & 2) != 0 )
      StorEtwIORequestServiceTimeEventData(v4, 0LL, 0LL);
    if ( *(_DWORD *)(v8 + 1812) && (byte_1C0068843 & 2) != 0 )
      StorEtwLogoRequestServiceTimeEventData(v4, 0LL, 0LL);
  }
LABEL_35:
  if ( *(_BYTE *)(v7 + 2) != 40 )
  {
    v26 = (_BYTE *)(v7 + 72);
    goto LABEL_55;
  }
  v26 = 0LL;
  v153 = 0LL;
  if ( !*(_DWORD *)(v7 + 20) )
  {
    v27 = *(_DWORD *)(v7 + 56);
    for ( i = 0; i < v27; ++i )
    {
      v29 = *(unsigned int *)(v7 + 4LL * i + 120);
      if ( (unsigned int)v29 < 0x80 )
        continue;
      v30 = *(unsigned int *)(v7 + 16);
      if ( (unsigned int)v29 >= (unsigned int)v30 )
        continue;
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
            v26 = (_BYTE *)(a4 + 32);
            if ( !*(_DWORD *)(a4 + 12) )
              v26 = 0LL;
            goto LABEL_55;
          }
          continue;
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
          break;
        v26 = (_BYTE *)(a4 + 24);
LABEL_55:
        v153 = v26;
        break;
      }
    }
  }
  if ( *(_DWORD *)(v8 + 2244) )
  {
    if ( v26 )
    {
      v35 = (unsigned __int8)*v26;
      if ( !v146 )
      {
        if ( (unsigned __int8)(v35 - 8) <= 0x3Au
          && (v36 = 0x400200500000005LL, _bittest64(&v36, (unsigned int)(v35 - 8)))
          || (unsigned __int8)(v35 + 120) <= 0x22u && (v37 = 0x500000205LL, _bittest64(&v37, (unsigned int)(v35 + 120))) )
        {
          StorpTelemetryCollectPerfData(v4, v7, v8, a4, v35);
        }
      }
    }
  }
  if ( !g_StorpTraceLoggingErrorDataEnabled || !v26 )
    goto LABEL_110;
  v38 = *(_BYTE *)(v7 + 2);
  v39 = 0;
  v40 = *(unsigned __int8 *)(v7 + 3);
  v41 = 0LL;
  if ( v38 == 40 )
  {
    if ( !*(_DWORD *)(v7 + 20) )
    {
      v42 = *(_DWORD *)(v7 + 56);
      v43 = 0LL;
      if ( !v42 )
        goto LABEL_82;
      while ( 1 )
      {
        v44 = *(unsigned int *)(v7 + 4 * v43 + 120);
        if ( (unsigned int)v44 < 0x80 )
          goto LABEL_76;
        v45 = *(unsigned int *)(v7 + 16);
        if ( (unsigned int)v44 >= (unsigned int)v45 )
          goto LABEL_76;
        v46 = v44 + v7;
        v47 = (unsigned int)v44;
        v48 = *(_DWORD *)(v44 + v7) - 64;
        if ( !v48 )
          goto LABEL_74;
        v49 = v48 - 1;
        if ( v49 )
          break;
        v50 = v47 + 56;
LABEL_75:
        if ( v50 <= v45 )
        {
          v6 = *(_BYTE *)(v46 + 8);
          goto LABEL_82;
        }
LABEL_76:
        v43 = (unsigned int)(v43 + 1);
        if ( (unsigned int)v43 >= v42 )
          goto LABEL_82;
      }
      if ( v49 != 1 )
        goto LABEL_76;
LABEL_74:
      v50 = v47 + 40;
      goto LABEL_75;
    }
    v38 = 40;
  }
  else
  {
    v6 = *(_BYTE *)(v7 + 4);
  }
LABEL_82:
  LOBYTE(v40) = v40 & 0x3F;
  if ( v38 == 40 )
  {
    if ( !*(_DWORD *)(v7 + 20) )
    {
      v51 = *(_DWORD *)(v7 + 56);
      for ( j = 0LL; (unsigned int)j < v51; j = (unsigned int)(j + 1) )
      {
        v53 = *(unsigned int *)(v7 + 4 * j + 120);
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
              break;
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
          break;
        }
      }
    }
  }
  else if ( !v38 )
  {
    v41 = *(_BYTE **)(v7 + 32);
    v39 = *(_BYTE *)(v7 + 11);
  }
  if ( *(char *)(v7 + 3) >= 0 )
  {
    if ( v6 != 2 && (unsigned __int8)v40 <= 0x12u )
    {
      v69 = 262211;
      if ( _bittest(&v69, v40) )
      {
LABEL_109:
        v4 = a1;
        v26 = v153;
LABEL_110:
        v62 = Irp;
        goto LABEL_111;
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
      goto LABEL_109;
  }
  v4 = a1;
  v62 = Irp;
  StorpTelemetryCollectErrorData(v8, (int)Irp, a1, v7);
  v26 = v153;
LABEL_111:
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
  if ( v147 / *(_DWORD *)(v8 + 584) < HighestNodeNumber + 1 )
    HighestNodeNumber = v147 / *(_DWORD *)(v8 + 584);
  ExpInterlockedPushEntrySList(
    (PSLIST_HEADER)(*(_QWORD *)(v8 + 512) + ((unsigned __int64)HighestNodeNumber << 6)),
    (PSLIST_ENTRY)(*(_QWORD *)(v8 + 576) + 16LL * v147));
  v148 = 0;
  if ( (v143 & 0x102) != 0x102 && (v143 & 0x80010) == 0 )
  {
    if ( v146 > 0x20 || (v68 = 0x1000D0000LL, !_bittest64(&v68, v146)) )
      v148 = 1;
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
              goto LABEL_144;
            v74 = *(unsigned int *)(v7 + 16);
            if ( (unsigned int)v73 >= (unsigned int)v74 )
              goto LABEL_144;
            v75 = v73 + v7;
            v76 = (unsigned int)v73;
            v77 = *(_DWORD *)(v73 + v7) - 64;
            if ( !v77 )
              goto LABEL_142;
            v78 = v77 - 1;
            if ( v78 )
              break;
            v79 = v76 + 56;
LABEL_143:
            if ( v79 <= v74 )
            {
              *(_BYTE *)(v75 + 8) = 0;
              goto LABEL_149;
            }
LABEL_144:
            if ( ++v72 >= v71 )
              goto LABEL_149;
          }
          if ( v78 != 1 )
            goto LABEL_144;
LABEL_142:
          v79 = v76 + 40;
          goto LABEL_143;
        }
      }
    }
    else
    {
      *(_BYTE *)(v7 + 4) = 0;
    }
LABEL_149:
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 2104));
  }
  v80 = -1LL;
  if ( (*(_BYTE *)(v7 + 3) & 0x3F) == 1 )
  {
    v81 = 0;
    v144 = 0;
    if ( v26
      && *v26 == 29
      && (*(_BYTE *)(v7 + 2) != 40 ? (v82 = *(_BYTE **)(v7 + 24)) : (v82 = *(_BYTE **)(v7 + 64)), v82) )
    {
      v70 = MmIsAddressValid(v82) == 0;
      v83 = v150;
      if ( !v70 && v150 >= 9 && *v82 == 14 )
      {
        v81 = v82[8] == 15;
        v144 = v81;
      }
    }
    else
    {
      v83 = v150;
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
        v163 = 0LL;
        IoGetActivityIdIrp(Irp, &v163);
        if ( byte_1C0068842 < 0 )
          McTemplateK0dud_EtwWriteTransfer(v90, v89, (unsigned int)&v163, v91, 4);
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
        v81 = v144;
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
      v98 = (__int64 *)(*(_QWORD *)&v86[18].Length + 712LL);
      if ( *(_QWORD *)&v86[18].Length != -712LL )
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
        RaidDmaPutScatterGatherList((__int64 *)(*(_QWORD *)&v86[18].Length + 712LL));
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
LABEL_205:
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
          goto LABEL_205;
      }
    }
    if ( v153 && *v153 == 59 && (v153[1] & 0x1F) == 0xF || v81 )
    {
      Pool = RaidAllocatePool(NonPagedPoolNx, 0x10uLL, 0x49576152u, *(_QWORD *)(v8 + 8));
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
          goto LABEL_271;
        }
        ExFreePoolWithTag(v109, 0x49576152u);
      }
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(v8 + 24) + 32LL), BusRelations);
      goto LABEL_216;
    }
    if ( *(_BYTE *)(v8 + 129) )
    {
      v113 = v146;
      if ( !v153 || (v114 = *v153, v146) || v114 != 37 && v114 != -98 || *(_DWORD *)(v8 + 812) )
      {
        v116 = a1;
        goto LABEL_242;
      }
      if ( *(_BYTE *)(v7 + 2) == 40 )
        v115 = *(_QWORD *)(v7 + 64);
      else
        v115 = *(_QWORD *)(v7 + 24);
      v116 = a1;
      if ( !v115 )
      {
LABEL_242:
        if ( *(_BYTE *)(v8 + 129) && v153 && !v113 && *v153 == 0x95 && !v153[1] && *(_DWORD *)(v8 + 812) )
        {
          v120 = *(_BYTE *)(v7 + 2) == 40 ? *(_QWORD *)(v7 + 64) : *(_QWORD *)(v7 + 24);
          if ( v120 && MmIsAddressValid(*(PVOID *)(v116 + 184)) )
          {
            v121 = *(_BYTE **)(v116 + 184);
            v122 = *(unsigned int *)(v8 + 812);
            HIBYTE(v154) = v121[72];
            BYTE6(v154) = v121[73];
            BYTE5(v154) = v121[74];
            BYTE4(v154) = v121[75];
            BYTE3(v154) = v121[76];
            BYTE2(v154) = v121[77];
            BYTE1(v154) = v121[78];
            v123 = v121[79];
            v124 = *(_QWORD *)(v8 + 3264);
            LOBYTE(v154) = v123;
            v125 = v154 * (unsigned int)v122;
            if ( v124 != v125 )
            {
              *(_QWORD *)(v8 + 3264) = v125;
              v124 = v154 * (unsigned int)v122;
            }
            if ( !*(_QWORD *)(v8 + 3288) )
            {
              v126 = v122 * *(_QWORD *)(v8 + 3312) / v124;
              v127 = RaidAllocatePool(NonPagedPoolNx, (unsigned int)v126, 0x525A6152u, *(_QWORD *)(v8 + 8));
              *(_QWORD *)(v8 + 3288) = v127;
              if ( v127
                && (memset(v127, 0, (unsigned int)v126),
                    (v128 = (ULONG *)RaidAllocatePool(
                                       NonPagedPoolNx,
                                       ((_DWORD)v126 + 3) & 0xFFFFFFFC,
                                       0x525A6152u,
                                       *(_QWORD *)(v8 + 8))) != 0LL) )
              {
                RtlInitializeBitMap((PRTL_BITMAP)(v8 + 3296), v128, v126);
                RtlClearAllBits((PRTL_BITMAP)(v8 + 3296));
              }
              else
              {
                v129 = *(void **)(v8 + 3288);
                if ( v129 )
                {
                  ExFreePoolWithTag(v129, 0x525A6152u);
                  *(_QWORD *)(v8 + 3288) = 0LL;
                }
                *(_BYTE *)(v8 + 451) |= 1u;
                IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(v8 + 8));
              }
            }
          }
        }
        goto LABEL_216;
      }
      if ( MmIsAddressValid(*(PVOID *)(a1 + 184)) )
      {
        v117 = *(_BYTE **)(a1 + 184);
        HIDWORD(v151) = 0;
        if ( *v153 == 37 )
        {
          HIBYTE(v142) = v117[4];
          BYTE2(v142) = v117[5];
          BYTE1(v142) = v117[6];
          LOBYTE(v142) = v117[7];
          BYTE3(v151) = *v117;
          BYTE2(v151) = v117[1];
          BYTE1(v151) = v117[2];
          v118 = v117[3];
        }
        else
        {
          HIBYTE(v142) = v117[8];
          BYTE2(v142) = v117[9];
          BYTE1(v142) = v117[10];
          LOBYTE(v142) = v117[11];
          HIBYTE(v151) = *v117;
          BYTE6(v151) = v117[1];
          BYTE5(v151) = v117[2];
          BYTE4(v151) = v117[3];
          BYTE3(v151) = v117[4];
          BYTE2(v151) = v117[5];
          BYTE1(v151) = v117[6];
          v118 = v117[7];
        }
        v119 = v142;
        LOBYTE(v151) = v118;
        if ( v142 )
        {
          if ( ((v142 - 1) & v142) != 0 )
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
        *(_QWORD *)(v8 + 3312) = v151;
        *(_DWORD *)(v8 + 812) = v119;
LABEL_216:
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
              &WPP_315ac634f457316aea96af95ee1292c6_Traceguids,
              v8,
              Irp,
              Irp->IoStatus.Status);
        }
        if ( (qword_1C0068350 & 0x10) != 0 )
          RaidLogRequestComplete(*(_QWORD *)(v8 + 24), v112, v7);
        RaidCompleteRequestEx(v112);
        v111 = 1;
        goto LABEL_271;
      }
    }
    else
    {
      v116 = a1;
    }
    v113 = v146;
    goto LABEL_242;
  }
  if ( *(_BYTE *)(v8 + 129) )
  {
    v130 = IsZonedWriteRequest(v8, 0LL, v4, 0LL);
    v131 = *(_QWORD *)(v8 + 24);
    if ( v130 )
    {
      ++*(_DWORD *)(v131 + 5768);
      ++*(_DWORD *)(v8 + 2156);
    }
    else
    {
      ++*(_DWORD *)(v131 + 5772);
    }
  }
  v111 = RaUnitAsyncError(v8, v4);
LABEL_271:
  if ( (v145 & 0x1C) != 0xC && v111 )
  {
    if ( (unsigned __int8)StorRemoveIoGatewayItem((PKSPIN_LOCK)(*(_QWORD *)(v8 + 24) + 832LL)) )
      RaidAdapterRestartQueues(*(_QWORD *)(v8 + 24));
    v132 = *(_QWORD *)(v8 + 24);
    v133 = 0;
    memset(v160, 0, sizeof(v160));
    if ( v132 )
    {
      v134 = *(_QWORD *)(v8 + 504);
      if ( v134 )
      {
        if ( *(_QWORD *)(v132 + 5048) )
        {
          v135 = 0;
          memset(&v161, 0, sizeof(v161));
          if ( *(_DWORD *)(v134 + 8) )
          {
            do
            {
              v136 = (KSPIN_LOCK *)(v134 + ((v135 + 1LL) << 6));
              KeAcquireInStackQueuedSpinLock(v136 + 5, &v161);
              if ( (KSPIN_LOCK *)*v136 != v136 && *(_QWORD *)(*v136 + 40) < v80 )
                v80 = *(_QWORD *)(*v136 + 40);
              KeReleaseInStackQueuedSpinLock(&v161);
              ++v135;
            }
            while ( v135 < *(_DWORD *)(v134 + 8) );
          }
          v137 = 0LL;
          if ( v80 != -1LL )
            v137 = v80;
          if ( v137 )
            v133 = KeQueryUnbiasedInterruptTime() - v137 > *(_QWORD *)(*(_QWORD *)(v8 + 24) + 5048LL);
        }
      }
    }
    v138 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v8 + 728));
    if ( !v148
      && !*(_DWORD *)(v8 + 688)
      && *(_DWORD *)(v8 + 696) == v148
      && *(_DWORD *)(v8 + 676) == v148
      && *(_DWORD *)(v8 + 672) == v148 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 732));
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v8 + 728), v138);
    }
    else
    {
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v8 + 728), v138);
      v139 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 728));
      RiDeleteDeviceQueueEntry(v8 + 656, v148);
      v140 = RiNormalizeDeviceQueue(v8 + 656, v133);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 728), v139);
      if ( v140 )
      {
        if ( StorEtwLoggingEnabled )
        {
          if ( byte_1C0068842 < 0 )
          {
            v164 = 0LL;
            IoGetActivityIdIrp(v140 - 120, &v164);
            if ( byte_1C0068842 < 0 )
              McTemplateK0pquuqqd_EtwWriteTransfer(
                *(_DWORD *)(v8 + 672) + *(_DWORD *)(v8 + 676),
                ((*(_BYTE *)(v140 + 22) & 6) != 0) + 1,
                (unsigned int)&v164,
                v8 + 656,
                ((*(_BYTE *)(v140 + 22) & 6) != 0) + 1,
                5,
                0,
                *(_BYTE *)(v8 + 672) + *(_BYTE *)(v8 + 676),
                *(_DWORD *)(v8 + 732));
          }
        }
        if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v8 + 664)) )
          (*(void (__fastcall **)(_QWORD, __int64, _OWORD *))(v8 + 648))(*(_QWORD *)(v8 + 640), v140 - 120, v160);
      }
      if ( v148 )
      {
        for ( k = RaidNormalizeDeviceQueue(v8 + 656); k; k = RaidNormalizeDeviceQueue(v8 + 656) )
        {
          if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v8 + 664)) )
            (*(void (__fastcall **)(_QWORD, __int64, _OWORD *))(v8 + 648))(*(_QWORD *)(v8 + 640), k - 120, v160);
        }
      }
    }
  }
}
