/*
 * XREFs of ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C019A5A0
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01A0280 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C005F5A8 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C005F774 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C005FECC (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0065904 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0B3C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1600 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C0198BCC (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C019A05C (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C019A3B0 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C019AD58 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C019B254 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C019E760 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C019EE3C (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C01A19B8 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetPerformTargetingWithinPwnd @ 0x1C01D2118 (ApiSetPerformTargetingWithinPwnd.c)
 *     ApiSetValidatePointerOffset @ 0x1C01D3944 (ApiSetValidatePointerOffset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::HandlePointerNodeWithTarget(
        struct _KTHREAD **a1,
        CPointerInfoNode *a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // rsi
  __int64 v9; // rcx
  int v10; // r15d
  int v11; // edx
  int v12; // edx
  int v13; // r8d
  CTouchProcessor *v14; // rcx
  unsigned __int64 v16; // rdx
  struct tagPOINT v17; // rax
  struct tagPOINT v18; // [rsp+38h] [rbp-49h] BYREF
  struct CInputDest *v19; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v20[40]; // [rsp+48h] [rbp-39h] BYREF
  CInpLockGuard *v21; // [rsp+70h] [rbp-11h]
  _BYTE v22[64]; // [rsp+78h] [rbp-9h] BYREF
  struct tagPOINT v23; // [rsp+100h] [rbp+7Fh] BYREF

  v4 = gptiCurrent;
  if ( !(unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)a4, gptiCurrent) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
  v10 = *((_DWORD *)v4 + 304) & 0x2000;
  v23.x = CPointerInfoNode::IsMessageDelegated(a2, a3) != 0;
  CTouchProcessor::HandleMTNodeTargetWindow(a1, (struct CPointerInfoNode *)a4);
  v11 = *(_DWORD *)(a4 + 4);
  if ( (v11 & 0x200) == 0
    || (v11 & 0x800) != 0
    || *(_DWORD *)(a4 + 168) != 2
    || CInputDest::GetThreadInfo((CInputDest *)(a4 + 352)) != v4 )
  {
    return 0LL;
  }
  if ( (*(_DWORD *)(a4 + 180) & 0x10000) == 0 )
  {
    v23 = 0LL;
    CTouchProcessor::GetPointerOffset(a1, *(_WORD *)(a4 + 172), &v23);
    v17 = v23;
    goto LABEL_16;
  }
  *(_DWORD *)(a4 + 4) = v13 | v12;
  if ( !CInputDest::IsIndependentInputWindow((CInputDest *)(a4 + 352)) )
  {
    v18 = 0LL;
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v22, (struct CInputDest *)(a4 + 352));
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v20,
      (struct CInpLockGuard *)(a1 + 5),
      0LL);
    ApiSetPerformTargetingWithinPwnd(a4 + 352, a4 + 160, &v18);
    CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v21, (struct CRefUnRefPointerMsgId *)v20);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v22);
    if ( !CTouchProcessor::GetQueueForCurrentNode(a1, v4, v10 != 0, a3, v23.x, a2) )
      return 1LL;
    if ( !CTouchProcessor::RevalidateFrameProcessing(v14, v4, v10 != 0, (const struct CPointerInfoNode *)a4, 1) )
      return 2LL;
    v16 = *(_QWORD *)(a4 + 16);
    v19 = 0LL;
    CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)a1, v16, v10 != 0, &v19, (int *)&v23);
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                         *(_QWORD *)(a4 + 200),
                         a4 + 160,
                         v18,
                         &v18) )
    {
      CTouchProcessor::SetPointerOffset((CTouchProcessor *)a1, *(_WORD *)(a4 + 172), &v18);
      v17 = v18;
LABEL_16:
      *(struct tagPOINT *)(a4 + 148) = v17;
    }
  }
  return 0LL;
}
