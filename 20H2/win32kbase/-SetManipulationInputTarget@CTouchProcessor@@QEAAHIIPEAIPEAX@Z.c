/*
 * XREFs of ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01973B4
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C00BF4B0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0136540 (NtUserSetManipulationInputTarget.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001D98 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00294B0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0033F64 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D11E4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0180B70 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018B660 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018B718 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018BB34 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C018C12C (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C018C3C8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018CDB8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAXAEBVCInputDest@@@Z @ 0x1C0192598 (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0192990 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0192A14 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0194A98 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0194FB4 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0195F50 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0196168 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0196A54 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C0197E28 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C0199920 (-SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCIn.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C0199AC8 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C019A3D0 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019A750 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C019AA04 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C01C5C5C (ApiSetEditionGetInputDelegate.c)
 *     ApiSetSetManipulationInputTargetTransform @ 0x1C01CB010 (ApiSetSetManipulationInputTargetTransform.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct CPointerInputFrame *v28; // r13
  CTouchProcessor *v29; // rcx
  struct CPointerQFrame *v30; // rax
  struct CInputPointerNode *v31; // rdx
  CPointerInfoNode *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct CPointerQFrame *v35; // rbx
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // r8
  __m128i *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int16 v48; // r13
  unsigned __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // r8
  struct CPointerInfoNode *ValidNodeInFrame; // r12
  struct CPointerInputFrame *v53; // rdx
  unsigned int v54; // ebx
  struct CInputPointerNode *NodeById; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // ebx
  unsigned int MessagesCore; // esi
  unsigned int i; // ebx
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rdx
  int v67; // r8d
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  unsigned int v72; // [rsp+28h] [rbp-D8h]
  unsigned int v73; // [rsp+30h] [rbp-D0h]
  int v74; // [rsp+34h] [rbp-CCh]
  int v75; // [rsp+38h] [rbp-C8h]
  int v76; // [rsp+3Ch] [rbp-C4h]
  unsigned int v77; // [rsp+40h] [rbp-C0h]
  int v78; // [rsp+44h] [rbp-BCh]
  struct CPointerQFrame *v79; // [rsp+48h] [rbp-B8h] BYREF
  struct CPointerInputFrame *v80; // [rsp+50h] [rbp-B0h]
  __int64 v81; // [rsp+58h] [rbp-A8h]
  unsigned int v82; // [rsp+60h] [rbp-A0h]
  void *v83; // [rsp+68h] [rbp-98h]
  unsigned int *v84; // [rsp+70h] [rbp-90h]
  _OWORD v85[7]; // [rsp+80h] [rbp-80h] BYREF
  char v86; // [rsp+F0h] [rbp-10h]
  _OWORD v87[7]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v88[7]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v89[40]; // [rsp+1E0h] [rbp+E0h] BYREF
  CInpLockGuard *v90; // [rsp+208h] [rbp+108h]
  _DWORD v91[28]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v92[128]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v93[16]; // [rsp+300h] [rbp+200h] BYREF
  __m128i v94[8]; // [rsp+380h] [rbp+280h] BYREF

  v5 = a2;
  v83 = a5;
  v84 = a4;
  v82 = a3;
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      84,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v89, (struct CInpLockGuard *)(this + 5), 0LL);
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
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
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
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
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
  v78 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)v15 + 19) + 312LL), 4);
  v77 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)v15 + 19) + 312LL), 5);
  memset(v85, 0, sizeof(v85));
  v86 = 0;
  memset(v91, 0, sizeof(v91));
  v75 = 0;
  if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(v22, a5, v21, 0LL, (struct tagINPUTDEST *)v91) )
  {
    v75 = -(v91[4] & 1);
    CInputDest::CInputDest((CInputDest *)v93, (const struct tagINPUTDEST *)v91);
    CInputDest::operator=((__int64)v85, v93);
    CInputDest::SetEmpty((CInputDest *)v93, v25, v26, v27);
  }
  v80 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(this, v15, v23, v24);
  v28 = v80;
  v30 = CTouchProcessor::SetupQFrame(v29, v15, 0xFFFFFFFFFFFFFFFFuLL, (const struct CInputDest *)v85, 0);
  v79 = v30;
  v35 = v30;
  if ( !v30 || *(_DWORD *)v30 == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
  v36 = 0LL;
  v37 = 0LL;
  v73 = 0;
  v74 = 0;
  v81 = 0LL;
  if ( !*((_DWORD *)v15 + 12) )
  {
    v61 = 0;
LABEL_75:
    if ( LODWORD(v85[0]) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
    goto LABEL_77;
  }
  do
  {
    v38 = *((_QWORD *)v15 + 17) + 480 * v37;
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v38) )
    {
      if ( CPointerInfoNode::IsForManipulationThread(v32) && (*(_DWORD *)(v38 + 4) & 0x200) == 0 )
      {
        v33 = v82;
        v32 = 0LL;
        if ( v82 )
        {
          v31 = (struct CInputPointerNode *)*(unsigned __int16 *)(v38 + 172);
          v34 = (__int64)v84;
          while ( v84[(unsigned int)v32] != (_DWORD)v31 )
          {
            v32 = (CPointerInfoNode *)(unsigned int)((_DWORD)v32 + 1);
            if ( (unsigned int)v32 >= v82 )
              goto LABEL_71;
          }
          v76 = 0;
          if ( HIDWORD(v85[5]) )
          {
            v39 = *(_QWORD *)(v38 + 248);
            v87[0] = v85[0];
            v87[2] = v85[2];
            v87[1] = v85[1];
            v87[4] = v85[4];
            v87[3] = v85[3];
            v87[6] = v85[6];
            v87[5] = v85[5];
            v76 = ApiSetSetManipulationInputTargetTransform((unsigned int)v87, (_DWORD)v83, v39, (int)v38 + 160, v75);
          }
          if ( (*(_DWORD *)(v38 + 4) & 0x80u) == 0 )
          {
            v40 = CInputDest::CInputDest(v94, *(_QWORD *)(v38 + 192), *(_DWORD *)(v38 + 444), 1);
            CInputDest::operator=((__int64)v85, v40);
            CInputDest::SetEmpty((CInputDest *)v94, v41, v42, v43);
          }
          InputTraceLogging::Pointer::HandleResultFromUserMode(
            v15,
            (const struct tagPOINTEREVENTINT *)(v38 + 160),
            (__int64)v83,
            (const struct CInputDest *)v85);
          if ( LODWORD(v85[0]) )
          {
            if ( !v36 )
            {
              CInputDest::CInputDest((CInputDest *)v92, (const struct CInputDest *)v85);
              v81 = CTouchProcessor::SetupNewQFrame(v56, v15, &v79);
              v36 = v81;
              if ( !v81 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v46, v47);
              v35 = v79;
            }
            *(_DWORD *)(v38 + 4) |= 0x200u;
            v74 = 1;
            if ( v35 )
            {
              if ( *(_DWORD *)(v38 + 8) != *(_DWORD *)v35 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v46, v47);
              if ( !*((_DWORD *)v35 + 34) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v46, v47);
              *(_DWORD *)(v38 + 8) = *(_DWORD *)v36;
              ++*(_DWORD *)(v36 + 136);
              --*((_DWORD *)v35 + 34);
            }
            *(_QWORD *)(v38 + 192) = CInputDest::GetWindowHandle((CInputDest *)v85);
            if ( HIDWORD(v85[5]) )
              CInputDest::operator=(v38 + 352, (__int64)v85, v59, v60);
            if ( (*(_DWORD *)v38 & 0x100) == 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v58, v57, v59, v60);
            if ( v76 )
              *(_DWORD *)(v38 + 180) |= 0x400000u;
            if ( HIDWORD(v85[5]) )
            {
              v88[0] = v85[0];
              v88[2] = v85[2];
              v88[1] = v85[1];
              v88[4] = v85[4];
              v88[3] = v85[3];
              v88[6] = v85[6];
              v88[5] = v85[5];
              if ( ApiSetEditionGetInputDelegate(v88) )
                *(_DWORD *)v38 |= 0x100000u;
            }
            CTouchProcessor::ProcessQFrameNode(this, (struct CPointerQFrame *)v36, v28, (struct CPointerInfoNode *)v38);
            if ( *(_DWORD *)v36 == -1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
            *(_DWORD *)(v36 + 140) |= 0x10u;
          }
          else
          {
            v48 = *(_WORD *)(v38 + 172);
            v49 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            if ( v80 )
            {
              ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, v80, v48, 0LL);
              if ( ValidNodeInFrame )
              {
                *(_QWORD *)(v38 + 192) = 0LL;
                CInputDest::SetEmpty((CInputDest *)(v38 + 352), v50, v51, v47);
                v53 = v80;
                *(_DWORD *)(v38 + 4) |= 0x200u;
                CTouchProcessor::ProcessEnterLeave(this, v53, (struct CPointerInfoNode *)v38);
                if ( (*(_DWORD *)ValidNodeInFrame & 0x80u) == 0 )
                  CTouchProcessor::ProcessAndUnreferencePreviousInput(
                    (CTouchProcessor *)this,
                    (const struct CPointerInfoNode *)v38,
                    *((unsigned int **)ValidNodeInFrame + 2),
                    (unsigned int)v49,
                    v78,
                    v77);
              }
              v36 = v81;
            }
            if ( (*(_DWORD *)(v38 + 180) & 0x40000) != 0 )
            {
              v72 = v49;
              v54 = v73;
              CTouchProcessor::ProcessRoutedAwayList(this, v48, 1LL, v15, v73, v72);
            }
            else
            {
              v54 = v73;
            }
            CTouchProcessor::FreePointerInfoNodeInt(this, v15, v54, v47);
            NodeById = CTouchProcessor::FindNodeById(this, v48, 0, 0);
            v31 = NodeById;
            if ( NodeById
              && *((_DWORD *)NodeById + 13) == 3
              && *((struct CInputPointerNode **)NodeById + 30) == (struct CInputPointerNode *)((char *)NodeById + 240) )
            {
              CTouchProcessor::FreeNode(this, NodeById, v33, v34);
            }
            v35 = v79;
            v28 = v80;
          }
        }
      }
    }
LABEL_71:
    v37 = v73 + 1;
    v73 = v37;
  }
  while ( (unsigned int)v37 < *((_DWORD *)v15 + 12) );
  v61 = v74;
  if ( !v74 )
    goto LABEL_75;
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, v15, v28, (const struct CPointerQFrame *)v36);
LABEL_77:
  if ( v28 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v28);
  if ( v61 )
  {
    MessagesCore = CTouchProcessor::GenerateMessagesCore(this, v78, v77, 1LL, v15);
    for ( i = 0; i < *((_DWORD *)v15 + 12); ++i )
    {
      v64 = *((_QWORD *)v15 + 17) + 480LL * i;
      v65 = *(_DWORD *)(v64 + 4);
      if ( (v65 & 0x200) != 0 && (v65 & 0x400) == 0 )
      {
        v66 = *(_QWORD *)(v64 + 16);
        *(_DWORD *)(v64 + 4) = v65 | 0x400;
        if ( v66 )
        {
          v67 = *(_DWORD *)(v64 + 180);
          if ( (v67 & 4) != 0 )
            CTouchProcessor::SetPointerCapture(
              this,
              v66,
              v85,
              2 - (unsigned int)((v67 & 0x10000) != 0),
              1,
              -__CFSHR__(*(_DWORD *)v64, 21));
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
    LOBYTE(v68) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v68,
      7,
      87,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  v7 = MessagesCore;
  CInputDest::SetEmpty((CInputDest *)v85, v68, v69, v70);
LABEL_93:
  CInpLockGuard::UnLock((PERESOURCE *)v90, (struct CRefUnRefPointerMsgId *)v89);
  return v7;
}
