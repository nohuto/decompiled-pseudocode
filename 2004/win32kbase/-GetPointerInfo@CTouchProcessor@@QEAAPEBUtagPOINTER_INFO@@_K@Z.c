/*
 * XREFs of ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z @ 0x1C0192510
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1390 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018DBC8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::GetPointerInfo(struct _KTHREAD **this, int *a2)
{
  int *v2; // rbx
  __int64 v4; // rdx
  PDEVICE_OBJECT v5; // rcx
  int v6; // r9d
  __int64 v7; // rcx
  struct CPointerInputFrame *FrameById; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  CPointerInfoNode *v12; // rbx
  char *v13; // rbx
  _BYTE v15[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v16; // [rsp+58h] [rbp-30h]
  int v17; // [rsp+60h] [rbp-28h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      317,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v15, (struct CInpLockGuard *)(this + 5), v2);
  if ( !v2 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v5 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_19;
    v6 = 318;
LABEL_18:
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(v5->DeviceExtension, v4, 7, v6, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
LABEL_19:
    v13 = 0LL;
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
    v6 = 319;
    goto LABEL_18;
  }
  v11 = (unsigned int)v2[8];
  if ( (unsigned int)v11 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v4, v9, v10);
    v11 = (unsigned int)v2[8];
  }
  v12 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 17) + 480 * v11);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v12) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v5 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_19;
    v6 = 320;
    goto LABEL_18;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      7,
      321,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  v13 = (char *)v12 + 168;
LABEL_24:
  if ( !v17 )
    CInpLockGuard::UnLock((PERESOURCE *)v16, (struct CRefUnRefPointerMsgId *)v15);
  return (const struct tagPOINTER_INFO *)v13;
}
