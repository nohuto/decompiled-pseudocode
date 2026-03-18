/*
 * XREFs of ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C019B680
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A44 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C01969D4 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C019F4BC (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C01A1274 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCapturedDelegate(
        struct _KTHREAD **this,
        __int64 a2,
        struct tagINPUTDEST *a3,
        unsigned __int16 *a4)
{
  struct tagINPUTDEST *v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int128 v14; // xmm4
  __int128 v15; // xmm5
  __int128 v16; // xmm6
  _BYTE v18[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v19; // [rsp+58h] [rbp-30h]
  struct CInputDest *v20; // [rsp+90h] [rbp+8h] BYREF

  v7 = 0LL;
  v20 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v18,
    (struct CInpLockGuard *)(this + 5),
    (void *)a2);
  CTouchProcessor::GetPointerCapture(this, a2, 0, &v20, 0LL);
  if ( v20 )
  {
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *(_DWORD *)(a2 + 28),
      *(_WORD *)(a2 + 16),
      0x200000u);
    if ( this[9] != KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
    v10 = *(_QWORD *)(a2 + 40);
    if ( v10 )
      CTouchProcessor::SetDelegateActionInt(v9, v10, 5LL);
    v7 = a3;
    *a4 = *(_WORD *)(a2 + 16);
    v11 = *((_OWORD *)v20 + 1);
    v12 = *((_OWORD *)v20 + 2);
    v13 = *((_OWORD *)v20 + 3);
    v14 = *((_OWORD *)v20 + 4);
    v15 = *((_OWORD *)v20 + 5);
    v16 = *((_OWORD *)v20 + 6);
    *(_OWORD *)a3 = *(_OWORD *)v20;
    *((_OWORD *)a3 + 1) = v11;
    *((_OWORD *)a3 + 2) = v12;
    *((_OWORD *)a3 + 3) = v13;
    *((_OWORD *)a3 + 4) = v14;
    *((_OWORD *)a3 + 5) = v15;
    *((_OWORD *)a3 + 6) = v16;
  }
  CInpLockGuard::UnLock((PERESOURCE *)v19, (struct CRefUnRefPointerMsgId *)v18);
  return v7;
}
