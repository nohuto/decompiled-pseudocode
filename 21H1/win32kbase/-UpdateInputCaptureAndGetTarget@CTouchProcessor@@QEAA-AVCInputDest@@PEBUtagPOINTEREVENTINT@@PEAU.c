/*
 * XREFs of ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAUtagCHitTestState@@PEAGPEAIK@Z @ 0x1C01A35A0
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C01A3024 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C0045728 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C005D1E8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C005F858 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0061864 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006E1C0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0B3C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1600 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1C01966DC (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C01A1F20 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 *     ?EnterGuard@CInpLockGuard@@QEAAXXZ @ 0x1C01A7720 (-EnterGuard@CInpLockGuard@@QEAAXXZ.c)
 *     ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C01A7770 (-LeaveGuard@CInpLockGuard@@QEAAXXZ.c)
 *     ApiSetEditionIsPointerInputRedirected @ 0x1C01CE8A4 (ApiSetEditionIsPointerInputRedirected.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C01CF2EC (ApiSetEditionPointerSpeedHitTest.c)
 *     ApiSetGetPTPShellTarget @ 0x1C01D1584 (ApiSetGetPTPShellTarget.c)
 *     IsGetPTPShellTargetSupported @ 0x1C01FDA80 (IsGetPTPShellTargetSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int *__fastcall CTouchProcessor::UpdateInputCaptureAndGetTarget(
        struct _KTHREAD **a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        _WORD *a7,
        int *a8,
        unsigned int a9)
{
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r12d
  int IsPointerInputRedirected; // r14d
  __int64 v17; // rcx
  int v18; // r14d
  int v19; // eax
  _OWORD *PTPShellTarget; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  int v27; // esi
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  int *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // edx
  CSpatialProcessor *v39; // r9
  int v40; // edx
  __int16 v41; // r8
  int v42; // ecx
  int v43; // ecx
  _WORD *v44; // r9
  int v45; // edx
  __int16 v46; // cx
  bool v48; // [rsp+30h] [rbp-D0h]
  int v49; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v50; // [rsp+38h] [rbp-C8h]
  int v51; // [rsp+3Ch] [rbp-C4h]
  int v52; // [rsp+40h] [rbp-C0h]
  int *v53; // [rsp+48h] [rbp-B8h]
  CInpLockGuard *InputProcessContext; // [rsp+50h] [rbp-B0h]
  CSpatialProcessor *v55; // [rsp+58h] [rbp-A8h]
  _WORD *v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+68h] [rbp-98h]
  __int64 v58; // [rsp+70h] [rbp-90h]
  int v59; // [rsp+78h] [rbp-88h]
  __int64 v60; // [rsp+7Ch] [rbp-84h]
  int v61; // [rsp+84h] [rbp-7Ch]
  _OWORD v62[7]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v63[7]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v64[40]; // [rsp+170h] [rbp+70h] BYREF
  CInpLockGuard *v65; // [rsp+198h] [rbp+98h]
  _BYTE v66[112]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v67; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v68[112]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v69[16]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _QWORD v70[16]; // [rsp+370h] [rbp+270h] BYREF
  _QWORD v71[16]; // [rsp+3F0h] [rbp+2F0h] BYREF
  int v72; // [rsp+4F0h] [rbp+3F0h]

  v56 = a7;
  v53 = a8;
  v55 = (CSpatialProcessor *)a1;
  v50 = a9;
  memset(a2, 0, 0x70uLL);
  v13 = 0;
  *((_BYTE *)a2 + 112) = 0;
  v52 = 0;
  v14 = a5 & 0x10000;
  v72 = a5 & 0x40000;
  v15 = 0;
  IsPointerInputRedirected = 0;
  v51 = v14;
  if ( a1[9] != KeGetCurrentThread() )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
    v13 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      7,
      72,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  *v53 = 0;
  if ( CInputDest::TestWindowFlag((CInputDest *)(a4 + 64), 1152)
    || CInputDest::TestWindowFlag((CInputDest *)(a4 + 64), 896) )
  {
    CInputDest::SetEmpty((CInputDest *)(a4 + 64));
  }
  CInputDest::operator=((__int64)a2, a4 + 64);
  v17 = 0LL;
  if ( *a2 )
  {
    v18 = *(_DWORD *)(a4 + 280);
    v52 = 1;
    v15 = -__CFSHR__(v18, 5);
    IsPointerInputRedirected = -__CFSHR__(v18, 6);
  }
  else
  {
    InputProcessContext = CTouchProcessor::GetInputProcessContext(0LL, *(_QWORD *)(a3 + 24));
    if ( InputProcessContext )
    {
      memset(v68, 0, sizeof(v68));
      IsPointerInputRedirected = ApiSetEditionIsPointerInputRedirected(
                                   InputProcessContext,
                                   *(unsigned int *)(a4 + 56),
                                   v68);
      CInputDest::CInputDest((CInputDest *)v69, (const struct tagINPUTDEST *)v68);
      CInputDest::operator=((__int64)a2, v69);
      CInputDest::SetEmpty((CInputDest *)v69);
      v19 = *a2;
      v15 = IsPointerInputRedirected;
      if ( IsPointerInputRedirected )
      {
        if ( v19 )
          goto LABEL_17;
      }
      else if ( !v19 )
      {
        goto LABEL_17;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
    }
  }
LABEL_17:
  if ( *(_DWORD *)(a4 + 56) != 5 && a6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
  if ( *a2 )
    goto LABEL_37;
  if ( *(_DWORD *)(a3 + 180) && (int)IsGetPTPShellTargetSupported() >= 0 )
  {
    PTPShellTarget = (_OWORD *)ApiSetGetPTPShellTarget(v66);
    v21 = PTPShellTarget[1];
    v62[0] = *PTPShellTarget;
    v22 = PTPShellTarget[2];
    v62[1] = v21;
    v23 = PTPShellTarget[3];
    v62[2] = v22;
    v24 = PTPShellTarget[4];
    v62[3] = v23;
    v25 = PTPShellTarget[5];
    v62[4] = v24;
    v26 = PTPShellTarget[6];
    v62[5] = v25;
    v62[6] = v26;
    CInputDest::CInputDest((CInputDest *)v70, (const struct tagINPUTDEST *)v62);
    CInputDest::operator=((__int64)a2, v70);
    CInputDest::SetEmpty((CInputDest *)v70);
  }
  if ( *a2 )
    goto LABEL_37;
  if ( a6 )
  {
    CInputDest::operator=((__int64)a2, a6);
    if ( (*(_DWORD *)(a6 + 124) & 1) != 0 )
    {
      v15 = 1;
      *v53 = *(_DWORD *)(a6 + 120);
      *(_DWORD *)(a4 + 280) |= 0x40u;
    }
  }
  if ( *a2 )
  {
LABEL_37:
    v35 = (int *)(a3 + 8);
    v38 = *(_DWORD *)(a3 + 8);
    if ( (unsigned int)(v38 - 2) <= 1 )
      CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        v55,
        v38,
        *(struct tagPOINT *)(a3 + 40),
        *(_QWORD *)(a3 + 88),
        *(unsigned __int16 *)(a4 + 32),
        v50);
  }
  else
  {
    v27 = 0;
    if ( *(_DWORD *)(a4 + 56) == 3 && (*(_DWORD *)(a3 + 20) & 4) != 0 )
    {
      v27 = (*(_DWORD *)(a3 + 104) & 1) << 6;
      if ( (*(_DWORD *)(a3 + 104) & 4) != 0 )
        v27 |= 0x80u;
    }
    InputProcessContext = (CSpatialProcessor *)((char *)v55 + 40);
    CInpLockGuard::EnterGuard((CSpatialProcessor *)((char *)v55 + 40));
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v64,
      (CSpatialProcessor *)((char *)v55 + 40),
      0LL);
    v49 = 0;
    v28 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)&v67, a3, v27, v50, (__int64)&v49, (__int64)v53);
    v29 = v28[1];
    v63[0] = *v28;
    v30 = v28[2];
    v63[1] = v29;
    v31 = v28[3];
    v63[2] = v30;
    v32 = v28[4];
    v63[3] = v31;
    v33 = v28[5];
    v63[4] = v32;
    v34 = v28[6];
    v63[5] = v33;
    v63[6] = v34;
    CInputDest::CInputDest((CInputDest *)v71, (const struct tagINPUTDEST *)v63);
    CInputDest::operator=((__int64)a2, v71);
    CInputDest::SetEmpty((CInputDest *)v71);
    v35 = (int *)(a3 + 8);
    InputTraceLogging::Pointer::SpeedHitTest(
      (const union POINTERINFOUNION *)(a3 + 8),
      (const struct CInputDest *)a2,
      *v53,
      v49 != 0);
    v48 = (unsigned int)(a2[1] - 2) <= 1;
    if ( v51 )
    {
      v37 = *((_QWORD *)a2 + 12);
      v61 = 0;
      v57 = v37;
      v58 = *(_QWORD *)(a3 + 24);
      v59 = *v35;
      v60 = *(_QWORD *)(a3 + 40);
      InputExtensibilityCallout::CoreMsgSendMessage(v36, 6);
    }
    CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v65, (struct CRefUnRefPointerMsgId *)v64);
    CInpLockGuard::LeaveGuard(InputProcessContext);
    if ( v48 )
    {
      *(_DWORD *)(a4 + 280) |= 0x40u;
      v15 = 1;
    }
  }
  if ( v51 && *a2 )
  {
    CInputDest::operator=(a4 + 64, (__int64)a2);
    v39 = v55;
    v40 = *(unsigned __int16 *)(a4 + 32);
    v41 = 32;
    v42 = *(_DWORD *)(a4 + 280) ^ (*(_DWORD *)(a4 + 280) ^ (16 * v15)) & 0x10;
    *(_DWORD *)(a4 + 280) = v42 ^ (v42 ^ (32 * IsPointerInputRedirected)) & 0x20;
    v43 = *v35;
    *((_QWORD *)v39 + 3) = *(_QWORD *)(a3 + 88);
    *((_DWORD *)v39 + 8) = v43;
    *((_DWORD *)v39 + 9) = v40;
  }
  else
  {
    if ( v72 && *(_DWORD *)(a4 + 64) )
    {
      CInputDest::SetEmpty((CInputDest *)(a4 + 64));
      *(_DWORD *)(a4 + 280) &= 0xFFFFFFCF;
    }
    v41 = 32;
  }
  v44 = v56;
  HIWORD(v45) = HIWORD(v52);
  LOWORD(v45) = *v56 | (16 * v52);
  *v56 = v45;
  if ( !v15 && (*(_DWORD *)(a4 + 280) & 0x40) == 0 )
    v41 = 0;
  v46 = v45 | v41 | (IsPointerInputRedirected != 0 ? 0x40 : 0);
  *v44 = v46;
  *v44 = v46 | (2 * (*(_DWORD *)(a4 + 280) & 0x40));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v45) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v45,
      7,
      73,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  return a2;
}
