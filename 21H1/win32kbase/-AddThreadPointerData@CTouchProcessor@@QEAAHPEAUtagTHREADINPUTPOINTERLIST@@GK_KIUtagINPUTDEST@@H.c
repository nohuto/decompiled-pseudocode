/*
 * XREFs of ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C018DAE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A44 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019EAB0 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01A2CC8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C01A42B8 (IsPointerInputMessageWithState.c)
 *     ApiSetEditionAllocAndLinkThreadPointerData @ 0x1C01CCDB0 (ApiSetEditionAllocAndLinkThreadPointerData.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C01CDC9C (ApiSetEditionFindThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // rcx
  __int16 v13; // ax
  __int64 v14; // rax
  BOOL v15; // edi
  int v16; // ecx
  __int64 v17; // rax
  __int64 ThreadPointerData; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  void *v21; // rdx
  int v22; // r9d
  int v23; // r9d
  int v24; // edx
  __int16 v25; // r10
  int v26; // edx
  int v27; // r9d
  __int64 v28; // rcx
  _BYTE v30[40]; // [rsp+30h] [rbp-F8h] BYREF
  CInpLockGuard *v31; // [rsp+58h] [rbp-D0h]
  _BYTE v32[128]; // [rsp+60h] [rbp-C8h] BYREF

  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      113,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v30, (struct CInpLockGuard *)(a1 + 40), a5);
  CInputDest::CInputDest((CInputDest *)v32, a7);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
  v13 = 0;
  if ( a5 )
    v13 = *((_WORD *)a5 + 8);
  if ( a3 != v13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
  if ( a6 != 528 && !(unsigned int)IsPointerInputMessageWithState(a6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
  if ( (*((_DWORD *)a5 + 9) & 2) != 0 )
  {
    if ( *(struct _KTHREAD **)(a1 + 72) != KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    v14 = *((_QWORD *)a5 + 5);
    if ( v14 )
      *(_DWORD *)(v14 + 304) |= 2u;
  }
  v15 = 1;
  if ( a6 - 578 <= 0xF )
  {
    v16 = 32785;
    if ( _bittest(&v16, a6 - 578) )
    {
      if ( *(struct _KTHREAD **)(a1 + 72) != KeGetCurrentThread() )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(32785LL);
      v17 = *((_QWORD *)a5 + 5);
      if ( v17 )
        *(_DWORD *)(v17 + 304) |= 1u;
    }
  }
  ThreadPointerData = ApiSetEditionFindThreadPointerData(v10, a3);
  v20 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v21 = *(void **)(ThreadPointerData + 24);
    if ( v21 == a5 )
    {
      if ( *(_DWORD *)(ThreadPointerData + 20) != a4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
      v22 = *(_DWORD *)(v20 + 48);
      if ( (v22 & 1) == 0 && a8 )
        *(_DWORD *)(v20 + 48) = v22 | 1;
      *(_DWORD *)(v20 + 32) = a6;
      *(_QWORD *)(v20 + 40) = CInputDest::GetWindowHandle((CInputDest *)v32);
      *(_DWORD *)(v20 + 48) = v23 & 0xFFFFFFF5;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) != v25 )
      {
        LOBYTE(v24) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v24,
          7,
          114,
          (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      }
      goto LABEL_42;
    }
    CTouchProcessor::UnreferenceMsgData(a1, v21, 4LL);
    *(_QWORD *)(v20 + 24) = 0LL;
  }
  else
  {
    v20 = ApiSetEditionAllocAndLinkThreadPointerData(v10);
  }
  if ( v20 )
  {
    *(_DWORD *)(v20 + 48) &= ~8u;
    *(_WORD *)(v20 + 16) = a3;
    *(_DWORD *)(v20 + 20) = a4;
    *(_QWORD *)(v20 + 24) = a5;
    *(_DWORD *)(v20 + 32) = a6;
    *(_QWORD *)(v20 + 40) = CInputDest::GetWindowHandle((CInputDest *)v32);
    *(_DWORD *)(v20 + 48) = a8 & 1 | v27 & 0xFFFFFFFC;
    CTouchProcessor::ReferenceMsgData(v28, a5, 4LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v26) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v26,
      7,
      115,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  v15 = v20 != 0;
LABEL_42:
  CInputDest::SetEmpty((CInputDest *)v32);
  CInpLockGuard::UnLock((PERESOURCE *)v31, (struct CRefUnRefPointerMsgId *)v30);
  return v15;
}
