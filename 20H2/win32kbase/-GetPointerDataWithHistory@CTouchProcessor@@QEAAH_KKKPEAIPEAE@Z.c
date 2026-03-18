/*
 * XREFs of ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C018F2A0
 * Callers:
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C019035C (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1280 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     GetPointerInfoSize @ 0x1C012B68C (GetPointerInfoSize.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018B6A8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C018E38C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C0191B5C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C019388C (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataWithHistory(
        struct _KTHREAD **this,
        int *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        struct tagPOINTER_INFO *a6)
{
  int v9; // edx
  __int64 PointerInfoSize; // rbp
  unsigned int v11; // ebx
  __int64 v12; // rdx
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct CPointerInputFrame *FrameById; // r13
  __int64 v19; // rax
  CPointerInfoNode *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // r15d
  unsigned int HistoryCount; // eax
  unsigned int v27; // edi
  unsigned int v28; // r12d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  const struct CPointerInputFrame *PreviousFrameByDevice; // r14
  CPointerInfoNode *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  unsigned int v44; // eax
  _BYTE v46[40]; // [rsp+30h] [rbp-78h] BYREF
  CInpLockGuard *v47; // [rsp+58h] [rbp-50h]
  int v48; // [rsp+60h] [rbp-48h]

  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v11 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      7,
      124,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v46, (struct CInpLockGuard *)(this + 5), a2);
  if ( !a2 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_13;
    v14 = 125;
LABEL_12:
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_(v13->DeviceExtension, v12, 7, v14, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
LABEL_13:
    v11 = 0;
    goto LABEL_41;
  }
  FrameById = CTouchProcessor::FindFrameById(this, a2[7]);
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_13;
    v14 = 126;
    goto LABEL_12;
  }
  v19 = (unsigned int)a2[8];
  if ( (unsigned int)v19 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v12, v16, v17);
    v19 = (unsigned int)a2[8];
  }
  v20 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 17) + 480 * v19);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v20) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23, v24);
  if ( (*(_DWORD *)v20 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23, v24);
  v25 = 1;
  if ( a4 >= (unsigned int)PointerInfoSize )
  {
    v11 = CTouchProcessor::PointerInfoCopyOutHelper(
            (CTouchProcessor *)this,
            v20,
            *((struct tagHID_POINTER_DEVICE_INFO **)FrameById + 19),
            a3,
            PointerInfoSize,
            a6);
    if ( v11 )
    {
      a4 -= PointerInfoSize;
      a6 = (struct tagPOINTER_INFO *)((char *)a6 + PointerInfoSize);
    }
  }
  HistoryCount = CPointerInfoNode::GetHistoryCount(v20);
  v27 = *((_DWORD *)v20 + 86);
  v28 = HistoryCount;
  PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, FrameById);
  if ( v11 )
  {
    do
    {
      if ( !PreviousFrameByDevice || v28 <= 1 )
        break;
      if ( v27 >= *((_DWORD *)PreviousFrameByDevice + 12) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31, v32);
      v34 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 17) + 480LL * v27);
      if ( !(unsigned int)CPointerInfoNode::IsValid(v34) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37, v38);
      ++v25;
      if ( a4 >= (unsigned int)PointerInfoSize )
      {
        v11 = CTouchProcessor::PointerInfoCopyOutHelper(
                (CTouchProcessor *)this,
                v34,
                *((struct tagHID_POINTER_DEVICE_INFO **)FrameById + 19),
                a3,
                PointerInfoSize,
                a6);
        if ( v11 )
        {
          a6 = (struct tagPOINTER_INFO *)((char *)a6 + PointerInfoSize);
          a4 -= PointerInfoSize;
        }
      }
      v39 = CPointerInfoNode::GetHistoryCount(v34);
      v43 = v28 - 1;
      if ( v39 != (_DWORD)v43 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v40, v41, v42);
      v44 = CPointerInfoNode::GetHistoryCount(v34);
      v27 = *((_DWORD *)v34 + 86);
      v28 = v44;
      PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, PreviousFrameByDevice);
    }
    while ( v11 );
    if ( v11 )
      *a5 = v25;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v29) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v29,
      7,
      127,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
LABEL_41:
  if ( !v48 )
    CInpLockGuard::UnLock((PERESOURCE *)v47, (struct CRefUnRefPointerMsgId *)v46);
  return v11;
}
