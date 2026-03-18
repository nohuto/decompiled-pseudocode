/*
 * XREFs of ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C00340E0
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00302C4 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0051710 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01BBA70 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00294B0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C0034410 (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ApiSetEditionMouseSpeedHitTest @ 0x1C0034430 (ApiSetEditionMouseSpeedHitTest.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C003468C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00B3868 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C00B46D4 (ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C0191FBC (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C0196C74 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4444654444@Z @ 0x1C01B84E8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v58; // r8
  __int64 v59; // r9
  __int128 v60; // xmm1
  HWND WindowHandle; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  HWND v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  int v69; // [rsp+48h] [rbp-D8h]
  __int64 v70; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v73; // [rsp+B8h] [rbp-68h] BYREF
  int v74; // [rsp+C0h] [rbp-60h] BYREF
  int v75; // [rsp+C4h] [rbp-5Ch] BYREF
  int v76; // [rsp+C8h] [rbp-58h] BYREF
  int v77; // [rsp+CCh] [rbp-54h] BYREF
  int v78; // [rsp+D0h] [rbp-50h] BYREF
  int v79; // [rsp+D4h] [rbp-4Ch] BYREF
  int v80; // [rsp+D8h] [rbp-48h] BYREF
  int v81; // [rsp+DCh] [rbp-44h] BYREF
  int v82; // [rsp+E0h] [rbp-40h] BYREF
  int v83; // [rsp+E4h] [rbp-3Ch] BYREF
  int v84; // [rsp+E8h] [rbp-38h] BYREF
  int v85; // [rsp+ECh] [rbp-34h] BYREF
  int v86; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v87; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v88; // [rsp+100h] [rbp-20h] BYREF
  __int128 v89; // [rsp+108h] [rbp-18h]
  __int128 v90; // [rsp+118h] [rbp-8h]
  __int64 v91; // [rsp+128h] [rbp+8h]
  __int64 v92; // [rsp+130h] [rbp+10h] BYREF
  __int64 v93; // [rsp+138h] [rbp+18h] BYREF
  __int64 v94; // [rsp+140h] [rbp+20h] BYREF
  __int64 v95; // [rsp+148h] [rbp+28h] BYREF
  __int64 v96; // [rsp+150h] [rbp+30h] BYREF
  __int128 v97; // [rsp+158h] [rbp+38h] BYREF
  __int64 v98; // [rsp+168h] [rbp+48h] BYREF
  __int64 v99; // [rsp+170h] [rbp+50h] BYREF
  __int64 v100; // [rsp+178h] [rbp+58h] BYREF
  __int64 v101; // [rsp+180h] [rbp+60h] BYREF
  _OWORD *v102; // [rsp+188h] [rbp+68h]
  __int64 v103; // [rsp+190h] [rbp+70h] BYREF
  _OWORD v104[7]; // [rsp+1A0h] [rbp+80h] BYREF
  char v105[40]; // [rsp+210h] [rbp+F0h] BYREF
  char v106[120]; // [rsp+238h] [rbp+118h] BYREF
  _OWORD v107[8]; // [rsp+2B0h] [rbp+190h] BYREF
  _OWORD v108[8]; // [rsp+330h] [rbp+210h] BYREF

  v8 = (__int64)*a3;
  v102 = (_OWORD *)a2;
  v10 = a5;
  v72 = (__int64)a5;
  v88 = a4;
  v87 = (__int64)a3;
  v73 = (__int64)a7;
  v71 = v8;
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
      v10 = (CMouseProcessor::CMouseEvent *)v72;
    }
    v14 = *((_QWORD *)v10 + 1);
    LODWORD(v70) = 0;
    v15 = *(_DWORD *)(v14 + 80);
    v16 = *(_QWORD *)(v14 + 88);
    v17 = *(_WORD *)(v14 + 30);
    HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(v10);
    v20 = (**v18)(v18);
    v69 = HitTestContext;
    v21 = (int *)v87;
    v22 = (_OWORD *)ApiSetEditionMouseSpeedHitTest(
                      v106,
                      v17,
                      v16,
                      v15,
                      *(_QWORD *)(v14 + 8),
                      v20,
                      v69,
                      (__int64)&v70,
                      v73);
    v23 = v22[1];
    v104[0] = *v22;
    v24 = v22[2];
    v104[1] = v23;
    v25 = v22[3];
    v104[2] = v24;
    v26 = v22[4];
    v104[3] = v25;
    v27 = v22[5];
    v104[4] = v26;
    v28 = v22[6];
    v104[5] = v27;
    v104[6] = v28;
    CInputDest::CInputDest((CInputDest *)v107, (const struct tagINPUTDEST *)v104);
    v32 = (_DWORD)v70 != 0;
    if ( v73 )
      v33 = *(_DWORD *)v73;
    else
      v33 = 0;
    v34 = *(_QWORD *)(*(_QWORD *)(v72 + 8) + 88LL);
    if ( !(unsigned __int8)InputTraceLogging::Enabled(0LL, v29, v30, v31) )
      goto LABEL_9;
    if ( HIDWORD(v107[5]) == 1 )
    {
      v55 = *(_QWORD *)&v107[5];
    }
    else
    {
      v55 = 0LL;
      if ( HIDWORD(v107[5]) == 2 )
      {
        v56 = *(_QWORD *)&v107[5];
LABEL_17:
        WindowDetails = InputTraceLogging::GetWindowDetails(v105, v56, v55);
        v60 = *(_OWORD *)(WindowDetails + 16);
        v89 = *(_OWORD *)WindowDetails;
        v91 = *(_QWORD *)(WindowDetails + 32);
        v90 = v60;
        if ( v32 )
        {
          if ( (unsigned int)dword_1C0244A70 > 4 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 64LL, v58, v59) )
            {
              WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v107);
              v74 = v21[1];
              v75 = *v21;
              v76 = HIDWORD(v71);
              v92 = *((_QWORD *)&v89 + 1);
              v103 = v89;
              v80 = HIDWORD(v90);
              v78 = HIDWORD(v91);
              v81 = DWORD2(v90);
              v79 = v91;
              v77 = v8;
              v93 = v90;
              v94 = InputTraceLogging::RoutingModeToString(DWORD1(v107[0]), v62, v63, WindowHandle);
              v82 = v33;
              v95 = v64;
              v96 = v34;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (int)&dword_1C0244A70,
                (int)&unk_1C02196D5,
                (__int64)&v96,
                (__int64)&v95,
                (__int64)&v82,
                (__int64)&v94,
                (__int64)&v93,
                (__int64)&v81,
                (__int64)&v80,
                (__int64)&v79,
                (__int64)&v78,
                (__int64)&v92,
                (__int64)&v103,
                (__int64)&v77,
                (__int64)&v76,
                (__int64)&v75,
                (__int64)&v74);
            }
          }
        }
        else if ( (unsigned int)dword_1C0244A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 64LL, v58, v59) )
        {
          v65 = CInputDest::GetWindowHandle((CInputDest *)v107);
          v83 = v21[1];
          v84 = *v21;
          v85 = HIDWORD(v71);
          v97 = v89;
          LODWORD(v71) = HIDWORD(v90);
          LODWORD(v87) = HIDWORD(v91);
          LODWORD(v72) = DWORD2(v90);
          LODWORD(v88) = v91;
          v86 = v8;
          v98 = v90;
          v99 = InputTraceLogging::RoutingModeToString(DWORD1(v107[0]), v66, v67, v65);
          LODWORD(v73) = v33;
          v100 = v68;
          v101 = v34;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (int)&dword_1C0244A70,
            (int)&dword_1C02195E6,
            (__int64)&v101,
            (__int64)&v100,
            (__int64)&v73,
            (__int64)&v99,
            (__int64)&v98,
            (__int64)&v72,
            (__int64)&v71,
            (__int64)&v88,
            (__int64)&v87,
            (__int64)&v97 + 8,
            (__int64)&v97,
            (__int64)&v86,
            (__int64)&v85,
            (__int64)&v84,
            (__int64)&v83);
        }
LABEL_9:
        v35 = v102;
        v36 = v107[1];
        *v102 = v107[0];
        v37 = v107[2];
        v35[1] = v36;
        v38 = v107[3];
        v35[2] = v37;
        v39 = v107[4];
        v35[3] = v38;
        v40 = v107[5];
        v35[4] = v39;
        v41 = v107[6];
        v35[5] = v40;
        v35[6] = v41;
        *((_BYTE *)v35 + 112) = 0;
        memset(v107, 0, 0x78uLL);
        CInputDest::SetEmpty((CInputDest *)v107);
        return v35;
      }
    }
    v56 = 0LL;
    goto LABEL_17;
  }
  v43 = CMouseProcessor::CMouseEvent::GetHitTestContext(a5);
  CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
    (CSpatialProcessor *)a1,
    4u,
    *a3,
    *(_QWORD *)(*(_QWORD *)(v44 + 8) + 88LL),
    0,
    v43);
  CInputDest::CInputDest((CInputDest *)v108, (const struct CInputDest *)(a1 + 3568));
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3688), 1, 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v47, v48);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint)(
    a3,
    *a3,
    a4,
    v108);
  v49 = v108[1];
  *(_OWORD *)a2 = v108[0];
  v50 = v108[2];
  *(_OWORD *)(a2 + 16) = v49;
  v51 = v108[3];
  *(_OWORD *)(a2 + 32) = v50;
  v52 = v108[4];
  *(_OWORD *)(a2 + 48) = v51;
  v53 = v108[5];
  *(_OWORD *)(a2 + 64) = v52;
  v54 = v108[6];
  *(_OWORD *)(a2 + 80) = v53;
  *(_OWORD *)(a2 + 96) = v54;
  *(_BYTE *)(a2 + 112) = 0;
  memset(v108, 0, 0x78uLL);
  CInputDest::SetEmpty((CInputDest *)v108);
  return (_OWORD *)a2;
}
