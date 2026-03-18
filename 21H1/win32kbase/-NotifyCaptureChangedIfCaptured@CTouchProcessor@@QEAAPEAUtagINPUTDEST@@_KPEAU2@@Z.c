/*
 * XREFs of ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C019B530
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A44 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C01969D4 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C019F4BC (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C01A1274 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 *     WPP_RECORDER_SF_qHL @ 0x1C01A4C68 (WPP_RECORDER_SF_qHL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCaptured(
        struct _KTHREAD **this,
        __int64 a2,
        struct tagINPUTDEST *a3)
{
  struct tagINPUTDEST *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  CInputDest *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __int128 v13; // xmm4
  __int128 v14; // xmm5
  __int128 v15; // xmm6
  unsigned int WindowHandle; // eax
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  int v21; // [rsp+20h] [rbp-68h]
  _BYTE v22[40]; // [rsp+40h] [rbp-48h] BYREF
  CInpLockGuard *v23; // [rsp+68h] [rbp-20h]
  CInputDest *v24; // [rsp+90h] [rbp+8h] BYREF

  v6 = 0LL;
  v24 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v22,
    (struct CInpLockGuard *)(this + 5),
    (void *)a2);
  CTouchProcessor::GetPointerCapture(this, a2, 0, &v24, 0LL);
  if ( v24 )
  {
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *(_DWORD *)(a2 + 28),
      *(_WORD *)(a2 + 16),
      0x200000u);
    if ( this[9] != KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
    v8 = *(_QWORD *)(a2 + 40);
    if ( v8 )
      CTouchProcessor::SetDelegateActionInt(v7, v8, 5LL);
    v9 = v24;
    v10 = *((_OWORD *)v24 + 1);
    v11 = *((_OWORD *)v24 + 2);
    v12 = *((_OWORD *)v24 + 3);
    v13 = *((_OWORD *)v24 + 4);
    v14 = *((_OWORD *)v24 + 5);
    v15 = *((_OWORD *)v24 + 6);
    *(_OWORD *)a3 = *(_OWORD *)v24;
    *((_OWORD *)a3 + 1) = v10;
    *((_OWORD *)a3 + 2) = v11;
    *((_OWORD *)a3 + 3) = v12;
    *((_OWORD *)a3 + 4) = v13;
    *((_OWORD *)a3 + 5) = v14;
    *((_OWORD *)a3 + 6) = v15;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WindowHandle = (unsigned int)CInputDest::GetWindowHandle(v9);
      WPP_RECORDER_SF_qHL(WindowHandle, v17, v18, v19, v21, WindowHandle, *(_WORD *)(a2 + 16), *(_DWORD *)(a2 + 28));
    }
    v6 = a3;
  }
  CInpLockGuard::UnLock((PERESOURCE *)v23, (struct CRefUnRefPointerMsgId *)v22);
  return v6;
}
