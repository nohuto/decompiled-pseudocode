/*
 * XREFs of ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C019627C
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A1020 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0036928 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D11E4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C0188A9C (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018CDB8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C0195A54 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C01967AC (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019A750 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessTouchpadInput(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        int a3,
        unsigned int a4)
{
  struct _KTHREAD **v4; // rdi
  int v8; // edx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  struct RIMCOMPLETEFRAME *v12; // r8
  const struct CPointerInputFrame *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  const struct CPointerInputFrame *v18; // rbx
  int v19; // edx
  PDEVICE_OBJECT v20; // rcx
  int v21; // r9d
  _DWORD *v22; // rcx
  _BYTE v23[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v24; // [rsp+58h] [rbp-30h]
  __int64 *v25; // [rsp+90h] [rbp+8h] BYREF

  v25 = (__int64 *)this;
  v4 = (struct _KTHREAD **)gpTouchProcessor;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v23,
    (CTouchProcessor *)((char *)gpTouchProcessor + 40),
    0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      7,
      18,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v25, "ProcessTouchpadGesture", 0LL, v9);
  CTouchProcessor::CommitInputFrame(v4, a2, v10, v11);
  v13 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)v4, a2, v12, 0);
  v18 = v13;
  if ( v13 )
  {
    if ( *((_DWORD *)v13 + 12) <= *((_DWORD *)v13 + 13) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16, v17);
    if ( !*((_QWORD *)v18 + 17) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16, v17);
    if ( *((_DWORD *)v18 + 12) == 1 && (*((_DWORD *)v18 + 30) & 0x10) != 0 )
    {
      v22 = (_DWORD *)*((_QWORD *)v18 + 17);
      if ( (*v22 & 0x400) != 0 && (v22[45] & 1) == 0 )
        CTouchProcessor::ProcessPointerInfoNodeEnterLeave(v4, v18, v16, v17);
    }
    CTouchProcessor::GenerateMessagesCore(v4, a3, a4, 0LL, v18);
    CTouchProcessor::UnreferenceFrame((CTouchProcessor *)v4, v18);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v21 = 21;
        goto LABEL_21;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v14,
      7,
      19,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v21 = 20;
LABEL_21:
        LOBYTE(v19) = 5;
        WPP_RECORDER_SF_(v20->DeviceExtension, v19, 7, v21, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      }
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v25);
  CInpLockGuard::UnLock((PERESOURCE *)v24, (struct CRefUnRefPointerMsgId *)v23);
}
