/*
 * XREFs of ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018F2D8
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C018D488 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C01987AC (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01998E4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     IsPTPIVEnabled @ 0x1C0068F50 (IsPTPIVEnabled.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMValidateHandleNoSecure @ 0x1C006DF18 (HMValidateHandleNoSecure.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0070E3C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0070F68 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     isRootPartition @ 0x1C0071238 (isRootPartition.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D13EC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1F20 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1C0127A60 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C0127E40 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C0127E70 (EtwTraceDwmManipulationFrameStart.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1C01281E0 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0171560 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01896FC (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C018BBBC (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C018DCE4 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C018E100 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018EAA0 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018EC5C (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C018FC48 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01902E0 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C0194068 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C0194EE8 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x1C01957E4 (-NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0196FC8 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0198010 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0198698 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C019C164 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_SF_LLL @ 0x1C019E930 (WPP_RECORDER_SF_LLL.c)
 *     IsTouchpadDevice @ 0x1C01ABA40 (IsTouchpadDevice.c)
 *     IsPenIVEnabled @ 0x1C01B7190 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01B7210 (IsTouchIVEnabled.c)
 *     ApiSetEditionProcessPointerInputAsMouse @ 0x1C01C9C94 (ApiSetEditionProcessPointerInputAsMouse.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v24; // r9
  int v25; // edi
  const struct CPointerInfoNode *v26; // rsi
  int v27; // eax
  int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  int v35; // esi
  int v36; // edi
  int v37; // r12d
  unsigned int v38; // r15d
  unsigned int *v39; // rbx
  CTouchProcessor *v40; // rcx
  CTouchProcessor *v41; // rcx
  unsigned __int64 PrevMsgId; // rax
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  unsigned int v46; // eax
  __int64 *v47; // rbx
  unsigned int v48; // edi
  CTouchProcessor *v49; // rcx
  unsigned __int64 *v50; // rbx
  unsigned int i; // edi
  CTouchProcessor *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // edx
  int v56; // ecx
  int v57; // r8d
  unsigned int v58; // edi
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // ebx
  int v62; // r12d
  CTouchProcessor *v63; // rsi
  unsigned int v64; // r15d
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  unsigned __int64 v69; // rbx
  unsigned int j; // edi
  CTouchProcessor *v71; // rcx
  __int64 v72; // rax
  unsigned int v73; // edi
  __int64 *k; // rbx
  CTouchProcessor *v75; // rcx
  __int64 v76; // r9
  const struct CPointerInfoNode *NodeForPointerPromotion; // rax
  _DWORD *v78; // rdx
  CTouchProcessor *v79; // rcx
  const struct CPointerInfoNode *v80; // rdi
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rcx
  unsigned __int16 v84; // bx
  unsigned int v86; // [rsp+28h] [rbp-81h]
  unsigned int v87; // [rsp+48h] [rbp-61h]
  int v88; // [rsp+4Ch] [rbp-5Dh] BYREF
  int v89; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v90[2]; // [rsp+58h] [rbp-51h]
  __int64 v91; // [rsp+60h] [rbp-49h] BYREF
  __int128 v92; // [rsp+68h] [rbp-41h] BYREF
  __int64 v93; // [rsp+78h] [rbp-31h]
  __int64 v94; // [rsp+80h] [rbp-29h] BYREF
  __int64 *v95; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v96[40]; // [rsp+90h] [rbp-19h] BYREF
  CInpLockGuard *v97; // [rsp+B8h] [rbp+Fh]
  int v100; // [rsp+118h] [rbp+6Fh]
  int v101; // [rsp+128h] [rbp+7Fh]

  v100 = a3;
  v5 = this;
  v6 = a4;
  v7 = a2;
  v92 = 0LL;
  v8 = (PDEVICE_OBJECT)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  *(_QWORD *)v90 = v8;
  v93 = 0LL;
  v9 = &WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids;
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
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
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
      if ( qword_1C0251EC0 )
        qword_1C0251EC0(a5, &v92, CTouchProcessor::DereferencePointerInputFrameAndMessageData, v24);
      CTouchProcessor::ForwardInputToManipulationThread((CTouchProcessor *)v5, a5);
      if ( qword_1C0251ED0 )
        qword_1C0251ED0(&v92);
    }
    goto LABEL_23;
  }
LABEL_18:
  v25 = 0;
  v26 = (const struct CPointerInfoNode *)*((_QWORD *)a5 + 17);
  if ( *((_DWORD *)a5 + 12) )
  {
    do
    {
      if ( CTouchProcessor::ShouldGenerateMessagesForNode(v19, a5, v26, v6) )
        ++v25;
      v26 = (const struct CPointerInfoNode *)((char *)v26 + 480);
      ++v22;
    }
    while ( v22 < *((_DWORD *)a5 + 12) );
  }
  EtwTraceDwmManipulationFrameRouted(*((unsigned int *)a5 + 10), v25, v20);
LABEL_23:
  v27 = *((_DWORD *)a5 + 30);
  if ( (v27 & 2) == 0 )
  {
    if ( (v27 & 0x10) != 0 && !v6 )
    {
      if ( qword_1C0251EC0 )
        qword_1C0251EC0(a5, &v92, CTouchProcessor::DereferencePointerInputFrameAndMessageData, v21);
      CTouchProcessor::ProcessPrimaryDown((CTouchProcessor *)v5, a5);
      if ( qword_1C0251ED0 )
        qword_1C0251ED0(&v92);
    }
    if ( (*((_DWORD *)a5 + 30) & 4) == 0 || v6 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v95, "GenerateFrameMessages", 0LL);
      EtwTraceBeginPointerFrameMessageGeneration(*((_DWORD *)a5 + 10), *((_DWORD *)a5 + 12), v28);
      if ( isRootPartition(v30, v29)
        && ((unsigned __int8)IsTouchIVEnabled() || (unsigned __int8)IsPenIVEnabled() || IsPTPIVEnabled()) )
      {
        CTouchProcessor::CheckandDeliverContainerInput(v5, a5, v7, v6);
      }
      v34 = *((unsigned int *)a5 + 12);
      v87 = 0;
      v35 = 0;
      LODWORD(v91) = 0;
      v36 = 0;
      v88 = 0;
      v37 = 0;
      v101 = 0;
      v38 = 0;
      v89 = 0;
      v39 = (unsigned int *)*((_QWORD *)a5 + 17);
      if ( (_DWORD)v34 )
      {
        do
        {
          v40 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v34);
          if ( v39 >= (unsigned int *)v40 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v31, v32, v33);
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v40, a5, (const struct CPointerInfoNode *)v39, v6) )
          {
            PrevMsgId = CTouchProcessor::GetPrevMsgId(v41, *((_QWORD *)v39 + 2));
            CTouchProcessor::ProcessAndUnreferencePreviousInput(
              (CTouchProcessor *)this,
              (const struct CPointerInfoNode *)v39,
              PrevMsgId,
              v90[0],
              a2,
              v100);
            v43 = *v39;
            if ( (v43 & 0x1000) == 0 )
            {
              if ( (v43 & 8) != 0 )
              {
                if ( __CFSHR__(v43, 7) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v31, v32, v33);
                ++v35;
              }
              else if ( __CFSHR__(v43, 7) )
              {
                ++v37;
              }
              v44 = v36 + 1;
              v45 = v39[45];
              if ( (v45 & 1) == 0 )
                v44 = v36;
              v36 = v44;
              v46 = v87 + 1;
              if ( (v45 & 2) != 0 )
                v46 = v87;
              v87 = v46;
              v31 = v46;
              if ( (v45 & 0x10000) != 0 )
              {
                LODWORD(v91) = v91 + 1;
              }
              else if ( (v45 & 0x40000) != 0 )
              {
                ++v101;
                v87 = v46;
              }
              else
              {
                if ( (v45 & 0x20000) == 0 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v46, v32, v33);
                  v31 = v87;
                }
                ++v88;
                v87 = v31;
              }
            }
          }
          v34 = *((unsigned int *)a5 + 12);
          v39 += 120;
          ++v38;
        }
        while ( v38 < (unsigned int)v34 );
        v89 = v37;
        if ( v35 || v37 )
          goto LABEL_63;
      }
      if ( v36 )
      {
LABEL_63:
        v47 = (__int64 *)*((_QWORD *)a5 + 17);
        v48 = 0;
        if ( (_DWORD)v34 )
        {
          do
          {
            v49 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v34);
            if ( v47 >= (__int64 *)v49 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v31, v32, v33);
            if ( (*(_DWORD *)v47 & 0x1000) == 0
              && CTouchProcessor::ShouldGenerateMessagesForNode(v49, a5, (const struct CPointerInfoNode *)v47, v6) )
            {
              v86 = v90[0];
              CTouchProcessor::GenerateEnterMessages((CTouchProcessor *)this, a5, v48, v47[2]);
            }
            v34 = *((unsigned int *)a5 + 12);
            v47 += 60;
            ++v48;
          }
          while ( v48 < (unsigned int)v34 );
          v37 = v89;
        }
        if ( v37 )
        {
          v50 = (unsigned __int64 *)*((_QWORD *)a5 + 17);
          for ( i = 0; i < (unsigned int)v34; ++i )
          {
            v52 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v34);
            if ( v50 >= (unsigned __int64 *)v52 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v31, v32, v33);
            if ( (*(_DWORD *)v50 & 0x1000) == 0
              && CTouchProcessor::ShouldGenerateMessagesForNode(v52, a5, (const struct CPointerInfoNode *)v50, v6) )
            {
              CTouchProcessor::GenerateRoutedToMessages((CTouchProcessor *)this, a5, i, v50[2], v90[0], a2, v100);
            }
            v34 = *((unsigned int *)a5 + 12);
            v50 += 60;
          }
        }
      }
      if ( (unsigned __int8)IsTouchpadDevice(*((_QWORD *)a5 + 8)) )
      {
        if ( isRootPartition(v54, v53) )
        {
          v58 = v91;
          if ( IsPTPIVEnabled() && (_DWORD)v91 )
          {
            v59 = *(_QWORD *)(HMValidateHandleNoSecure(*((_QWORD *)a5 + 8), 19) + 480);
            v60 = v59 ? *(_QWORD *)(v59 + 1000) : 0LL;
            if ( v60 )
            {
              *(_DWORD *)(v60 + 452) &= ~2u;
              *(_DWORD *)(v60 + 448) = 0;
            }
          }
        }
        else
        {
          v58 = v91;
        }
        v61 = 0;
        if ( (*((_DWORD *)a5 + 30) & 0x10) != 0 && v58 > 1 )
        {
          v62 = v101;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_LLL(v56, v55, v57, 79, v86, *((_DWORD *)a5 + 10), v58, v101);
          }
          v61 = 0x2000;
          v63 = (CTouchProcessor *)this;
          v64 = v90[0];
          CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v90[0], a2, v100, 0x2000u, 0, v6);
        }
        else
        {
          v64 = v90[0];
          v62 = v101;
          v63 = (CTouchProcessor *)this;
        }
        if ( !v88 && v58 && v62 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_LLL(0, v55, v57, 80, v86, *((_DWORD *)a5 + 10), v58, v62);
          }
          CTouchProcessor::GeneratePointerInputMessages(v63, a5, v64, a2, v100, 0x10000u, v61, v6);
          v61 |= 0x10000u;
        }
      }
      else
      {
        v62 = v101;
        v61 = 0;
      }
      v5 = this;
      CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v90[0], a2, v100, 0, v61, v6);
      if ( v62 )
      {
        v68 = *((unsigned int *)a5 + 12);
        v69 = *((_QWORD *)a5 + 17);
        for ( j = 0; j < (unsigned int)v68; ++j )
        {
          v71 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v68);
          if ( v69 >= (unsigned __int64)v71 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v71, v65, v66, v67);
          if ( (*(_DWORD *)v69 & 0x1000) == 0
            && CTouchProcessor::ShouldGenerateMessagesForNode(v71, a5, (const struct CPointerInfoNode *)v69, v6)
            && (*(_DWORD *)(v69 + 180) & 0x40000) != 0 )
          {
            CTouchProcessor::ProcessRoutedAwayList(
              (CTouchProcessor *)this,
              *(_WORD *)(v69 + 172),
              1,
              a5,
              j,
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          }
          v68 = *((unsigned int *)a5 + 12);
          v69 += 480LL;
        }
      }
      if ( v87 )
      {
        v72 = *((unsigned int *)a5 + 12);
        v73 = 0;
        for ( k = (__int64 *)*((_QWORD *)a5 + 17); v73 < (unsigned int)v72; ++v73 )
        {
          v75 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v72);
          if ( k >= (__int64 *)v75 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v75, v65, v66, v67);
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v75, a5, (const struct CPointerInfoNode *)k, v6) )
            CTouchProcessor::GenerateDepartureMessage((CTouchProcessor *)this, a5, v73, k[2]);
          v72 = *((unsigned int *)a5 + 12);
          k += 60;
        }
      }
      if ( (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 32LL) )
      {
        v89 = *((_DWORD *)a5 + 12);
        v88 = *((_DWORD *)a5 + 10);
        v91 = *((_QWORD *)a5 + 9);
        v94 = *((_QWORD *)a5 + 14);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C0246A70,
          byte_1C0219B1C,
          v66,
          v76,
          (__int64)&v94,
          (__int64)&v91,
          (__int64)&v88,
          (__int64)&v89);
      }
      EtwTraceEndPointerFrameMessageGeneration(*((_DWORD *)a5 + 10), *((_DWORD *)a5 + 12), v66);
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v95);
      v7 = a2;
    }
  }
  NodeForPointerPromotion = CTouchProcessor::FindNodeForPointerPromotion(v19, a5);
  v80 = NodeForPointerPromotion;
  if ( NodeForPointerPromotion && CTouchProcessor::NodeMatchesMTGeneration(v79, NodeForPointerPromotion, v6) )
  {
    v83 = (*v78 & 0x8000u) >> 13;
    v84 = (v100 != 0 ? 2 : 0) | (v7 != 0) | v83 | ((*v78 & 0x10000u) >> 13) | ((*v78 & 0x40u) >> 2);
    if ( v78[44] != *((_DWORD *)a5 + 10) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v83, v78, v81, v82);
    if ( qword_1C0251EC0 )
      qword_1C0251EC0(a5, &v92, CTouchProcessor::DereferencePointerInputFrameAndMessageData, v82);
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v96,
      (struct CInpLockGuard *)(v5 + 5),
      0LL);
    ApiSetEditionProcessPointerInputAsMouse((char *)v80 + 168, *((unsigned __int16 *)v80 + 80), v84);
    CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v97, (struct CRefUnRefPointerMsgId *)v96);
    if ( qword_1C0251ED0 )
      qword_1C0251ED0(&v92);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v78) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v78,
      7,
      81,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  return 1LL;
}
