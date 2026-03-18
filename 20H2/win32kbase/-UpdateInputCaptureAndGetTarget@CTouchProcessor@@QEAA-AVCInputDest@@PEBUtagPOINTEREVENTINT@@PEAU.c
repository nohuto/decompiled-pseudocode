/*
 * XREFs of ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAUtagCHitTestState@@PEAGPEAIK@Z @ 0x1C019B340
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019ADC4 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C002DB04 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0033F64 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C00A6F80 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00B3868 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12DC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1C018E4BC (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C0199CC0 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 *     ?EnterGuard@CInpLockGuard@@QEAAXXZ @ 0x1C019F620 (-EnterGuard@CInpLockGuard@@QEAAXXZ.c)
 *     ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C019F670 (-LeaveGuard@CInpLockGuard@@QEAAXXZ.c)
 *     ApiSetEditionIsPointerInputRedirected @ 0x1C01C65A4 (ApiSetEditionIsPointerInputRedirected.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C01C6FEC (ApiSetEditionPointerSpeedHitTest.c)
 *     ApiSetGetPTPShellTarget @ 0x1C01C9284 (ApiSetGetPTPShellTarget.c)
 *     IsGetPTPShellTargetSupported @ 0x1C01F6720 (IsGetPTPShellTargetSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int *__fastcall CTouchProcessor::UpdateInputCaptureAndGetTarget(
        struct _KTHREAD **a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        _WORD *a7,
        _DWORD *a8,
        unsigned int a9)
{
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edx
  __int64 v16; // rcx
  int v17; // r12d
  int IsPointerInputRedirected; // r14d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // r14d
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  _OWORD *PTPShellTarget; // rax
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // esi
  _OWORD *v42; // rax
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  int *v52; // rsi
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  CSpatialProcessor *v57; // r9
  int v58; // edx
  __int16 v59; // r8
  int v60; // ecx
  int v61; // ecx
  _WORD *v62; // r9
  int v63; // edx
  __int16 v64; // cx
  bool v66; // [rsp+30h] [rbp-D0h]
  int v67; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v68; // [rsp+38h] [rbp-C8h]
  int v69; // [rsp+3Ch] [rbp-C4h]
  int v70; // [rsp+40h] [rbp-C0h]
  _DWORD *v71; // [rsp+48h] [rbp-B8h]
  CInpLockGuard *InputProcessContext; // [rsp+50h] [rbp-B0h]
  CSpatialProcessor *v73; // [rsp+58h] [rbp-A8h]
  _WORD *v74; // [rsp+60h] [rbp-A0h]
  __int64 v75; // [rsp+68h] [rbp-98h]
  __int64 v76; // [rsp+70h] [rbp-90h]
  int v77; // [rsp+78h] [rbp-88h]
  __int64 v78; // [rsp+7Ch] [rbp-84h]
  int v79; // [rsp+84h] [rbp-7Ch]
  _OWORD v80[7]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v81[7]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v82[40]; // [rsp+170h] [rbp+70h] BYREF
  CInpLockGuard *v83; // [rsp+198h] [rbp+98h]
  _BYTE v84[112]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v85; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v86[112]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v87[16]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _QWORD v88[16]; // [rsp+370h] [rbp+270h] BYREF
  _QWORD v89[16]; // [rsp+3F0h] [rbp+2F0h] BYREF
  int v90; // [rsp+4F0h] [rbp+3F0h]

  v74 = a7;
  v71 = a8;
  v73 = (CSpatialProcessor *)a1;
  v68 = a9;
  memset(a2, 0, 0x70uLL);
  v15 = 0;
  *((_BYTE *)a2 + 112) = 0;
  v70 = 0;
  v16 = a5 & 0x10000;
  v90 = a5 & 0x40000;
  v17 = 0;
  IsPointerInputRedirected = 0;
  v69 = v16;
  if ( a1[9] != KeGetCurrentThread() )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, 0LL, v13, v14);
    v15 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      7,
      72,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  *v71 = 0;
  if ( CInputDest::TestWindowFlag((CInputDest *)(a4 + 64), 1152)
    || CInputDest::TestWindowFlag((CInputDest *)(a4 + 64), 896) )
  {
    CInputDest::SetEmpty((CInputDest *)(a4 + 64), v19, v20, v21);
  }
  CInputDest::operator=((__int64)a2, a4 + 64, v20, v21);
  v25 = 0LL;
  if ( *a2 )
  {
    v26 = *(_DWORD *)(a4 + 280);
    v70 = 1;
    v17 = -__CFSHR__(v26, 5);
    IsPointerInputRedirected = -__CFSHR__(v26, 6);
  }
  else
  {
    InputProcessContext = CTouchProcessor::GetInputProcessContext(0LL, *(_QWORD *)(a3 + 24));
    if ( InputProcessContext )
    {
      memset(v86, 0, sizeof(v86));
      IsPointerInputRedirected = ApiSetEditionIsPointerInputRedirected(
                                   InputProcessContext,
                                   *(unsigned int *)(a4 + 56),
                                   v86);
      CInputDest::CInputDest((CInputDest *)v87, (const struct tagINPUTDEST *)v86);
      CInputDest::operator=((__int64)a2, v87);
      CInputDest::SetEmpty((CInputDest *)v87, v27, v28, v29);
      v30 = *a2;
      v17 = IsPointerInputRedirected;
      if ( IsPointerInputRedirected )
      {
        if ( v30 )
          goto LABEL_17;
      }
      else if ( !v30 )
      {
        goto LABEL_17;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v22, v23, v24);
    }
  }
LABEL_17:
  if ( *(_DWORD *)(a4 + 56) != 5 && a6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v22, v23, v24);
  if ( *a2 )
    goto LABEL_37;
  if ( *(_DWORD *)(a3 + 180) && (int)IsGetPTPShellTargetSupported() >= 0 )
  {
    PTPShellTarget = (_OWORD *)ApiSetGetPTPShellTarget(v84);
    v32 = PTPShellTarget[1];
    v80[0] = *PTPShellTarget;
    v33 = PTPShellTarget[2];
    v80[1] = v32;
    v34 = PTPShellTarget[3];
    v80[2] = v33;
    v35 = PTPShellTarget[4];
    v80[3] = v34;
    v36 = PTPShellTarget[5];
    v80[4] = v35;
    v37 = PTPShellTarget[6];
    v80[5] = v36;
    v80[6] = v37;
    CInputDest::CInputDest((CInputDest *)v88, (const struct tagINPUTDEST *)v80);
    CInputDest::operator=((__int64)a2, v88);
    CInputDest::SetEmpty((CInputDest *)v88, v38, v39, v40);
  }
  if ( *a2 )
    goto LABEL_37;
  if ( a6 )
  {
    CInputDest::operator=((__int64)a2, a6, v23, v24);
    if ( (*(_DWORD *)(a6 + 124) & 1) != 0 )
    {
      v17 = 1;
      *v71 = *(_DWORD *)(a6 + 120);
      *(_DWORD *)(a4 + 280) |= 0x40u;
    }
  }
  if ( *a2 )
  {
LABEL_37:
    v52 = (int *)(a3 + 8);
    v56 = *(unsigned int *)(a3 + 8);
    if ( (unsigned int)(v56 - 2) <= 1 )
      CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        v73,
        v56,
        *(struct tagPOINT *)(a3 + 40),
        *(_QWORD *)(a3 + 88),
        *(unsigned __int16 *)(a4 + 32),
        v68);
  }
  else
  {
    v41 = 0;
    if ( *(_DWORD *)(a4 + 56) == 3 && (*(_DWORD *)(a3 + 20) & 4) != 0 )
    {
      v41 = (*(_DWORD *)(a3 + 104) & 1) << 6;
      if ( (*(_DWORD *)(a3 + 104) & 4) != 0 )
        v41 |= 0x80u;
    }
    InputProcessContext = (CSpatialProcessor *)((char *)v73 + 40);
    CInpLockGuard::EnterGuard((CSpatialProcessor *)((char *)v73 + 40));
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v82,
      (CSpatialProcessor *)((char *)v73 + 40),
      0LL);
    v67 = 0;
    v42 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)&v85, a3, v41, v68, (__int64)&v67, (__int64)v71);
    v43 = v42[1];
    v81[0] = *v42;
    v44 = v42[2];
    v81[1] = v43;
    v45 = v42[3];
    v81[2] = v44;
    v46 = v42[4];
    v81[3] = v45;
    v47 = v42[5];
    v81[4] = v46;
    v48 = v42[6];
    v81[5] = v47;
    v81[6] = v48;
    CInputDest::CInputDest((CInputDest *)v89, (const struct tagINPUTDEST *)v81);
    CInputDest::operator=((__int64)a2, v89);
    CInputDest::SetEmpty((CInputDest *)v89, v49, v50, v51);
    v52 = (int *)(a3 + 8);
    LOBYTE(v53) = v67 != 0;
    InputTraceLogging::Pointer::SpeedHitTest(
      (const union POINTERINFOUNION *)(a3 + 8),
      (const struct CInputDest *)a2,
      (unsigned int)*v71,
      v53);
    v66 = (unsigned int)(a2[1] - 2) <= 1;
    if ( v69 )
    {
      v55 = *((_QWORD *)a2 + 12);
      v79 = 0;
      v75 = v55;
      v76 = *(_QWORD *)(a3 + 24);
      v77 = *v52;
      v78 = *(_QWORD *)(a3 + 40);
      InputExtensibilityCallout::CoreMsgSendMessage(v54, 6);
    }
    CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v83, (struct CRefUnRefPointerMsgId *)v82);
    CInpLockGuard::LeaveGuard(InputProcessContext);
    if ( v66 )
    {
      *(_DWORD *)(a4 + 280) |= 0x40u;
      v17 = 1;
    }
  }
  if ( v69 && *a2 )
  {
    CInputDest::operator=(a4 + 64, (__int64)a2, v23, v24);
    v57 = v73;
    v58 = *(unsigned __int16 *)(a4 + 32);
    v59 = 32;
    v60 = *(_DWORD *)(a4 + 280) ^ (*(_DWORD *)(a4 + 280) ^ (16 * v17)) & 0x10;
    *(_DWORD *)(a4 + 280) = v60 ^ (v60 ^ (32 * IsPointerInputRedirected)) & 0x20;
    v61 = *v52;
    *((_QWORD *)v57 + 3) = *(_QWORD *)(a3 + 88);
    *((_DWORD *)v57 + 8) = v61;
    *((_DWORD *)v57 + 9) = v58;
  }
  else
  {
    if ( v90 && *(_DWORD *)(a4 + 64) )
    {
      CInputDest::SetEmpty((CInputDest *)(a4 + 64), v56, v23, v24);
      *(_DWORD *)(a4 + 280) &= 0xFFFFFFCF;
    }
    v59 = 32;
  }
  v62 = v74;
  HIWORD(v63) = HIWORD(v70);
  LOWORD(v63) = *v74 | (16 * v70);
  *v74 = v63;
  if ( !v17 && (*(_DWORD *)(a4 + 280) & 0x40) == 0 )
    v59 = 0;
  v64 = v63 | v59 | (IsPointerInputRedirected != 0 ? 0x40 : 0);
  *v62 = v64;
  *v62 = v64 | (2 * (*(_DWORD *)(a4 + 280) & 0x40));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v63) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v63,
      7,
      73,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  return a2;
}
