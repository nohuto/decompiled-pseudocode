/*
 * XREFs of ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C018D750
 * Callers:
 *     <none>
 * Callees:
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00690EC (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C00692B8 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12F4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D13EC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1F20 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0198B80 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019CC50 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C01C9100 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DoDeferredPointerActivate(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  const struct CPointerInputFrame *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int128 v20; // xmm1
  __int64 v21; // rdx
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h]
  _OWORD v29[7]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v30[40]; // [rsp+C0h] [rbp-40h] BYREF
  CInpLockGuard *v31; // [rsp+E8h] [rbp-18h]
  _BYTE v32[40]; // [rsp+F0h] [rbp-10h] BYREF
  CInpLockGuard *v33; // [rsp+118h] [rbp+18h]
  _BYTE v34[64]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v35[128]; // [rsp+160h] [rbp+60h] BYREF

  v28 = 0LL;
  v27 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v32,
    (struct CInpLockGuard *)(a1 + 40),
    (void *)a3);
  if ( a3 )
  {
    v8 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)a1, *(_DWORD *)(a3 + 28));
    if ( v8 )
    {
      v11 = *(_DWORD *)(a3 + 32);
      if ( v11 >= *((_DWORD *)v8 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9, v10);
        v11 = *(_DWORD *)(a3 + 32);
      }
      v12 = *((_QWORD *)v8 + 17) + 480LL * v11;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v12) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
      if ( *(_WORD *)(a3 + 16) != *(_WORD *)(v12 + 172) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
      if ( qword_1C0251EC0 )
        qword_1C0251EC0(v8, &v27, CTouchProcessor::DereferencePointerInputFrame, v16);
      CInputDest::CInputDest((CInputDest *)v35, (const struct tagINPUTDEST *)a2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v34, (struct CInputDest *)v35, v17, v18);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v30,
        (struct CInpLockGuard *)(a1 + 40),
        0LL);
      v19 = *(_QWORD *)(v12 + 16);
      v20 = *(_OWORD *)(a2 + 16);
      v21 = *(unsigned __int16 *)(v12 + 144);
      v29[0] = *(_OWORD *)a2;
      v22 = *(_OWORD *)(a2 + 32);
      v29[1] = v20;
      v23 = *(_OWORD *)(a2 + 48);
      v29[2] = v22;
      v24 = *(_OWORD *)(a2 + 64);
      v29[3] = v23;
      v25 = *(_OWORD *)(a2 + 80);
      v29[4] = v24;
      v26 = *(_OWORD *)(a2 + 96);
      v29[5] = v25;
      v29[6] = v26;
      ApiSetEditionPointerActivate(v29, v21, v19, v12 + 160);
      CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v31, (struct CRefUnRefPointerMsgId *)v30);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v34);
      if ( qword_1C0251ED0 )
        qword_1C0251ED0(&v27);
      CTouchProcessor::UnreferenceFrame((CTouchProcessor *)a1, v8);
      CInputDest::SetEmpty((CInputDest *)v35);
    }
  }
  CInpLockGuard::UnLock((PERESOURCE *)v33, (struct CRefUnRefPointerMsgId *)v32);
}
