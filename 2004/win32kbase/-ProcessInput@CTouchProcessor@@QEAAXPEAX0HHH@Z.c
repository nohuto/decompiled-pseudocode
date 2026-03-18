/*
 * XREFs of ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0197BB4
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01A7410 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0070E3C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0070F68 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12F4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?BufferInDelayZone@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C01887E4 (-BufferInDelayZone@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CheckAndSendFindMyPenWnf@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0189624 (-CheckAndSendFindMyPenWnf@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C018B058 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CreateInputPointerNodesForFrame@CTouchProcessor@@AEAA_NPEAX@Z @ 0x1C018BF34 (-CreateInputPointerNodesForFrame@CTouchProcessor@@AEAA_NPEAX@Z.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01973B0 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C0197E2C (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ApiSetSanitizeRIMCOMPLETEFRAME @ 0x1C01CCADC (ApiSetSanitizeRIMCOMPLETEFRAME.c)
 */

void __fastcall CTouchProcessor::ProcessInput(CTouchProcessor *this, __int64 *a2, struct RIMCOMPLETEFRAME *a3)
{
  CTouchProcessor *v3; // rdi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  PDEVICE_OBJECT v8; // rcx
  int v9; // r9d
  struct CPointerInputFrame *v10; // rax
  int v11; // edx
  const struct CPointerInputFrame *v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  int v16; // edx
  struct RIMCOMPLETEFRAME *v17; // r8
  _BYTE v18[40]; // [rsp+30h] [rbp-48h] BYREF
  CInpLockGuard *v19; // [rsp+58h] [rbp-20h]
  __int64 *v20; // [rsp+88h] [rbp+10h] BYREF

  v20 = a2;
  v3 = gpTouchProcessor;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v18,
    (CTouchProcessor *)((char *)gpTouchProcessor + 40),
    0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      7,
      10,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v20, "ProcessTouchOrPenInput", 0LL);
  if ( ApiSetSanitizeRIMCOMPLETEFRAME(a3) )
  {
    v10 = CTouchProcessor::CommitRimCompleteFrame(v3, a3, 0, 0);
    v12 = v10;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v10 + 11);
      v13 = (_QWORD *)((char *)v10 + 24);
      v14 = (_QWORD *)((char *)gptiCurrent + 1136);
      v15 = *((_QWORD *)gptiCurrent + 142);
      if ( *(struct tagTHREADINFO **)(v15 + 8) != (struct tagTHREADINFO *)((char *)gptiCurrent + 1136) )
        __fastfail(3u);
      *v13 = v15;
      v13[1] = v14;
      *(_QWORD *)(v15 + 8) = v13;
      *v14 = v13;
      if ( CTouchProcessor::CreateInputPointerNodesForFrame(v3, v12) )
      {
        CTouchProcessor::CheckAndSendFindMyPenWnf((LARGE_INTEGER *)v3, v12);
        if ( CTouchProcessor::ProcessDelayZonePalmRejection(v3, v12) )
        {
          CTouchProcessor::ProcessInputPostDelayZonePalmRejection(v3, v12, v17);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v8 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v9 = 17;
              goto LABEL_26;
            }
          }
        }
        else
        {
          InputTraceLogging::Pointer::BufferInDelayZone(v12);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v16,
          7,
          15,
          (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v8 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v9 = 16;
            goto LABEL_26;
          }
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v11,
        7,
        13,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v9 = 14;
          goto LABEL_26;
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v6,
      7,
      11,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v9 = 12;
LABEL_26:
        LOBYTE(v7) = 5;
        WPP_RECORDER_SF_(v8->DeviceExtension, v7, 7, v9, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      }
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v20);
  CInpLockGuard::UnLock((PERESOURCE *)v19, (struct CRefUnRefPointerMsgId *)v18);
}
