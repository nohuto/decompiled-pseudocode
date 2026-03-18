/*
 * XREFs of ?UpdateOnRenderThread@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJAEBUManipulationThreadTelemetryData@@@Z @ 0x180276520
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z @ 0x18000889C (--0-$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@443333333333333333333344@Z @ 0x180274A3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@U1@U1@U1@_ea_180274A3C.c)
 *     ?Insert@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1802752A8 (-Insert@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV-$shared_ptr@UTOUCH.c)
 */

__int64 __fastcall InteractionLatencyTelemetry::CManipulationTelemetryData::UpdateOnRenderThread(
        LARGE_INTEGER *this,
        const struct ManipulationThreadTelemetryData *a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  int v6; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm1
  __int128 v35; // xmm1
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm1
  __int128 v40; // xmm1
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm0
  __int128 v62; // xmm0
  __int128 v63; // xmm0
  __int128 v64; // xmm0
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm1
  __int128 v68; // xmm1
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm0
  __int128 v89; // xmm0
  __int128 v90; // xmm0
  __int128 v91; // xmm0
  __int128 v92; // xmm0
  __int128 v93; // xmm0
  __int128 v94; // xmm0
  __int128 v95; // xmm1
  __int128 v96; // xmm1
  __int128 v97; // xmm1
  __int128 v98; // xmm1
  __int128 v99; // xmm0
  __int128 v100; // xmm1
  __int128 v101; // xmm0
  __int128 v102; // xmm0
  __int128 v103; // xmm1
  __int128 v104; // xmm0
  __int128 v105; // xmm1
  __int128 v106; // xmm0
  __int128 v107; // xmm1
  __int128 v108; // xmm0
  __int128 v109; // xmm1
  __int128 v110; // xmm0
  __int128 v111; // xmm0
  __int128 v112; // xmm1
  __int128 v113; // xmm0
  __int128 v114; // xmm1
  __int128 v115; // xmm0
  __int128 v116; // xmm1
  __int128 v117; // xmm0
  __int128 v118; // xmm1
  __int128 v119; // xmm1
  __int128 v120; // xmm1
  __int128 v121; // xmm0
  __int128 v122; // xmm0
  __int128 v123; // xmm1
  __int128 v124; // xmm0
  __int128 v125; // xmm0
  __int128 v126; // xmm1
  __int128 v127; // xmm0
  __int128 v128; // xmm1
  __int128 v129; // xmm0
  __int128 v130; // xmm1
  __int128 v131; // xmm0
  __int128 v132; // xmm1
  __int128 v133; // xmm0
  __int128 v134; // xmm0
  __int128 v135; // xmm1
  __int128 v136; // xmm0
  __int128 v137; // xmm1
  __int128 v138; // xmm0
  __int128 v139; // xmm1
  __int128 v140; // xmm0
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  _OWORD *v144; // rax
  _OWORD *v145; // rsi
  __int128 v146; // xmm1
  char *v147; // rbx
  std::_Ref_count_base *v148; // rax
  std::_Ref_count_base *v149; // rdi
  __int64 v150; // rcx
  int v151; // esi
  _QWORD *v152; // rbx
  _QWORD *v153; // rax
  __int64 v154; // rdx
  int v155; // eax
  std::_Ref_count_base *v156; // rcx
  int v158; // [rsp+F0h] [rbp-80h] BYREF
  int v159; // [rsp+F4h] [rbp-7Ch] BYREF
  int v160; // [rsp+F8h] [rbp-78h] BYREF
  int v161; // [rsp+FCh] [rbp-74h] BYREF
  int v162; // [rsp+100h] [rbp-70h] BYREF
  _QWORD v163[2]; // [rsp+108h] [rbp-68h] BYREF
  __int64 v164; // [rsp+118h] [rbp-58h] BYREF
  __int64 v165; // [rsp+120h] [rbp-50h] BYREF
  __int64 v166; // [rsp+128h] [rbp-48h] BYREF
  __int64 v167; // [rsp+130h] [rbp-40h] BYREF
  __int64 v168; // [rsp+138h] [rbp-38h] BYREF
  __int64 v169; // [rsp+140h] [rbp-30h] BYREF
  __int64 v170; // [rsp+148h] [rbp-28h] BYREF
  __int64 v171; // [rsp+150h] [rbp-20h] BYREF
  __int64 v172; // [rsp+158h] [rbp-18h] BYREF
  __int64 v173; // [rsp+160h] [rbp-10h] BYREF
  __int64 v174; // [rsp+168h] [rbp-8h] BYREF
  __int64 v175; // [rsp+170h] [rbp+0h] BYREF
  __int64 v176; // [rsp+178h] [rbp+8h] BYREF
  __int64 v177; // [rsp+180h] [rbp+10h] BYREF
  __int64 v178; // [rsp+188h] [rbp+18h] BYREF
  __int64 v179; // [rsp+190h] [rbp+20h] BYREF
  __int64 v180; // [rsp+198h] [rbp+28h] BYREF
  __int64 v181; // [rsp+1A0h] [rbp+30h] BYREF
  __int64 v182; // [rsp+1A8h] [rbp+38h] BYREF
  _QWORD v183[2]; // [rsp+1B0h] [rbp+40h] BYREF
  __int128 v184; // [rsp+1C0h] [rbp+50h]
  __int128 v185; // [rsp+1D0h] [rbp+60h]
  __int128 v186; // [rsp+1E0h] [rbp+70h]
  __int128 v187; // [rsp+1F0h] [rbp+80h]
  __int128 v188; // [rsp+200h] [rbp+90h]
  __int128 v189; // [rsp+210h] [rbp+A0h]
  __int128 v190; // [rsp+220h] [rbp+B0h]
  __int128 v191; // [rsp+230h] [rbp+C0h]
  __int128 v192; // [rsp+240h] [rbp+D0h]

  QueryPerformanceCounter(this + 33);
  if ( (unsigned int)dword_1803D0EB8 > 5 && tlgKeywordOn((__int64)&dword_1803D0EB8, 2LL) )
  {
    v4 = *((_OWORD *)a2 + 1);
    v158 = *((_DWORD *)a2 + 45);
    v5 = *((_OWORD *)a2 + 2);
    v6 = *((_DWORD *)a2 + 44);
    v184 = v4;
    v159 = v6;
    v185 = v5;
    v7 = *((_OWORD *)a2 + 3);
    v164 = *((_QWORD *)a2 + 21);
    v8 = *((_OWORD *)a2 + 4);
    v9 = *((_QWORD *)a2 + 20);
    v186 = v7;
    v165 = v9;
    v187 = v8;
    v10 = *((_OWORD *)a2 + 6);
    v188 = *((_OWORD *)a2 + 5);
    v189 = v10;
    v11 = *((_OWORD *)a2 + 8);
    v190 = *((_OWORD *)a2 + 7);
    v191 = v11;
    v12 = *((_OWORD *)a2 + 2);
    v192 = *((_OWORD *)a2 + 9);
    v13 = *((_OWORD *)a2 + 1);
    v166 = *((_QWORD *)&v192 + 1);
    v184 = v13;
    v14 = *((_OWORD *)a2 + 3);
    v185 = v12;
    v15 = *((_OWORD *)a2 + 4);
    v186 = v14;
    v16 = *((_OWORD *)a2 + 5);
    v187 = v15;
    v17 = *((_OWORD *)a2 + 6);
    v188 = v16;
    v18 = *((_OWORD *)a2 + 7);
    v189 = v17;
    v19 = *((_OWORD *)a2 + 8);
    v190 = v18;
    v20 = *((_OWORD *)a2 + 9);
    v191 = v19;
    v21 = *((_OWORD *)a2 + 2);
    v192 = v20;
    v22 = *((_OWORD *)a2 + 1);
    v167 = v192;
    v184 = v22;
    v23 = *((_OWORD *)a2 + 3);
    v185 = v21;
    v24 = *((_OWORD *)a2 + 4);
    v186 = v23;
    v25 = *((_OWORD *)a2 + 5);
    v187 = v24;
    v26 = *((_OWORD *)a2 + 6);
    v188 = v25;
    v27 = *((_OWORD *)a2 + 7);
    v189 = v26;
    v28 = *((_OWORD *)a2 + 8);
    v190 = v27;
    v29 = *((_OWORD *)a2 + 9);
    v191 = v28;
    v30 = *((_OWORD *)a2 + 2);
    v192 = v29;
    v31 = *((_OWORD *)a2 + 1);
    v168 = *((_QWORD *)&v191 + 1);
    v184 = v31;
    v32 = *((_OWORD *)a2 + 3);
    v185 = v30;
    v33 = *((_OWORD *)a2 + 4);
    v186 = v32;
    v187 = v33;
    v34 = *((_OWORD *)a2 + 6);
    v188 = *((_OWORD *)a2 + 5);
    v189 = v34;
    v35 = *((_OWORD *)a2 + 8);
    v190 = *((_OWORD *)a2 + 7);
    v191 = v35;
    v36 = *((_OWORD *)a2 + 2);
    v192 = *((_OWORD *)a2 + 9);
    v37 = *((_OWORD *)a2 + 1);
    v169 = v191;
    v184 = v37;
    v185 = v36;
    v38 = *((_OWORD *)a2 + 4);
    v186 = *((_OWORD *)a2 + 3);
    v187 = v38;
    v39 = *((_OWORD *)a2 + 6);
    v188 = *((_OWORD *)a2 + 5);
    v189 = v39;
    v40 = *((_OWORD *)a2 + 8);
    v190 = *((_OWORD *)a2 + 7);
    v191 = v40;
    v41 = *((_OWORD *)a2 + 2);
    v192 = *((_OWORD *)a2 + 9);
    v42 = *((_OWORD *)a2 + 1);
    v170 = *((_QWORD *)&v190 + 1);
    v184 = v42;
    v43 = *((_OWORD *)a2 + 3);
    v185 = v41;
    v44 = *((_OWORD *)a2 + 4);
    v186 = v43;
    v45 = *((_OWORD *)a2 + 5);
    v187 = v44;
    v46 = *((_OWORD *)a2 + 6);
    v188 = v45;
    v47 = *((_OWORD *)a2 + 7);
    v189 = v46;
    v48 = *((_OWORD *)a2 + 8);
    v190 = v47;
    v49 = *((_OWORD *)a2 + 9);
    v191 = v48;
    v50 = *((_OWORD *)a2 + 2);
    v192 = v49;
    v51 = *((_OWORD *)a2 + 1);
    v171 = v190;
    v184 = v51;
    v52 = *((_OWORD *)a2 + 3);
    v185 = v50;
    v53 = *((_OWORD *)a2 + 4);
    v186 = v52;
    v54 = *((_OWORD *)a2 + 5);
    v187 = v53;
    v55 = *((_OWORD *)a2 + 6);
    v188 = v54;
    v56 = *((_OWORD *)a2 + 7);
    v189 = v55;
    v57 = *((_OWORD *)a2 + 8);
    v190 = v56;
    v58 = *((_OWORD *)a2 + 9);
    v191 = v57;
    v59 = *((_OWORD *)a2 + 2);
    v192 = v58;
    v60 = *((_OWORD *)a2 + 1);
    v172 = *((_QWORD *)&v189 + 1);
    v184 = v60;
    v61 = *((_OWORD *)a2 + 3);
    v185 = v59;
    v186 = v61;
    v62 = *((_OWORD *)a2 + 5);
    v187 = *((_OWORD *)a2 + 4);
    v188 = v62;
    v63 = *((_OWORD *)a2 + 7);
    v189 = *((_OWORD *)a2 + 6);
    v190 = v63;
    v64 = *((_OWORD *)a2 + 9);
    v191 = *((_OWORD *)a2 + 8);
    v192 = v64;
    v65 = *((_OWORD *)a2 + 1);
    v173 = v189;
    v66 = *((_OWORD *)a2 + 2);
    v184 = v65;
    v185 = v66;
    v67 = *((_OWORD *)a2 + 4);
    v186 = *((_OWORD *)a2 + 3);
    v187 = v67;
    v68 = *((_OWORD *)a2 + 6);
    v188 = *((_OWORD *)a2 + 5);
    v189 = v68;
    v69 = *((_OWORD *)a2 + 8);
    v190 = *((_OWORD *)a2 + 7);
    v70 = *((_OWORD *)a2 + 9);
    v191 = v69;
    v192 = v70;
    v71 = *((_OWORD *)a2 + 1);
    v174 = *((_QWORD *)&v188 + 1);
    v72 = *((_OWORD *)a2 + 2);
    v184 = v71;
    v73 = *((_OWORD *)a2 + 3);
    v185 = v72;
    v74 = *((_OWORD *)a2 + 4);
    v186 = v73;
    v75 = *((_OWORD *)a2 + 5);
    v187 = v74;
    v76 = *((_OWORD *)a2 + 6);
    v188 = v75;
    v77 = *((_OWORD *)a2 + 7);
    v189 = v76;
    v78 = *((_OWORD *)a2 + 8);
    v190 = v77;
    v79 = *((_OWORD *)a2 + 9);
    v191 = v78;
    v80 = *((_OWORD *)a2 + 2);
    v192 = v79;
    v81 = *((_OWORD *)a2 + 1);
    v175 = v188;
    v184 = v81;
    v82 = *((_OWORD *)a2 + 3);
    v185 = v80;
    v83 = *((_OWORD *)a2 + 4);
    v186 = v82;
    v84 = *((_OWORD *)a2 + 5);
    v187 = v83;
    v85 = *((_OWORD *)a2 + 6);
    v188 = v84;
    v86 = *((_OWORD *)a2 + 7);
    v189 = v85;
    v87 = *((_OWORD *)a2 + 8);
    v190 = v86;
    v88 = *((_OWORD *)a2 + 9);
    v191 = v87;
    v192 = v88;
    v89 = *((_OWORD *)a2 + 1);
    v176 = *((_QWORD *)&v187 + 1);
    v184 = v89;
    v90 = *((_OWORD *)a2 + 3);
    v185 = *((_OWORD *)a2 + 2);
    v186 = v90;
    v91 = *((_OWORD *)a2 + 5);
    v187 = *((_OWORD *)a2 + 4);
    v188 = v91;
    v92 = *((_OWORD *)a2 + 7);
    v189 = *((_OWORD *)a2 + 6);
    v190 = v92;
    v93 = *((_OWORD *)a2 + 9);
    v191 = *((_OWORD *)a2 + 8);
    v192 = v93;
    v94 = *((_OWORD *)a2 + 1);
    v177 = v187;
    v95 = *((_OWORD *)a2 + 2);
    v184 = v94;
    v185 = v95;
    v96 = *((_OWORD *)a2 + 4);
    v186 = *((_OWORD *)a2 + 3);
    v187 = v96;
    v97 = *((_OWORD *)a2 + 6);
    v188 = *((_OWORD *)a2 + 5);
    v189 = v97;
    v98 = *((_OWORD *)a2 + 8);
    v190 = *((_OWORD *)a2 + 7);
    v99 = *((_OWORD *)a2 + 9);
    v191 = v98;
    v100 = *((_OWORD *)a2 + 2);
    v192 = v99;
    v101 = *((_OWORD *)a2 + 1);
    v178 = *((_QWORD *)&v186 + 1);
    v184 = v101;
    v102 = *((_OWORD *)a2 + 3);
    v185 = v100;
    v103 = *((_OWORD *)a2 + 4);
    v186 = v102;
    v104 = *((_OWORD *)a2 + 5);
    v187 = v103;
    v105 = *((_OWORD *)a2 + 6);
    v188 = v104;
    v106 = *((_OWORD *)a2 + 7);
    v189 = v105;
    v107 = *((_OWORD *)a2 + 8);
    v190 = v106;
    v108 = *((_OWORD *)a2 + 9);
    v191 = v107;
    v109 = *((_OWORD *)a2 + 2);
    v192 = v108;
    v110 = *((_OWORD *)a2 + 1);
    v179 = v186;
    v184 = v110;
    v111 = *((_OWORD *)a2 + 3);
    v185 = v109;
    v112 = *((_OWORD *)a2 + 4);
    v186 = v111;
    v113 = *((_OWORD *)a2 + 5);
    v187 = v112;
    v114 = *((_OWORD *)a2 + 6);
    v188 = v113;
    v115 = *((_OWORD *)a2 + 7);
    v189 = v114;
    v116 = *((_OWORD *)a2 + 8);
    v190 = v115;
    v117 = *((_OWORD *)a2 + 9);
    v191 = v116;
    v192 = v117;
    v180 = *((_QWORD *)&v185 + 1);
    v118 = *((_OWORD *)a2 + 2);
    v184 = *((_OWORD *)a2 + 1);
    v185 = v118;
    v119 = *((_OWORD *)a2 + 4);
    v186 = *((_OWORD *)a2 + 3);
    v187 = v119;
    v120 = *((_OWORD *)a2 + 6);
    v188 = *((_OWORD *)a2 + 5);
    v121 = *((_OWORD *)a2 + 7);
    v189 = v120;
    v190 = v121;
    v122 = *((_OWORD *)a2 + 9);
    v191 = *((_OWORD *)a2 + 8);
    v123 = *((_OWORD *)a2 + 2);
    v192 = v122;
    v124 = *((_OWORD *)a2 + 1);
    v181 = v185;
    v184 = v124;
    v125 = *((_OWORD *)a2 + 3);
    v185 = v123;
    v126 = *((_OWORD *)a2 + 4);
    v186 = v125;
    v127 = *((_OWORD *)a2 + 5);
    v187 = v126;
    v128 = *((_OWORD *)a2 + 6);
    v188 = v127;
    v129 = *((_OWORD *)a2 + 7);
    v189 = v128;
    v130 = *((_OWORD *)a2 + 8);
    v190 = v129;
    v131 = *((_OWORD *)a2 + 9);
    v191 = v130;
    v132 = *((_OWORD *)a2 + 2);
    v192 = v131;
    v133 = *((_OWORD *)a2 + 1);
    v182 = *((_QWORD *)&v184 + 1);
    v184 = v133;
    v134 = *((_OWORD *)a2 + 3);
    v185 = v132;
    v135 = *((_OWORD *)a2 + 4);
    v186 = v134;
    v136 = *((_OWORD *)a2 + 5);
    v187 = v135;
    v137 = *((_OWORD *)a2 + 6);
    v188 = v136;
    v138 = *((_OWORD *)a2 + 7);
    v189 = v137;
    v139 = *((_OWORD *)a2 + 8);
    v190 = v138;
    v140 = *((_OWORD *)a2 + 9);
    v191 = v139;
    v192 = v140;
    v183[0] = v184;
    v160 = *((_DWORD *)a2 + 2);
    v161 = *((_DWORD *)a2 + 1);
    v162 = *(_DWORD *)a2;
    v163[0] = (*(__int64 (__fastcall **)(LARGE_INTEGER *))(this->QuadPart + 64))(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v141,
      byte_180372E54,
      v142,
      v143,
      (__int64)v163,
      (__int64)&v162,
      (__int64)&v161,
      (__int64)&v160,
      (__int64)v183,
      (__int64)&v182,
      (__int64)&v181,
      (__int64)&v180,
      (__int64)&v179,
      (__int64)&v178,
      (__int64)&v177,
      (__int64)&v176,
      (__int64)&v175,
      (__int64)&v174,
      (__int64)&v173,
      (__int64)&v172,
      (__int64)&v171,
      (__int64)&v170,
      (__int64)&v169,
      (__int64)&v168,
      (__int64)&v167,
      (__int64)&v166,
      (__int64)&v165,
      (__int64)&v164,
      (__int64)&v159,
      (__int64)&v158);
  }
  v144 = operator new(0xB8uLL);
  v145 = v144;
  if ( v144 )
  {
    *v144 = *(_OWORD *)a2;
    v144[1] = *((_OWORD *)a2 + 1);
    v144[2] = *((_OWORD *)a2 + 2);
    v144[3] = *((_OWORD *)a2 + 3);
    v144[4] = *((_OWORD *)a2 + 4);
    v144[5] = *((_OWORD *)a2 + 5);
    v144[6] = *((_OWORD *)a2 + 6);
    v146 = *((_OWORD *)a2 + 7);
    v147 = (char *)a2 + 128;
    v144[7] = v146;
    v144[8] = *(_OWORD *)v147;
    v144[9] = *((_OWORD *)v147 + 1);
    v144[10] = *((_OWORD *)v147 + 2);
    *((_QWORD *)v144 + 22) = *((_QWORD *)v147 + 6);
  }
  else
  {
    v145 = 0LL;
  }
  v148 = (std::_Ref_count_base *)operator new(0x18uLL);
  v149 = v148;
  if ( v148 )
  {
    *((_QWORD *)v148 + 2) = v145;
    *((_DWORD *)v148 + 2) = 1;
    *((_DWORD *)v148 + 3) = 1;
    *(_QWORD *)v148 = &std::_Ref_count<ManipulationThreadTelemetryData>::`vftable';
  }
  else
  {
    v149 = 0LL;
  }
  v163[0] = v145;
  v163[1] = v149;
  operator delete(0LL);
  if ( v145 )
  {
    v152 = std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(v183, v163);
    v153 = std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(v163, v152);
    v155 = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::Insert((__int64)&this[25], v154, v153);
    v156 = (std::_Ref_count_base *)v152[1];
    v151 = v155;
    if ( v156 )
      std::_Ref_count_base::_Decref(v156);
    if ( v151 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v156, 0LL, 0LL, v151, 0x147u);
  }
  else
  {
    v151 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v150, 0LL, 0LL, -2147024882, 0x146u);
  }
  if ( v149 )
    std::_Ref_count_base::_Decref(v149);
  return (unsigned int)v151;
}
