/*
 * XREFs of ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z @ 0x1C0198210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0AE0 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01938C8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::GetPointerInfo(struct _KTHREAD **this, int *a2)
{
  int *v2; // rbx
  int v4; // edx
  PDEVICE_OBJECT v5; // rcx
  int v6; // r9d
  __int64 v7; // rcx
  struct CPointerInputFrame *FrameById; // rdi
  __int64 v9; // rax
  CPointerInfoNode *v10; // rbx
  char *v11; // rbx
  _BYTE v13[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+60h] [rbp-28h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      316,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v13, (struct CInpLockGuard *)(this + 5), v2);
  if ( !v2 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v5 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_19;
    v6 = 317;
LABEL_18:
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(v5->DeviceExtension, v4, 7, v6, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
LABEL_19:
    v11 = 0LL;
    goto LABEL_24;
  }
  FrameById = CTouchProcessor::FindFrameById(this, v2[7]);
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v5 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_19;
    v6 = 318;
    goto LABEL_18;
  }
  v9 = (unsigned int)v2[8];
  if ( (unsigned int)v9 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
    v9 = (unsigned int)v2[8];
  }
  v10 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 17) + 480 * v9);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v10) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v5 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_19;
    v6 = 319;
    goto LABEL_18;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      7,
      320,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  v11 = (char *)v10 + 168;
LABEL_24:
  if ( !v15 )
    CInpLockGuard::UnLock((PERESOURCE *)v14, (struct CRefUnRefPointerMsgId *)v13);
  return (const struct tagPOINTER_INFO *)v11;
}
