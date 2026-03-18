/*
 * XREFs of ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C01987AC
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A33A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0070E3C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0070F68 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12F4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C018AFC4 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018F2D8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C0197F84 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C0198CDC (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019CC50 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessTouchpadInput(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        int a3,
        unsigned int a4)
{
  struct _KTHREAD **v4; // rdi
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // r9
  struct RIMCOMPLETEFRAME *v11; // r8
  const struct CPointerInputFrame *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  const struct CPointerInputFrame *v17; // rbx
  int v18; // edx
  PDEVICE_OBJECT v19; // rcx
  int v20; // r9d
  _DWORD *v21; // rcx
  _BYTE v22[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v23; // [rsp+58h] [rbp-30h]
  __int64 *v24; // [rsp+90h] [rbp+8h] BYREF

  v24 = (__int64 *)this;
  v4 = (struct _KTHREAD **)gpTouchProcessor;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v22,
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
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v24, "ProcessTouchpadGesture", 0LL);
  CTouchProcessor::CommitInputFrame(v4, a2, v9, v10);
  v12 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)v4, a2, v11, 0);
  v17 = v12;
  if ( v12 )
  {
    if ( *((_DWORD *)v12 + 12) <= *((_DWORD *)v12 + 13) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
    if ( !*((_QWORD *)v17 + 17) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
    if ( *((_DWORD *)v17 + 12) == 1 && (*((_DWORD *)v17 + 30) & 0x10) != 0 )
    {
      v21 = (_DWORD *)*((_QWORD *)v17 + 17);
      if ( (*v21 & 0x400) != 0 && (v21[45] & 1) == 0 )
        CTouchProcessor::ProcessPointerInfoNodeEnterLeave(v4, v17, v15, v16);
    }
    CTouchProcessor::GenerateMessagesCore(v4, a3, a4, 0LL, v17);
    CTouchProcessor::UnreferenceFrame((CTouchProcessor *)v4, v17);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v20 = 21;
        goto LABEL_21;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v13,
      7,
      19,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v20 = 20;
LABEL_21:
        LOBYTE(v18) = 5;
        WPP_RECORDER_SF_(v19->DeviceExtension, v18, 7, v20, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      }
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v24);
  CInpLockGuard::UnLock((PERESOURCE *)v23, (struct CRefUnRefPointerMsgId *)v22);
}
