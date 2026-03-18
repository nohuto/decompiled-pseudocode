/*
 * XREFs of ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01946B0
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01948A0 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0049A20 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00690EC (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C00692B8 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D13EC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1F20 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0183428 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C019B238 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C019C114 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionIsCompositeAppOrSelfDisabled @ 0x1C01C8690 (ApiSetEditionIsCompositeAppOrSelfDisabled.c)
 *     ApiSetEditionPointerActivate @ 0x1C01C9100 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::HandleMTNodeTargetWindow(
        struct _KTHREAD **this,
        struct CPointerInfoNode *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int128 v10; // xmm1
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  bool v17; // zf
  _OWORD v18[7]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v19[40]; // [rsp+A0h] [rbp-60h] BYREF
  CInpLockGuard *v20; // [rsp+C8h] [rbp-38h]
  _BYTE v21[64]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v22[128]; // [rsp+110h] [rbp+10h] BYREF

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( (*((_DWORD *)gptiCurrent + 306) & 0x2000) == 0 )
  {
    v6 = *((_DWORD *)a2 + 1);
    if ( (v6 & 0x200) != 0
      && (*(_DWORD *)a2 & 0x400) != 0
      && (v6 & 0x80u) != 0
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
              (CThreadLockInputDest *)v21,
              (struct CPointerInfoNode *)((char *)a2 + 352),
              v7,
              v8);
            CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
              (CInpUnlockGuardExclusive *)v19,
              (struct CInpLockGuard *)(this + 5),
              0LL);
            v9 = *((_QWORD *)a2 + 2);
            v10 = *((_OWORD *)a2 + 23);
            v11 = *((unsigned __int16 *)a2 + 72);
            v18[0] = *((_OWORD *)a2 + 22);
            v12 = *((_OWORD *)a2 + 24);
            v18[1] = v10;
            v13 = *((_OWORD *)a2 + 25);
            v18[2] = v12;
            v14 = *((_OWORD *)a2 + 26);
            v18[3] = v13;
            v15 = *((_OWORD *)a2 + 27);
            v18[4] = v14;
            v16 = *((_OWORD *)a2 + 28);
            v18[5] = v15;
            v18[6] = v16;
            ApiSetEditionPointerActivate(v18, v11, v9, (char *)a2 + 160);
            CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v20, (struct CRefUnRefPointerMsgId *)v19);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v21);
          }
          return;
        }
      }
      else if ( *((_DWORD *)a2 + 111) != 2
             || !(unsigned int)ApiSetEditionIsCompositeAppOrSelfDisabled(*((_QWORD *)a2 + 54)) )
      {
        goto LABEL_12;
      }
      v17 = (*((_DWORD *)a2 + 45) & 0x10000) == 0;
      *((_DWORD *)a2 + 36) = -2;
      if ( !v17 )
      {
        CInputDest::CInputDest((CInputDest *)v22, (struct CPointerInfoNode *)((char *)a2 + 352));
        CTouchProcessor::SetPointerImplicitCapture(
          (CTouchProcessor *)this,
          *((_QWORD *)a2 + 2),
          (const struct CInputDest *)v22,
          -2,
          0);
        CInputDest::SetEmpty((CInputDest *)v22);
      }
    }
  }
}
