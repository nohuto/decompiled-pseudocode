/*
 * XREFs of ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1C0185BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D11E4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0196890 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionAllocThreadPointerData @ 0x1C01C4B9C (ApiSetEditionAllocThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rbx
  HWND WindowHandle; // rax
  __int64 v22; // rcx
  _BYTE v24[40]; // [rsp+20h] [rbp-E8h] BYREF
  CInpLockGuard *v25; // [rsp+48h] [rbp-C0h]
  _BYTE v26[128]; // [rsp+50h] [rbp-B8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v24, (struct CInpLockGuard *)(a1 + 40), a5);
  v14 = 0;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
  v15 = 0;
  if ( a5 )
    v15 = a5[8];
  if ( a3 != v15 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
  CInputDest::CInputDest((CInputDest *)v26, a7);
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v19 = ApiSetEditionAllocThreadPointerData();
    v20 = v19;
    if ( v19 )
    {
      *(_WORD *)(v19 + 16) = a3;
      *(_DWORD *)(v19 + 20) = a4;
      *(_QWORD *)(v19 + 24) = a5;
      *(_DWORD *)(v19 + 32) = a6;
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v26);
      *(_DWORD *)(v20 + 48) &= ~1u;
      *(_QWORD *)(v20 + 40) = WindowHandle;
      CTouchProcessor::ReferenceMsgData(v22, a5, 5LL);
      *(_QWORD *)(a2 + 24) = v20;
      v14 = 1;
    }
  }
  CInputDest::SetEmpty((CInputDest *)v26, v16, v17, v18);
  CInpLockGuard::UnLock((PERESOURCE *)v25, (struct CRefUnRefPointerMsgId *)v24);
  return v14;
}
