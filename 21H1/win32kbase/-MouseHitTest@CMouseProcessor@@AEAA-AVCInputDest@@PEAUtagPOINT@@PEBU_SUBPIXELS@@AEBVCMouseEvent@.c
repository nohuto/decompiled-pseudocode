/*
 * XREFs of ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C006E240
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0066094 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C3B64 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C0045728 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C0046404 (ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C005D3F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C006DF40 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ApiSetEditionMouseSpeedHitTest @ 0x1C006DF64 (ApiSetEditionMouseSpeedHitTest.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C006E570 (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C019A1EC (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C019EE94 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4444654444@Z @ 0x1C01C05B8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CMouseProcessor::MouseHitTest(
        __int64 a1,
        __int64 a2,
        struct tagPOINT *a3,
        __int64 a4,
        CMouseProcessor::CMouseEvent *a5,
        int a6,
        _DWORD *a7)
{
  __int64 v8; // rbx
  CMouseProcessor::CMouseEvent *v10; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  int v15; // r14d
  __int64 v16; // r15
  __int16 v17; // r12
  unsigned __int16 v18; // r13
  __int64 (__fastcall ***v19)(_QWORD); // rdx
  unsigned int HitTestContext; // edi
  int v21; // eax
  int *v22; // rdi
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  bool v30; // r15
  int v31; // esi
  __int64 v32; // r14
  _OWORD *v33; // rbx
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  unsigned int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 WindowDetails; // rax
  __int128 v53; // xmm1
  __int64 v54; // r9
  __int64 v55; // r9
  int v56; // [rsp+48h] [rbp-D8h]
  __int64 v57; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-68h] BYREF
  int v61; // [rsp+C0h] [rbp-60h] BYREF
  int v62; // [rsp+C4h] [rbp-5Ch] BYREF
  int v63; // [rsp+C8h] [rbp-58h] BYREF
  int v64; // [rsp+CCh] [rbp-54h] BYREF
  int v65; // [rsp+D0h] [rbp-50h] BYREF
  int v66; // [rsp+D4h] [rbp-4Ch] BYREF
  int v67; // [rsp+D8h] [rbp-48h] BYREF
  int v68; // [rsp+DCh] [rbp-44h] BYREF
  int v69; // [rsp+E0h] [rbp-40h] BYREF
  int v70; // [rsp+E4h] [rbp-3Ch] BYREF
  int v71; // [rsp+E8h] [rbp-38h] BYREF
  int v72; // [rsp+ECh] [rbp-34h] BYREF
  int v73; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v74; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v75; // [rsp+100h] [rbp-20h] BYREF
  __int128 v76; // [rsp+108h] [rbp-18h]
  __int128 v77; // [rsp+118h] [rbp-8h]
  __int64 v78; // [rsp+128h] [rbp+8h]
  __int64 v79; // [rsp+130h] [rbp+10h] BYREF
  __int64 v80; // [rsp+138h] [rbp+18h] BYREF
  __int64 v81; // [rsp+140h] [rbp+20h] BYREF
  __int64 v82; // [rsp+148h] [rbp+28h] BYREF
  __int64 v83; // [rsp+150h] [rbp+30h] BYREF
  __int128 v84; // [rsp+158h] [rbp+38h] BYREF
  __int64 v85; // [rsp+168h] [rbp+48h] BYREF
  __int64 v86; // [rsp+170h] [rbp+50h] BYREF
  __int64 v87; // [rsp+178h] [rbp+58h] BYREF
  __int64 v88; // [rsp+180h] [rbp+60h] BYREF
  _OWORD *v89; // [rsp+188h] [rbp+68h]
  __int64 v90; // [rsp+190h] [rbp+70h] BYREF
  _OWORD v91[7]; // [rsp+1A0h] [rbp+80h] BYREF
  char v92[40]; // [rsp+210h] [rbp+F0h] BYREF
  __int128 v93[7]; // [rsp+238h] [rbp+118h] BYREF
  _OWORD v94[8]; // [rsp+2B0h] [rbp+190h] BYREF
  _OWORD v95[8]; // [rsp+330h] [rbp+210h] BYREF

  v8 = (__int64)*a3;
  v89 = (_OWORD *)a2;
  v10 = a5;
  v59 = (__int64)a5;
  v75 = a4;
  v74 = (__int64)a3;
  v60 = (__int64)a7;
  v58 = v8;
  if ( a7 )
    *a7 = 0;
  if ( (a6 & 1) == 0 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)a5 + 1) + 88LL);
    *(_QWORD *)(a1 + 24) = v13;
    *(_QWORD *)(a1 + 32) = 4LL;
    if ( a6 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
      v10 = (CMouseProcessor::CMouseEvent *)v59;
    }
    v14 = *((_QWORD *)v10 + 1);
    LODWORD(v57) = 0;
    v15 = *(_DWORD *)(v14 + 80);
    v16 = *(_QWORD *)(v14 + 88);
    v17 = *(_WORD *)(v14 + 30);
    v18 = *(_WORD *)(v14 + 28);
    HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(v10);
    v21 = (**v19)(v19);
    v56 = HitTestContext;
    v22 = (int *)v74;
    v23 = ApiSetEditionMouseSpeedHitTest(v93, v74, v75, v18, v17, v16, v15, *(_QWORD *)(v14 + 8), v21, v56, &v57, v60);
    v24 = v23[1];
    v91[0] = *v23;
    v25 = v23[2];
    v91[1] = v24;
    v26 = v23[3];
    v91[2] = v25;
    v27 = v23[4];
    v91[3] = v26;
    v28 = v23[5];
    v91[4] = v27;
    v29 = v23[6];
    v91[5] = v28;
    v91[6] = v29;
    CInputDest::CInputDest((CInputDest *)v94, (const struct tagINPUTDEST *)v91);
    v30 = (_DWORD)v57 != 0;
    if ( v60 )
      v31 = *(_DWORD *)v60;
    else
      v31 = 0;
    v32 = *(_QWORD *)(*(_QWORD *)(v59 + 8) + 88LL);
    if ( !InputTraceLogging::Enabled(0) )
      goto LABEL_9;
    if ( HIDWORD(v94[5]) == 1 )
    {
      v50 = *(_QWORD *)&v94[5];
    }
    else
    {
      v50 = 0LL;
      if ( HIDWORD(v94[5]) == 2 )
      {
        v51 = *(_QWORD *)&v94[5];
LABEL_17:
        WindowDetails = InputTraceLogging::GetWindowDetails(v92, v51, v50);
        v53 = *(_OWORD *)(WindowDetails + 16);
        v76 = *(_OWORD *)WindowDetails;
        v78 = *(_QWORD *)(WindowDetails + 32);
        v77 = v53;
        if ( v30 )
        {
          if ( (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 64LL) )
          {
            CInputDest::GetWindowHandle((CInputDest *)v94);
            v61 = v22[1];
            v62 = *v22;
            v63 = HIDWORD(v58);
            v79 = *((_QWORD *)&v76 + 1);
            v90 = v76;
            v67 = HIDWORD(v77);
            v65 = HIDWORD(v78);
            v68 = DWORD2(v77);
            v66 = v78;
            v64 = v8;
            v80 = v77;
            v81 = InputTraceLogging::RoutingModeToString(DWORD1(v94[0]));
            v69 = v31;
            v82 = v54;
            v83 = v32;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (int)&dword_1C024C960,
              (int)&unk_1C0220FC5,
              (__int64)&v83,
              (__int64)&v82,
              (__int64)&v69,
              (__int64)&v81,
              (__int64)&v80,
              (__int64)&v68,
              (__int64)&v67,
              (__int64)&v66,
              (__int64)&v65,
              (__int64)&v79,
              (__int64)&v90,
              (__int64)&v64,
              (__int64)&v63,
              (__int64)&v62,
              (__int64)&v61);
          }
        }
        else if ( (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 64LL) )
        {
          CInputDest::GetWindowHandle((CInputDest *)v94);
          v70 = v22[1];
          v71 = *v22;
          v72 = HIDWORD(v58);
          v84 = v76;
          LODWORD(v58) = HIDWORD(v77);
          LODWORD(v74) = HIDWORD(v78);
          LODWORD(v59) = DWORD2(v77);
          LODWORD(v75) = v78;
          v73 = v8;
          v85 = v77;
          v86 = InputTraceLogging::RoutingModeToString(DWORD1(v94[0]));
          LODWORD(v60) = v31;
          v87 = v55;
          v88 = v32;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (int)&dword_1C024C960,
            (int)&dword_1C02210AD,
            (__int64)&v88,
            (__int64)&v87,
            (__int64)&v60,
            (__int64)&v86,
            (__int64)&v85,
            (__int64)&v59,
            (__int64)&v58,
            (__int64)&v75,
            (__int64)&v74,
            (__int64)&v84 + 8,
            (__int64)&v84,
            (__int64)&v73,
            (__int64)&v72,
            (__int64)&v71,
            (__int64)&v70);
        }
LABEL_9:
        v33 = v89;
        v34 = v94[1];
        *v89 = v94[0];
        v35 = v94[2];
        v33[1] = v34;
        v36 = v94[3];
        v33[2] = v35;
        v37 = v94[4];
        v33[3] = v36;
        v38 = v94[5];
        v33[4] = v37;
        v39 = v94[6];
        v33[5] = v38;
        v33[6] = v39;
        *((_BYTE *)v33 + 112) = 0;
        memset(v94, 0, 0x78uLL);
        CInputDest::SetEmpty((CInputDest *)v94);
        return v33;
      }
    }
    v51 = 0LL;
    goto LABEL_17;
  }
  v41 = CMouseProcessor::CMouseEvent::GetHitTestContext(a5);
  CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
    (CSpatialProcessor *)a1,
    4,
    *a3,
    *(_QWORD *)(*(_QWORD *)(v42 + 8) + 88LL),
    0,
    v41);
  CInputDest::CInputDest((CInputDest *)v95, (const struct CInputDest *)(a1 + 3640));
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3760), 1, 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v43);
  ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint(a3, (__int64)*a3, a4, (__int64)v95);
  v44 = v95[1];
  *(_OWORD *)a2 = v95[0];
  v45 = v95[2];
  *(_OWORD *)(a2 + 16) = v44;
  v46 = v95[3];
  *(_OWORD *)(a2 + 32) = v45;
  v47 = v95[4];
  *(_OWORD *)(a2 + 48) = v46;
  v48 = v95[5];
  *(_OWORD *)(a2 + 64) = v47;
  v49 = v95[6];
  *(_OWORD *)(a2 + 80) = v48;
  *(_OWORD *)(a2 + 96) = v49;
  *(_BYTE *)(a2 + 112) = 0;
  memset(v95, 0, 0x78uLL);
  CInputDest::SetEmpty((CInputDest *)v95);
  return (_OWORD *)a2;
}
