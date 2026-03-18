/*
 * XREFs of ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0199E54
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C018E93C (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C019A05C (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01A0280 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0065904 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006E1C0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0B3C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1600 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0189128 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C01969D4 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C01CF2EC (ApiSetEditionPointerSpeedHitTest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CInputDest *__fastcall CPointerInfoNode::GetQueue(CPointerInfoNode *this, int *a2)
{
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  CInputDest *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  CInputDest *v19; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v20[7]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v21[40]; // [rsp+B0h] [rbp-50h] BYREF
  CInpLockGuard *v22; // [rsp+D8h] [rbp-28h]
  char v23; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v24[16]; // [rsp+150h] [rbp+50h] BYREF

  if ( !(unsigned int)CPointerInfoNode::IsValid(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  *a2 = 0;
  if ( *((_DWORD *)this + 111) )
  {
    if ( CInputDest::IsEqualByWindowHandle((__int64)this + 352, *((_QWORD *)this + 24), 1) )
    {
      if ( !CInputDest::IsEqualByWindowHandle((__int64)this + 352, *((_QWORD *)this + 24), 2) )
      {
        *a2 = 1;
        return 0LL;
      }
      if ( !CInputDest::GetThreadInfo((CPointerInfoNode *)((char *)this + 352)) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
      if ( !*((_QWORD *)CInputDest::GetThreadInfo((CPointerInfoNode *)((char *)this + 352)) + 53) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
      return (CPointerInfoNode *)((char *)this + 352);
    }
    if ( (*(_DWORD *)this & 0x400) != 0 )
      return 0LL;
  }
  v8 = *((_QWORD *)this + 2);
  v19 = 0LL;
  CTouchProcessor::GetPointerCapture((struct _KTHREAD **)gpTouchProcessor, v8, 0, &v19, 0LL);
  v9 = v19;
  if ( !v19 )
  {
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v21,
      (CTouchProcessor *)((char *)gpTouchProcessor + 40),
      0LL);
    v12 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)&v23, (int)this + 160, 0, 0, 0LL, 0LL);
    v13 = v12[1];
    v20[0] = *v12;
    v14 = v12[2];
    v20[1] = v13;
    v15 = v12[3];
    v20[2] = v14;
    v16 = v12[4];
    v20[3] = v15;
    v17 = v12[5];
    v20[4] = v16;
    v18 = v12[6];
    v20[5] = v17;
    v20[6] = v18;
    CInputDest::CInputDest((CInputDest *)v24, (const struct tagINPUTDEST *)v20);
    CInputDest::operator=((__int64)this + 352, v24);
    CInputDest::SetEmpty((CInputDest *)v24);
    CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v22, (struct CRefUnRefPointerMsgId *)v21);
    if ( !*((_DWORD *)this + 88) )
      return 0LL;
    return (CPointerInfoNode *)((char *)this + 352);
  }
  if ( !CInputDest::GetThreadInfo(v19) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
  if ( !*((_QWORD *)CInputDest::GetThreadInfo(v9) + 53) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
  return v9;
}
