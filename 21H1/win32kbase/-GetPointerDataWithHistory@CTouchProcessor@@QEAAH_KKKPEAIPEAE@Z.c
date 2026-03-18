/*
 * XREFs of ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C01974C0
 * Callers:
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C019857C (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0AE0 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     GetPointerInfoSize @ 0x1C01339CC (GetPointerInfoSize.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01938C8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01965AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C0199D8C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C019BAAC (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v12; // edx
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  __int64 v15; // rcx
  struct CPointerInputFrame *FrameById; // r13
  __int64 v17; // rax
  CPointerInfoNode *v18; // rdi
  __int64 v19; // rcx
  unsigned int v20; // r15d
  unsigned int HistoryCount; // eax
  unsigned int v22; // edi
  unsigned int v23; // r12d
  int v24; // edx
  __int64 v25; // rcx
  const struct CPointerInputFrame *PreviousFrameByDevice; // r14
  CPointerInfoNode *v27; // rdi
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // eax
  _BYTE v33[40]; // [rsp+30h] [rbp-78h] BYREF
  CInpLockGuard *v34; // [rsp+58h] [rbp-50h]
  int v35; // [rsp+60h] [rbp-48h]

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
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v33, (struct CInpLockGuard *)(this + 5), a2);
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
    WPP_RECORDER_SF_(v13->DeviceExtension, v12, 7, v14, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
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
  v17 = (unsigned int)a2[8];
  if ( (unsigned int)v17 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
    v17 = (unsigned int)a2[8];
  }
  v18 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 17) + 480 * v17);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v18) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
  if ( (*(_DWORD *)v18 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
  v20 = 1;
  if ( a4 >= (unsigned int)PointerInfoSize )
  {
    v11 = CTouchProcessor::PointerInfoCopyOutHelper(
            (CTouchProcessor *)this,
            v18,
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
  HistoryCount = CPointerInfoNode::GetHistoryCount(v18);
  v22 = *((_DWORD *)v18 + 86);
  v23 = HistoryCount;
  PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, FrameById);
  if ( v11 )
  {
    do
    {
      if ( !PreviousFrameByDevice || v23 <= 1 )
        break;
      if ( v22 >= *((_DWORD *)PreviousFrameByDevice + 12) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
      v27 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 17) + 480LL * v22);
      if ( !(unsigned int)CPointerInfoNode::IsValid(v27) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
      ++v20;
      if ( a4 >= (unsigned int)PointerInfoSize )
      {
        v11 = CTouchProcessor::PointerInfoCopyOutHelper(
                (CTouchProcessor *)this,
                v27,
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
      v29 = CPointerInfoNode::GetHistoryCount(v27);
      v30 = v23 - 1;
      if ( v29 != (_DWORD)v30 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
      v31 = CPointerInfoNode::GetHistoryCount(v27);
      v22 = *((_DWORD *)v27 + 86);
      v23 = v31;
      PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, PreviousFrameByDevice);
    }
    while ( v11 );
    if ( v11 )
      *a5 = v20;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v24) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v24,
      7,
      127,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
LABEL_41:
  if ( !v35 )
    CInpLockGuard::UnLock((PERESOURCE *)v34, (struct CRefUnRefPointerMsgId *)v33);
  return v11;
}
