/*
 * XREFs of ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C0187DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069090 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12F4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0198DC0 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019CF68 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C019E558 (IsPointerInputMessageWithState.c)
 *     ApiSetEditionAllocAndLinkThreadPointerData @ 0x1C01C6E30 (ApiSetEditionAllocAndLinkThreadPointerData.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C01C7D1C (ApiSetEditionFindThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::AddThreadPointerData(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        int a4,
        void *a5,
        unsigned int a6,
        struct tagINPUTDEST *a7,
        int a8)
{
  __int64 v10; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int16 v16; // ax
  __int64 v17; // rax
  BOOL v18; // edi
  int v19; // ecx
  __int64 v20; // rax
  __int64 ThreadPointerData; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  void *v26; // rdx
  int v27; // r9d
  int v28; // r9d
  int v29; // edx
  __int16 v30; // r10
  int v31; // edx
  int v32; // r9d
  __int64 v33; // rcx
  _BYTE v35[40]; // [rsp+30h] [rbp-F8h] BYREF
  CInpLockGuard *v36; // [rsp+58h] [rbp-D0h]
  _BYTE v37[128]; // [rsp+60h] [rbp-C8h] BYREF

  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      114,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v35, (struct CInpLockGuard *)(a1 + 40), a5);
  CInputDest::CInputDest((CInputDest *)v37, a7);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
  v16 = 0;
  if ( a5 )
    v16 = *((_WORD *)a5 + 8);
  if ( a3 != v16 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
  if ( a6 != 528 && !(unsigned int)IsPointerInputMessageWithState(a6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
  if ( (*((_DWORD *)a5 + 9) & 2) != 0 )
  {
    if ( *(struct _KTHREAD **)(a1 + 72) != KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
    v17 = *((_QWORD *)a5 + 5);
    if ( v17 )
      *(_DWORD *)(v17 + 304) |= 2u;
  }
  v18 = 1;
  if ( a6 - 578 <= 0xF )
  {
    v19 = 32785;
    if ( _bittest(&v19, a6 - 578) )
    {
      if ( *(struct _KTHREAD **)(a1 + 72) != KeGetCurrentThread() )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(32785LL, v12, v14, v15);
      v20 = *((_QWORD *)a5 + 5);
      if ( v20 )
        *(_DWORD *)(v20 + 304) |= 1u;
    }
  }
  ThreadPointerData = ApiSetEditionFindThreadPointerData(v10, a3);
  v25 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v26 = *(void **)(ThreadPointerData + 24);
    if ( v26 == a5 )
    {
      if ( *(_DWORD *)(ThreadPointerData + 20) != a4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v26, v23, v24);
      v27 = *(_DWORD *)(v25 + 48);
      if ( (v27 & 1) == 0 && a8 )
        *(_DWORD *)(v25 + 48) = v27 | 1;
      *(_DWORD *)(v25 + 32) = a6;
      *(_QWORD *)(v25 + 40) = CInputDest::GetWindowHandle((CInputDest *)v37);
      *(_DWORD *)(v25 + 48) = v28 & 0xFFFFFFF5;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) != v30 )
      {
        LOBYTE(v29) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v29,
          7,
          115,
          (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      }
      goto LABEL_42;
    }
    CTouchProcessor::UnreferenceMsgData(a1, v26, 4LL);
    *(_QWORD *)(v25 + 24) = 0LL;
  }
  else
  {
    v25 = ApiSetEditionAllocAndLinkThreadPointerData(v10);
  }
  if ( v25 )
  {
    *(_DWORD *)(v25 + 48) &= ~8u;
    *(_WORD *)(v25 + 16) = a3;
    *(_DWORD *)(v25 + 20) = a4;
    *(_QWORD *)(v25 + 24) = a5;
    *(_DWORD *)(v25 + 32) = a6;
    *(_QWORD *)(v25 + 40) = CInputDest::GetWindowHandle((CInputDest *)v37);
    *(_DWORD *)(v25 + 48) = a8 & 1 | v32 & 0xFFFFFFFC;
    CTouchProcessor::ReferenceMsgData(v33, a5, 4LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v31) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v31,
      7,
      116,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  v18 = v25 != 0;
LABEL_42:
  CInputDest::SetEmpty((CInputDest *)v37);
  CInpLockGuard::UnLock((PERESOURCE *)v36, (struct CRefUnRefPointerMsgId *)v35);
  return v18;
}
