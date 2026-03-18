/*
 * XREFs of ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C0195990
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12F4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C0190CD4 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C01997CC (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C019B510 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCapturedDelegate(
        struct _KTHREAD **this,
        __int64 a2,
        struct tagINPUTDEST *a3,
        unsigned __int16 *a4)
{
  struct tagINPUTDEST *v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // xmm4
  __int128 v18; // xmm5
  __int128 v19; // xmm6
  _BYTE v21[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v22; // [rsp+58h] [rbp-30h]
  struct CInputDest *v23; // [rsp+90h] [rbp+8h] BYREF

  v7 = 0LL;
  v23 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v21,
    (struct CInpLockGuard *)(this + 5),
    (void *)a2);
  CTouchProcessor::GetPointerCapture(this, a2, 0LL, &v23, 0LL);
  if ( v23 )
  {
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *(_DWORD *)(a2 + 28),
      *(_WORD *)(a2 + 16),
      0x200000u);
    if ( this[9] != KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
    v13 = *(_QWORD *)(a2 + 40);
    if ( v13 )
      CTouchProcessor::SetDelegateActionInt(v10, v13, 5LL);
    v7 = a3;
    *a4 = *(_WORD *)(a2 + 16);
    v14 = *((_OWORD *)v23 + 1);
    v15 = *((_OWORD *)v23 + 2);
    v16 = *((_OWORD *)v23 + 3);
    v17 = *((_OWORD *)v23 + 4);
    v18 = *((_OWORD *)v23 + 5);
    v19 = *((_OWORD *)v23 + 6);
    *(_OWORD *)a3 = *(_OWORD *)v23;
    *((_OWORD *)a3 + 1) = v14;
    *((_OWORD *)a3 + 2) = v15;
    *((_OWORD *)a3 + 3) = v16;
    *((_OWORD *)a3 + 4) = v17;
    *((_OWORD *)a3 + 5) = v18;
    *((_OWORD *)a3 + 6) = v19;
  }
  CInpLockGuard::UnLock((PERESOURCE *)v22, (struct CRefUnRefPointerMsgId *)v21);
  return v7;
}
