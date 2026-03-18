/*
 * XREFs of ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C006F05C
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006C024 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0071D64 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01BDDE8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0049A20 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C0053438 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C0054044 (ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069090 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C006F38C (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ApiSetEditionMouseSpeedHitTest @ 0x1C006F3AC (ApiSetEditionMouseSpeedHitTest.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C006F608 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C01944EC (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C01991A4 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4444654444@Z @ 0x1C01BA858 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CMouseProcessor::MouseHitTest(
        __int64 a1,
        __int64 a2,
        struct tagPOINT *a3,
        __int64 a4,
        CMouseProcessor::CMouseEvent *a5,
        unsigned int a6,
        _DWORD *a7)
{
  __int64 v8; // rbx
  CMouseProcessor::CMouseEvent *v10; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  int v15; // r14d
  __int64 v16; // r15
  __int16 v17; // r12
  __int64 (__fastcall ***v18)(_QWORD); // rdx
  unsigned int HitTestContext; // edi
  int v20; // eax
  int *v21; // rdi
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  bool v32; // r15
  int v33; // esi
  __int64 v34; // r14
  _OWORD *v35; // rbx
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 WindowDetails; // rax
  __int128 v58; // xmm1
  HWND WindowHandle; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  HWND v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  int v67; // [rsp+48h] [rbp-D8h]
  __int64 v68; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v69; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-68h] BYREF
  int v72; // [rsp+C0h] [rbp-60h] BYREF
  int v73; // [rsp+C4h] [rbp-5Ch] BYREF
  int v74; // [rsp+C8h] [rbp-58h] BYREF
  int v75; // [rsp+CCh] [rbp-54h] BYREF
  int v76; // [rsp+D0h] [rbp-50h] BYREF
  int v77; // [rsp+D4h] [rbp-4Ch] BYREF
  int v78; // [rsp+D8h] [rbp-48h] BYREF
  int v79; // [rsp+DCh] [rbp-44h] BYREF
  int v80; // [rsp+E0h] [rbp-40h] BYREF
  int v81; // [rsp+E4h] [rbp-3Ch] BYREF
  int v82; // [rsp+E8h] [rbp-38h] BYREF
  int v83; // [rsp+ECh] [rbp-34h] BYREF
  int v84; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v85; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v86; // [rsp+100h] [rbp-20h] BYREF
  __int128 v87; // [rsp+108h] [rbp-18h]
  __int128 v88; // [rsp+118h] [rbp-8h]
  __int64 v89; // [rsp+128h] [rbp+8h]
  __int64 v90; // [rsp+130h] [rbp+10h] BYREF
  __int64 v91; // [rsp+138h] [rbp+18h] BYREF
  __int64 v92; // [rsp+140h] [rbp+20h] BYREF
  __int64 v93; // [rsp+148h] [rbp+28h] BYREF
  __int64 v94; // [rsp+150h] [rbp+30h] BYREF
  __int128 v95; // [rsp+158h] [rbp+38h] BYREF
  __int64 v96; // [rsp+168h] [rbp+48h] BYREF
  __int64 v97; // [rsp+170h] [rbp+50h] BYREF
  __int64 v98; // [rsp+178h] [rbp+58h] BYREF
  __int64 v99; // [rsp+180h] [rbp+60h] BYREF
  _OWORD *v100; // [rsp+188h] [rbp+68h]
  __int64 v101; // [rsp+190h] [rbp+70h] BYREF
  _OWORD v102[7]; // [rsp+1A0h] [rbp+80h] BYREF
  char v103[40]; // [rsp+210h] [rbp+F0h] BYREF
  char v104[120]; // [rsp+238h] [rbp+118h] BYREF
  _OWORD v105[8]; // [rsp+2B0h] [rbp+190h] BYREF
  _OWORD v106[8]; // [rsp+330h] [rbp+210h] BYREF

  v8 = (__int64)*a3;
  v100 = (_OWORD *)a2;
  v10 = a5;
  v70 = (__int64)a5;
  v86 = a4;
  v85 = (__int64)a3;
  v71 = (__int64)a7;
  v69 = v8;
  if ( a7 )
    *a7 = 0;
  if ( (a6 & 1) == 0 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)a5 + 1) + 88LL);
    *(_QWORD *)(a1 + 24) = v13;
    *(_QWORD *)(a1 + 32) = 4LL;
    if ( a6 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, a5, a6, a4);
      v10 = (CMouseProcessor::CMouseEvent *)v70;
    }
    v14 = *((_QWORD *)v10 + 1);
    LODWORD(v68) = 0;
    v15 = *(_DWORD *)(v14 + 80);
    v16 = *(_QWORD *)(v14 + 88);
    v17 = *(_WORD *)(v14 + 30);
    HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(v10);
    v20 = (**v18)(v18);
    v67 = HitTestContext;
    v21 = (int *)v85;
    v22 = (_OWORD *)ApiSetEditionMouseSpeedHitTest(
                      v104,
                      v17,
                      v16,
                      v15,
                      *(_QWORD *)(v14 + 8),
                      v20,
                      v67,
                      (__int64)&v68,
                      v71);
    v23 = v22[1];
    v102[0] = *v22;
    v24 = v22[2];
    v102[1] = v23;
    v25 = v22[3];
    v102[2] = v24;
    v26 = v22[4];
    v102[3] = v25;
    v27 = v22[5];
    v102[4] = v26;
    v28 = v22[6];
    v102[5] = v27;
    v102[6] = v28;
    CInputDest::CInputDest((CInputDest *)v105, (const struct tagINPUTDEST *)v102);
    v32 = (_DWORD)v68 != 0;
    if ( v71 )
      v33 = *(_DWORD *)v71;
    else
      v33 = 0;
    v34 = *(_QWORD *)(*(_QWORD *)(v70 + 8) + 88LL);
    if ( !(unsigned __int8)InputTraceLogging::Enabled(0LL, v29, v30, v31) )
      goto LABEL_9;
    if ( HIDWORD(v105[5]) == 1 )
    {
      v55 = *(_QWORD *)&v105[5];
    }
    else
    {
      v55 = 0LL;
      if ( HIDWORD(v105[5]) == 2 )
      {
        v56 = *(_QWORD *)&v105[5];
LABEL_17:
        WindowDetails = InputTraceLogging::GetWindowDetails(v103, v56, v55);
        v58 = *(_OWORD *)(WindowDetails + 16);
        v87 = *(_OWORD *)WindowDetails;
        v89 = *(_QWORD *)(WindowDetails + 32);
        v88 = v58;
        if ( v32 )
        {
          if ( (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 64LL) )
          {
            WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v105);
            v72 = v21[1];
            v73 = *v21;
            v74 = HIDWORD(v69);
            v90 = *((_QWORD *)&v87 + 1);
            v101 = v87;
            v78 = HIDWORD(v88);
            v76 = HIDWORD(v89);
            v79 = DWORD2(v88);
            v77 = v89;
            v75 = v8;
            v91 = v88;
            v92 = InputTraceLogging::RoutingModeToString(DWORD1(v105[0]), v60, v61, WindowHandle);
            v80 = v33;
            v93 = v62;
            v94 = v34;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (int)&dword_1C0246A70,
              (int)&unk_1C021B544,
              (__int64)&v94,
              (__int64)&v93,
              (__int64)&v80,
              (__int64)&v92,
              (__int64)&v91,
              (__int64)&v79,
              (__int64)&v78,
              (__int64)&v77,
              (__int64)&v76,
              (__int64)&v90,
              (__int64)&v101,
              (__int64)&v75,
              (__int64)&v74,
              (__int64)&v73,
              (__int64)&v72);
          }
        }
        else if ( (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 64LL) )
        {
          v63 = CInputDest::GetWindowHandle((CInputDest *)v105);
          v81 = v21[1];
          v82 = *v21;
          v83 = HIDWORD(v69);
          v95 = v87;
          LODWORD(v69) = HIDWORD(v88);
          LODWORD(v85) = HIDWORD(v89);
          LODWORD(v70) = DWORD2(v88);
          LODWORD(v86) = v89;
          v84 = v8;
          v96 = v88;
          v97 = InputTraceLogging::RoutingModeToString(DWORD1(v105[0]), v64, v65, v63);
          LODWORD(v71) = v33;
          v98 = v66;
          v99 = v34;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (int)&dword_1C0246A70,
            (int)&dword_1C021B455,
            (__int64)&v99,
            (__int64)&v98,
            (__int64)&v71,
            (__int64)&v97,
            (__int64)&v96,
            (__int64)&v70,
            (__int64)&v69,
            (__int64)&v86,
            (__int64)&v85,
            (__int64)&v95 + 8,
            (__int64)&v95,
            (__int64)&v84,
            (__int64)&v83,
            (__int64)&v82,
            (__int64)&v81);
        }
LABEL_9:
        v35 = v100;
        v36 = v105[1];
        *v100 = v105[0];
        v37 = v105[2];
        v35[1] = v36;
        v38 = v105[3];
        v35[2] = v37;
        v39 = v105[4];
        v35[3] = v38;
        v40 = v105[5];
        v35[4] = v39;
        v41 = v105[6];
        v35[5] = v40;
        v35[6] = v41;
        *((_BYTE *)v35 + 112) = 0;
        memset(v105, 0, 0x78uLL);
        CInputDest::SetEmpty((CInputDest *)v105);
        return v35;
      }
    }
    v56 = 0LL;
    goto LABEL_17;
  }
  v43 = CMouseProcessor::CMouseEvent::GetHitTestContext(a5);
  CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
    (CSpatialProcessor *)a1,
    4,
    *a3,
    *(_QWORD *)(*(_QWORD *)(v44 + 8) + 88LL),
    0,
    v43);
  CInputDest::CInputDest((CInputDest *)v106, (const struct CInputDest *)(a1 + 3568));
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3688), 1, 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v47, v48);
  ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint(a3, (__int64)*a3, a4, (__int64)v106);
  v49 = v106[1];
  *(_OWORD *)a2 = v106[0];
  v50 = v106[2];
  *(_OWORD *)(a2 + 16) = v49;
  v51 = v106[3];
  *(_OWORD *)(a2 + 32) = v50;
  v52 = v106[4];
  *(_OWORD *)(a2 + 48) = v51;
  v53 = v106[5];
  *(_OWORD *)(a2 + 64) = v52;
  v54 = v106[6];
  *(_OWORD *)(a2 + 80) = v53;
  *(_OWORD *)(a2 + 96) = v54;
  *(_BYTE *)(a2 + 112) = 0;
  memset(v106, 0, 0x78uLL);
  CInputDest::SetEmpty((CInputDest *)v106);
  return (_OWORD *)a2;
}
