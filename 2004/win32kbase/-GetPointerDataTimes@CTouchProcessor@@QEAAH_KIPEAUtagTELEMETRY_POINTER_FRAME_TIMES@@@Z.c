/*
 * XREFs of ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01914D0
 * Callers:
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01921C8 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTE.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1390 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00D142C (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018DBC8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01908AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C019408C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataTimes(
        struct _KTHREAD **this,
        int *a2,
        unsigned int a3,
        struct tagTELEMETRY_POINTER_FRAME_TIMES *a4)
{
  int *v5; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct CPointerInputFrame *FrameById; // r15
  __int64 v17; // rax
  CPointerInfoNode *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int HistoryCount; // r12d
  unsigned int v25; // r13d
  const struct CPointerInputFrame *i; // rax
  __int64 v27; // rdx
  CInpLockGuard *v28[15]; // [rsp+50h] [rbp-78h] BYREF

  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      154,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v28, (struct CInpLockGuard *)(this + 5), v5);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  if ( !v5 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_25;
    v12 = 155;
LABEL_24:
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(v11->DeviceExtension, v7, 7, v12, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
LABEL_25:
    CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v28);
    return 0LL;
  }
  FrameById = CTouchProcessor::FindFrameById(this, v5[7]);
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_25;
    v12 = 156;
    goto LABEL_24;
  }
  v17 = (unsigned int)v5[8];
  if ( (unsigned int)v17 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v7, v14, v15);
    v17 = (unsigned int)v5[8];
  }
  v18 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 17) + 480 * v17);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v18) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
  if ( (*(_DWORD *)v18 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
  HistoryCount = CPointerInfoNode::GetHistoryCount(v18);
  if ( a3 > HistoryCount )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_25;
    v12 = 157;
    goto LABEL_24;
  }
  *(_OWORD *)a4 = *(_OWORD *)((char *)FrameById + 72);
  *((_OWORD *)a4 + 1) = *(_OWORD *)((char *)FrameById + 88);
  *((_QWORD *)a4 + 4) = *((_QWORD *)FrameById + 13);
  v25 = 1;
  if ( a3 > 1 )
  {
    for ( i = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, FrameById);
          v25 < a3 && i && HistoryCount > 1;
          i = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, i) )
    {
      v27 = 5LL * v25;
      *(_OWORD *)((char *)a4 + 8 * v27) = *(_OWORD *)((char *)FrameById + 72);
      *(_OWORD *)((char *)a4 + 8 * v27 + 16) = *(_OWORD *)((char *)FrameById + 88);
      *((_QWORD *)a4 + v27 + 4) = *((_QWORD *)FrameById + 13);
      ++v25;
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
      158,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v28);
  return 1LL;
}
