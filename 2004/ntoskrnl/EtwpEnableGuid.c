/*
 * XREFs of EtwpEnableGuid @ 0x140635748
 * Callers:
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 *     EtwpEnableTrace @ 0x140777904 (EtwpEnableTrace.c)
 * Callees:
 *     KeUnstackDetachProcess @ 0x140205990 (KeUnstackDetachProcess.c)
 *     PsGetCurrentThreadProcessId @ 0x140205DD0 (PsGetCurrentThreadProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     KeStackAttachProcess @ 0x14024C170 (KeStackAttachProcess.c)
 *     PsGetProcessId @ 0x14026AB30 (PsGetProcessId.c)
 *     PsDetachSiloFromCurrentThread @ 0x140272080 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402720A0 (PsAttachSiloToCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x14027D870 (PsGetProcessServerSilo.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     MmGetSessionById @ 0x1402BE830 (MmGetSessionById.c)
 *     MmDetachSession @ 0x1402DCA80 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402DCB20 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     EtwpBuildNotificationPacket @ 0x140632D68 (EtwpBuildNotificationPacket.c)
 *     EtwpAllocDataBlock @ 0x140632DEC (EtwpAllocDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x140633EA0 (EtwpUnreferenceDataBlock.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x140633EC8 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpCalculateUpdateNotification @ 0x140633F88 (EtwpCalculateUpdateNotification.c)
 *     EtwpFreeFilterInfo @ 0x140635F90 (EtwpFreeFilterInfo.c)
 *     EtwpValidateEnableNotification @ 0x140636024 (EtwpValidateEnableNotification.c)
 *     EtwpEnableDisableSpecialGuids @ 0x140636190 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpUpdateGuidEnableInfo @ 0x14063629C (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x1406369BC (EtwpAddGuidEntry.c)
 *     EtwpIsRegEntryAllowed @ 0x140636ECC (EtwpIsRegEntryAllowed.c)
 *     EtwpSendDataBlock @ 0x140637004 (EtwpSendDataBlock.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 *     EtwpFindGuidEntryByGuid @ 0x14066E1D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14066F5A8 (EtwpUnreferenceGuidEntry.c)
 *     MmQuitNextSession @ 0x1406D3050 (MmQuitNextSession.c)
 *     EtwpProviderArrivalCallback @ 0x1406FAA60 (EtwpProviderArrivalCallback.c)
 *     EtwpCreateUmReplyObject @ 0x14070FC0C (EtwpCreateUmReplyObject.c)
 *     EtwpAcquireTokenAccessInformation @ 0x14093055C (EtwpAcquireTokenAccessInformation.c)
 *     EtwpReferenceStackLookasideList @ 0x140932320 (EtwpReferenceStackLookasideList.c)
 *     EtwpEventWriteProviderEnabled @ 0x14093631C (EtwpEventWriteProviderEnabled.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1409367A0 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14093BA1C (EtwpDemuxPrivateTraceHandle.c)
 */

__int64 __fastcall EtwpEnableGuid(__int64 a1, __int64 a2, char a3)
{
  volatile signed __int32 *v3; // r13
  int v4; // eax
  __int64 v8; // rsi
  int v9; // r8d
  volatile signed __int32 *v10; // r15
  int updated; // ebx
  __int64 v12; // r8
  unsigned int v13; // r12d
  struct _KTHREAD *CurrentThread; // rax
  int CurrentThreadProcessId; // eax
  char v16; // bl
  const GUID *v17; // rdx
  bool v18; // zf
  __int64 GuidEntryByGuid; // rax
  __int64 v20; // r14
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
  volatile signed __int32 *v35; // rbx
  unsigned __int8 v36; // cl
  volatile signed __int32 *v37; // r12
  __int64 v38; // rcx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // r13
  char IsRegEntryAllowed; // al
  __int64 v43; // r9
  unsigned int v44; // eax
  unsigned __int8 v45; // bl
  int v46; // r15d
  char v47; // al
  __int16 v48; // cx
  volatile signed __int32 *v49; // rdx
  int v50; // eax
  __int64 v51; // r13
  int v52; // ecx
  unsigned int v53; // r13d
  const EVENT_DESCRIPTOR *v54; // r12
  __int64 v55; // r8
  __int16 v56; // ax
  __int64 v57; // rcx
  __int64 v58; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // r9
  volatile signed __int32 *v63; // rcx
  volatile signed __int32 *v64; // rbx
  __int64 v65; // r11
  _BYTE *v66; // r9
  _DWORD *v67; // rdx
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // rbx
  signed __int32 v71; // eax
  __int64 v72; // rcx
  signed __int32 v73; // ett
  struct _KTHREAD *v74; // rax
  _KPROCESS *SessionById; // rax
  unsigned int ProcessId; // eax
  __int16 v77; // bx
  struct _KTHREAD *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rcx
  unsigned __int8 v81; // [rsp+50h] [rbp-B0h]
  char v82; // [rsp+51h] [rbp-AFh]
  char v83; // [rsp+52h] [rbp-AEh]
  char v84[13]; // [rsp+53h] [rbp-ADh] BYREF
  volatile signed __int32 *v85; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v86; // [rsp+68h] [rbp-98h] BYREF
  void *Src; // [rsp+70h] [rbp-90h] BYREF
  __int16 v88[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v89; // [rsp+7Ch] [rbp-84h]
  volatile signed __int32 *v90; // [rsp+80h] [rbp-80h]
  volatile signed __int32 *v91; // [rsp+88h] [rbp-78h]
  int v92; // [rsp+90h] [rbp-70h]
  int v93; // [rsp+94h] [rbp-6Ch]
  _QWORD *v94; // [rsp+98h] [rbp-68h]
  __int64 v95; // [rsp+A0h] [rbp-60h]
  __int64 v96; // [rsp+A8h] [rbp-58h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+B0h] [rbp-50h]
  __int64 v98; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v99; // [rsp+C0h] [rbp-40h] BYREF
  int v100; // [rsp+D0h] [rbp-30h]
  volatile signed __int32 *v101; // [rsp+D8h] [rbp-28h]
  volatile signed __int32 *v102; // [rsp+E0h] [rbp-20h]
  unsigned int *v103; // [rsp+E8h] [rbp-18h]
  _QWORD *v104; // [rsp+F0h] [rbp-10h]
  _BYTE v105[96]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v106[3]; // [rsp+160h] [rbp+60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v108[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v109[8]; // [rsp+1C4h] [rbp+C4h] BYREF
  int v110; // [rsp+1CCh] [rbp+CCh]

  v3 = 0LL;
  v4 = *(_DWORD *)(a2 + 80) & 0x20;
  v98 = 0LL;
  *(_DWORD *)&v84[5] = v4;
  DmaAdapter = 0LL;
  v93 = 0;
  v83 = 0;
  v81 = v4 != 0 ? 2 : 0;
  LOBYTE(v92) = 0;
  *(_WORD *)v84 = 0;
  v84[2] = 0;
  v8 = 0LL;
  v86 = 0LL;
  v88[0] = 0;
  memset(v105, 0, 0x58uLL);
  v85 = 0LL;
  v100 = 0;
  Src = 0LL;
  LOBYTE(v9) = a3;
  v10 = 0LL;
  v99 = 0LL;
  updated = EtwpValidateEnableNotification(a1, a2, v9, (unsigned int)&v99, (__int64)&v86, (__int64)v105);
  if ( updated < 0 )
    goto LABEL_14;
  v12 = *(unsigned int *)(a2 + 116);
  v13 = *(_DWORD *)(a2 + 72);
  v89 = v13;
  if ( (unsigned int)(v12 - 1) <= 1 )
  {
    v65 = v12;
    v66 = &v108[-a2 - 120];
    v67 = (_DWORD *)(a2 + 128);
    do
    {
      v68 = a2 + *((_QWORD *)v67 - 1);
      *(_DWORD *)&v109[(_QWORD)v67 - 120 - a2] = v67[1];
      v69 = *v67;
      *(_QWORD *)((char *)v67 + (_QWORD)v66 - 8) = v68;
      *(_DWORD *)((char *)v67 + (_QWORD)v66) = v69;
      v67 += 4;
      --v65;
    }
    while ( v65 );
  }
  else
  {
    LODWORD(v12) = 0;
    v110 = 0;
  }
  if ( !*(_DWORD *)&v84[5] )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    updated = EtwpEnableDisableSpecialGuids(
                a1,
                (int)a2 + 40,
                *(unsigned __int16 *)(a2 + 78),
                v13,
                *(_DWORD *)(a2 + 88),
                (__int64)v108,
                v12,
                (__int64)&v84[2]);
    KeLeaveCriticalRegion();
    if ( v84[2] )
    {
LABEL_14:
      v20 = v86;
      goto LABEL_34;
    }
    v10 = v85;
    v3 = (volatile signed __int32 *)Src;
  }
  if ( (*(_WORD *)(a2 + 78) & 0xFFFD) == 0 )
  {
    v20 = v86;
    updated = -1073741790;
    goto LABEL_86;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v16 = BYTE2(v100);
  v17 = &PrivateLoggerNotificationGuid;
  v18 = BYTE2(v100) == 0;
  *(_DWORD *)(a2 + 36) = CurrentThreadProcessId;
  if ( v18 )
    v17 = (const GUID *)(a2 + 40);
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, v17, v81);
  v8 = GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( v13 == 1 )
    {
      v56 = *(_WORD *)(GuidEntryByGuid + 88);
      if ( v56 )
      {
        if ( !*(_DWORD *)&v84[5] && *(_WORD *)(a2 + 78) != v56 )
        {
          v57 = 0x4719A4EB910C653DLL - *(_QWORD *)(v8 + 40);
          if ( *(_QWORD *)(v8 + 40) == 0x4719A4EB910C653DLL )
            v57 = 0x91ECBAE3884509B9uLL - *(_QWORD *)(v8 + 48);
          if ( !v57 )
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
    v8 = EtwpAddGuidEntry(a1, a2 + 40, v81, 0LL);
    if ( !v8 )
    {
      updated = -1073741801;
      goto LABEL_14;
    }
  }
  v21 = KeGetCurrentThread();
  --v21->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v8 + 408, 0LL);
  v20 = v86;
  v24 = 1;
  *(_QWORD *)(v8 + 416) = KeGetCurrentThread();
  v84[1] = 1;
  if ( v20 && (*(_DWORD *)(v20 + 832) & 0x40) != 0 )
  {
    updated = -1073741162;
    goto LABEL_33;
  }
  v25 = *(_DWORD *)&v84[5];
  if ( *(_DWORD *)&v84[5] )
  {
    updated = EtwpAcquireTokenAccessInformation(v20, v22, v23, 0LL);
    if ( updated )
      goto LABEL_33;
  }
  v26 = BYTE2(v100);
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
    updated = EtwpUpdateGuidEnableInfo(v8, (__int64)v84);
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
      _m_prefetchw((const void *)(v20 + 832));
      v71 = *(_DWORD *)(v20 + 832);
      do
      {
        v72 = v71 | 0x2000u;
        v73 = v71;
        v71 = _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 832), v72, v71);
      }
      while ( v73 != v71 );
      if ( (v71 & 0x2000) == 0 )
        EtwpReferenceStackLookasideList(v72, 0x2000LL, v29, 0LL);
      v20 = v86;
    }
  }
  if ( *(_QWORD *)(v8 + 56) == v8 + 56 && (*(_QWORD *)(v8 + 400) || *(_QWORD *)(v8 + 16) == v8 + 16) )
  {
    updated = 0;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(a2 + 12) )
  {
    updated = EtwpCreateUmReplyObject(v8, (__int64)&v98);
    if ( updated < 0 )
      goto LABEL_33;
    *(_QWORD *)(a2 + 24) = DmaAdapter;
  }
  if ( (int)EtwpBuildNotificationPacket(v8, (_OWORD *)a2, 255, &Src) < 0 )
  {
    v3 = (volatile signed __int32 *)Src;
    updated = -1073741801;
  }
  else
  {
    v31 = *((unsigned int *)Src + 1);
    v103 = (unsigned int *)((char *)Src + 4);
    v32 = EtwpAllocDataBlock(v31, Src, &v85);
    v10 = v85;
    if ( v32 < 0 )
      goto LABEL_127;
    v33 = v92;
    v34 = (_DWORD *)(v8 + 128);
    v35 = v85;
    v36 = 0;
    v90 = v85;
    do
    {
      if ( *v34 )
        v33 = (unsigned __int8)v33 | (1 << v36);
      ++v36;
      v34 += 8;
    }
    while ( v36 < 8u );
    v92 = v33;
    v37 = (volatile signed __int32 *)Src;
    v82 = 0;
    v95 = 0LL;
    if ( !*(_QWORD *)(v8 + 400) )
    {
      v38 = *(_QWORD *)(v8 + 16);
      if ( v38 != v8 + 16 )
        v95 = v38 - 16;
    }
    v39 = v8;
    v96 = v8;
    while ( 1 )
    {
      v40 = *(_QWORD **)(v39 + 56);
      v104 = (_QWORD *)(v39 + 56);
      v94 = v40;
      if ( v40 != (_QWORD *)(v39 + 56) )
      {
        while ( 1 )
        {
          v102 = v35;
          v101 = v35;
          if ( v25 )
          {
            v41 = (__int64)(v40 - 2);
            v74 = KeGetCurrentThread();
            --v74->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(*(_QWORD *)(v41 + 32) + 408LL, 0LL);
            v20 = v86;
            v10 = v85;
            v37 = (volatile signed __int32 *)Src;
            *(_QWORD *)(*(_QWORD *)(v41 + 32) + 416LL) = KeGetCurrentThread();
            v40 = v94;
            v83 = 1;
          }
          else
          {
            v41 = (__int64)v40;
          }
          v94 = (_QWORD *)*v40;
          IsRegEntryAllowed = EtwpIsRegEntryAllowed(v41, v20, (unsigned int)&v99, a2, (__int64)v105, v82, v81);
          v43 = 0LL;
          if ( IsRegEntryAllowed )
          {
            v91 = v37;
            if ( !BYTE2(v100) )
            {
              v44 = v89;
              if ( v89 != 2 )
              {
                if ( v82 )
                {
                  if ( *(_DWORD *)&v84[5] )
                    v45 = *(_BYTE *)(v41 + 103);
                  else
                    v45 = *(_BYTE *)(v41 + 102);
                }
                else if ( *(_DWORD *)&v84[5] )
                {
                  v45 = *(_BYTE *)(v41 + 101);
                }
                else
                {
                  v45 = *(_BYTE *)(v41 + 100);
                }
                v46 = v89;
                EtwpUpdateRegEntryEnableMask(v41, v20, v84[0], v81, v82, v89);
                v47 = EtwpCalculateUpdateNotification(v41, v84[0], v45, v92, v81, v82, v46, &v85);
                v10 = v85;
                v43 = 0LL;
                if ( !v47 )
                {
                  v35 = v90;
                  if ( !v85 )
                  {
                    v10 = v90;
                    v85 = v90;
                  }
                  goto LABEL_73;
                }
                if ( v85 )
                {
                  v63 = v85;
                  v91 = v85;
                  if ( v85 != v90 )
                  {
                    EtwpUnreferenceDataBlock(v90);
                    v63 = v10;
                    v43 = 0LL;
                  }
                  v64 = v63;
                  if ( v63 == v101 )
                    v64 = v102;
                  v90 = v64;
                }
                else
                {
                  v10 = v90;
                  v85 = v90;
                }
                v44 = v89;
              }
              if ( v44 - 1 > 1 )
                goto LABEL_69;
              v48 = *(_WORD *)(v41 + 98);
              if ( (v48 & 8) == 0 && (v48 & 0x20) == 0 && (*(_DWORD *)(v20 + 832) & 0x2000000) == 0 )
                goto LABEL_69;
              if ( (v48 & 1) == 0 )
              {
                if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v41 + 80) + 1112LL)) )
                {
                  v58 = *(_QWORD *)(v41 + 80);
                  memset(&ApcState, 0, sizeof(ApcState));
                  ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v58);
                  v60 = PsAttachSiloToCurrentThread(ProcessServerSilo);
                  KeStackAttachProcess(*(PRKPROCESS *)(v41 + 80), &ApcState);
                  LOBYTE(v61) = 1;
                  EtwpProviderArrivalCallback(v20, v61, v41, v62);
                  KeUnstackDetachProcess(&ApcState);
                  PsDetachSiloFromCurrentThread(v60);
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v41 + 80) + 1112LL));
                }
                goto LABEL_69;
              }
              v70 = 0LL;
              memset(v106, 0, sizeof(v106));
              if ( (v48 & 0x10) != 0 )
              {
                SessionById = (_KPROCESS *)MmGetSessionById(*(_DWORD *)(v41 + 56));
                v70 = (__int64)SessionById;
                if ( SessionById )
                {
                  if ( (int)MmAttachSession(SessionById, (__int64)v106) >= 0 )
                    goto LABEL_115;
LABEL_137:
                  MmQuitNextSession(v70);
                }
              }
              else
              {
LABEL_115:
                EtwpProviderArrivalCallback(v20, 0LL, v41, v43);
                if ( v70 )
                {
                  MmDetachSession(v70, (__int64)v106);
                  goto LABEL_137;
                }
              }
LABEL_69:
              v49 = v91;
LABEL_70:
              v50 = EtwpSendDataBlock(v41, v49);
              v35 = v90;
              if ( v50 >= 0 && (*(_BYTE *)(v41 + 98) & 2) != 0 )
                ++v93;
              goto LABEL_73;
            }
            ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v41 + 80));
            if ( !(unsigned int)EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 78) & 0x7FFF, v88) )
            {
              v77 = v88[0];
              if ( v88[0] != *((_WORD *)v10 + 39) )
              {
                if ( (int)EtwpAllocDataBlock(*v103, (void *)v37, &v85) < 0 )
                {
                  v10 = v90;
                  if ( v83 )
                  {
                    *(_QWORD *)(*(_QWORD *)(v41 + 32) + 416LL) = 0LL;
                    ExReleasePushLockEx(*(_QWORD *)(v41 + 32) + 408LL, 0LL);
                    KeLeaveCriticalRegion();
                  }
LABEL_127:
                  updated = -1073741801;
LABEL_85:
                  v3 = (volatile signed __int32 *)Src;
                  goto LABEL_86;
                }
                EtwpUnreferenceDataBlock(v90);
                v10 = v85;
                v90 = v85;
                *((_WORD *)v85 + 39) = v77 | 0x8000;
                *((_WORD *)v10 + 52) = v77;
              }
              v49 = v10;
              goto LABEL_70;
            }
          }
LABEL_73:
          if ( v83 )
          {
            *(_QWORD *)(*(_QWORD *)(v41 + 32) + 416LL) = 0LL;
            ExReleasePushLockEx(*(_QWORD *)(v41 + 32) + 408LL, 0LL);
            KeLeaveCriticalRegion();
            v83 = 0;
          }
          v40 = v94;
          v25 = *(_DWORD *)&v84[5];
          if ( v94 == v104 )
          {
            v39 = v96;
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
      v51 = v95;
      if ( !v95 )
        break;
      v78 = KeGetCurrentThread();
      v82 = 1;
      v96 = v95;
      --v78->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v51 + 408, 0LL);
      v20 = v86;
      v79 = 0LL;
      v10 = v85;
      v37 = (volatile signed __int32 *)Src;
      *(_QWORD *)(v51 + 416) = KeGetCurrentThread();
      if ( *(_QWORD *)(v51 + 16) - 16LL != v8 )
        v79 = *(_QWORD *)(v51 + 16) - 16LL;
      v95 = v79;
      v39 = v51;
      v25 = *(_DWORD *)&v84[5];
    }
    updated = 0;
    v52 = v93;
    *(_QWORD *)(a2 + 24) = v98;
    *(_DWORD *)(a2 + 20) = v52;
    if ( !v20 )
      goto LABEL_85;
    v53 = v89;
    if ( v89 > 1 )
      goto LABEL_85;
    v54 = (const EVENT_DESCRIPTOR *)ETW_EVENT_PROVIDER_ENABLED;
    if ( v89 != 1 )
      v54 = &ETW_EVENT_PROVIDER_DISABLED;
    if ( !EtwEventEnabled(EtwpEventTracingProvRegHandle, v54) )
      goto LABEL_85;
    v80 = a2 + 40;
    if ( v53 == 1 )
      EtwpEventWriteProviderEnabled(
        v80,
        (_DWORD)v54,
        v55,
        v20 + 152,
        a2 + 40,
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 96),
        *(_DWORD *)(a2 + 80),
        *(_BYTE *)(a2 + 76));
    else
      EtwpEventWriteTemplateSessAndProv(v80, v54, v55, 2LL, v20 + 152, a2 + 40);
    v3 = (volatile signed __int32 *)Src;
LABEL_86:
    if ( v10 )
      EtwpUnreferenceDataBlock(v10);
    v24 = v84[1];
  }
  if ( v3 )
    EtwpUnreferenceDataBlock(v3);
  if ( v24 == 1 )
    goto LABEL_33;
LABEL_34:
  if ( v20 )
    EtwpReleaseLoggerContext(v20, 0LL);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v8 )
    EtwpUnreferenceGuidEntry(v8);
  EtwpFreeFilterInfo(v105);
  return (unsigned int)updated;
}
