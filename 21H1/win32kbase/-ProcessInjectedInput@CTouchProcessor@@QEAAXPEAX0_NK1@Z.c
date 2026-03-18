/*
 * XREFs of ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C019D678
 * Callers:
 *     SynthesizeMitTouchInput @ 0x1C01B630C (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1C01B65E0 (SynthesizeTouchInputContainer.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A44 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0190D58 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0193188 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C019E9CC (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v18; // edx
  __int64 v19; // rcx
  const struct CPointerInputFrame *v20; // rbx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _BYTE v24[40]; // [rsp+40h] [rbp-58h] BYREF
  CInpLockGuard *v25; // [rsp+68h] [rbp-30h]

  v6 = gpTouchProcessor;
  v7 = TouchExtensibility::ghInjectionDevice;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v24,
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
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  v11 = CTouchProcessor::CommitRimCompleteFrame(v6, a3, 0, a4);
  if ( v11 )
  {
    v17 = CTouchProcessor::ReferenceInputFrame(v6, v11, v13, a5);
    v20 = v17;
    if ( v17 )
    {
      if ( *((_DWORD *)v17 + 12) <= *((_DWORD *)v17 + 13) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
      if ( !*((_QWORD *)v20 + 17) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
      v21 = (_QWORD *)((char *)v20 + 24);
      v22 = (_QWORD *)((char *)gptiCurrent + 1128);
      v23 = *((_QWORD *)gptiCurrent + 141);
      if ( *(struct tagTHREADINFO **)(v23 + 8) != (struct tagTHREADINFO *)((char *)gptiCurrent + 1128) )
        __fastfail(3u);
      *((_QWORD *)v20 + 4) = v22;
      *v21 = v23;
      *(_QWORD *)(v23 + 8) = v21;
      *v22 = v21;
      CTouchProcessor::DoContactVisualizationAndGenerateMessages(
        v6,
        (const struct RIMCOMPLETEFRAME *)v23,
        v20,
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
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
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
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v16 = 30;
LABEL_23:
        LOBYTE(v14) = 5;
        WPP_RECORDER_SF_(v15->DeviceExtension, v14, 7, v16, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      }
    }
  }
  CInpLockGuard::UnLock((PERESOURCE *)v25, (struct CRefUnRefPointerMsgId *)v24);
}
