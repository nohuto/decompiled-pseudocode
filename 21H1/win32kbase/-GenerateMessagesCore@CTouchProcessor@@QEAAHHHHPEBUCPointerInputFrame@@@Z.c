/*
 * XREFs of ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0194FD8
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0193188 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C019E49C (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019F5D4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     IsPTPIVEnabled @ 0x1C005F440 (IsPTPIVEnabled.c)
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C006546C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0065598 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     isRootPartition @ 0x1C0065868 (isRootPartition.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0B3C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1600 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1C012DA50 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C012DE30 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C012DE60 (EtwTraceDwmManipulationFrameStart.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1C012E1D0 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0177890 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C018F3FC (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C01918BC (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C01939E4 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0193E00 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01947A0 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C019495C (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C0195948 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0195FE0 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C0199D68 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C019ABE8 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x1C019B4D4 (-NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C019CCB8 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019DD00 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C019E388 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C01A1EC4 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_SF_LLL @ 0x1C01A4690 (WPP_RECORDER_SF_LLL.c)
 *     IsTouchpadDevice @ 0x1C01B17A0 (IsTouchpadDevice.c)
 *     IsPenIVEnabled @ 0x1C01BCEF0 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01BCF70 (IsTouchIVEnabled.c)
 *     ApiSetEditionProcessPointerInputAsMouse @ 0x1C01CFC14 (ApiSetEditionProcessPointerInputAsMouse.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessagesCore(
        struct _KTHREAD **this,
        int a2,
        int a3,
        int a4,
        const struct CPointerInputFrame *a5)
{
  struct _KTHREAD **v5; // r15
  unsigned int v7; // r12d
  PDEVICE_OBJECT v8; // rcx
  void *v9; // rdx
  __int64 v11; // rcx
  CInputThread *v12; // rdi
  unsigned int CurrentThreadId; // eax
  int v14; // ebx
  unsigned int v15; // esi
  CTouchProcessor *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ebx
  __int64 v20; // r8
  int v21; // edi
  const struct CPointerInfoNode *v22; // rsi
  int v23; // eax
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // esi
  int v29; // edi
  int v30; // r12d
  unsigned int v31; // r15d
  unsigned int *v32; // rbx
  CTouchProcessor *v33; // rcx
  CTouchProcessor *v34; // rcx
  unsigned __int64 PrevMsgId; // rax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  int v40; // edx
  __int64 *v41; // rbx
  unsigned int v42; // edi
  CTouchProcessor *v43; // rcx
  unsigned __int64 *v44; // rbx
  unsigned int i; // edi
  CTouchProcessor *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  unsigned int v52; // edi
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned int v55; // ebx
  int v56; // r12d
  CTouchProcessor *v57; // rsi
  unsigned int v58; // r15d
  __int64 v59; // r8
  __int64 v60; // rax
  unsigned __int64 v61; // rbx
  unsigned int j; // edi
  CTouchProcessor *v63; // rcx
  __int64 v64; // rax
  unsigned int v65; // edi
  __int64 *k; // rbx
  CTouchProcessor *v67; // rcx
  __int64 v68; // r9
  const struct CPointerInfoNode *NodeForPointerPromotion; // rax
  _DWORD *v70; // rdx
  CTouchProcessor *v71; // rcx
  const struct CPointerInfoNode *v72; // rdi
  __int64 v73; // rcx
  unsigned __int16 v74; // bx
  unsigned int v76; // [rsp+28h] [rbp-81h]
  int v77; // [rsp+48h] [rbp-61h]
  int v78; // [rsp+4Ch] [rbp-5Dh] BYREF
  int v79; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v80[2]; // [rsp+58h] [rbp-51h]
  __int64 v81; // [rsp+60h] [rbp-49h] BYREF
  __int128 v82; // [rsp+68h] [rbp-41h] BYREF
  __int64 v83; // [rsp+78h] [rbp-31h]
  __int64 v84; // [rsp+80h] [rbp-29h] BYREF
  __int64 *v85; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v86[40]; // [rsp+90h] [rbp-19h] BYREF
  CInpLockGuard *v87; // [rsp+B8h] [rbp+Fh]
  int v91; // [rsp+128h] [rbp+7Fh]

  v5 = this;
  v7 = a2;
  v82 = 0LL;
  v8 = (PDEVICE_OBJECT)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  *(_QWORD *)v80 = v8;
  v83 = 0LL;
  v9 = &WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v9) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v9,
        7,
        78,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
  }
  if ( v5[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)v5, *((_DWORD *)a5 + 10)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
  v12 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v12, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v14 = *((_DWORD *)v12 + 10);
  v15 = CurrentThreadId;
  ExReleasePushLockSharedEx(v12, 0LL);
  KeLeaveCriticalRegion();
  if ( v15 != v14 )
  {
    v19 = 0;
LABEL_17:
    if ( !a4 )
      goto LABEL_23;
    goto LABEL_18;
  }
  v19 = 0;
  if ( !gptiManipulationThread )
    goto LABEL_17;
  if ( !a4 )
  {
    if ( (unsigned int)CTouchProcessor::CountMTNodesReadyForRouting(v16, a5) )
    {
      EtwTraceDwmManipulationFrameStart(*((unsigned int *)a5 + 10), *((_DWORD *)a5 + 12), v20);
      if ( qword_1C0257E80 )
        qword_1C0257E80(a5, &v82, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
      CTouchProcessor::ForwardInputToManipulationThread((CTouchProcessor *)v5, a5);
      if ( qword_1C0257E90 )
        qword_1C0257E90(&v82);
    }
    goto LABEL_23;
  }
LABEL_18:
  v21 = 0;
  v22 = (const struct CPointerInfoNode *)*((_QWORD *)a5 + 17);
  if ( *((_DWORD *)a5 + 12) )
  {
    do
    {
      if ( CTouchProcessor::ShouldGenerateMessagesForNode(v16, a5, v22, a4) )
        ++v21;
      v22 = (const struct CPointerInfoNode *)((char *)v22 + 480);
      ++v19;
    }
    while ( v19 < *((_DWORD *)a5 + 12) );
  }
  EtwTraceDwmManipulationFrameRouted(*((unsigned int *)a5 + 10), v21, v17);
LABEL_23:
  v23 = *((_DWORD *)a5 + 30);
  if ( (v23 & 2) == 0 )
  {
    if ( (v23 & 0x10) != 0 && !a4 )
    {
      if ( qword_1C0257E80 )
        qword_1C0257E80(a5, &v82, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
      CTouchProcessor::ProcessPrimaryDown((CTouchProcessor *)v5, a5);
      if ( qword_1C0257E90 )
        qword_1C0257E90(&v82);
    }
    if ( (*((_DWORD *)a5 + 30) & 4) == 0 || a4 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v85, "GenerateFrameMessages", 0LL, v18);
      EtwTraceBeginPointerFrameMessageGeneration(*((_DWORD *)a5 + 10), *((_DWORD *)a5 + 12), v24);
      if ( isRootPartition(v26, v25)
        && ((unsigned __int8)IsTouchIVEnabled() || (unsigned __int8)IsPenIVEnabled() || IsPTPIVEnabled()) )
      {
        CTouchProcessor::CheckandDeliverContainerInput(v5, a5, v7, a4);
      }
      v27 = *((unsigned int *)a5 + 12);
      v77 = 0;
      v28 = 0;
      LODWORD(v81) = 0;
      v29 = 0;
      v78 = 0;
      v30 = 0;
      v91 = 0;
      v31 = 0;
      v79 = 0;
      v32 = (unsigned int *)*((_QWORD *)a5 + 17);
      if ( (_DWORD)v27 )
      {
        do
        {
          v33 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v27);
          if ( v32 >= (unsigned int *)v33 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v33, a5, (const struct CPointerInfoNode *)v32, a4) )
          {
            PrevMsgId = CTouchProcessor::GetPrevMsgId(v34, *((_QWORD *)v32 + 2));
            CTouchProcessor::ProcessAndUnreferencePreviousInput(
              (CTouchProcessor *)this,
              (const struct CPointerInfoNode *)v32,
              PrevMsgId,
              v80[0],
              a2,
              a3);
            v36 = *v32;
            if ( (v36 & 0x1000) == 0 )
            {
              if ( (v36 & 8) != 0 )
              {
                if ( __CFSHR__(v36, 7) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
                ++v28;
              }
              else if ( __CFSHR__(v36, 7) )
              {
                ++v30;
              }
              v37 = v29 + 1;
              v38 = v32[45];
              if ( (v38 & 1) == 0 )
                v37 = v29;
              v29 = v37;
              v39 = v77 + 1;
              if ( (v38 & 2) != 0 )
                v39 = v77;
              v77 = v39;
              v40 = v39;
              if ( (v38 & 0x10000) != 0 )
              {
                LODWORD(v81) = v81 + 1;
              }
              else if ( (v38 & 0x40000) != 0 )
              {
                ++v91;
                v77 = v39;
              }
              else
              {
                if ( (v38 & 0x20000) == 0 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v38);
                  v40 = v77;
                }
                ++v78;
                v77 = v40;
              }
            }
          }
          v27 = *((unsigned int *)a5 + 12);
          v32 += 120;
          ++v31;
        }
        while ( v31 < (unsigned int)v27 );
        v79 = v30;
        if ( v28 || v30 )
          goto LABEL_63;
      }
      if ( v29 )
      {
LABEL_63:
        v41 = (__int64 *)*((_QWORD *)a5 + 17);
        v42 = 0;
        if ( (_DWORD)v27 )
        {
          do
          {
            v43 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v27);
            if ( v41 >= (__int64 *)v43 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v43);
            if ( (*(_DWORD *)v41 & 0x1000) == 0
              && CTouchProcessor::ShouldGenerateMessagesForNode(v43, a5, (const struct CPointerInfoNode *)v41, a4) )
            {
              v76 = v80[0];
              CTouchProcessor::GenerateEnterMessages((CTouchProcessor *)this, a5, v42, v41[2]);
            }
            v27 = *((unsigned int *)a5 + 12);
            v41 += 60;
            ++v42;
          }
          while ( v42 < (unsigned int)v27 );
          v30 = v79;
        }
        if ( v30 )
        {
          v44 = (unsigned __int64 *)*((_QWORD *)a5 + 17);
          for ( i = 0; i < (unsigned int)v27; ++i )
          {
            v46 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v27);
            if ( v44 >= (unsigned __int64 *)v46 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v46);
            if ( (*(_DWORD *)v44 & 0x1000) == 0
              && CTouchProcessor::ShouldGenerateMessagesForNode(v46, a5, (const struct CPointerInfoNode *)v44, a4) )
            {
              CTouchProcessor::GenerateRoutedToMessages((CTouchProcessor *)this, a5, i, v44[2], v80[0], a2, a3);
            }
            v27 = *((unsigned int *)a5 + 12);
            v44 += 60;
          }
        }
      }
      if ( (unsigned __int8)IsTouchpadDevice(*((_QWORD *)a5 + 8)) )
      {
        if ( isRootPartition(v48, v47) )
        {
          v52 = v81;
          if ( IsPTPIVEnabled() && (_DWORD)v81 )
          {
            v53 = *(_QWORD *)(HMValidateHandleNoSecure(*((_QWORD *)a5 + 8), 19) + 480);
            v54 = v53 ? *(_QWORD *)(v53 + 1000) : 0LL;
            if ( v54 )
            {
              *(_DWORD *)(v54 + 452) &= ~2u;
              *(_DWORD *)(v54 + 448) = 0;
            }
          }
        }
        else
        {
          v52 = v81;
        }
        v55 = 0;
        if ( (*((_DWORD *)a5 + 30) & 0x10) != 0 && v52 > 1 )
        {
          v56 = v91;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_LLL(v50, v49, v51, 79, v76, *((_DWORD *)a5 + 10), v52, v91);
          }
          v55 = 0x2000;
          v57 = (CTouchProcessor *)this;
          v58 = v80[0];
          CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v80[0], a2, a3, 0x2000u, 0, a4);
        }
        else
        {
          v58 = v80[0];
          v56 = v91;
          v57 = (CTouchProcessor *)this;
        }
        if ( !v78 && v52 && v56 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_LLL(0, v49, v51, 80, v76, *((_DWORD *)a5 + 10), v52, v56);
          }
          CTouchProcessor::GeneratePointerInputMessages(v57, a5, v58, a2, a3, 0x10000u, v55, a4);
          v55 |= 0x10000u;
        }
      }
      else
      {
        v56 = v91;
        v55 = 0;
      }
      v5 = this;
      CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v80[0], a2, a3, 0, v55, a4);
      if ( v56 )
      {
        v60 = *((unsigned int *)a5 + 12);
        v61 = *((_QWORD *)a5 + 17);
        for ( j = 0; j < (unsigned int)v60; ++j )
        {
          v63 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v60);
          if ( v61 >= (unsigned __int64)v63 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v63);
          if ( (*(_DWORD *)v61 & 0x1000) == 0
            && CTouchProcessor::ShouldGenerateMessagesForNode(v63, a5, (const struct CPointerInfoNode *)v61, a4)
            && (*(_DWORD *)(v61 + 180) & 0x40000) != 0 )
          {
            CTouchProcessor::ProcessRoutedAwayList(
              (CTouchProcessor *)this,
              *(_WORD *)(v61 + 172),
              1,
              a5,
              j,
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          }
          v60 = *((unsigned int *)a5 + 12);
          v61 += 480LL;
        }
      }
      if ( v77 )
      {
        v64 = *((unsigned int *)a5 + 12);
        v65 = 0;
        for ( k = (__int64 *)*((_QWORD *)a5 + 17); v65 < (unsigned int)v64; ++v65 )
        {
          v67 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v64);
          if ( k >= (__int64 *)v67 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v67);
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v67, a5, (const struct CPointerInfoNode *)k, a4) )
            CTouchProcessor::GenerateDepartureMessage((CTouchProcessor *)this, a5, v65, k[2]);
          v64 = *((unsigned int *)a5 + 12);
          k += 60;
        }
      }
      if ( (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 32LL) )
      {
        v79 = *((_DWORD *)a5 + 12);
        v78 = *((_DWORD *)a5 + 10);
        v81 = *((_QWORD *)a5 + 9);
        v84 = *((_QWORD *)a5 + 14);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C024C960,
          byte_1C021F68C,
          v59,
          v68,
          (__int64)&v84,
          (__int64)&v81,
          (__int64)&v78,
          (__int64)&v79);
      }
      EtwTraceEndPointerFrameMessageGeneration(*((_DWORD *)a5 + 10), *((_DWORD *)a5 + 12), v59);
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v85);
      v7 = a2;
    }
  }
  NodeForPointerPromotion = CTouchProcessor::FindNodeForPointerPromotion(v16, a5);
  v72 = NodeForPointerPromotion;
  if ( NodeForPointerPromotion && CTouchProcessor::NodeMatchesMTGeneration(v71, NodeForPointerPromotion, a4) )
  {
    v73 = (*v70 & 0x8000u) >> 13;
    v74 = (a3 != 0 ? 2 : 0) | (v7 != 0) | v73 | ((*v70 & 0x10000u) >> 13) | ((*v70 & 0x40u) >> 2);
    if ( v70[44] != *((_DWORD *)a5 + 10) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v73);
    if ( qword_1C0257E80 )
      qword_1C0257E80(a5, &v82, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v86,
      (struct CInpLockGuard *)(v5 + 5),
      0LL);
    ApiSetEditionProcessPointerInputAsMouse((char *)v72 + 168, *((unsigned __int16 *)v72 + 80), v74);
    CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v87, (struct CRefUnRefPointerMsgId *)v86);
    if ( qword_1C0257E90 )
      qword_1C0257E90(&v82);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v70) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v70,
      7,
      81,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  return 1LL;
}
