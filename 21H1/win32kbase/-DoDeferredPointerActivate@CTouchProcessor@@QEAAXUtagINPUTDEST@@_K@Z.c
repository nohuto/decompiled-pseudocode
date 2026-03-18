/*
 * XREFs of ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C0193450
 * Callers:
 *     <none>
 * Callees:
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C005F5A8 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C005F774 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A44 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0B3C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1600 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019E870 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A29B0 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C01CF080 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DoDeferredPointerActivate(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  const struct CPointerInputFrame *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v12; // xmm1
  __int64 v13; // rdx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h]
  _OWORD v21[7]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[40]; // [rsp+C0h] [rbp-40h] BYREF
  CInpLockGuard *v23; // [rsp+E8h] [rbp-18h]
  _BYTE v24[40]; // [rsp+F0h] [rbp-10h] BYREF
  CInpLockGuard *v25; // [rsp+118h] [rbp+18h]
  _BYTE v26[64]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v27[128]; // [rsp+160h] [rbp+60h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v24,
    (struct CInpLockGuard *)(a1 + 40),
    (void *)a3);
  if ( a3 )
  {
    v7 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)a1, *(_DWORD *)(a3 + 28));
    if ( v7 )
    {
      v8 = *(_DWORD *)(a3 + 32);
      if ( v8 >= *((_DWORD *)v7 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
        v8 = *(_DWORD *)(a3 + 32);
      }
      v9 = *((_QWORD *)v7 + 17) + 480LL * v8;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v9) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
      if ( *(_WORD *)(a3 + 16) != *(_WORD *)(v9 + 172) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
      if ( qword_1C0257E80 )
        qword_1C0257E80(v7, &v19, CTouchProcessor::DereferencePointerInputFrame);
      CInputDest::CInputDest((CInputDest *)v27, (const struct tagINPUTDEST *)a2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v26, (struct CInputDest *)v27);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v22,
        (struct CInpLockGuard *)(a1 + 40),
        0LL);
      v11 = *(_QWORD *)(v9 + 16);
      v12 = *(_OWORD *)(a2 + 16);
      v13 = *(unsigned __int16 *)(v9 + 144);
      v21[0] = *(_OWORD *)a2;
      v14 = *(_OWORD *)(a2 + 32);
      v21[1] = v12;
      v15 = *(_OWORD *)(a2 + 48);
      v21[2] = v14;
      v16 = *(_OWORD *)(a2 + 64);
      v21[3] = v15;
      v17 = *(_OWORD *)(a2 + 80);
      v21[4] = v16;
      v18 = *(_OWORD *)(a2 + 96);
      v21[5] = v17;
      v21[6] = v18;
      ApiSetEditionPointerActivate(v21, v13, v11, v9 + 160);
      CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v23, (struct CRefUnRefPointerMsgId *)v22);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v26);
      if ( qword_1C0257E90 )
        qword_1C0257E90(&v19);
      CTouchProcessor::UnreferenceFrame((CTouchProcessor *)a1, v7);
      CInputDest::SetEmpty((CInputDest *)v27);
    }
  }
  CInpLockGuard::UnLock((PERESOURCE *)v25, (struct CRefUnRefPointerMsgId *)v24);
}
