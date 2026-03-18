/*
 * XREFs of ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1C01880F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069090 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12F4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0198DC0 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionAllocThreadPointerData @ 0x1C01C6F1C (ApiSetEditionAllocThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::AddThreadPointerHookData(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        _WORD *a5,
        int a6,
        struct tagINPUTDEST *a7)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // edi
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rbx
  HWND WindowHandle; // rax
  __int64 v19; // rcx
  _BYTE v21[40]; // [rsp+20h] [rbp-E8h] BYREF
  CInpLockGuard *v22; // [rsp+48h] [rbp-C0h]
  _BYTE v23[128]; // [rsp+50h] [rbp-B8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v21, (struct CInpLockGuard *)(a1 + 40), a5);
  v14 = 0;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
  v15 = 0;
  if ( a5 )
    v15 = a5[8];
  if ( a3 != v15 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
  CInputDest::CInputDest((CInputDest *)v23, a7);
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v16 = ApiSetEditionAllocThreadPointerData();
    v17 = v16;
    if ( v16 )
    {
      *(_WORD *)(v16 + 16) = a3;
      *(_DWORD *)(v16 + 20) = a4;
      *(_QWORD *)(v16 + 24) = a5;
      *(_DWORD *)(v16 + 32) = a6;
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v23);
      *(_DWORD *)(v17 + 48) &= ~1u;
      *(_QWORD *)(v17 + 40) = WindowHandle;
      CTouchProcessor::ReferenceMsgData(v19, a5, 5LL);
      *(_QWORD *)(a2 + 24) = v17;
      v14 = 1;
    }
  }
  CInputDest::SetEmpty((CInputDest *)v23);
  CInpLockGuard::UnLock((PERESOURCE *)v22, (struct CRefUnRefPointerMsgId *)v21);
  return v14;
}
