/*
 * XREFs of EtwpEnableGuid @ 0x14067E254
 * Callers:
 *     NtTraceControl @ 0x1405F56E0 (NtTraceControl.c)
 *     EtwpEnableTrace @ 0x1407754F4 (EtwpEnableTrace.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     MmGetSessionById @ 0x14022BBB0 (MmGetSessionById.c)
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     PsGetCurrentThreadProcessId @ 0x14025ECF0 (PsGetCurrentThreadProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     KeStackAttachProcess @ 0x1402A51A0 (KeStackAttachProcess.c)
 *     PsGetProcessId @ 0x1402D44D0 (PsGetProcessId.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402E1A10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     MmDetachSession @ 0x14035DA40 (MmDetachSession.c)
 *     MmAttachSession @ 0x14035DAE0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405F6130 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F7508 (EtwpUnreferenceGuidEntry.c)
 *     MmQuitNextSession @ 0x140656300 (MmQuitNextSession.c)
 *     EtwpBuildNotificationPacket @ 0x14067D2E8 (EtwpBuildNotificationPacket.c)
 *     EtwpAllocDataBlock @ 0x14067D36C (EtwpAllocDataBlock.c)
 *     EtwpFreeFilterInfo @ 0x14067EA9C (EtwpFreeFilterInfo.c)
 *     EtwpValidateEnableNotification @ 0x14067EB30 (EtwpValidateEnableNotification.c)
 *     EtwpEnableDisableSpecialGuids @ 0x14067EC9C (EtwpEnableDisableSpecialGuids.c)
 *     EtwpUpdateGuidEnableInfo @ 0x14067EDA8 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x14067F4C8 (EtwpAddGuidEntry.c)
 *     EtwpIsRegEntryAllowed @ 0x14067F748 (EtwpIsRegEntryAllowed.c)
 *     EtwpSendDataBlock @ 0x14067F880 (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x14067FD5C (EtwpCalculateUpdateNotification.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x14067FEF8 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpUnreferenceDataBlock @ 0x1406801B0 (EtwpUnreferenceDataBlock.c)
 *     EtwpProviderArrivalCallback @ 0x1406D7120 (EtwpProviderArrivalCallback.c)
 *     EtwpCreateUmReplyObject @ 0x1406EC0EC (EtwpCreateUmReplyObject.c)
 *     EtwpAcquireTokenAccessInformation @ 0x14092F2AC (EtwpAcquireTokenAccessInformation.c)
 *     EtwpReferenceStackLookasideList @ 0x140931070 (EtwpReferenceStackLookasideList.c)
 *     EtwpEventWriteProviderEnabled @ 0x14093507C (EtwpEventWriteProviderEnabled.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140935500 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14093A77C (EtwpDemuxPrivateTraceHandle.c)
 */

__int64 __fastcall EtwpEnableGuid(__int64 a1, __int64 a2, char a3)
{
  void *v3; // r13
  int v4; // eax
  __int64 v8; // rsi
  int v9; // r8d
  _WORD *v10; // r15
  int updated; // ebx
  __int64 v12; // r8
  unsigned int v13; // r12d
  struct _KTHREAD *CurrentThread; // rax
  int CurrentThreadProcessId; // eax
  char v16; // bl
  GUID *v17; // rdx
  bool v18; // zf
  _QWORD *GuidEntryByGuid; // rax
  unsigned int *v20; // r14
  struct _KTHREAD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  char v24; // r15
  int v25; // r13d
  char v26; // dl
  __int16 v27; // cx
  __int64 v28; // rax
  __int64 v29; // r8
  size_t v31; // rcx
  int v32; // eax
  int v33; // r12d
  _DWORD *v34; // rdx
  _WORD *v35; // rbx
  unsigned __int8 v36; // cl
  void *v37; // r12
  __int64 v38; // rcx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // r13
  char IsRegEntryAllowed; // al
  int v43; // r8d
  int v44; // r9d
  unsigned int v45; // eax
  char v46; // bl
  unsigned int v47; // r15d
  int v48; // r9d
  int v49; // edx
  int v50; // r8d
  char v51; // al
  __int16 v52; // cx
  void *v53; // rdx
  int v54; // eax
  __int64 v55; // r13
  int v56; // ecx
  unsigned int v57; // r13d
  const EVENT_DESCRIPTOR *v58; // r12
  __int64 v59; // r8
  __int16 v60; // ax
  __int64 v61; // rcx
  __int64 v62; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v64; // rbx
  __int64 v65; // rdx
  _WORD *v66; // rcx
  _WORD *v67; // rbx
  __int64 v68; // r11
  _BYTE *v69; // r9
  _DWORD *v70; // rdx
  __int64 v71; // rcx
  int v72; // eax
  struct _DMA_ADAPTER *v73; // rbx
  signed __int32 v74; // eax
  __int64 v75; // rcx
  signed __int32 v76; // ett
  struct _KTHREAD *v77; // rax
  _KPROCESS *SessionById; // rax
  unsigned int ProcessId; // eax
  __int16 v80; // bx
  struct _KTHREAD *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rcx
  unsigned __int8 v84; // [rsp+50h] [rbp-B0h]
  char v85; // [rsp+51h] [rbp-AFh]
  char v86; // [rsp+52h] [rbp-AEh]
  _WORD v87[6]; // [rsp+53h] [rbp-ADh] BYREF
  _WORD *v88; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v89; // [rsp+68h] [rbp-98h] BYREF
  void *Src; // [rsp+70h] [rbp-90h] BYREF
  __int16 v91[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v92; // [rsp+7Ch] [rbp-84h]
  _WORD *v93; // [rsp+80h] [rbp-80h]
  void *v94; // [rsp+88h] [rbp-78h]
  int v95; // [rsp+90h] [rbp-70h]
  int v96; // [rsp+94h] [rbp-6Ch]
  _QWORD *v97; // [rsp+98h] [rbp-68h]
  __int64 v98; // [rsp+A0h] [rbp-60h]
  __int64 v99; // [rsp+A8h] [rbp-58h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+B0h] [rbp-50h]
  __int64 v101; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v102; // [rsp+C0h] [rbp-40h] BYREF
  int v103; // [rsp+D0h] [rbp-30h]
  _WORD *v104; // [rsp+D8h] [rbp-28h]
  _WORD *v105; // [rsp+E0h] [rbp-20h]
  unsigned int *v106; // [rsp+E8h] [rbp-18h]
  _QWORD *v107; // [rsp+F0h] [rbp-10h]
  _BYTE v108[96]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v109[3]; // [rsp+160h] [rbp+60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v111[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v112[8]; // [rsp+1C4h] [rbp+C4h] BYREF
  int v113; // [rsp+1CCh] [rbp+CCh]

  v3 = 0LL;
  v4 = *(_DWORD *)(a2 + 80) & 0x20;
  v101 = 0LL;
  *(_DWORD *)((char *)&v87[2] + 1) = v4;
  DmaAdapter = 0LL;
  v96 = 0;
  v86 = 0;
  v84 = v4 != 0 ? 2 : 0;
  LOBYTE(v95) = 0;
  v87[0] = 0;
  LOBYTE(v87[1]) = 0;
  v8 = 0LL;
  v89 = 0LL;
  v91[0] = 0;
  memset(v108, 0, 0x58uLL);
  v88 = 0LL;
  v103 = 0;
  Src = 0LL;
  LOBYTE(v9) = a3;
  v10 = 0LL;
  v102 = 0LL;
  updated = EtwpValidateEnableNotification(a1, a2, v9, (unsigned int)&v102, (__int64)&v89, (__int64)v108);
  if ( updated < 0 )
    goto LABEL_14;
  v12 = *(unsigned int *)(a2 + 116);
  v13 = *(_DWORD *)(a2 + 72);
  v92 = v13;
  if ( (unsigned int)(v12 - 1) <= 1 )
  {
    v68 = v12;
    v69 = &v111[-a2 - 120];
    v70 = (_DWORD *)(a2 + 128);
    do
    {
      v71 = a2 + *((_QWORD *)v70 - 1);
      *(_DWORD *)&v112[(_QWORD)v70 - 120 - a2] = v70[1];
      v72 = *v70;
      *(_QWORD *)((char *)v70 + (_QWORD)v69 - 8) = v71;
      *(_DWORD *)((char *)v70 + (_QWORD)v69) = v72;
      v70 += 4;
      --v68;
    }
    while ( v68 );
  }
  else
  {
    LODWORD(v12) = 0;
    v113 = 0;
  }
  if ( !*(_DWORD *)((char *)&v87[2] + 1) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    updated = EtwpEnableDisableSpecialGuids(
                a1,
                (int)a2 + 40,
                *(unsigned __int16 *)(a2 + 78),
                v13,
                *(_DWORD *)(a2 + 88),
                (__int64)v111,
                v12,
                (__int64)&v87[1]);
    KeLeaveCriticalRegion();
    if ( LOBYTE(v87[1]) )
    {
LABEL_14:
      v20 = v89;
      goto LABEL_34;
    }
    v10 = v88;
    v3 = Src;
  }
  if ( (*(_WORD *)(a2 + 78) & 0xFFFD) == 0 )
  {
    v20 = v89;
    updated = -1073741790;
    goto LABEL_86;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v16 = BYTE2(v103);
  v17 = (GUID *)&PrivateLoggerNotificationGuid;
  v18 = BYTE2(v103) == 0;
  *(_DWORD *)(a2 + 36) = CurrentThreadProcessId;
  if ( v18 )
    v17 = (GUID *)(a2 + 40);
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, v17, v84);
  v8 = (__int64)GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( v13 == 1 )
    {
      v60 = *((_WORD *)GuidEntryByGuid + 44);
      if ( v60 )
      {
        if ( !*(_DWORD *)((char *)&v87[2] + 1) && *(_WORD *)(a2 + 78) != v60 )
        {
          v61 = 0x4719A4EB910C653DLL - *(_QWORD *)(v8 + 40);
          if ( *(_QWORD *)(v8 + 40) == 0x4719A4EB910C653DLL )
            v61 = 0x91ECBAE3884509B9uLL - *(_QWORD *)(v8 + 48);
          if ( !v61 )
          {
            updated = -1073741053;
            goto LABEL_14;
          }
        }
      }
    }
  }
  else
  {
    if ( v16 || v13 != 1 )
    {
      updated = -1073741163;
      v8 = 0LL;
      goto LABEL_14;
    }
    v8 = EtwpAddGuidEntry(a1, a2 + 40, v84);
    if ( !v8 )
    {
      updated = -1073741801;
      goto LABEL_14;
    }
  }
  v21 = KeGetCurrentThread();
  --v21->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v8 + 408, 0LL);
  v20 = v89;
  v24 = 1;
  *(_QWORD *)(v8 + 416) = KeGetCurrentThread();
  HIBYTE(v87[0]) = 1;
  if ( v20 && (v20[208] & 0x40) != 0 )
  {
    updated = -1073741162;
    goto LABEL_33;
  }
  v25 = *(_DWORD *)((char *)&v87[2] + 1);
  if ( *(_DWORD *)((char *)&v87[2] + 1) )
  {
    updated = EtwpAcquireTokenAccessInformation(v20, v22, v23, 0LL);
    if ( updated )
      goto LABEL_33;
  }
  v26 = BYTE2(v103);
  *(_DWORD *)(a2 + 112) = v13;
  v27 = *(_WORD *)(a2 + 78);
  *(_WORD *)(a2 + 104) = v27;
  *(_BYTE *)(a2 + 106) = *(_BYTE *)(a2 + 76);
  *(_DWORD *)(a2 + 108) = *(_DWORD *)(a2 + 88);
  v28 = *(_QWORD *)(a2 + 88);
  if ( v26 )
  {
    *(_BYTE *)(a2 + 107) = 1;
    *(_WORD *)(a2 + 104) = v27 & 0x7FFF;
  }
  if ( !v28 )
    *(_QWORD *)(a2 + 88) = -1LL;
  if ( !*(_BYTE *)(a2 + 76) )
    *(_BYTE *)(a2 + 76) = -1;
  if ( v13 != 2 && !v26 )
  {
    updated = EtwpUpdateGuidEnableInfo(v8, (__int64)v87);
    if ( updated < 0 )
    {
LABEL_33:
      *(_QWORD *)(v8 + 416) = 0LL;
      ExReleasePushLockEx(v8 + 408, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_34;
    }
    *(_OWORD *)(a2 + 72) = *(_OWORD *)(v8 + 96);
    *(_OWORD *)(a2 + 88) = *(_OWORD *)(v8 + 112);
    if ( (*(_DWORD *)(a2 + 80) & 4) != 0 )
    {
      _m_prefetchw(v20 + 208);
      v74 = v20[208];
      do
      {
        v75 = v74 | 0x2000u;
        v76 = v74;
        v74 = _InterlockedCompareExchange((volatile signed __int32 *)v20 + 208, v75, v74);
      }
      while ( v76 != v74 );
      if ( (v74 & 0x2000) == 0 )
        EtwpReferenceStackLookasideList(v75, 0x2000LL, v29, 0LL);
      v20 = v89;
    }
  }
  if ( *(_QWORD *)(v8 + 56) == v8 + 56 && (*(_QWORD *)(v8 + 400) || *(_QWORD *)(v8 + 16) == v8 + 16) )
  {
    updated = 0;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(a2 + 12) )
  {
    updated = EtwpCreateUmReplyObject(v8, (__int64)&v101);
    if ( updated < 0 )
      goto LABEL_33;
    *(_QWORD *)(a2 + 24) = DmaAdapter;
  }
  if ( (int)EtwpBuildNotificationPacket(v8, (_OWORD *)a2, 0xFFu, &Src) < 0 )
  {
    v3 = Src;
    updated = -1073741801;
  }
  else
  {
    v31 = *((unsigned int *)Src + 1);
    v106 = (unsigned int *)((char *)Src + 4);
    v32 = EtwpAllocDataBlock(v31, Src, &v88);
    v10 = v88;
    if ( v32 < 0 )
      goto LABEL_127;
    v33 = v95;
    v34 = (_DWORD *)(v8 + 128);
    v35 = v88;
    v36 = 0;
    v93 = v88;
    do
    {
      if ( *v34 )
        v33 = (unsigned __int8)v33 | (1 << v36);
      ++v36;
      v34 += 8;
    }
    while ( v36 < 8u );
    v95 = v33;
    v37 = Src;
    v85 = 0;
    v98 = 0LL;
    if ( !*(_QWORD *)(v8 + 400) )
    {
      v38 = *(_QWORD *)(v8 + 16);
      if ( v38 != v8 + 16 )
        v98 = v38 - 16;
    }
    v39 = v8;
    v99 = v8;
    while ( 1 )
    {
      v40 = *(_QWORD **)(v39 + 56);
      v107 = (_QWORD *)(v39 + 56);
      v97 = v40;
      if ( v40 != (_QWORD *)(v39 + 56) )
      {
        while ( 1 )
        {
          v105 = v35;
          v104 = v35;
          if ( v25 )
          {
            v41 = v40 - 2;
            v77 = KeGetCurrentThread();
            --v77->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v41[4] + 408LL, 0LL);
            v20 = v89;
            v10 = v88;
            v37 = Src;
            *(_QWORD *)(v41[4] + 416LL) = KeGetCurrentThread();
            v40 = v97;
            v86 = 1;
          }
          else
          {
            v41 = v40;
          }
          v97 = (_QWORD *)*v40;
          IsRegEntryAllowed = EtwpIsRegEntryAllowed(
                                (_DWORD)v41,
                                (_DWORD)v20,
                                (unsigned int)&v102,
                                a2,
                                (__int64)v108,
                                v85,
                                v84);
          v44 = 0;
          if ( IsRegEntryAllowed )
          {
            v94 = v37;
            if ( !BYTE2(v103) )
            {
              v45 = v92;
              if ( v92 != 2 )
              {
                if ( v85 )
                {
                  if ( *(_DWORD *)((char *)&v87[2] + 1) )
                    v46 = *((_BYTE *)v41 + 103);
                  else
                    v46 = *((_BYTE *)v41 + 102);
                }
                else if ( *(_DWORD *)((char *)&v87[2] + 1) )
                {
                  v46 = *((_BYTE *)v41 + 101);
                }
                else
                {
                  v46 = *((_BYTE *)v41 + 100);
                }
                v47 = v92;
                LOBYTE(v44) = v84;
                LOBYTE(v43) = v87[0];
                EtwpUpdateRegEntryEnableMask((_DWORD)v41, (_DWORD)v20, v43, v44, v85, v92);
                LOBYTE(v48) = v95;
                LOBYTE(v49) = v87[0];
                LOBYTE(v50) = v46;
                v51 = EtwpCalculateUpdateNotification((_DWORD)v41, v49, v50, v48, v84, v85, v47, (__int64)&v88);
                v10 = v88;
                if ( !v51 )
                {
                  v35 = v93;
                  if ( !v88 )
                  {
                    v10 = v93;
                    v88 = v93;
                  }
                  goto LABEL_73;
                }
                if ( v88 )
                {
                  v66 = v88;
                  v94 = v88;
                  if ( v88 != v93 )
                  {
                    EtwpUnreferenceDataBlock(v93);
                    v66 = v10;
                  }
                  v67 = v66;
                  if ( v66 == v104 )
                    v67 = v105;
                  v93 = v67;
                }
                else
                {
                  v10 = v93;
                  v88 = v93;
                }
                v45 = v92;
              }
              if ( v45 - 1 > 1 )
                goto LABEL_69;
              v52 = *((_WORD *)v41 + 49);
              if ( (v52 & 8) == 0 && (v52 & 0x20) == 0 && (v20[208] & 0x2000000) == 0 )
                goto LABEL_69;
              if ( (v52 & 1) == 0 )
              {
                if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v41[10] + 1112LL)) )
                {
                  v62 = v41[10];
                  memset(&ApcState, 0, sizeof(ApcState));
                  ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v62);
                  v64 = PsAttachSiloToCurrentThread(ProcessServerSilo);
                  KeStackAttachProcess((PRKPROCESS)v41[10], &ApcState);
                  LOBYTE(v65) = 1;
                  EtwpProviderArrivalCallback(v20, v65, v41);
                  KeUnstackDetachProcess(&ApcState);
                  PsDetachSiloFromCurrentThread(v64);
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v41[10] + 1112LL));
                }
                goto LABEL_69;
              }
              v73 = 0LL;
              memset(v109, 0, sizeof(v109));
              if ( (v52 & 0x10) != 0 )
              {
                SessionById = (_KPROCESS *)MmGetSessionById(*((_DWORD *)v41 + 14));
                v73 = (struct _DMA_ADAPTER *)SessionById;
                if ( SessionById )
                {
                  if ( (int)MmAttachSession(SessionById, (__int64)v109) >= 0 )
                    goto LABEL_115;
LABEL_137:
                  MmQuitNextSession(v73);
                }
              }
              else
              {
LABEL_115:
                EtwpProviderArrivalCallback(v20, 0LL, v41);
                if ( v73 )
                {
                  MmDetachSession((__int64)v73, (__int64)v109);
                  goto LABEL_137;
                }
              }
LABEL_69:
              v53 = v94;
LABEL_70:
              v54 = EtwpSendDataBlock(v41, v53);
              v35 = v93;
              if ( v54 >= 0 && (*((_BYTE *)v41 + 98) & 2) != 0 )
                ++v96;
              goto LABEL_73;
            }
            ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v41[10]);
            if ( !(unsigned int)EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 78) & 0x7FFF, v91) )
            {
              v80 = v91[0];
              if ( v91[0] != v10[39] )
              {
                if ( (int)EtwpAllocDataBlock(*v106, v37, &v88) < 0 )
                {
                  v10 = v93;
                  if ( v86 )
                  {
                    *(_QWORD *)(v41[4] + 416LL) = 0LL;
                    ExReleasePushLockEx(v41[4] + 408LL, 0LL);
                    KeLeaveCriticalRegion();
                  }
LABEL_127:
                  updated = -1073741801;
LABEL_85:
                  v3 = Src;
                  goto LABEL_86;
                }
                EtwpUnreferenceDataBlock(v93);
                v10 = v88;
                v93 = v88;
                v88[39] = v80 | 0x8000;
                v10[52] = v80;
              }
              v53 = v10;
              goto LABEL_70;
            }
          }
LABEL_73:
          if ( v86 )
          {
            *(_QWORD *)(v41[4] + 416LL) = 0LL;
            ExReleasePushLockEx(v41[4] + 408LL, 0LL);
            KeLeaveCriticalRegion();
            v86 = 0;
          }
          v40 = v97;
          v25 = *(_DWORD *)((char *)&v87[2] + 1);
          if ( v97 == v107 )
          {
            v39 = v99;
            break;
          }
        }
      }
      if ( v39 != v8 )
      {
        *(_QWORD *)(v39 + 416) = 0LL;
        ExReleasePushLockEx(v39 + 408, 0LL);
        KeLeaveCriticalRegion();
      }
      v55 = v98;
      if ( !v98 )
        break;
      v81 = KeGetCurrentThread();
      v85 = 1;
      v99 = v98;
      --v81->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v55 + 408, 0LL);
      v20 = v89;
      v82 = 0LL;
      v10 = v88;
      v37 = Src;
      *(_QWORD *)(v55 + 416) = KeGetCurrentThread();
      if ( *(_QWORD *)(v55 + 16) - 16LL != v8 )
        v82 = *(_QWORD *)(v55 + 16) - 16LL;
      v98 = v82;
      v39 = v55;
      v25 = *(_DWORD *)((char *)&v87[2] + 1);
    }
    updated = 0;
    v56 = v96;
    *(_QWORD *)(a2 + 24) = v101;
    *(_DWORD *)(a2 + 20) = v56;
    if ( !v20 )
      goto LABEL_85;
    v57 = v92;
    if ( v92 > 1 )
      goto LABEL_85;
    v58 = (const EVENT_DESCRIPTOR *)ETW_EVENT_PROVIDER_ENABLED;
    if ( v92 != 1 )
      v58 = &ETW_EVENT_PROVIDER_DISABLED;
    if ( !EtwEventEnabled(EtwpEventTracingProvRegHandle, v58) )
      goto LABEL_85;
    v83 = a2 + 40;
    if ( v57 == 1 )
      EtwpEventWriteProviderEnabled(
        v83,
        (_DWORD)v58,
        v59,
        (_DWORD)v20 + 152,
        a2 + 40,
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 96),
        *(_DWORD *)(a2 + 80),
        *(_BYTE *)(a2 + 76));
    else
      EtwpEventWriteTemplateSessAndProv(v83, v58, v59, 2LL, v20 + 38, a2 + 40);
    v3 = Src;
LABEL_86:
    if ( v10 )
      EtwpUnreferenceDataBlock(v10);
    v24 = HIBYTE(v87[0]);
  }
  if ( v3 )
    EtwpUnreferenceDataBlock(v3);
  if ( v24 == 1 )
    goto LABEL_33;
LABEL_34:
  if ( v20 )
    EtwpReleaseLoggerContext(v20, 0);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v8 )
    EtwpUnreferenceGuidEntry((__int64 *)v8);
  EtwpFreeFilterInfo(v108);
  return (unsigned int)updated;
}
