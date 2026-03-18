/*
 * XREFs of ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C018D488
 * Callers:
 *     ?DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C018D270 (-DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0197988 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C0197E2C (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D13EC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1F20 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C018D41C (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018F2D8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0190B14 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z @ 0x1C0194620 (-HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C0197F84 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019CC50 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     IsTouchpadDevice @ 0x1C01ABA40 (IsTouchpadDevice.c)
 *     ApiSetEditionEdgyEnabled @ 0x1C01C76AC (ApiSetEditionEdgyEnabled.c)
 *     ApiSetEditionEdgyProcessInput @ 0x1C01C785C (ApiSetEditionEdgyProcessInput.c)
 *     ApiSetEditionEdgyResetCurrentFrame @ 0x1C01C7960 (ApiSetEditionEdgyResetCurrentFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DoContactVisualizationAndGenerateMessages(
        CTouchProcessor *this,
        const struct RIMCOMPLETEFRAME *a2,
        const struct CPointerInputFrame *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  CTouchProcessor *v9; // rbp
  CTouchProcessor *v10; // rcx
  __int64 v11; // rdx
  int v12; // ebx
  unsigned int v13; // r8d
  struct CPointerInputFrame *v15; // rsi
  _DWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  const struct CPointerInputFrame *NextFrame; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  int v24; // r8d
  int v25; // edx
  unsigned int MessagesCore; // ebx
  int v27; // edx
  _BYTE v28[40]; // [rsp+30h] [rbp-88h] BYREF
  CInpLockGuard *v29; // [rsp+58h] [rbp-60h]
  _BYTE v30[40]; // [rsp+60h] [rbp-58h] BYREF
  CInpLockGuard *v31; // [rsp+88h] [rbp-30h]
  struct CPointerInputFrame *v32; // [rsp+C8h] [rbp+10h] BYREF

  v32 = a2;
  v9 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (CTouchProcessor *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        7,
        334,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
  }
  if ( *((struct _KTHREAD **)v9 + 9) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( !a7 )
  {
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v28,
      (CTouchProcessor *)((char *)v9 + 40),
      0LL);
    CTouchProcessor::DoContactVisualization(v10, a3, a4, a5);
    CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v29, (struct CRefUnRefPointerMsgId *)v28);
  }
  if ( (unsigned int)ApiSetEditionEdgyEnabled() && !(unsigned __int8)IsTouchpadDevice(a4) )
  {
    v32 = 0LL;
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v30,
      (CTouchProcessor *)((char *)v9 + 40),
      0LL);
    v12 = ApiSetEditionEdgyProcessInput(v9, v11, a3, &v32);
    InputTraceLogging::Pointer::HandleDesktopEdgy(a3, v12);
    CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v31, (struct CRefUnRefPointerMsgId *)v30);
    if ( !v12 )
    {
      *((_DWORD *)a3 + 30) |= 0x40u;
      return 1LL;
    }
    v15 = v32;
    if ( v32 )
    {
      *((_DWORD *)v32 + 30) &= ~0x40u;
      if ( v32 )
      {
        if ( *((_DWORD *)v32 + 12) == 1 && (*((_DWORD *)v32 + 30) & 0x10) != 0 )
        {
          v16 = (_DWORD *)*((_QWORD *)v32 + 17);
          if ( (*v16 & 0x400) != 0 && (v16[45] & 1) == 0 )
            CTouchProcessor::ProcessPointerInfoNodeEnterLeave(v9, v32, v13);
        }
      }
      while ( v15 != a3 )
      {
        v17 = (_QWORD *)((char *)v15 + 24);
        v18 = *((_QWORD *)v15 + 3);
        if ( *(struct CPointerInputFrame **)(v18 + 8) != (struct CPointerInputFrame *)((char *)v15 + 24) )
          goto LABEL_30;
        v19 = (_QWORD *)*((_QWORD *)v15 + 4);
        if ( (_QWORD *)*v19 != v17 )
          goto LABEL_30;
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *((_QWORD *)v15 + 4) = (char *)v15 + 24;
        *v17 = v17;
        CTouchProcessor::GenerateMessagesCore(
          v9,
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)v15 + 19) + 312LL), 4),
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)v15 + 19) + 312LL), 5),
          0,
          v15);
        NextFrame = CTouchProcessor::GetNextFrame(v9, v15, (struct _LIST_ENTRY *)v9 + 8);
        CTouchProcessor::UnreferenceFrame(v9, v15);
        v15 = NextFrame;
        if ( !NextFrame )
          break;
      }
    }
    ApiSetEditionEdgyResetCurrentFrame();
  }
  v21 = (_QWORD *)((char *)a3 + 24);
  v22 = *((_QWORD *)a3 + 3);
  if ( *(const struct CPointerInputFrame **)(v22 + 8) != (const struct CPointerInputFrame *)((char *)a3 + 24)
    || (v23 = (_QWORD *)*((_QWORD *)a3 + 4), (_QWORD *)*v23 != v21) )
  {
LABEL_30:
    __fastfail(3u);
  }
  v24 = a6;
  *v23 = v22;
  *(_QWORD *)(v22 + 8) = v23;
  v25 = a5;
  *((_QWORD *)a3 + 4) = (char *)a3 + 24;
  *v21 = v21;
  MessagesCore = CTouchProcessor::GenerateMessagesCore(v9, v25, v24, 0, a3);
  CTouchProcessor::UnreferenceFrame(v9, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v27) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v27,
        7,
        335,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
  }
  return MessagesCore;
}
