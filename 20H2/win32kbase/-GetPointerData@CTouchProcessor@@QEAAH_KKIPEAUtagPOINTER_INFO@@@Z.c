/*
 * XREFs of ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C018EAE0
 * Callers:
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0190400 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1280 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     GetPointerInfoSize @ 0x1C012B68C (GetPointerInfoSize.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018B6A8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C019388C (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerData(
        struct _KTHREAD **this,
        int *a2,
        unsigned int a3,
        unsigned int a4,
        struct tagPOINTER_INFO *a5)
{
  int *v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  __int64 v16; // rcx
  struct CPointerInputFrame *FrameById; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  __int64 v21; // rax
  CPointerInfoNode *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // edx
  _BYTE v29[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v30; // [rsp+58h] [rbp-30h]
  int v31; // [rsp+60h] [rbp-28h]

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      120,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  if ( a4 != (unsigned int)GetPointerInfoSize(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v29, (struct CInpLockGuard *)(this + 5), v7);
  if ( !v7 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v14 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_15;
    v15 = 121;
LABEL_14:
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(v14->DeviceExtension, v13, 7, v15, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
LABEL_15:
    v20 = 0;
    goto LABEL_25;
  }
  FrameById = CTouchProcessor::FindFrameById(this, v7[7]);
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v14 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_15;
    v15 = 122;
    goto LABEL_14;
  }
  v21 = (unsigned int)v7[8];
  if ( (unsigned int)v21 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v13, v18, v19);
    v21 = (unsigned int)v7[8];
  }
  v22 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 17) + 480 * v21);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v22) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25, v26);
  if ( (*(_DWORD *)v22 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25, v26);
  v20 = CTouchProcessor::PointerInfoCopyOutHelper(
          (CTouchProcessor *)this,
          v22,
          *((struct tagHID_POINTER_DEVICE_INFO **)FrameById + 19),
          a3,
          a4,
          a5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v27) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v27,
      7,
      123,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
LABEL_25:
  if ( !v31 )
    CInpLockGuard::UnLock((PERESOURCE *)v30, (struct CRefUnRefPointerMsgId *)v29);
  return v20;
}
