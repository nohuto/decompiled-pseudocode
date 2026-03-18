/*
 * XREFs of ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C0193310
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D11E4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C018E7B4 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C019729C (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C019900C (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 *     WPP_RECORDER_SF_qHL @ 0x1C019CA08 (WPP_RECORDER_SF_qHL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCaptured(
        struct _KTHREAD **this,
        __int64 a2,
        struct tagINPUTDEST *a3)
{
  struct tagINPUTDEST *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  CInputDest *v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int128 v16; // xmm4
  __int128 v17; // xmm5
  __int128 v18; // xmm6
  unsigned int WindowHandle; // eax
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  int v24; // [rsp+20h] [rbp-68h]
  _BYTE v25[40]; // [rsp+40h] [rbp-48h] BYREF
  CInpLockGuard *v26; // [rsp+68h] [rbp-20h]
  CInputDest *v27; // [rsp+90h] [rbp+8h] BYREF

  v6 = 0LL;
  v27 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v25,
    (struct CInpLockGuard *)(this + 5),
    (void *)a2);
  CTouchProcessor::GetPointerCapture(this, a2, 0LL, &v27, 0LL);
  if ( v27 )
  {
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *(_DWORD *)(a2 + 28),
      *(_WORD *)(a2 + 16),
      0x200000u);
    if ( this[9] != KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
    v11 = *(_QWORD *)(a2 + 40);
    if ( v11 )
      CTouchProcessor::SetDelegateActionInt(v8, v11, 5LL);
    v12 = v27;
    v13 = *((_OWORD *)v27 + 1);
    v14 = *((_OWORD *)v27 + 2);
    v15 = *((_OWORD *)v27 + 3);
    v16 = *((_OWORD *)v27 + 4);
    v17 = *((_OWORD *)v27 + 5);
    v18 = *((_OWORD *)v27 + 6);
    *(_OWORD *)a3 = *(_OWORD *)v27;
    *((_OWORD *)a3 + 1) = v13;
    *((_OWORD *)a3 + 2) = v14;
    *((_OWORD *)a3 + 3) = v15;
    *((_OWORD *)a3 + 4) = v16;
    *((_OWORD *)a3 + 5) = v17;
    *((_OWORD *)a3 + 6) = v18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WindowHandle = (unsigned int)CInputDest::GetWindowHandle(v12);
      WPP_RECORDER_SF_qHL(WindowHandle, v20, v21, v22, v24, WindowHandle, *(_WORD *)(a2 + 16), *(_DWORD *)(a2 + 28));
    }
    v6 = a3;
  }
  CInpLockGuard::UnLock((PERESOURCE *)v26, (struct CRefUnRefPointerMsgId *)v25);
  return v6;
}
