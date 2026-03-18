/*
 * XREFs of ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C019A3B0
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C019A5A0 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C005D3F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C005F5A8 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C005F774 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0B3C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1600 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0189128 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C01A0F9C (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C01A1E74 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionIsCompositeAppOrSelfDisabled @ 0x1C01CE610 (ApiSetEditionIsCompositeAppOrSelfDisabled.c)
 *     ApiSetEditionPointerActivate @ 0x1C01CF080 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::HandleMTNodeTargetWindow(struct _KTHREAD **this, struct CPointerInfoNode *a2)
{
  int v4; // ecx
  __int64 v5; // r8
  __int128 v6; // xmm1
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  bool v13; // zf
  _OWORD v14[7]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v15[40]; // [rsp+A0h] [rbp-60h] BYREF
  CInpLockGuard *v16; // [rsp+C8h] [rbp-38h]
  _BYTE v17[64]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v18[128]; // [rsp+110h] [rbp+10h] BYREF

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( (*((_DWORD *)gptiCurrent + 304) & 0x2000) == 0 )
  {
    v4 = *((_DWORD *)a2 + 1);
    if ( (v4 & 0x200) != 0
      && (*(_DWORD *)a2 & 0x400) != 0
      && (v4 & 0x80u) != 0
      && *((_DWORD *)a2 + 111)
      && CInputDest::IsEqualByWindowHandle((__int64)a2 + 352, *((_QWORD *)a2 + 24), 1) )
    {
      if ( *((_DWORD *)a2 + 111) == 1 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a2 + 54) + 39LL) & 8) == 0 )
        {
LABEL_12:
          if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate(a2) )
          {
            CThreadLockInputDest::CThreadLockInputDest(
              (CThreadLockInputDest *)v17,
              (struct CPointerInfoNode *)((char *)a2 + 352));
            CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
              (CInpUnlockGuardExclusive *)v15,
              (struct CInpLockGuard *)(this + 5),
              0LL);
            v5 = *((_QWORD *)a2 + 2);
            v6 = *((_OWORD *)a2 + 23);
            v7 = *((unsigned __int16 *)a2 + 72);
            v14[0] = *((_OWORD *)a2 + 22);
            v8 = *((_OWORD *)a2 + 24);
            v14[1] = v6;
            v9 = *((_OWORD *)a2 + 25);
            v14[2] = v8;
            v10 = *((_OWORD *)a2 + 26);
            v14[3] = v9;
            v11 = *((_OWORD *)a2 + 27);
            v14[4] = v10;
            v12 = *((_OWORD *)a2 + 28);
            v14[5] = v11;
            v14[6] = v12;
            ApiSetEditionPointerActivate(v14, v7, v5, (char *)a2 + 160);
            CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v16, (struct CRefUnRefPointerMsgId *)v15);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v17);
          }
          return;
        }
      }
      else if ( *((_DWORD *)a2 + 111) != 2
             || !(unsigned int)ApiSetEditionIsCompositeAppOrSelfDisabled(*((_QWORD *)a2 + 54)) )
      {
        goto LABEL_12;
      }
      v13 = (*((_DWORD *)a2 + 45) & 0x10000) == 0;
      *((_DWORD *)a2 + 36) = -2;
      if ( !v13 )
      {
        CInputDest::CInputDest((CInputDest *)v18, (struct CPointerInfoNode *)((char *)a2 + 352));
        CTouchProcessor::SetPointerImplicitCapture(
          (CTouchProcessor *)this,
          *((_QWORD *)a2 + 2),
          (const struct CInputDest *)v18,
          -2,
          0);
        CInputDest::SetEmpty((CInputDest *)v18);
      }
    }
  }
}
