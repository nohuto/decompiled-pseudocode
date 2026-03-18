/*
 * XREFs of ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAUtagCHitTestState@@PEAGPEAIK@Z @ 0x1C019D840
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019D2C4 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0047438 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C0053438 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C006939C (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C006A794 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006EEE0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D13EC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1F20 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1C01909DC (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C019C1C0 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 *     ?EnterGuard@CInpLockGuard@@QEAAXXZ @ 0x1C01A19C0 (-EnterGuard@CInpLockGuard@@QEAAXXZ.c)
 *     ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C01A1A10 (-LeaveGuard@CInpLockGuard@@QEAAXXZ.c)
 *     ApiSetEditionIsPointerInputRedirected @ 0x1C01C8924 (ApiSetEditionIsPointerInputRedirected.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C01C936C (ApiSetEditionPointerSpeedHitTest.c)
 *     ApiSetGetPTPShellTarget @ 0x1C01CB604 (ApiSetGetPTPShellTarget.c)
 *     IsGetPTPShellTargetSupported @ 0x1C01F8050 (IsGetPTPShellTargetSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edx
  __int64 v16; // rcx
  int v17; // r12d
  int IsPointerInputRedirected; // r14d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // r14d
  int v24; // eax
  _OWORD *PTPShellTarget; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  int v32; // esi
  _OWORD *v33; // rax
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  int *v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // edx
  CSpatialProcessor *v44; // r9
  int v45; // edx
  __int16 v46; // r8
  int v47; // ecx
  int v48; // ecx
  _WORD *v49; // r9
  int v50; // edx
  __int16 v51; // cx
  bool v53; // [rsp+30h] [rbp-D0h]
  int v54; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v55; // [rsp+38h] [rbp-C8h]
  int v56; // [rsp+3Ch] [rbp-C4h]
  int v57; // [rsp+40h] [rbp-C0h]
  int *v58; // [rsp+48h] [rbp-B8h]
  CInpLockGuard *InputProcessContext; // [rsp+50h] [rbp-B0h]
  CSpatialProcessor *v60; // [rsp+58h] [rbp-A8h]
  _WORD *v61; // [rsp+60h] [rbp-A0h]
  __int64 v62; // [rsp+68h] [rbp-98h]
  __int64 v63; // [rsp+70h] [rbp-90h]
  int v64; // [rsp+78h] [rbp-88h]
  __int64 v65; // [rsp+7Ch] [rbp-84h]
  int v66; // [rsp+84h] [rbp-7Ch]
  _OWORD v67[7]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v68[7]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v69[40]; // [rsp+170h] [rbp+70h] BYREF
  CInpLockGuard *v70; // [rsp+198h] [rbp+98h]
  _BYTE v71[112]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v72; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v73[112]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v74[16]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _QWORD v75[16]; // [rsp+370h] [rbp+270h] BYREF
  _QWORD v76[16]; // [rsp+3F0h] [rbp+2F0h] BYREF
  int v77; // [rsp+4F0h] [rbp+3F0h]

  v61 = a7;
  v58 = a8;
  v60 = (CSpatialProcessor *)a1;
  v55 = a9;
  memset(a2, 0, 0x70uLL);
  v15 = 0;
  *((_BYTE *)a2 + 112) = 0;
  v57 = 0;
  v16 = a5 & 0x10000;
  v77 = a5 & 0x40000;
  v17 = 0;
  IsPointerInputRedirected = 0;
  v56 = v16;
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
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  *v58 = 0;
  if ( CInputDest::TestWindowFlag((CInputDest *)(a4 + 64), 1152)
    || CInputDest::TestWindowFlag((CInputDest *)(a4 + 64), 896) )
  {
    CInputDest::SetEmpty((CInputDest *)(a4 + 64));
  }
  CInputDest::operator=((__int64)a2, a4 + 64);
  v22 = 0LL;
  if ( *a2 )
  {
    v23 = *(_DWORD *)(a4 + 280);
    v57 = 1;
    v17 = -__CFSHR__(v23, 5);
    IsPointerInputRedirected = -__CFSHR__(v23, 6);
  }
  else
  {
    InputProcessContext = CTouchProcessor::GetInputProcessContext(0LL, *(_QWORD *)(a3 + 24));
    if ( InputProcessContext )
    {
      memset(v73, 0, sizeof(v73));
      IsPointerInputRedirected = ApiSetEditionIsPointerInputRedirected(
                                   InputProcessContext,
                                   *(unsigned int *)(a4 + 56),
                                   v73);
      CInputDest::CInputDest((CInputDest *)v74, (const struct tagINPUTDEST *)v73);
      CInputDest::operator=((__int64)a2, v74);
      CInputDest::SetEmpty((CInputDest *)v74);
      v24 = *a2;
      v17 = IsPointerInputRedirected;
      if ( IsPointerInputRedirected )
      {
        if ( v24 )
          goto LABEL_17;
      }
      else if ( !v24 )
      {
        goto LABEL_17;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v19, v20, v21);
    }
  }
LABEL_17:
  if ( *(_DWORD *)(a4 + 56) != 5 && a6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v19, v20, v21);
  if ( *a2 )
    goto LABEL_37;
  if ( *(_DWORD *)(a3 + 180) && (int)IsGetPTPShellTargetSupported() >= 0 )
  {
    PTPShellTarget = (_OWORD *)ApiSetGetPTPShellTarget(v71);
    v26 = PTPShellTarget[1];
    v67[0] = *PTPShellTarget;
    v27 = PTPShellTarget[2];
    v67[1] = v26;
    v28 = PTPShellTarget[3];
    v67[2] = v27;
    v29 = PTPShellTarget[4];
    v67[3] = v28;
    v30 = PTPShellTarget[5];
    v67[4] = v29;
    v31 = PTPShellTarget[6];
    v67[5] = v30;
    v67[6] = v31;
    CInputDest::CInputDest((CInputDest *)v75, (const struct tagINPUTDEST *)v67);
    CInputDest::operator=((__int64)a2, v75);
    CInputDest::SetEmpty((CInputDest *)v75);
  }
  if ( *a2 )
    goto LABEL_37;
  if ( a6 )
  {
    CInputDest::operator=((__int64)a2, a6);
    if ( (*(_DWORD *)(a6 + 124) & 1) != 0 )
    {
      v17 = 1;
      *v58 = *(_DWORD *)(a6 + 120);
      *(_DWORD *)(a4 + 280) |= 0x40u;
    }
  }
  if ( *a2 )
  {
LABEL_37:
    v40 = (int *)(a3 + 8);
    v43 = *(_DWORD *)(a3 + 8);
    if ( (unsigned int)(v43 - 2) <= 1 )
      CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        v60,
        v43,
        *(struct tagPOINT *)(a3 + 40),
        *(_QWORD *)(a3 + 88),
        *(unsigned __int16 *)(a4 + 32),
        v55);
  }
  else
  {
    v32 = 0;
    if ( *(_DWORD *)(a4 + 56) == 3 && (*(_DWORD *)(a3 + 20) & 4) != 0 )
    {
      v32 = (*(_DWORD *)(a3 + 104) & 1) << 6;
      if ( (*(_DWORD *)(a3 + 104) & 4) != 0 )
        v32 |= 0x80u;
    }
    InputProcessContext = (CSpatialProcessor *)((char *)v60 + 40);
    CInpLockGuard::EnterGuard((CSpatialProcessor *)((char *)v60 + 40));
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v69,
      (CSpatialProcessor *)((char *)v60 + 40),
      0LL);
    v54 = 0;
    v33 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)&v72, a3, v32, v55, (__int64)&v54, (__int64)v58);
    v34 = v33[1];
    v68[0] = *v33;
    v35 = v33[2];
    v68[1] = v34;
    v36 = v33[3];
    v68[2] = v35;
    v37 = v33[4];
    v68[3] = v36;
    v38 = v33[5];
    v68[4] = v37;
    v39 = v33[6];
    v68[5] = v38;
    v68[6] = v39;
    CInputDest::CInputDest((CInputDest *)v76, (const struct tagINPUTDEST *)v68);
    CInputDest::operator=((__int64)a2, v76);
    CInputDest::SetEmpty((CInputDest *)v76);
    v40 = (int *)(a3 + 8);
    InputTraceLogging::Pointer::SpeedHitTest(
      (const union POINTERINFOUNION *)(a3 + 8),
      (const struct CInputDest *)a2,
      *v58,
      v54 != 0);
    v53 = (unsigned int)(a2[1] - 2) <= 1;
    if ( v56 )
    {
      v42 = *((_QWORD *)a2 + 12);
      v66 = 0;
      v62 = v42;
      v63 = *(_QWORD *)(a3 + 24);
      v64 = *v40;
      v65 = *(_QWORD *)(a3 + 40);
      InputExtensibilityCallout::CoreMsgSendMessage(v41, 6);
    }
    CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v70, (struct CRefUnRefPointerMsgId *)v69);
    CInpLockGuard::LeaveGuard(InputProcessContext);
    if ( v53 )
    {
      *(_DWORD *)(a4 + 280) |= 0x40u;
      v17 = 1;
    }
  }
  if ( v56 && *a2 )
  {
    CInputDest::operator=(a4 + 64, (__int64)a2);
    v44 = v60;
    v45 = *(unsigned __int16 *)(a4 + 32);
    v46 = 32;
    v47 = *(_DWORD *)(a4 + 280) ^ (*(_DWORD *)(a4 + 280) ^ (16 * v17)) & 0x10;
    *(_DWORD *)(a4 + 280) = v47 ^ (v47 ^ (32 * IsPointerInputRedirected)) & 0x20;
    v48 = *v40;
    *((_QWORD *)v44 + 3) = *(_QWORD *)(a3 + 88);
    *((_DWORD *)v44 + 8) = v48;
    *((_DWORD *)v44 + 9) = v45;
  }
  else
  {
    if ( v77 && *(_DWORD *)(a4 + 64) )
    {
      CInputDest::SetEmpty((CInputDest *)(a4 + 64));
      *(_DWORD *)(a4 + 280) &= 0xFFFFFFCF;
    }
    v46 = 32;
  }
  v49 = v61;
  HIWORD(v50) = HIWORD(v57);
  LOWORD(v50) = *v61 | (16 * v57);
  *v61 = v50;
  if ( !v17 && (*(_DWORD *)(a4 + 280) & 0x40) == 0 )
    v46 = 0;
  v51 = v50 | v46 | (IsPointerInputRedirected != 0 ? 0x40 : 0);
  *v49 = v51;
  *v49 = v51 | (2 * (*(_DWORD *)(a4 + 280) & 0x40));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v50) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v50,
      7,
      73,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  return a2;
}
