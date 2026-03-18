/*
 * XREFs of ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1C018DDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A44 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019EAB0 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionAllocThreadPointerData @ 0x1C01CCE9C (ApiSetEditionAllocThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int16 v12; // ax
  __int64 v13; // rax
  __int64 v14; // rbx
  HWND WindowHandle; // rax
  __int64 v16; // rcx
  _BYTE v18[40]; // [rsp+20h] [rbp-E8h] BYREF
  CInpLockGuard *v19; // [rsp+48h] [rbp-C0h]
  _BYTE v20[128]; // [rsp+50h] [rbp-B8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v18, (struct CInpLockGuard *)(a1 + 40), a5);
  v11 = 0;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
  v12 = 0;
  if ( a5 )
    v12 = a5[8];
  if ( a3 != v12 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
  CInputDest::CInputDest((CInputDest *)v20, a7);
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v13 = ApiSetEditionAllocThreadPointerData();
    v14 = v13;
    if ( v13 )
    {
      *(_WORD *)(v13 + 16) = a3;
      *(_DWORD *)(v13 + 20) = a4;
      *(_QWORD *)(v13 + 24) = a5;
      *(_DWORD *)(v13 + 32) = a6;
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v20);
      *(_DWORD *)(v14 + 48) &= ~1u;
      *(_QWORD *)(v14 + 40) = WindowHandle;
      CTouchProcessor::ReferenceMsgData(v16, a5, 5LL);
      *(_QWORD *)(a2 + 24) = v14;
      v11 = 1;
    }
  }
  CInputDest::SetEmpty((CInputDest *)v20);
  CInpLockGuard::UnLock((PERESOURCE *)v19, (struct CRefUnRefPointerMsgId *)v18);
  return v11;
}
