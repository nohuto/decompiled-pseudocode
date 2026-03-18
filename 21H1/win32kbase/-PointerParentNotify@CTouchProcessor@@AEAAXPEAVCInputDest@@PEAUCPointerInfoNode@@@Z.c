/*
 * XREFs of ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C019BB48
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01A0280 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C005F5A8 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C005F774 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0B3C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1600 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C019B254 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionPointerParentNotify @ 0x1C01CF1C0 (ApiSetEditionPointerParentNotify.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::PointerParentNotify(
        struct _KTHREAD **this,
        struct CInputDest *a2,
        struct CPointerInfoNode *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _OWORD v15[7]; // [rsp+28h] [rbp-89h] BYREF
  _BYTE v16[40]; // [rsp+98h] [rbp-19h] BYREF
  CInpLockGuard *v17; // [rsp+C0h] [rbp+Fh]
  _BYTE v18[64]; // [rsp+C8h] [rbp+17h] BYREF

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(a3, gptiCurrent) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v18, a2);
  CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
    (CInpUnlockGuardExclusive *)v16,
    (struct CInpLockGuard *)(this + 5),
    0LL);
  v8 = *((_QWORD *)a3 + 2);
  v9 = *((_OWORD *)a2 + 1);
  v15[0] = *(_OWORD *)a2;
  v10 = *((_OWORD *)a2 + 2);
  v15[1] = v9;
  v11 = *((_OWORD *)a2 + 3);
  v15[2] = v10;
  v12 = *((_OWORD *)a2 + 4);
  v15[3] = v11;
  v13 = *((_OWORD *)a2 + 5);
  v15[4] = v12;
  v14 = *((_OWORD *)a2 + 6);
  v15[5] = v13;
  v15[6] = v14;
  ApiSetEditionPointerParentNotify(v15, a3, v8);
  CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v17, (struct CRefUnRefPointerMsgId *)v16);
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v18);
}
