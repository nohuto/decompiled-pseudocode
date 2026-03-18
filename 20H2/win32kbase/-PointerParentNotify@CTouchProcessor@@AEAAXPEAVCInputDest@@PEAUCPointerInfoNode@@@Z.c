/*
 * XREFs of ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C0193928
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0198060 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C00A6E9C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00AAC14 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12DC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C019303C (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionPointerParentNotify @ 0x1C01C6EC0 (ApiSetEditionPointerParentNotify.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::PointerParentNotify(
        struct _KTHREAD **this,
        struct CInputDest *a2,
        struct CPointerInfoNode *a3,
        __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  _OWORD v22[7]; // [rsp+28h] [rbp-89h] BYREF
  _BYTE v23[40]; // [rsp+98h] [rbp-19h] BYREF
  CInpLockGuard *v24; // [rsp+C0h] [rbp+Fh]
  _BYTE v25[64]; // [rsp+C8h] [rbp+17h] BYREF

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(a3, gptiCurrent) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v25, a2, v13, v14);
  CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
    (CInpUnlockGuardExclusive *)v23,
    (struct CInpLockGuard *)(this + 5),
    0LL);
  v15 = *((_QWORD *)a3 + 2);
  v16 = *((_OWORD *)a2 + 1);
  v22[0] = *(_OWORD *)a2;
  v17 = *((_OWORD *)a2 + 2);
  v22[1] = v16;
  v18 = *((_OWORD *)a2 + 3);
  v22[2] = v17;
  v19 = *((_OWORD *)a2 + 4);
  v22[3] = v18;
  v20 = *((_OWORD *)a2 + 5);
  v22[4] = v19;
  v21 = *((_OWORD *)a2 + 6);
  v22[5] = v20;
  v22[6] = v21;
  ApiSetEditionPointerParentNotify(v22, a3, v15);
  CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v24, (struct CRefUnRefPointerMsgId *)v23);
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v25);
}
