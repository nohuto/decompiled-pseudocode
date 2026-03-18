/*
 * XREFs of ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0192180
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0192370 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00294B0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C00A6E9C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00AAC14 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12DC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0180EE8 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0198D34 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C0199C14 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionIsCompositeAppOrSelfDisabled @ 0x1C01C6310 (ApiSetEditionIsCompositeAppOrSelfDisabled.c)
 *     ApiSetEditionPointerActivate @ 0x1C01C6D80 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _OWORD v21[7]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v22[40]; // [rsp+A0h] [rbp-60h] BYREF
  CInpLockGuard *v23; // [rsp+C8h] [rbp-38h]
  _BYTE v24[64]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v25[128]; // [rsp+110h] [rbp+10h] BYREF

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( (*((_DWORD *)gptiCurrent + 308) & 0x2000) == 0 )
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
              (CThreadLockInputDest *)v24,
              (struct CPointerInfoNode *)((char *)a2 + 352),
              v7,
              v8);
            CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
              (CInpUnlockGuardExclusive *)v22,
              (struct CInpLockGuard *)(this + 5),
              0LL);
            v9 = *((_QWORD *)a2 + 2);
            v10 = *((_OWORD *)a2 + 23);
            v11 = *((unsigned __int16 *)a2 + 72);
            v21[0] = *((_OWORD *)a2 + 22);
            v12 = *((_OWORD *)a2 + 24);
            v21[1] = v10;
            v13 = *((_OWORD *)a2 + 25);
            v21[2] = v12;
            v14 = *((_OWORD *)a2 + 26);
            v21[3] = v13;
            v15 = *((_OWORD *)a2 + 27);
            v21[4] = v14;
            v16 = *((_OWORD *)a2 + 28);
            v21[5] = v15;
            v21[6] = v16;
            ApiSetEditionPointerActivate(v21, v11, v9, (char *)a2 + 160);
            CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v23, (struct CRefUnRefPointerMsgId *)v22);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v24);
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
        CInputDest::CInputDest((CInputDest *)v25, (struct CPointerInfoNode *)((char *)a2 + 352));
        CTouchProcessor::SetPointerImplicitCapture(
          (CTouchProcessor *)this,
          *((_QWORD *)a2 + 2),
          (const struct CInputDest *)v25,
          -2,
          0);
        CInputDest::SetEmpty((CInputDest *)v25, v18, v19, v20);
      }
    }
  }
}
