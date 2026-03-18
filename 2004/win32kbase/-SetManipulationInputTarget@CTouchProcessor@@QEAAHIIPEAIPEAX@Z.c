/*
 * XREFs of ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01998E4
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C005F150 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0138890 (NtUserSetManipulationInputTarget.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001D98 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0047438 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0049A20 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069090 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006EEE0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12F4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01830B0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018DB80 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018DC38 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018E054 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C018E64C (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C018E8E8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018F2D8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAXAEBVCInputDest@@@Z @ 0x1C0194AC8 (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0194EC0 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0194F44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0196FC8 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01974E4 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0198480 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0198698 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0198F84 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C019A358 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C019BE20 (-SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCIn.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C019BFC8 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C019C8D0 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019CC50 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C019CF04 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C01C7FDC (ApiSetEditionGetInputDelegate.c)
 *     ApiSetSetManipulationInputTargetTransform @ 0x1C01CD390 (ApiSetSetManipulationInputTargetTransform.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetManipulationInputTarget(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        void *a5)
{
  unsigned int v5; // ebx
  unsigned int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  struct CPointerInputFrame *v10; // rax
  __int64 v11; // rdx
  CTouchProcessor *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct CPointerInputFrame *v15; // r14
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ebx
  CSpatialProcessor *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct CPointerInputFrame *v25; // r13
  CTouchProcessor *v26; // rcx
  struct CPointerQFrame *v27; // rax
  struct CInputPointerNode *v28; // rdx
  CPointerInfoNode *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct CPointerQFrame *v32; // rbx
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // r8
  __m128i *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int16 v42; // r13
  unsigned __int64 v43; // rbx
  struct CPointerInfoNode *ValidNodeInFrame; // r12
  struct CPointerInputFrame *v45; // rdx
  unsigned int v46; // ebx
  struct CInputPointerNode *NodeById; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // ebx
  unsigned int MessagesCore; // esi
  unsigned int i; // ebx
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rdx
  int v59; // r8d
  int v60; // edx
  unsigned int v62; // [rsp+28h] [rbp-D8h]
  unsigned int v63; // [rsp+30h] [rbp-D0h]
  int v64; // [rsp+34h] [rbp-CCh]
  int v65; // [rsp+38h] [rbp-C8h]
  int v66; // [rsp+3Ch] [rbp-C4h]
  unsigned int v67; // [rsp+40h] [rbp-C0h]
  int v68; // [rsp+44h] [rbp-BCh]
  struct CPointerQFrame *v69; // [rsp+48h] [rbp-B8h] BYREF
  struct CPointerInputFrame *v70; // [rsp+50h] [rbp-B0h]
  __int64 v71; // [rsp+58h] [rbp-A8h]
  unsigned int v72; // [rsp+60h] [rbp-A0h]
  void *v73; // [rsp+68h] [rbp-98h]
  unsigned int *v74; // [rsp+70h] [rbp-90h]
  _OWORD v75[7]; // [rsp+80h] [rbp-80h] BYREF
  char v76; // [rsp+F0h] [rbp-10h]
  _OWORD v77[7]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v78[7]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v79[40]; // [rsp+1E0h] [rbp+E0h] BYREF
  CInpLockGuard *v80; // [rsp+208h] [rbp+108h]
  _DWORD v81[28]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v82[128]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v83[16]; // [rsp+300h] [rbp+200h] BYREF
  __m128i v84[8]; // [rsp+380h] [rbp+280h] BYREF

  v5 = a2;
  v73 = a5;
  v74 = a4;
  v72 = a3;
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      84,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v79, (struct CInpLockGuard *)(this + 5), 0LL);
  v10 = CTouchProcessor::FindAndReferenceFrameById(this, v5, v8, v9);
  v15 = v10;
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v11,
        7,
        85,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
    UserSetLastError(87LL, v11);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v16) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        7,
        86,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
    goto LABEL_93;
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v12, v10, v13, v14) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19, v20);
  if ( !*((_QWORD *)v15 + 19) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19, v20);
  v21 = *(_DWORD *)(*((_QWORD *)v15 + 17) + 168LL);
  if ( v21 == 6 || !v21 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19, v20);
  v68 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)v15 + 19) + 312LL), 4);
  v67 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)v15 + 19) + 312LL), 5);
  memset(v75, 0, sizeof(v75));
  v76 = 0;
  memset(v81, 0, sizeof(v81));
  v65 = 0;
  if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(v22, a5, v21, 0LL, (struct tagINPUTDEST *)v81) )
  {
    v65 = -(v81[4] & 1);
    CInputDest::CInputDest((CInputDest *)v83, (const struct tagINPUTDEST *)v81);
    CInputDest::operator=((__int64)v75, v83);
    CInputDest::SetEmpty((CInputDest *)v83);
  }
  v70 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(this, v15, v23, v24);
  v25 = v70;
  v27 = CTouchProcessor::SetupQFrame(v26, v15, 0xFFFFFFFFFFFFFFFFuLL, (const struct CInputDest *)v75, 0);
  v69 = v27;
  v32 = v27;
  if ( !v27 || *(_DWORD *)v27 == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
  v33 = 0LL;
  v34 = 0LL;
  v63 = 0;
  v64 = 0;
  v71 = 0LL;
  if ( !*((_DWORD *)v15 + 12) )
  {
    v53 = 0;
LABEL_75:
    if ( LODWORD(v75[0]) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
    goto LABEL_77;
  }
  do
  {
    v35 = *((_QWORD *)v15 + 17) + 480 * v34;
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v35) )
    {
      if ( CPointerInfoNode::IsForManipulationThread(v29) && (*(_DWORD *)(v35 + 4) & 0x200) == 0 )
      {
        v30 = v72;
        v29 = 0LL;
        if ( v72 )
        {
          v28 = (struct CInputPointerNode *)*(unsigned __int16 *)(v35 + 172);
          v31 = (__int64)v74;
          while ( v74[(unsigned int)v29] != (_DWORD)v28 )
          {
            v29 = (CPointerInfoNode *)(unsigned int)((_DWORD)v29 + 1);
            if ( (unsigned int)v29 >= v72 )
              goto LABEL_71;
          }
          v66 = 0;
          if ( HIDWORD(v75[5]) )
          {
            v36 = *(_QWORD *)(v35 + 248);
            v77[0] = v75[0];
            v77[2] = v75[2];
            v77[1] = v75[1];
            v77[4] = v75[4];
            v77[3] = v75[3];
            v77[6] = v75[6];
            v77[5] = v75[5];
            v66 = ApiSetSetManipulationInputTargetTransform((unsigned int)v77, (_DWORD)v73, v36, (int)v35 + 160, v65);
          }
          if ( (*(_DWORD *)(v35 + 4) & 0x80u) == 0 )
          {
            v37 = CInputDest::CInputDest(v84, *(_QWORD *)(v35 + 192), *(_DWORD *)(v35 + 444), 1);
            CInputDest::operator=((__int64)v75, v37);
            CInputDest::SetEmpty((CInputDest *)v84);
          }
          InputTraceLogging::Pointer::HandleResultFromUserMode(
            v15,
            (const struct tagPOINTEREVENTINT *)(v35 + 160),
            (__int64)v73,
            (const struct CInputDest *)v75);
          if ( LODWORD(v75[0]) )
          {
            if ( !v33 )
            {
              CInputDest::CInputDest((CInputDest *)v82, (const struct CInputDest *)v75);
              v71 = CTouchProcessor::SetupNewQFrame(v48, v15, &v69);
              v33 = v71;
              if ( !v71 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
              v32 = v69;
            }
            *(_DWORD *)(v35 + 4) |= 0x200u;
            v64 = 1;
            if ( v32 )
            {
              if ( *(_DWORD *)(v35 + 8) != *(_DWORD *)v32 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
              if ( !*((_DWORD *)v32 + 34) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
              *(_DWORD *)(v35 + 8) = *(_DWORD *)v33;
              ++*(_DWORD *)(v33 + 136);
              --*((_DWORD *)v32 + 34);
            }
            *(_QWORD *)(v35 + 192) = CInputDest::GetWindowHandle((CInputDest *)v75);
            if ( HIDWORD(v75[5]) )
              CInputDest::operator=(v35 + 352, (__int64)v75);
            if ( (*(_DWORD *)v35 & 0x100) == 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51, v52);
            if ( v66 )
              *(_DWORD *)(v35 + 180) |= 0x400000u;
            if ( HIDWORD(v75[5]) )
            {
              v78[0] = v75[0];
              v78[2] = v75[2];
              v78[1] = v75[1];
              v78[4] = v75[4];
              v78[3] = v75[3];
              v78[6] = v75[6];
              v78[5] = v75[5];
              if ( ApiSetEditionGetInputDelegate(v78) )
                *(_DWORD *)v35 |= 0x100000u;
            }
            CTouchProcessor::ProcessQFrameNode(this, (struct CPointerQFrame *)v33, v25, (struct CPointerInfoNode *)v35);
            if ( *(_DWORD *)v33 == -1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
            *(_DWORD *)(v33 + 140) |= 0x10u;
          }
          else
          {
            v42 = *(_WORD *)(v35 + 172);
            v43 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            if ( v70 )
            {
              ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, v70, v42, 0LL);
              if ( ValidNodeInFrame )
              {
                *(_QWORD *)(v35 + 192) = 0LL;
                CInputDest::SetEmpty((CInputDest *)(v35 + 352));
                v45 = v70;
                *(_DWORD *)(v35 + 4) |= 0x200u;
                CTouchProcessor::ProcessEnterLeave(this, v45, (struct CPointerInfoNode *)v35);
                if ( (*(_DWORD *)ValidNodeInFrame & 0x80u) == 0 )
                  CTouchProcessor::ProcessAndUnreferencePreviousInput(
                    (CTouchProcessor *)this,
                    (const struct CPointerInfoNode *)v35,
                    *((unsigned int **)ValidNodeInFrame + 2),
                    v43,
                    v68,
                    v67);
              }
              v33 = v71;
            }
            if ( (*(_DWORD *)(v35 + 180) & 0x40000) != 0 )
            {
              v62 = v43;
              v46 = v63;
              CTouchProcessor::ProcessRoutedAwayList(this, v42, 1LL, v15, v63, v62);
            }
            else
            {
              v46 = v63;
            }
            CTouchProcessor::FreePointerInfoNodeInt(this, v15, v46, v41);
            NodeById = CTouchProcessor::FindNodeById(this, v42, 0, 0);
            v28 = NodeById;
            if ( NodeById
              && *((_DWORD *)NodeById + 13) == 3
              && *((struct CInputPointerNode **)NodeById + 30) == (struct CInputPointerNode *)((char *)NodeById + 240) )
            {
              CTouchProcessor::FreeNode(this, NodeById, v30, v31);
            }
            v32 = v69;
            v25 = v70;
          }
        }
      }
    }
LABEL_71:
    v34 = v63 + 1;
    v63 = v34;
  }
  while ( (unsigned int)v34 < *((_DWORD *)v15 + 12) );
  v53 = v64;
  if ( !v64 )
    goto LABEL_75;
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, v15, v25, (const struct CPointerQFrame *)v33);
LABEL_77:
  if ( v25 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v25);
  if ( v53 )
  {
    MessagesCore = CTouchProcessor::GenerateMessagesCore(this, v68, v67, 1LL, v15);
    for ( i = 0; i < *((_DWORD *)v15 + 12); ++i )
    {
      v56 = *((_QWORD *)v15 + 17) + 480LL * i;
      v57 = *(_DWORD *)(v56 + 4);
      if ( (v57 & 0x200) != 0 && (v57 & 0x400) == 0 )
      {
        v58 = *(_QWORD *)(v56 + 16);
        *(_DWORD *)(v56 + 4) = v57 | 0x400;
        if ( v58 )
        {
          v59 = *(_DWORD *)(v56 + 180);
          if ( (v59 & 4) != 0 )
            CTouchProcessor::SetPointerCapture(
              this,
              v58,
              v75,
              2 - (unsigned int)((v59 & 0x10000) != 0),
              1,
              -__CFSHR__(*(_DWORD *)v56, 21));
        }
      }
    }
  }
  else
  {
    MessagesCore = 0;
  }
  CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, v15);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v60) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v60,
      7,
      87,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  v7 = MessagesCore;
  CInputDest::SetEmpty((CInputDest *)v75);
LABEL_93:
  CInpLockGuard::UnLock((PERESOURCE *)v80, (struct CRefUnRefPointerMsgId *)v79);
  return v7;
}
