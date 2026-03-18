/*
 * XREFs of ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C0196D00
 * Callers:
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0198620 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0AE0 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     GetPointerInfoSize @ 0x1C01339CC (GetPointerInfoSize.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01938C8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C019BAAC (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerData(
        struct _KTHREAD **this,
        int *a2,
        unsigned int a3,
        unsigned int a4,
        struct tagPOINTER_INFO *a5)
{
  int *v7; // rbx
  __int64 v9; // rcx
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  __int64 v13; // rcx
  struct CPointerInputFrame *FrameById; // rdi
  unsigned int v15; // ebx
  __int64 v16; // rax
  CPointerInfoNode *v17; // rbx
  __int64 v18; // rcx
  int v19; // edx
  _BYTE v21[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v22; // [rsp+58h] [rbp-30h]
  int v23; // [rsp+60h] [rbp-28h]

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      120,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  if ( a4 != (unsigned int)GetPointerInfoSize(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v21, (struct CInpLockGuard *)(this + 5), v7);
  if ( !v7 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_15;
    v12 = 121;
LABEL_14:
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(v11->DeviceExtension, v10, 7, v12, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
LABEL_15:
    v15 = 0;
    goto LABEL_25;
  }
  FrameById = CTouchProcessor::FindFrameById(this, v7[7]);
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_15;
    v12 = 122;
    goto LABEL_14;
  }
  v16 = (unsigned int)v7[8];
  if ( (unsigned int)v16 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
    v16 = (unsigned int)v7[8];
  }
  v17 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 17) + 480 * v16);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v17) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
  if ( (*(_DWORD *)v17 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
  v15 = CTouchProcessor::PointerInfoCopyOutHelper(
          (CTouchProcessor *)this,
          v17,
          *((struct tagHID_POINTER_DEVICE_INFO **)FrameById + 19),
          a3,
          a4,
          a5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v19) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v19,
      7,
      123,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
LABEL_25:
  if ( !v23 )
    CInpLockGuard::UnLock((PERESOURCE *)v22, (struct CRefUnRefPointerMsgId *)v21);
  return v15;
}
