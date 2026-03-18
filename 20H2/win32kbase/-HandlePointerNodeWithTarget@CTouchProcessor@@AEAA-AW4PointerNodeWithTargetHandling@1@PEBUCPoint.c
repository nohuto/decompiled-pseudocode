/*
 * XREFs of ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0192370
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0198060 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0033D74 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C00A6E9C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00AAC14 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C00B47A8 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12DC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C01909AC (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C0191E2C (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0192180 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C0192B28 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C019303C (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C0196540 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C0196C1C (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C0199758 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetPerformTargetingWithinPwnd @ 0x1C01C9E18 (ApiSetPerformTargetingWithinPwnd.c)
 *     ApiSetValidatePointerOffset @ 0x1C01CB644 (ApiSetValidatePointerOffset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::HandlePointerNodeWithTarget(
        struct _KTHREAD **a1,
        CPointerInfoNode *a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r15d
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edx
  int v17; // edx
  int v18; // r8d
  __int64 v19; // r8
  __int64 v20; // r9
  CTouchProcessor *v21; // rcx
  unsigned __int64 v23; // rdx
  struct tagPOINT v24; // rax
  struct tagPOINT v25; // [rsp+38h] [rbp-49h] BYREF
  struct CInputDest *v26; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v27[40]; // [rsp+48h] [rbp-39h] BYREF
  CInpLockGuard *v28; // [rsp+70h] [rbp-11h]
  _BYTE v29[64]; // [rsp+78h] [rbp-9h] BYREF
  struct tagPOINT v30; // [rsp+100h] [rbp+7Fh] BYREF

  v4 = gptiCurrent;
  if ( !(unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)a4, gptiCurrent) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
  v13 = *((_DWORD *)v4 + 308) & 0x2000;
  v30.x = CPointerInfoNode::IsMessageDelegated(a2, a3) != 0;
  CTouchProcessor::HandleMTNodeTargetWindow(a1, (struct CPointerInfoNode *)a4, v14, v15);
  v16 = *(_DWORD *)(a4 + 4);
  if ( (v16 & 0x200) == 0
    || (v16 & 0x800) != 0
    || *(_DWORD *)(a4 + 168) != 2
    || CInputDest::GetThreadInfo((CInputDest *)(a4 + 352)) != v4 )
  {
    return 0LL;
  }
  if ( (*(_DWORD *)(a4 + 180) & 0x10000) == 0 )
  {
    v30 = 0LL;
    CTouchProcessor::GetPointerOffset(a1, *(_WORD *)(a4 + 172), &v30);
    v24 = v30;
    goto LABEL_16;
  }
  *(_DWORD *)(a4 + 4) = v18 | v17;
  if ( !CInputDest::IsIndependentInputWindow((CInputDest *)(a4 + 352)) )
  {
    v25 = 0LL;
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v29, (struct CInputDest *)(a4 + 352), v19, v20);
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v27,
      (struct CInpLockGuard *)(a1 + 5),
      0LL);
    ApiSetPerformTargetingWithinPwnd(a4 + 352, a4 + 160, &v25);
    CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v28, (struct CRefUnRefPointerMsgId *)v27);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v29);
    if ( !CTouchProcessor::GetQueueForCurrentNode(a1, v4, v13 != 0, a3, v30.x, a2) )
      return 1LL;
    if ( !CTouchProcessor::RevalidateFrameProcessing(v21, v4, v13 != 0, (const struct CPointerInfoNode *)a4, 1) )
      return 2LL;
    v23 = *(_QWORD *)(a4 + 16);
    v26 = 0LL;
    CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)a1, v23, v13 != 0, &v26, (int *)&v30);
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                         *(_QWORD *)(a4 + 200),
                         a4 + 160,
                         v25,
                         &v25) )
    {
      CTouchProcessor::SetPointerOffset((CTouchProcessor *)a1, *(_WORD *)(a4 + 172), &v25);
      v24 = v25;
LABEL_16:
      *(struct tagPOINT *)(a4 + 148) = v24;
    }
  }
  return 0LL;
}
