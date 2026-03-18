/*
 * XREFs of ?UpdateInteraction@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x180275E10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z @ 0x18000889C (--0-$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ @ 0x1801F1B80 (--1-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x1801F2BA8 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$01@@U2@U2@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$01@@44333333333333333333334@Z @ 0x180274CC0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$01@@U2@U2@U1@.c)
 *     ??$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180274F5C (--$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPE.c)
 *     ?InsertTail@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1802753AC (-InsertTail@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV-$shared_ptr@UTOU.c)
 */

__int64 __fastcall InteractionLatencyTelemetry::CManipulationTelemetryData::UpdateInteraction(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  std::_Ref_count_base *v11; // rbx
  LPVOID v12; // rax
  __int64 v13; // rcx
  std::_Ref_count_base *v14; // rdi
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // r8
  std::_Ref_count_base *v28; // rax
  std::_Ref_count_base *v29; // rsi
  std::_Ref_count_base *v30; // rcx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  _QWORD *v47; // rax
  int inserted; // eax
  LPVOID v49; // rax
  std::_Ref_count_base *v50; // rdi
  int v51; // r9d
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int64 v63; // rax
  _QWORD *v64; // rax
  std::_Ref_count_base *v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned int v71; // [rsp+28h] [rbp-160h]
  int v72; // [rsp+108h] [rbp-80h] BYREF
  std::_Ref_count_base *v73[2]; // [rsp+110h] [rbp-78h] BYREF
  int v74; // [rsp+120h] [rbp-68h] BYREF
  int v75; // [rsp+124h] [rbp-64h] BYREF
  int v76; // [rsp+128h] [rbp-60h] BYREF
  int v77; // [rsp+12Ch] [rbp-5Ch] BYREF
  int v78; // [rsp+130h] [rbp-58h] BYREF
  std::_Ref_count_base *v79[2]; // [rsp+138h] [rbp-50h] BYREF
  __int128 v80; // [rsp+148h] [rbp-40h] BYREF
  __int64 v81; // [rsp+158h] [rbp-30h] BYREF
  __int64 v82; // [rsp+160h] [rbp-28h] BYREF
  __int64 v83; // [rsp+168h] [rbp-20h] BYREF
  __int64 v84; // [rsp+170h] [rbp-18h] BYREF
  __int64 v85; // [rsp+178h] [rbp-10h] BYREF
  __int64 v86; // [rsp+180h] [rbp-8h] BYREF
  __int64 v87; // [rsp+188h] [rbp+0h] BYREF
  __int64 v88; // [rsp+190h] [rbp+8h] BYREF
  __int64 v89; // [rsp+198h] [rbp+10h] BYREF
  __int64 v90; // [rsp+1A0h] [rbp+18h] BYREF
  __int64 v91; // [rsp+1A8h] [rbp+20h] BYREF
  __int64 v92; // [rsp+1B0h] [rbp+28h] BYREF
  __int64 v93; // [rsp+1B8h] [rbp+30h] BYREF
  __int64 v94; // [rsp+1C0h] [rbp+38h] BYREF
  __int64 v95; // [rsp+1C8h] [rbp+40h] BYREF
  __int64 v96; // [rsp+1D0h] [rbp+48h] BYREF
  __int64 v97; // [rsp+1D8h] [rbp+50h] BYREF
  __int64 v98; // [rsp+1E0h] [rbp+58h] BYREF
  __int64 v99; // [rsp+1E8h] [rbp+60h] BYREF
  __int64 v100; // [rsp+1F0h] [rbp+68h] BYREF
  _QWORD v101[2]; // [rsp+1F8h] [rbp+70h] BYREF
  int v102; // [rsp+208h] [rbp+80h]
  char v103; // [rsp+20Ch] [rbp+84h]
  struct _RTL_CRITICAL_SECTION CriticalSection; // [rsp+210h] [rbp+88h] BYREF
  __int128 v105; // [rsp+238h] [rbp+B0h] BYREF
  __int128 v106; // [rsp+248h] [rbp+C0h]
  __int128 v107; // [rsp+258h] [rbp+D0h]
  __int128 v108; // [rsp+268h] [rbp+E0h]
  __int128 v109; // [rsp+278h] [rbp+F0h]
  __int128 v110; // [rsp+288h] [rbp+100h]
  __int128 v111; // [rsp+298h] [rbp+110h]
  __int128 v112; // [rsp+2A8h] [rbp+120h]
  __int128 v113; // [rsp+2B8h] [rbp+130h]
  __int128 v114; // [rsp+2C8h] [rbp+140h]
  __int128 v115; // [rsp+2D8h] [rbp+150h]
  __int128 v116; // [rsp+2E8h] [rbp+160h]
  __int128 v117; // [rsp+2F8h] [rbp+170h]
  __int64 v118; // [rsp+308h] [rbp+180h]
  __int128 v119; // [rsp+318h] [rbp+190h]
  __int128 v120; // [rsp+328h] [rbp+1A0h]
  __int128 v121; // [rsp+338h] [rbp+1B0h]
  __int128 v122; // [rsp+348h] [rbp+1C0h]
  __int128 v123; // [rsp+358h] [rbp+1D0h]
  __int128 v124; // [rsp+368h] [rbp+1E0h]
  __int128 v125; // [rsp+378h] [rbp+1F0h]
  __int128 v126; // [rsp+388h] [rbp+200h]
  __int128 v127; // [rsp+398h] [rbp+210h]
  __int16 v128; // [rsp+3E8h] [rbp+260h] BYREF

  v101[1] = v101;
  v102 = 0;
  v101[0] = v101;
  v103 = 0;
  v8 = 0;
  InitializeCriticalSection(&CriticalSection);
  *(_OWORD *)v73 = 0LL;
  if ( (unsigned int)(a3 - 1) <= 1 )
  {
    v11 = 0LL;
    v72 = *(_DWORD *)(a1 + 216);
    if ( v72 )
    {
      while ( 1 )
      {
        v12 = operator new(0xD8uLL);
        std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::reset<TOUCH_TELEMETRY_UPDATE_INFO>(v73, (__int64)v12);
        v14 = v73[0];
        if ( !v73[0] )
          break;
        memset_0(&v105, 0, 0xD8uLL);
        v15 = v106;
        *(_OWORD *)v14 = v105;
        v16 = v107;
        *((_OWORD *)v14 + 1) = v15;
        v17 = v108;
        *((_OWORD *)v14 + 2) = v16;
        v18 = v109;
        *((_OWORD *)v14 + 3) = v17;
        v19 = v110;
        *((_OWORD *)v14 + 4) = v18;
        v20 = v111;
        *((_OWORD *)v14 + 5) = v19;
        v21 = v112;
        *((_OWORD *)v14 + 6) = v20;
        *((_OWORD *)v14 + 7) = v21;
        v22 = v114;
        *((_OWORD *)v14 + 8) = v113;
        v23 = v115;
        *((_OWORD *)v14 + 9) = v22;
        v24 = v116;
        *((_OWORD *)v14 + 10) = v23;
        v25 = v117;
        v26 = v118;
        *((_OWORD *)v14 + 11) = v24;
        *((_OWORD *)v14 + 12) = v25;
        *((_QWORD *)v14 + 26) = v26;
        CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove(a1 + 200, (__int64 *)v79, v27, &v72);
        v28 = v11;
        v29 = v79[0];
        v30 = v11;
        v11 = v79[1];
        *(_OWORD *)v79 = 0LL;
        if ( v28 )
          std::_Ref_count_base::_Decref(v30);
        *((_DWORD *)v14 + 46) = *(_DWORD *)v29;
        *((_WORD *)v14 + 94) = *((_WORD *)v29 + 90);
        *((_DWORD *)v14 + 49) = *((_DWORD *)v29 + 1);
        *((_DWORD *)v14 + 48) = *((_DWORD *)v29 + 2);
        v31 = *((_OWORD *)v29 + 2);
        v119 = *((_OWORD *)v29 + 1);
        v32 = *((_OWORD *)v29 + 3);
        v120 = v31;
        v33 = *((_OWORD *)v29 + 4);
        v121 = v32;
        v34 = *((_OWORD *)v29 + 5);
        v122 = v33;
        v35 = *((_OWORD *)v29 + 6);
        v123 = v34;
        v36 = *((_OWORD *)v29 + 7);
        v124 = v35;
        v37 = *((_OWORD *)v29 + 8);
        v125 = v36;
        v38 = *((_OWORD *)v29 + 9);
        v126 = v37;
        v127 = v38;
        v39 = v120;
        *(_OWORD *)((char *)v14 + 8) = v119;
        v40 = v121;
        *(_OWORD *)((char *)v14 + 24) = v39;
        v41 = v122;
        *(_OWORD *)((char *)v14 + 40) = v40;
        v42 = v123;
        *(_OWORD *)((char *)v14 + 56) = v41;
        v43 = v124;
        *(_OWORD *)((char *)v14 + 72) = v42;
        v44 = v125;
        *(_OWORD *)((char *)v14 + 88) = v43;
        v45 = v126;
        *(_OWORD *)((char *)v14 + 104) = v44;
        v46 = v127;
        *(_OWORD *)((char *)v14 + 120) = v45;
        *(_OWORD *)((char *)v14 + 136) = v46;
        *((_QWORD *)v14 + 19) = *((_QWORD *)v29 + 21);
        *((_DWORD *)v14 + 52) = *((_DWORD *)v29 + 44);
        v47 = std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(&v80, v73);
        inserted = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::InsertTail((__int64)v101, v47);
        v8 = inserted;
        if ( inserted < 0 )
        {
          v71 = 211;
          goto LABEL_12;
        }
        if ( !v72 )
          goto LABEL_8;
      }
      v71 = 197;
      goto LABEL_14;
    }
LABEL_8:
    if ( a3 == 2 )
    {
      v49 = operator new(0xD8uLL);
      std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::reset<TOUCH_TELEMETRY_UPDATE_INFO>(v73, (__int64)v49);
      v50 = v73[0];
      if ( !v73[0] )
      {
        v71 = 217;
LABEL_14:
        v51 = -2147024882;
        v8 = -2147024882;
LABEL_15:
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v51, v71);
        if ( v11 )
          std::_Ref_count_base::_Decref(v11);
        goto LABEL_28;
      }
      memset_0(&v105, 0, 0xD8uLL);
      v52 = v106;
      *(_OWORD *)v50 = v105;
      v53 = v107;
      *((_OWORD *)v50 + 1) = v52;
      v54 = v108;
      *((_OWORD *)v50 + 2) = v53;
      v55 = v109;
      *((_OWORD *)v50 + 3) = v54;
      v56 = v110;
      *((_OWORD *)v50 + 4) = v55;
      v57 = v111;
      *((_OWORD *)v50 + 5) = v56;
      v58 = v112;
      *((_OWORD *)v50 + 6) = v57;
      *((_OWORD *)v50 + 7) = v58;
      v59 = v114;
      *((_OWORD *)v50 + 8) = v113;
      v60 = v115;
      *((_OWORD *)v50 + 9) = v59;
      v61 = v116;
      *((_OWORD *)v50 + 10) = v60;
      v62 = v117;
      v63 = v118;
      *((_OWORD *)v50 + 11) = v61;
      *((_OWORD *)v50 + 12) = v62;
      *((_QWORD *)v50 + 26) = v63;
      *((_QWORD *)v50 + 19) = a4;
      v64 = std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(&v80, v73);
      inserted = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::InsertTail((__int64)v101, v64);
      v8 = inserted;
      if ( inserted < 0 )
      {
        v71 = 221;
LABEL_12:
        v51 = inserted;
        goto LABEL_15;
      }
    }
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  v72 = v102;
  while ( v72 )
  {
    CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove((__int64)v101, (__int64 *)&v80, v10, &v72);
    v65 = v73[1];
    v73[1] = *((std::_Ref_count_base **)&v80 + 1);
    v66 = v80;
    v80 = 0LL;
    if ( v65 )
      std::_Ref_count_base::_Decref(v65);
    *(_QWORD *)v66 = a2;
    *(_DWORD *)(v66 + 200) = 1;
    QueryPerformanceCounter((LARGE_INTEGER *)(v66 + 160));
    if ( (unsigned int)dword_1803D0EB8 > 5 && tlgKeywordOn((__int64)&dword_1803D0EB8, 2LL) )
    {
      v74 = *(_DWORD *)(v66 + 208);
      v81 = *(_QWORD *)(v66 + 160);
      v82 = *(_QWORD *)(v66 + 152);
      v83 = *(_QWORD *)(v66 + 144);
      v84 = *(_QWORD *)(v66 + 136);
      v85 = *(_QWORD *)(v66 + 128);
      v86 = *(_QWORD *)(v66 + 120);
      v87 = *(_QWORD *)(v66 + 112);
      v88 = *(_QWORD *)(v66 + 104);
      v89 = *(_QWORD *)(v66 + 96);
      v90 = *(_QWORD *)(v66 + 88);
      v91 = *(_QWORD *)(v66 + 80);
      v92 = *(_QWORD *)(v66 + 72);
      v93 = *(_QWORD *)(v66 + 64);
      v94 = *(_QWORD *)(v66 + 56);
      v95 = *(_QWORD *)(v66 + 48);
      v96 = *(_QWORD *)(v66 + 40);
      v97 = *(_QWORD *)(v66 + 32);
      v98 = *(_QWORD *)(v66 + 24);
      v99 = *(_QWORD *)(v66 + 16);
      v100 = *(_QWORD *)(v66 + 8);
      v75 = *(_DWORD *)(v66 + 196);
      v76 = *(_DWORD *)(v66 + 192);
      v128 = *(_WORD *)(v66 + 188);
      v77 = *(_DWORD *)(v66 + 200);
      v78 = *(_DWORD *)(v66 + 184);
      v79[0] = *(std::_Ref_count_base **)v66;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v67,
        byte_18037325B,
        v68,
        v69,
        (__int64)v79,
        (__int64)&v78,
        (__int64)&v77,
        (__int64)&v128,
        (__int64)&v76,
        (__int64)&v75,
        (__int64)&v100,
        (__int64)&v99,
        (__int64)&v98,
        (__int64)&v97,
        (__int64)&v96,
        (__int64)&v95,
        (__int64)&v94,
        (__int64)&v93,
        (__int64)&v92,
        (__int64)&v91,
        (__int64)&v90,
        (__int64)&v89,
        (__int64)&v88,
        (__int64)&v87,
        (__int64)&v86,
        (__int64)&v85,
        (__int64)&v84,
        (__int64)&v83,
        (__int64)&v82,
        (__int64)&v81,
        (__int64)&v74);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 272) + 656LL) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 272) + 656LL),
      v66);
  }
LABEL_28:
  if ( v73[1] )
    std::_Ref_count_base::_Decref(v73[1]);
  CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::~CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>(
    (__int64)v101,
    v9,
    v10);
  return v8;
}
