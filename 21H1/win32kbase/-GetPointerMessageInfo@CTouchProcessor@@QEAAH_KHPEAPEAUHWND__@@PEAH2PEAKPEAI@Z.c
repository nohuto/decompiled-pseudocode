/*
 * XREFs of ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C0198810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C01969D4 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019E870 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A29B0 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerMessageInfo(
        struct _KTHREAD **this,
        __int64 a2,
        int a3,
        HWND *a4,
        int *a5,
        int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  __int64 v10; // rdi
  int v12; // edx
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  __int64 v15; // rcx
  const struct CPointerInputFrame *v16; // rsi
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  CInputDest *v21; // rcx
  HWND WindowHandle; // rax
  int v23; // r8d
  int v24; // edx
  _BYTE v26[40]; // [rsp+30h] [rbp-68h] BYREF
  CInpLockGuard *v27; // [rsp+58h] [rbp-40h]
  int v28; // [rsp+60h] [rbp-38h]
  int v29; // [rsp+A0h] [rbp+8h] BYREF
  CInputDest *v30; // [rsp+A8h] [rbp+10h] BYREF

  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      103,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  v30 = 0LL;
  v29 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v26,
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
    WPP_RECORDER_SF_(v13->DeviceExtension, v12, 7, v14, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
LABEL_13:
    v17 = 0;
    goto LABEL_35;
  }
  CTouchProcessor::GetPointerCapture(this, v10, a3, &v30, &v29);
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
  v18 = *(unsigned int *)(v10 + 32);
  if ( (unsigned int)v18 >= *((_DWORD *)v16 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
    v18 = *(unsigned int *)(v10 + 32);
  }
  v19 = *((_QWORD *)v16 + 17) + 480 * v18;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v19) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
  if ( *(_WORD *)(v10 + 16) != *(_WORD *)(v19 + 172) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
  v21 = v30;
  if ( v30 )
  {
    WindowHandle = CInputDest::GetWindowHandle(v30);
    v23 = v29;
    *a4 = WindowHandle;
  }
  else
  {
    *a4 = *(HWND *)(v19 + 192);
    v23 = *(_DWORD *)(v19 + 144);
  }
  if ( a5 )
    *a5 = v21 != 0LL;
  if ( a6 )
    *a6 = v23;
  if ( a7 )
    *a7 = *(_DWORD *)(v19 + 168);
  if ( a8 )
    *a8 = *(_DWORD *)(v19 + 180);
  CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, v16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v24) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v24,
      7,
      106,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  v17 = 1;
LABEL_35:
  if ( !v28 )
    CInpLockGuard::UnLock((PERESOURCE *)v27, (struct CRefUnRefPointerMsgId *)v26);
  return v17;
}
