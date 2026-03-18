/*
 * XREFs of ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019F5D4
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C0051490 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     NtUserSetManipulationInputTarget @ 0x1C013E530 (NtUserSetManipulationInputTarget.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001C48 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C005D1E8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C005D3F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006E1C0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A44 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0188DB0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0193880 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0193938 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0193D54 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C019434C (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C01945E8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0194FD8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAXAEBVCInputDest@@@Z @ 0x1C019A7C8 (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C019ABC0 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019AC44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C019CCB8 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C019D1D4 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C019E170 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C019E388 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C019EC74 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C01A0048 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C01A1B80 (-SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCIn.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C01A1D28 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01A2630 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A29B0 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01A2C64 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C01CDF5C (ApiSetEditionGetInputDelegate.c)
 *     ApiSetSetManipulationInputTargetTransform @ 0x1C01D3310 (ApiSetSetManipulationInputTargetTransform.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  struct CPointerInputFrame *v8; // rax
  __int64 v9; // rdx
  CTouchProcessor *v10; // rcx
  struct CPointerInputFrame *v11; // r14
  int v12; // edx
  __int64 v13; // rcx
  int v14; // ebx
  CSpatialProcessor *v15; // rcx
  struct CPointerInputFrame *v16; // r13
  CTouchProcessor *v17; // rcx
  struct CPointerQFrame *v18; // rax
  CPointerInfoNode *v19; // rcx
  struct CPointerQFrame *v20; // rbx
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r8
  __m128i *v25; // rax
  __int64 v26; // rcx
  __int16 v27; // r13
  unsigned __int64 v28; // rbx
  struct CPointerInfoNode *ValidNodeInFrame; // r12
  struct CPointerInputFrame *v30; // rdx
  unsigned int v31; // ebx
  struct CInputPointerNode *NodeById; // rax
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // ebx
  unsigned int MessagesCore; // esi
  unsigned int i; // ebx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rdx
  int v42; // r8d
  int v43; // edx
  unsigned int v45; // [rsp+28h] [rbp-D8h]
  unsigned int v46; // [rsp+30h] [rbp-D0h]
  int v47; // [rsp+34h] [rbp-CCh]
  int v48; // [rsp+38h] [rbp-C8h]
  int v49; // [rsp+3Ch] [rbp-C4h]
  int v50; // [rsp+40h] [rbp-C0h]
  int v51; // [rsp+44h] [rbp-BCh]
  struct CPointerQFrame *v52; // [rsp+48h] [rbp-B8h] BYREF
  struct CPointerInputFrame *v53; // [rsp+50h] [rbp-B0h]
  __int64 v54; // [rsp+58h] [rbp-A8h]
  unsigned int v55; // [rsp+60h] [rbp-A0h]
  void *v56; // [rsp+68h] [rbp-98h]
  unsigned int *v57; // [rsp+70h] [rbp-90h]
  _OWORD v58[7]; // [rsp+80h] [rbp-80h] BYREF
  char v59; // [rsp+F0h] [rbp-10h]
  _OWORD v60[7]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v61[7]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v62[40]; // [rsp+1E0h] [rbp+E0h] BYREF
  CInpLockGuard *v63; // [rsp+208h] [rbp+108h]
  _DWORD v64[28]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v65[128]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v66[16]; // [rsp+300h] [rbp+200h] BYREF
  __m128i v67[8]; // [rsp+380h] [rbp+280h] BYREF

  v5 = a2;
  v56 = a5;
  v57 = a4;
  v55 = a3;
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      84,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v62, (struct CInpLockGuard *)(this + 5), 0LL);
  v8 = CTouchProcessor::FindAndReferenceFrameById(this, v5);
  v11 = v8;
  if ( !v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        7,
        85,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
    UserSetLastError(87LL, v9);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v12) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        7,
        86,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
    goto LABEL_92;
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v10, v8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
  if ( !*((_QWORD *)v11 + 19) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
  v14 = *(_DWORD *)(*((_QWORD *)v11 + 17) + 168LL);
  if ( v14 == 6 || !v14 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
  v51 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)v11 + 19) + 312LL), 4);
  v50 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)v11 + 19) + 312LL), 5);
  memset(v58, 0, sizeof(v58));
  v59 = 0;
  memset(v64, 0, sizeof(v64));
  v48 = 0;
  if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(v15, a5, v14, 0LL, (struct tagINPUTDEST *)v64) )
  {
    v48 = -(v64[4] & 1);
    CInputDest::CInputDest((CInputDest *)v66, (const struct tagINPUTDEST *)v64);
    CInputDest::operator=((__int64)v58, v66);
    CInputDest::SetEmpty((CInputDest *)v66);
  }
  v53 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(this, v11);
  v16 = v53;
  v18 = CTouchProcessor::SetupQFrame(v17, v11, 0xFFFFFFFFFFFFFFFFuLL, (const struct CInputDest *)v58, 0);
  v52 = v18;
  v20 = v18;
  if ( !v18 || *(_DWORD *)v18 == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
  v21 = 0LL;
  v22 = 0LL;
  v46 = 0;
  v47 = 0;
  v54 = 0LL;
  if ( !*((_DWORD *)v11 + 12) )
  {
    v36 = 0;
LABEL_74:
    if ( LODWORD(v58[0]) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
    goto LABEL_76;
  }
  do
  {
    v23 = *((_QWORD *)v11 + 17) + 480 * v22;
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v23) )
    {
      if ( CPointerInfoNode::IsForManipulationThread(v19) && (*(_DWORD *)(v23 + 4) & 0x200) == 0 )
      {
        v19 = 0LL;
        if ( v55 )
        {
          while ( v57[(unsigned int)v19] != *(unsigned __int16 *)(v23 + 172) )
          {
            v19 = (CPointerInfoNode *)(unsigned int)((_DWORD)v19 + 1);
            if ( (unsigned int)v19 >= v55 )
              goto LABEL_70;
          }
          v49 = 0;
          if ( HIDWORD(v58[5]) )
          {
            v24 = *(_QWORD *)(v23 + 248);
            v60[0] = v58[0];
            v60[2] = v58[2];
            v60[1] = v58[1];
            v60[4] = v58[4];
            v60[3] = v58[3];
            v60[6] = v58[6];
            v60[5] = v58[5];
            v49 = ApiSetSetManipulationInputTargetTransform((unsigned int)v60, (_DWORD)v56, v24, (int)v23 + 160, v48);
          }
          if ( (*(_DWORD *)(v23 + 4) & 0x80u) == 0 )
          {
            v25 = CInputDest::CInputDest(v67, *(_QWORD *)(v23 + 192), *(_DWORD *)(v23 + 444), 1);
            CInputDest::operator=((__int64)v58, v25);
            CInputDest::SetEmpty((CInputDest *)v67);
          }
          InputTraceLogging::Pointer::HandleResultFromUserMode(
            v11,
            (const struct tagPOINTEREVENTINT *)(v23 + 160),
            (__int64)v56,
            (const struct CInputDest *)v58);
          if ( LODWORD(v58[0]) )
          {
            if ( !v21 )
            {
              CInputDest::CInputDest((CInputDest *)v65, (const struct CInputDest *)v58);
              v54 = CTouchProcessor::SetupNewQFrame(v34, v11, &v52);
              v21 = v54;
              if ( !v54 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
              v20 = v52;
            }
            *(_DWORD *)(v23 + 4) |= 0x200u;
            v47 = 1;
            if ( v20 )
            {
              if ( *(_DWORD *)(v23 + 8) != *(_DWORD *)v20 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
              if ( !*((_DWORD *)v20 + 34) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
              *(_DWORD *)(v23 + 8) = *(_DWORD *)v21;
              ++*(_DWORD *)(v21 + 136);
              --*((_DWORD *)v20 + 34);
            }
            *(_QWORD *)(v23 + 192) = CInputDest::GetWindowHandle((CInputDest *)v58);
            if ( HIDWORD(v58[5]) )
              CInputDest::operator=(v23 + 352, (__int64)v58);
            if ( (*(_DWORD *)v23 & 0x100) == 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v35);
            if ( v49 )
              *(_DWORD *)(v23 + 180) |= 0x400000u;
            if ( HIDWORD(v58[5]) )
            {
              v61[0] = v58[0];
              v61[2] = v58[2];
              v61[1] = v58[1];
              v61[4] = v58[4];
              v61[3] = v58[3];
              v61[6] = v58[6];
              v61[5] = v58[5];
              if ( ApiSetEditionGetInputDelegate(v61) )
                *(_DWORD *)v23 |= 0x100000u;
            }
            CTouchProcessor::ProcessQFrameNode(this, (struct CPointerQFrame *)v21, v16, (struct CPointerInfoNode *)v23);
            if ( *(_DWORD *)v21 == -1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
            *(_DWORD *)(v21 + 140) |= 0x10u;
          }
          else
          {
            v27 = *(_WORD *)(v23 + 172);
            v28 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            if ( v53 )
            {
              ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, v53, v27, 0LL);
              if ( ValidNodeInFrame )
              {
                *(_QWORD *)(v23 + 192) = 0LL;
                CInputDest::SetEmpty((CInputDest *)(v23 + 352));
                v30 = v53;
                *(_DWORD *)(v23 + 4) |= 0x200u;
                CTouchProcessor::ProcessEnterLeave(this, v30, (struct CPointerInfoNode *)v23);
                if ( (*(_DWORD *)ValidNodeInFrame & 0x80u) == 0 )
                  CTouchProcessor::ProcessAndUnreferencePreviousInput(
                    (CTouchProcessor *)this,
                    (const struct CPointerInfoNode *)v23,
                    *((unsigned int **)ValidNodeInFrame + 2),
                    v28,
                    v51,
                    v50);
              }
              v21 = v54;
            }
            if ( (*(_DWORD *)(v23 + 180) & 0x40000) != 0 )
            {
              v45 = v28;
              v31 = v46;
              CTouchProcessor::ProcessRoutedAwayList(this, v27, 1, v11, v46, v45);
            }
            else
            {
              v31 = v46;
            }
            CTouchProcessor::FreePointerInfoNodeInt(this, v11, v31);
            NodeById = CTouchProcessor::FindNodeById(this, v27, 0, 0);
            if ( NodeById
              && *((_DWORD *)NodeById + 13) == 3
              && *((struct CInputPointerNode **)NodeById + 30) == (struct CInputPointerNode *)((char *)NodeById + 240) )
            {
              CTouchProcessor::FreeNode(this, NodeById, v33);
            }
            v20 = v52;
            v16 = v53;
          }
        }
      }
    }
LABEL_70:
    v22 = v46 + 1;
    v46 = v22;
  }
  while ( (unsigned int)v22 < *((_DWORD *)v11 + 12) );
  v36 = v47;
  if ( !v47 )
    goto LABEL_74;
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, v11, v16, (const struct CPointerQFrame *)v21);
LABEL_76:
  if ( v16 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v16);
  if ( v36 )
  {
    MessagesCore = CTouchProcessor::GenerateMessagesCore(this, v51, v50, 1, v11);
    for ( i = 0; i < *((_DWORD *)v11 + 12); ++i )
    {
      v39 = *((_QWORD *)v11 + 17) + 480LL * i;
      v40 = *(_DWORD *)(v39 + 4);
      if ( (v40 & 0x200) != 0 && (v40 & 0x400) == 0 )
      {
        v41 = *(_QWORD *)(v39 + 16);
        *(_DWORD *)(v39 + 4) = v40 | 0x400;
        if ( v41 )
        {
          v42 = *(_DWORD *)(v39 + 180);
          if ( (v42 & 4) != 0 )
            CTouchProcessor::SetPointerCapture(
              this,
              v41,
              v58,
              2 - (unsigned int)((v42 & 0x10000) != 0),
              1,
              -__CFSHR__(*(_DWORD *)v39, 21));
        }
      }
    }
  }
  else
  {
    MessagesCore = 0;
  }
  CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, v11);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v43) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v43,
      7,
      87,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  v7 = MessagesCore;
  CInputDest::SetEmpty((CInputDest *)v58);
LABEL_92:
  CInpLockGuard::UnLock((PERESOURCE *)v63, (struct CRefUnRefPointerMsgId *)v62);
  return v7;
}
