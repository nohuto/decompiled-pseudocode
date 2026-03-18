/*
 * XREFs of ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0197988
 * Callers:
 *     SynthesizeMitTouchInput @ 0x1C01B05AC (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1C01B0880 (SynthesizeTouchInputContainer.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12F4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C018B058 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C018D488 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C0198CDC (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessInjectedInput(
        CTouchProcessor *this,
        void *a2,
        struct RIMCOMPLETEFRAME *a3,
        char a4,
        unsigned int a5,
        bool a6)
{
  CTouchProcessor *v6; // rdi
  CTouchProcessor *v7; // rbp
  int v10; // edx
  struct CPointerInputFrame *v11; // rax
  int v12; // edx
  struct RIMCOMPLETEFRAME *v13; // r8
  int v14; // edx
  PDEVICE_OBJECT v15; // rcx
  int v16; // r9d
  const struct CPointerInputFrame *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  const struct CPointerInputFrame *v22; // rbx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _BYTE v26[40]; // [rsp+40h] [rbp-58h] BYREF
  CInpLockGuard *v27; // [rsp+68h] [rbp-30h]

  v6 = gpTouchProcessor;
  v7 = TouchExtensibility::ghInjectionDevice;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v26,
    (CTouchProcessor *)((char *)gpTouchProcessor + 40),
    0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      7,
      28,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  v11 = CTouchProcessor::CommitRimCompleteFrame(v6, a3, 0, a4);
  if ( v11 )
  {
    v17 = CTouchProcessor::ReferenceInputFrame(v6, v11, v13, a5);
    v22 = v17;
    if ( v17 )
    {
      if ( *((_DWORD *)v17 + 12) <= *((_DWORD *)v17 + 13) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20, v21);
      if ( !*((_QWORD *)v22 + 17) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20, v21);
      v23 = (_QWORD *)((char *)v22 + 24);
      v24 = (_QWORD *)((char *)gptiCurrent + 1136);
      v25 = *((_QWORD *)gptiCurrent + 142);
      if ( *(struct tagTHREADINFO **)(v25 + 8) != (struct tagTHREADINFO *)((char *)gptiCurrent + 1136) )
        __fastfail(3u);
      *((_QWORD *)v22 + 4) = v24;
      *v23 = v25;
      *(_QWORD *)(v25 + 8) = v23;
      *v24 = v23;
      CTouchProcessor::DoContactVisualizationAndGenerateMessages(
        v6,
        (const struct RIMCOMPLETEFRAME *)v25,
        v22,
        (__int64)v7,
        1,
        0,
        a6);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v16 = 33;
          goto LABEL_23;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v18,
        7,
        31,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v16 = 32;
          goto LABEL_23;
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v12,
      7,
      29,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v16 = 30;
LABEL_23:
        LOBYTE(v14) = 5;
        WPP_RECORDER_SF_(v15->DeviceExtension, v14, 7, v16, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      }
    }
  }
  CInpLockGuard::UnLock((PERESOURCE *)v27, (struct CRefUnRefPointerMsgId *)v26);
}
