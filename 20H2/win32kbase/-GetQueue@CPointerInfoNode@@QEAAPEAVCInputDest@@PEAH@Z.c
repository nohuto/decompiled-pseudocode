/*
 * XREFs of ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0191C24
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C01866FC (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C0191E2C (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0198060 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0033D74 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0033F64 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12DC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0180EE8 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C018E7B4 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C01C6FEC (ApiSetEditionPointerSpeedHitTest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CInputDest *__fastcall CPointerInfoNode::GetQueue(CPointerInfoNode *this, int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  CInputDest *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  CInputDest *v37; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v38[7]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v39[40]; // [rsp+B0h] [rbp-50h] BYREF
  CInpLockGuard *v40; // [rsp+D8h] [rbp-28h]
  char v41; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v42[16]; // [rsp+150h] [rbp+50h] BYREF

  if ( !(unsigned int)CPointerInfoNode::IsValid(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
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
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
      if ( !*((_QWORD *)CInputDest::GetThreadInfo((CPointerInfoNode *)((char *)this + 352)) + 54) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
      return (CPointerInfoNode *)((char *)this + 352);
    }
    if ( (*(_DWORD *)this & 0x400) != 0 )
      return 0LL;
  }
  v17 = *((_QWORD *)this + 2);
  v37 = 0LL;
  CTouchProcessor::GetPointerCapture((struct _KTHREAD **)gpTouchProcessor, v17, 0LL, &v37, 0LL);
  v18 = v37;
  if ( !v37 )
  {
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v39,
      (CTouchProcessor *)((char *)gpTouchProcessor + 40),
      0LL);
    v27 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)&v41, (int)this + 160, 0, 0, 0LL, 0LL);
    v28 = v27[1];
    v38[0] = *v27;
    v29 = v27[2];
    v38[1] = v28;
    v30 = v27[3];
    v38[2] = v29;
    v31 = v27[4];
    v38[3] = v30;
    v32 = v27[5];
    v38[4] = v31;
    v33 = v27[6];
    v38[5] = v32;
    v38[6] = v33;
    CInputDest::CInputDest((CInputDest *)v42, (const struct tagINPUTDEST *)v38);
    CInputDest::operator=((__int64)this + 352, v42);
    CInputDest::SetEmpty((CInputDest *)v42, v34, v35, v36);
    CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v40, (struct CRefUnRefPointerMsgId *)v39);
    if ( !*((_DWORD *)this + 88) )
      return 0LL;
    return (CPointerInfoNode *)((char *)this + 352);
  }
  if ( !CInputDest::GetThreadInfo(v37) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
  if ( !*((_QWORD *)CInputDest::GetThreadInfo(v18) + 54) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25, v26);
  return v18;
}
