/*
 * XREFs of ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01971D0
 * Callers:
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C0197EC8 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTE.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0AE0 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00D0B7C (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01938C8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01965AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C0199D8C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataTimes(
        struct _KTHREAD **this,
        int *a2,
        unsigned int a3,
        struct tagTELEMETRY_POINTER_FRAME_TIMES *a4)
{
  int *v5; // r14
  int v7; // edx
  __int64 v8; // rcx
  PDEVICE_OBJECT v9; // rcx
  int v10; // r9d
  __int64 v11; // rcx
  struct CPointerInputFrame *FrameById; // r15
  __int64 v13; // rax
  CPointerInfoNode *v14; // r14
  __int64 v15; // rcx
  unsigned int HistoryCount; // r12d
  unsigned int v18; // r13d
  const struct CPointerInputFrame *i; // rax
  __int64 v20; // rdx
  CInpLockGuard *v21[15]; // [rsp+50h] [rbp-78h] BYREF

  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      153,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v21, (struct CInpLockGuard *)(this + 5), v5);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( !v5 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v9 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_25;
    v10 = 154;
LABEL_24:
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(v9->DeviceExtension, v7, 7, v10, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
LABEL_25:
    CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v21);
    return 0LL;
  }
  FrameById = CTouchProcessor::FindFrameById(this, v5[7]);
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v9 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_25;
    v10 = 155;
    goto LABEL_24;
  }
  v13 = (unsigned int)v5[8];
  if ( (unsigned int)v13 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
    v13 = (unsigned int)v5[8];
  }
  v14 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 17) + 480 * v13);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v14) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
  if ( (*(_DWORD *)v14 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
  HistoryCount = CPointerInfoNode::GetHistoryCount(v14);
  if ( a3 > HistoryCount )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v9 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_25;
    v10 = 156;
    goto LABEL_24;
  }
  *(_OWORD *)a4 = *(_OWORD *)((char *)FrameById + 72);
  *((_OWORD *)a4 + 1) = *(_OWORD *)((char *)FrameById + 88);
  *((_QWORD *)a4 + 4) = *((_QWORD *)FrameById + 13);
  v18 = 1;
  if ( a3 > 1 )
  {
    for ( i = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, FrameById);
          v18 < a3 && i && HistoryCount > 1;
          i = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, i) )
    {
      v20 = 5LL * v18;
      *(_OWORD *)((char *)a4 + 8 * v20) = *(_OWORD *)((char *)FrameById + 72);
      *(_OWORD *)((char *)a4 + 8 * v20 + 16) = *(_OWORD *)((char *)FrameById + 88);
      *((_QWORD *)a4 + v20 + 4) = *((_QWORD *)FrameById + 13);
      ++v18;
      --HistoryCount;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      7,
      157,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v21);
  return 1LL;
}
