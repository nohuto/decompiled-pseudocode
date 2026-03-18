/*
 * XREFs of ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C019E49C
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A9100 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C006546C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0065598 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A44 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C0190CC4 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0194FD8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C019DC74 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C019E9CC (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A29B0 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessTouchpadInput(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        int a3,
        int a4)
{
  struct _KTHREAD **v4; // rdi
  int v8; // edx
  __int64 v9; // r9
  struct RIMCOMPLETEFRAME *v10; // r8
  const struct CPointerInputFrame *v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  const struct CPointerInputFrame *v14; // rbx
  int v15; // edx
  PDEVICE_OBJECT v16; // rcx
  int v17; // r9d
  _DWORD *v18; // rcx
  _BYTE v19[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v20; // [rsp+58h] [rbp-30h]
  __int64 *v21; // [rsp+90h] [rbp+8h] BYREF

  v21 = (__int64 *)this;
  v4 = (struct _KTHREAD **)gpTouchProcessor;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v19,
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
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v21, "ProcessTouchpadGesture", 0LL, v9);
  CTouchProcessor::CommitInputFrame(v4, a2);
  v11 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)v4, a2, v10, 0);
  v14 = v11;
  if ( v11 )
  {
    if ( *((_DWORD *)v11 + 12) <= *((_DWORD *)v11 + 13) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
    if ( !*((_QWORD *)v14 + 17) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
    if ( *((_DWORD *)v14 + 12) == 1 && (*((_DWORD *)v14 + 30) & 0x10) != 0 )
    {
      v18 = (_DWORD *)*((_QWORD *)v14 + 17);
      if ( (*v18 & 0x400) != 0 && (v18[45] & 1) == 0 )
        CTouchProcessor::ProcessPointerInfoNodeEnterLeave(v4, v14);
    }
    CTouchProcessor::GenerateMessagesCore(v4, a3, a4, 0, v14);
    CTouchProcessor::UnreferenceFrame((CTouchProcessor *)v4, v14);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v17 = 21;
        goto LABEL_21;
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
      19,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v17 = 20;
LABEL_21:
        LOBYTE(v15) = 5;
        WPP_RECORDER_SF_(v16->DeviceExtension, v15, 7, v17, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      }
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v21);
  CInpLockGuard::UnLock((PERESOURCE *)v20, (struct CRefUnRefPointerMsgId *)v19);
}
