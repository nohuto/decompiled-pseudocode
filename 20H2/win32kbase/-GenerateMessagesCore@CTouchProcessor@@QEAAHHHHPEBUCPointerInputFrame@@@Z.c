/*
 * XREFs of ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018CDB8
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C018AF68 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C019627C (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01973B4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0032DF0 (HMValidateHandleNoSecure.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0036928 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     isRootPartition @ 0x1C0036A7C (isRootPartition.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     IsPTPIVEnabled @ 0x1C00AF270 (IsPTPIVEnabled.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12DC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1C0125710 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C0125AF0 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C0125B20 (EtwTraceDwmManipulationFrameStart.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1C0125E90 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C016F130 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01871BC (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C0189694 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C018B7C4 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C018BBE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018C580 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018C73C (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C018D728 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018DDC0 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C0191B38 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C01929B8 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x1C01932B4 (-NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0194A98 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0195AE0 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0196168 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C0199C64 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_SF_LLL @ 0x1C019C430 (WPP_RECORDER_SF_LLL.c)
 *     IsTouchpadDevice @ 0x1C01A96C0 (IsTouchpadDevice.c)
 *     IsPenIVEnabled @ 0x1C01B4E20 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01B4EA0 (IsTouchIVEnabled.c)
 *     ApiSetEditionProcessPointerInputAsMouse @ 0x1C01C7914 (ApiSetEditionProcessPointerInputAsMouse.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessagesCore(
        struct _KTHREAD **this,
        int a2,
        __int64 a3,
        __int64 a4,
        const struct CPointerInputFrame *a5)
{
  struct _KTHREAD **v5; // r15
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  PDEVICE_OBJECT v8; // rcx
  void *v9; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  CInputThread *v15; // rdi
  unsigned int CurrentThreadId; // eax
  int v17; // ebx
  unsigned int v18; // esi
  CTouchProcessor *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // ebx
  __int64 v23; // r8
  int v24; // edi
  const struct CPointerInfoNode *v25; // rsi
  int v26; // eax
  int v27; // r8d
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  int v32; // esi
  int v33; // edi
  int v34; // r12d
  unsigned int v35; // r15d
  unsigned int *v36; // rbx
  CTouchProcessor *v37; // rcx
  CTouchProcessor *v38; // rcx
  unsigned __int64 PrevMsgId; // rax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // eax
  __int64 *v44; // rbx
  unsigned int v45; // edi
  CTouchProcessor *v46; // rcx
  unsigned __int64 *v47; // rbx
  unsigned int i; // edi
  CTouchProcessor *v49; // rcx
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  unsigned int v53; // edi
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // ebx
  int v57; // r12d
  CTouchProcessor *v58; // rsi
  unsigned int v59; // r15d
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  unsigned __int64 v64; // rbx
  unsigned int j; // edi
  CTouchProcessor *v66; // rcx
  __int64 v67; // rax
  unsigned int v68; // edi
  __int64 *k; // rbx
  CTouchProcessor *v70; // rcx
  __int64 v71; // r9
  const struct CPointerInfoNode *NodeForPointerPromotion; // rax
  _DWORD *v73; // rdx
  CTouchProcessor *v74; // rcx
  const struct CPointerInfoNode *v75; // rdi
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  unsigned __int16 v79; // bx
  unsigned int v81; // [rsp+28h] [rbp-81h]
  unsigned int v82; // [rsp+48h] [rbp-61h]
  int v83; // [rsp+4Ch] [rbp-5Dh] BYREF
  int v84; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v85[2]; // [rsp+58h] [rbp-51h]
  __int64 v86; // [rsp+60h] [rbp-49h] BYREF
  __int128 v87; // [rsp+68h] [rbp-41h] BYREF
  __int64 v88; // [rsp+78h] [rbp-31h]
  __int64 v89; // [rsp+80h] [rbp-29h] BYREF
  __int64 *v90; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v91[40]; // [rsp+90h] [rbp-19h] BYREF
  CInpLockGuard *v92; // [rsp+B8h] [rbp+Fh]
  int v95; // [rsp+118h] [rbp+6Fh]
  int v96; // [rsp+128h] [rbp+7Fh]

  v95 = a3;
  v5 = this;
  v6 = a4;
  v7 = a2;
  v87 = 0LL;
  v8 = (PDEVICE_OBJECT)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  *(_QWORD *)v85 = v8;
  v88 = 0LL;
  v9 = &WPP_50814762fbc63e38c7e5eacf83347307_Traceguids;
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
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
  }
  if ( v5[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v9, a3, a4);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)v5, *((_DWORD *)a5 + 10)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
  v15 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v15, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v17 = *((_DWORD *)v15 + 10);
  v18 = CurrentThreadId;
  ExReleasePushLockSharedEx(v15, 0LL);
  KeLeaveCriticalRegion();
  if ( v18 != v17 )
  {
    v22 = 0;
LABEL_17:
    if ( !v6 )
      goto LABEL_23;
    goto LABEL_18;
  }
  v22 = 0;
  if ( !gptiManipulationThread )
    goto LABEL_17;
  if ( !v6 )
  {
    if ( (unsigned int)CTouchProcessor::CountMTNodesReadyForRouting(v19, a5) )
    {
      EtwTraceDwmManipulationFrameStart(*((unsigned int *)a5 + 10), *((_DWORD *)a5 + 12), v23);
      if ( qword_1C024FEC0 )
        qword_1C024FEC0(a5, &v87, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
      CTouchProcessor::ForwardInputToManipulationThread((CTouchProcessor *)v5, a5);
      if ( qword_1C024FED0 )
        qword_1C024FED0(&v87);
    }
    goto LABEL_23;
  }
LABEL_18:
  v24 = 0;
  v25 = (const struct CPointerInfoNode *)*((_QWORD *)a5 + 17);
  if ( *((_DWORD *)a5 + 12) )
  {
    do
    {
      if ( CTouchProcessor::ShouldGenerateMessagesForNode(v19, a5, v25, v6) )
        ++v24;
      v25 = (const struct CPointerInfoNode *)((char *)v25 + 480);
      ++v22;
    }
    while ( v22 < *((_DWORD *)a5 + 12) );
  }
  EtwTraceDwmManipulationFrameRouted(*((unsigned int *)a5 + 10), v24, v20);
LABEL_23:
  v26 = *((_DWORD *)a5 + 30);
  if ( (v26 & 2) == 0 )
  {
    if ( (v26 & 0x10) != 0 && !v6 )
    {
      if ( qword_1C024FEC0 )
        qword_1C024FEC0(a5, &v87, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
      CTouchProcessor::ProcessPrimaryDown((CTouchProcessor *)v5, a5);
      if ( qword_1C024FED0 )
        qword_1C024FED0(&v87);
    }
    if ( (*((_DWORD *)a5 + 30) & 4) == 0 || v6 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v90, "GenerateFrameMessages", 0LL, v21);
      EtwTraceBeginPointerFrameMessageGeneration(*((_DWORD *)a5 + 10), *((_DWORD *)a5 + 12), v27);
      if ( isRootPartition()
        && ((unsigned __int8)IsTouchIVEnabled() || (unsigned __int8)IsPenIVEnabled() || IsPTPIVEnabled()) )
      {
        CTouchProcessor::CheckandDeliverContainerInput(v5, a5, v7, v6);
      }
      v31 = *((unsigned int *)a5 + 12);
      v82 = 0;
      v32 = 0;
      LODWORD(v86) = 0;
      v33 = 0;
      v83 = 0;
      v34 = 0;
      v96 = 0;
      v35 = 0;
      v84 = 0;
      v36 = (unsigned int *)*((_QWORD *)a5 + 17);
      if ( (_DWORD)v31 )
      {
        do
        {
          v37 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v31);
          if ( v36 >= (unsigned int *)v37 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v28, v29, v30);
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v37, a5, (const struct CPointerInfoNode *)v36, v6) )
          {
            PrevMsgId = CTouchProcessor::GetPrevMsgId(v38, *((_QWORD *)v36 + 2));
            CTouchProcessor::ProcessAndUnreferencePreviousInput(
              (CTouchProcessor *)this,
              (const struct CPointerInfoNode *)v36,
              PrevMsgId,
              v85[0],
              a2,
              v95);
            v40 = *v36;
            if ( (v40 & 0x1000) == 0 )
            {
              if ( (v40 & 8) != 0 )
              {
                if ( __CFSHR__(v40, 7) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v28, v29, v30);
                ++v32;
              }
              else if ( __CFSHR__(v40, 7) )
              {
                ++v34;
              }
              v41 = v33 + 1;
              v42 = v36[45];
              if ( (v42 & 1) == 0 )
                v41 = v33;
              v33 = v41;
              v43 = v82 + 1;
              if ( (v42 & 2) != 0 )
                v43 = v82;
              v82 = v43;
              v28 = v43;
              if ( (v42 & 0x10000) != 0 )
              {
                LODWORD(v86) = v86 + 1;
              }
              else if ( (v42 & 0x40000) != 0 )
              {
                ++v96;
                v82 = v43;
              }
              else
              {
                if ( (v42 & 0x20000) == 0 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v43, v29, v30);
                  v28 = v82;
                }
                ++v83;
                v82 = v28;
              }
            }
          }
          v31 = *((unsigned int *)a5 + 12);
          v36 += 120;
          ++v35;
        }
        while ( v35 < (unsigned int)v31 );
        v84 = v34;
        if ( v32 || v34 )
          goto LABEL_63;
      }
      if ( v33 )
      {
LABEL_63:
        v44 = (__int64 *)*((_QWORD *)a5 + 17);
        v45 = 0;
        if ( (_DWORD)v31 )
        {
          do
          {
            v46 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v31);
            if ( v44 >= (__int64 *)v46 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v28, v29, v30);
            if ( (*(_DWORD *)v44 & 0x1000) == 0
              && CTouchProcessor::ShouldGenerateMessagesForNode(v46, a5, (const struct CPointerInfoNode *)v44, v6) )
            {
              v81 = v85[0];
              CTouchProcessor::GenerateEnterMessages((CTouchProcessor *)this, a5, v45, v44[2]);
            }
            v31 = *((unsigned int *)a5 + 12);
            v44 += 60;
            ++v45;
          }
          while ( v45 < (unsigned int)v31 );
          v34 = v84;
        }
        if ( v34 )
        {
          v47 = (unsigned __int64 *)*((_QWORD *)a5 + 17);
          for ( i = 0; i < (unsigned int)v31; ++i )
          {
            v49 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v31);
            if ( v47 >= (unsigned __int64 *)v49 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v28, v29, v30);
            if ( (*(_DWORD *)v47 & 0x1000) == 0
              && CTouchProcessor::ShouldGenerateMessagesForNode(v49, a5, (const struct CPointerInfoNode *)v47, v6) )
            {
              CTouchProcessor::GenerateRoutedToMessages((CTouchProcessor *)this, a5, i, v47[2], v85[0], a2, v95);
            }
            v31 = *((unsigned int *)a5 + 12);
            v47 += 60;
          }
        }
      }
      if ( (unsigned __int8)IsTouchpadDevice(*((_QWORD *)a5 + 8)) )
      {
        if ( isRootPartition() )
        {
          v53 = v86;
          if ( IsPTPIVEnabled() && (_DWORD)v86 )
          {
            v54 = *(_QWORD *)(HMValidateHandleNoSecure(*((_QWORD *)a5 + 8), 19) + 480);
            v55 = v54 ? *(_QWORD *)(v54 + 1000) : 0LL;
            if ( v55 )
            {
              *(_DWORD *)(v55 + 452) &= ~2u;
              *(_DWORD *)(v55 + 448) = 0;
            }
          }
        }
        else
        {
          v53 = v86;
        }
        v56 = 0;
        if ( (*((_DWORD *)a5 + 30) & 0x10) != 0 && v53 > 1 )
        {
          v57 = v96;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_LLL(v51, v50, v52, 79, v81, *((_DWORD *)a5 + 10), v53, v96);
          }
          v56 = 0x2000;
          v58 = (CTouchProcessor *)this;
          v59 = v85[0];
          CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v85[0], a2, v95, 0x2000u, 0, v6);
        }
        else
        {
          v59 = v85[0];
          v57 = v96;
          v58 = (CTouchProcessor *)this;
        }
        if ( !v83 && v53 && v57 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_LLL(0, v50, v52, 80, v81, *((_DWORD *)a5 + 10), v53, v57);
          }
          CTouchProcessor::GeneratePointerInputMessages(v58, a5, v59, a2, v95, 0x10000u, v56, v6);
          v56 |= 0x10000u;
        }
      }
      else
      {
        v57 = v96;
        v56 = 0;
      }
      v5 = this;
      CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v85[0], a2, v95, 0, v56, v6);
      if ( v57 )
      {
        v63 = *((unsigned int *)a5 + 12);
        v64 = *((_QWORD *)a5 + 17);
        for ( j = 0; j < (unsigned int)v63; ++j )
        {
          v66 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v63);
          if ( v64 >= (unsigned __int64)v66 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v66, v60, v61, v62);
          if ( (*(_DWORD *)v64 & 0x1000) == 0
            && CTouchProcessor::ShouldGenerateMessagesForNode(v66, a5, (const struct CPointerInfoNode *)v64, v6)
            && (*(_DWORD *)(v64 + 180) & 0x40000) != 0 )
          {
            CTouchProcessor::ProcessRoutedAwayList(
              (CTouchProcessor *)this,
              *(_WORD *)(v64 + 172),
              1,
              a5,
              j,
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          }
          v63 = *((unsigned int *)a5 + 12);
          v64 += 480LL;
        }
      }
      if ( v82 )
      {
        v67 = *((unsigned int *)a5 + 12);
        v68 = 0;
        for ( k = (__int64 *)*((_QWORD *)a5 + 17); v68 < (unsigned int)v67; ++v68 )
        {
          v70 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v67);
          if ( k >= (__int64 *)v70 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v70, v60, v61, v62);
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v70, a5, (const struct CPointerInfoNode *)k, v6) )
            CTouchProcessor::GenerateDepartureMessage((CTouchProcessor *)this, a5, v68, k[2]);
          v67 = *((unsigned int *)a5 + 12);
          k += 60;
        }
      }
      if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 32LL) )
      {
        v84 = *((_DWORD *)a5 + 12);
        v83 = *((_DWORD *)a5 + 10);
        v86 = *((_QWORD *)a5 + 9);
        v89 = *((_QWORD *)a5 + 14);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C0244A70,
          byte_1C0217CAD,
          v61,
          v71,
          (__int64)&v89,
          (__int64)&v86,
          (__int64)&v83,
          (__int64)&v84);
      }
      EtwTraceEndPointerFrameMessageGeneration(*((_DWORD *)a5 + 10), *((_DWORD *)a5 + 12), v61);
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v90);
      v7 = a2;
    }
  }
  NodeForPointerPromotion = CTouchProcessor::FindNodeForPointerPromotion(v19, a5);
  v75 = NodeForPointerPromotion;
  if ( NodeForPointerPromotion && CTouchProcessor::NodeMatchesMTGeneration(v74, NodeForPointerPromotion, v6) )
  {
    v78 = (*v73 & 0x8000u) >> 13;
    v79 = (v95 != 0 ? 2 : 0) | (v7 != 0) | v78 | ((*v73 & 0x10000u) >> 13) | ((*v73 & 0x40u) >> 2);
    if ( v73[44] != *((_DWORD *)a5 + 10) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v78, v73, v76, v77);
    if ( qword_1C024FEC0 )
      qword_1C024FEC0(a5, &v87, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v91,
      (struct CInpLockGuard *)(v5 + 5),
      0LL);
    ApiSetEditionProcessPointerInputAsMouse((char *)v75 + 168, *((unsigned __int16 *)v75 + 80), v79);
    CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v92, (struct CRefUnRefPointerMsgId *)v91);
    if ( qword_1C024FED0 )
      qword_1C024FED0(&v87);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v73) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v73,
      7,
      81,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  return 1LL;
}
