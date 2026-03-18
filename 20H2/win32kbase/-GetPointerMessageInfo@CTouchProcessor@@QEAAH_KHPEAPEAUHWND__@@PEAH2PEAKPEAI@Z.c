/*
 * XREFs of ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01905F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C018E7B4 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0196650 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019A750 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerMessageInfo(
        struct _KTHREAD **this,
        __int64 a2,
        unsigned int a3,
        HWND *a4,
        int *a5,
        int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  __int64 v10; // rdi
  __int64 v12; // rdx
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  __int64 v15; // rcx
  const struct CPointerInputFrame *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  CInputDest *v26; // rcx
  HWND WindowHandle; // rax
  int v28; // r8d
  int v29; // edx
  _BYTE v31[40]; // [rsp+30h] [rbp-68h] BYREF
  CInpLockGuard *v32; // [rsp+58h] [rbp-40h]
  int v33; // [rsp+60h] [rbp-38h]
  int v34; // [rsp+A0h] [rbp+8h] BYREF
  CInputDest *v35; // [rsp+A8h] [rbp+10h] BYREF

  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      103,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  v35 = 0LL;
  v34 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v31,
    (struct CInpLockGuard *)(this + 5),
    (void *)v10);
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_13;
    v14 = 104;
LABEL_12:
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_(v13->DeviceExtension, v12, 7, v14, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
LABEL_13:
    v19 = 0;
    goto LABEL_35;
  }
  CTouchProcessor::GetPointerCapture(this, v10, a3, &v35, &v34);
  v16 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)this, *(_DWORD *)(v10 + 28));
  if ( !v16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_13;
    v14 = 105;
    goto LABEL_12;
  }
  v20 = *(unsigned int *)(v10 + 32);
  if ( (unsigned int)v20 >= *((_DWORD *)v16 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v12, v17, v18);
    v20 = *(unsigned int *)(v10 + 32);
  }
  v21 = *((_QWORD *)v16 + 17) + 480 * v20;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v21) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24, v25);
  if ( *(_WORD *)(v10 + 16) != *(_WORD *)(v21 + 172) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24, v25);
  v26 = v35;
  if ( v35 )
  {
    WindowHandle = CInputDest::GetWindowHandle(v35);
    v28 = v34;
    *a4 = WindowHandle;
  }
  else
  {
    *a4 = *(HWND *)(v21 + 192);
    v28 = *(_DWORD *)(v21 + 144);
  }
  if ( a5 )
    *a5 = v26 != 0LL;
  if ( a6 )
    *a6 = v28;
  if ( a7 )
    *a7 = *(_DWORD *)(v21 + 168);
  if ( a8 )
    *a8 = *(_DWORD *)(v21 + 180);
  CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, v16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v29) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v29,
      7,
      106,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  v19 = 1;
LABEL_35:
  if ( !v33 )
    CInpLockGuard::UnLock((PERESOURCE *)v32, (struct CRefUnRefPointerMsgId *)v31);
  return v19;
}
