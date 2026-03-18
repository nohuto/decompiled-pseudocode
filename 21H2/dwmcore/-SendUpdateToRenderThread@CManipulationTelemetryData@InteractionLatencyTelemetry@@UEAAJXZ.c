/*
 * XREFs of ?SendUpdateToRenderThread@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJXZ @ 0x180275400
 * Callers:
 *     <none>
 * Callees:
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006D8F4 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x1801F21B0 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@443333333333333333333344@Z @ 0x180274A3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@U1@U1@U1@_ea_180274A3C.c)
 */

__int64 __fastcall InteractionLatencyTelemetry::CManipulationTelemetryData::SendUpdateToRenderThread(
        LARGE_INTEGER *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  DWORD LowPart; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm1
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm0
  __int128 v34; // xmm0
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm1
  __int128 v38; // xmm1
  __int128 v39; // xmm1
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm0
  __int128 v61; // xmm0
  __int128 v62; // xmm0
  __int128 v63; // xmm0
  __int128 v64; // xmm0
  __int128 v65; // xmm1
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
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm0
  __int128 v89; // xmm1
  __int128 v90; // xmm1
  __int128 v91; // xmm1
  __int128 v92; // xmm1
  __int128 v93; // xmm0
  __int128 v94; // xmm1
  __int128 v95; // xmm1
  __int128 v96; // xmm1
  __int128 v97; // xmm0
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  __int128 v100; // xmm0
  __int128 v101; // xmm1
  __int128 v102; // xmm0
  __int128 v103; // xmm1
  __int128 v104; // xmm0
  __int128 v105; // xmm1
  __int128 v106; // xmm0
  __int128 v107; // xmm1
  __int128 v108; // xmm0
  __int128 v109; // xmm0
  __int128 v110; // xmm1
  __int128 v111; // xmm0
  __int128 v112; // xmm1
  __int128 v113; // xmm0
  __int128 v114; // xmm1
  __int128 v115; // xmm0
  __int128 v116; // xmm0
  __int128 v117; // xmm1
  __int128 v118; // xmm1
  __int128 v119; // xmm1
  __int128 v120; // xmm0
  __int128 v121; // xmm0
  __int128 v122; // xmm1
  __int128 v123; // xmm0
  __int128 v124; // xmm0
  __int128 v125; // xmm1
  __int128 v126; // xmm0
  __int128 v127; // xmm1
  __int128 v128; // xmm0
  __int128 v129; // xmm1
  __int128 v130; // xmm0
  __int128 v131; // xmm1
  __int128 v132; // xmm0
  __int128 v133; // xmm0
  __int128 v134; // xmm1
  __int128 v135; // xmm0
  __int128 v136; // xmm1
  __int128 v137; // xmm0
  __int128 v138; // xmm1
  __int128 v139; // xmm0
  CComposition *QuadPart; // rbx
  int ManipulationManager; // eax
  __int64 v142; // rcx
  unsigned int v143; // edi
  struct CManipulationManager *v144; // rbx
  __int64 v145; // rbx
  __int128 v146; // xmm0
  __int128 v147; // xmm1
  __int128 v148; // xmm0
  __int128 v149; // xmm1
  __int128 v150; // xmm0
  __int128 v151; // xmm1
  __int128 v152; // xmm0
  __int128 v153; // xmm1
  __int128 v154; // xmm0
  __int128 v155; // xmm1
  __int128 v156; // xmm0
  LARGE_INTEGER v157; // rax
  unsigned int v159; // [rsp+28h] [rbp-150h]
  struct CManipulationManager *v160; // [rsp+F8h] [rbp-80h] BYREF
  struct IMessageCallSendHost *v161; // [rsp+100h] [rbp-78h] BYREF
  LONG HighPart; // [rsp+108h] [rbp-70h] BYREF
  DWORD v163; // [rsp+10Ch] [rbp-6Ch] BYREF
  DWORD v164; // [rsp+110h] [rbp-68h] BYREF
  __int64 v165; // [rsp+118h] [rbp-60h] BYREF
  LARGE_INTEGER *v166; // [rsp+120h] [rbp-58h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+128h] [rbp-50h] BYREF
  __int64 v168; // [rsp+130h] [rbp-48h] BYREF
  LARGE_INTEGER v169; // [rsp+138h] [rbp-40h] BYREF
  __int64 v170; // [rsp+140h] [rbp-38h] BYREF
  __int64 v171; // [rsp+148h] [rbp-30h] BYREF
  __int64 v172; // [rsp+150h] [rbp-28h] BYREF
  __int64 v173; // [rsp+158h] [rbp-20h] BYREF
  __int64 v174; // [rsp+160h] [rbp-18h] BYREF
  __int64 v175; // [rsp+168h] [rbp-10h] BYREF
  __int64 v176; // [rsp+170h] [rbp-8h] BYREF
  __int64 v177; // [rsp+178h] [rbp+0h] BYREF
  __int64 v178; // [rsp+180h] [rbp+8h] BYREF
  __int64 v179; // [rsp+188h] [rbp+10h] BYREF
  __int64 v180; // [rsp+190h] [rbp+18h] BYREF
  __int64 v181; // [rsp+198h] [rbp+20h] BYREF
  __int64 v182; // [rsp+1A0h] [rbp+28h] BYREF
  __int64 v183; // [rsp+1A8h] [rbp+30h] BYREF
  __int64 v184; // [rsp+1B0h] [rbp+38h] BYREF
  __int64 v185; // [rsp+1B8h] [rbp+40h] BYREF
  __int64 v186; // [rsp+1C0h] [rbp+48h] BYREF
  __int128 v187; // [rsp+1C8h] [rbp+50h] BYREF
  __int128 v188; // [rsp+1D8h] [rbp+60h]
  __int128 v189; // [rsp+1E8h] [rbp+70h]
  __int128 v190; // [rsp+1F8h] [rbp+80h]
  __int128 v191; // [rsp+208h] [rbp+90h]
  __int128 v192; // [rsp+218h] [rbp+A0h]
  __int128 v193; // [rsp+228h] [rbp+B0h]
  __int128 v194; // [rsp+238h] [rbp+C0h]
  __int128 v195; // [rsp+248h] [rbp+D0h]
  __int128 v196; // [rsp+258h] [rbp+E0h]
  __int128 v197; // [rsp+268h] [rbp+F0h]
  LARGE_INTEGER v198; // [rsp+278h] [rbp+100h]

  QueryPerformanceCounter(&PerformanceCount);
  this[23] = PerformanceCount;
  if ( (unsigned int)dword_1803D0EB8 > 5 && tlgKeywordOn((__int64)&dword_1803D0EB8, 2LL) )
  {
    v4 = *(_OWORD *)&this[4].LowPart;
    HighPart = this[24].HighPart;
    v5 = *(_OWORD *)&this[6].LowPart;
    LowPart = this[24].LowPart;
    v187 = v4;
    v163 = LowPart;
    v188 = v5;
    v7 = *(_OWORD *)&this[8].LowPart;
    v169 = this[22];
    v8 = *(_OWORD *)&this[10].LowPart;
    v168 = v3;
    v189 = v7;
    v190 = v8;
    v9 = *(_OWORD *)&this[14].LowPart;
    v191 = *(_OWORD *)&this[12].LowPart;
    v192 = v9;
    v10 = *(_OWORD *)&this[18].LowPart;
    v193 = *(_OWORD *)&this[16].LowPart;
    v194 = v10;
    v11 = *(_OWORD *)&this[6].LowPart;
    v195 = *(_OWORD *)&this[20].LowPart;
    v12 = *(_OWORD *)&this[4].LowPart;
    v170 = *((_QWORD *)&v195 + 1);
    v187 = v12;
    v13 = *(_OWORD *)&this[8].LowPart;
    v188 = v11;
    v189 = v13;
    v14 = *(_OWORD *)&this[12].LowPart;
    v190 = *(_OWORD *)&this[10].LowPart;
    v15 = *(_OWORD *)&this[14].LowPart;
    v191 = v14;
    v16 = *(_OWORD *)&this[16].LowPart;
    v192 = v15;
    v17 = *(_OWORD *)&this[18].LowPart;
    v193 = v16;
    v18 = *(_OWORD *)&this[20].LowPart;
    v194 = v17;
    v19 = *(_OWORD *)&this[6].LowPart;
    v195 = v18;
    v20 = *(_OWORD *)&this[4].LowPart;
    v171 = v195;
    v187 = v20;
    v21 = *(_OWORD *)&this[8].LowPart;
    v188 = v19;
    v22 = *(_OWORD *)&this[10].LowPart;
    v189 = v21;
    v23 = *(_OWORD *)&this[12].LowPart;
    v190 = v22;
    v24 = *(_OWORD *)&this[14].LowPart;
    v191 = v23;
    v25 = *(_OWORD *)&this[16].LowPart;
    v192 = v24;
    v26 = *(_OWORD *)&this[18].LowPart;
    v193 = v25;
    v27 = *(_OWORD *)&this[20].LowPart;
    v194 = v26;
    v28 = *(_OWORD *)&this[6].LowPart;
    v195 = v27;
    v29 = *(_OWORD *)&this[4].LowPart;
    v172 = *((_QWORD *)&v194 + 1);
    v187 = v29;
    v30 = *(_OWORD *)&this[8].LowPart;
    v188 = v28;
    v31 = *(_OWORD *)&this[10].LowPart;
    v189 = v30;
    v32 = *(_OWORD *)&this[12].LowPart;
    v190 = v31;
    v191 = v32;
    v33 = *(_OWORD *)&this[16].LowPart;
    v192 = *(_OWORD *)&this[14].LowPart;
    v193 = v33;
    v34 = *(_OWORD *)&this[20].LowPart;
    v194 = *(_OWORD *)&this[18].LowPart;
    v195 = v34;
    v35 = *(_OWORD *)&this[4].LowPart;
    v173 = v194;
    v36 = *(_OWORD *)&this[6].LowPart;
    v187 = v35;
    v188 = v36;
    v37 = *(_OWORD *)&this[10].LowPart;
    v189 = *(_OWORD *)&this[8].LowPart;
    v190 = v37;
    v38 = *(_OWORD *)&this[14].LowPart;
    v191 = *(_OWORD *)&this[12].LowPart;
    v192 = v38;
    v39 = *(_OWORD *)&this[18].LowPart;
    v193 = *(_OWORD *)&this[16].LowPart;
    v194 = v39;
    v40 = *(_OWORD *)&this[6].LowPart;
    v195 = *(_OWORD *)&this[20].LowPart;
    v41 = *(_OWORD *)&this[4].LowPart;
    v174 = *((_QWORD *)&v193 + 1);
    v187 = v41;
    v42 = *(_OWORD *)&this[8].LowPart;
    v188 = v40;
    v43 = *(_OWORD *)&this[10].LowPart;
    v189 = v42;
    v44 = *(_OWORD *)&this[12].LowPart;
    v190 = v43;
    v45 = *(_OWORD *)&this[14].LowPart;
    v191 = v44;
    v46 = *(_OWORD *)&this[16].LowPart;
    v192 = v45;
    v47 = *(_OWORD *)&this[18].LowPart;
    v193 = v46;
    v48 = *(_OWORD *)&this[20].LowPart;
    v194 = v47;
    v49 = *(_OWORD *)&this[6].LowPart;
    v195 = v48;
    v50 = *(_OWORD *)&this[4].LowPart;
    v175 = v193;
    v187 = v50;
    v51 = *(_OWORD *)&this[8].LowPart;
    v188 = v49;
    v52 = *(_OWORD *)&this[10].LowPart;
    v189 = v51;
    v53 = *(_OWORD *)&this[12].LowPart;
    v190 = v52;
    v54 = *(_OWORD *)&this[14].LowPart;
    v191 = v53;
    v55 = *(_OWORD *)&this[16].LowPart;
    v192 = v54;
    v56 = *(_OWORD *)&this[18].LowPart;
    v193 = v55;
    v57 = *(_OWORD *)&this[20].LowPart;
    v194 = v56;
    v58 = *(_OWORD *)&this[6].LowPart;
    v195 = v57;
    v59 = *(_OWORD *)&this[4].LowPart;
    v176 = *((_QWORD *)&v192 + 1);
    v187 = v59;
    v60 = *(_OWORD *)&this[8].LowPart;
    v188 = v58;
    v189 = v60;
    v61 = *(_OWORD *)&this[12].LowPart;
    v190 = *(_OWORD *)&this[10].LowPart;
    v191 = v61;
    v62 = *(_OWORD *)&this[16].LowPart;
    v192 = *(_OWORD *)&this[14].LowPart;
    v193 = v62;
    v63 = *(_OWORD *)&this[20].LowPart;
    v194 = *(_OWORD *)&this[18].LowPart;
    v195 = v63;
    v64 = *(_OWORD *)&this[4].LowPart;
    v177 = v192;
    v65 = *(_OWORD *)&this[6].LowPart;
    v187 = v64;
    v188 = v65;
    v66 = *(_OWORD *)&this[10].LowPart;
    v189 = *(_OWORD *)&this[8].LowPart;
    v190 = v66;
    v67 = *(_OWORD *)&this[14].LowPart;
    v191 = *(_OWORD *)&this[12].LowPart;
    v192 = v67;
    v68 = *(_OWORD *)&this[18].LowPart;
    v193 = *(_OWORD *)&this[16].LowPart;
    v194 = v68;
    v69 = *(_OWORD *)&this[6].LowPart;
    v195 = *(_OWORD *)&this[20].LowPart;
    v70 = *(_OWORD *)&this[4].LowPart;
    v178 = *((_QWORD *)&v191 + 1);
    v187 = v70;
    v71 = *(_OWORD *)&this[8].LowPart;
    v188 = v69;
    v72 = *(_OWORD *)&this[10].LowPart;
    v189 = v71;
    v73 = *(_OWORD *)&this[12].LowPart;
    v190 = v72;
    v74 = *(_OWORD *)&this[14].LowPart;
    v191 = v73;
    v75 = *(_OWORD *)&this[16].LowPart;
    v192 = v74;
    v76 = *(_OWORD *)&this[18].LowPart;
    v193 = v75;
    v77 = *(_OWORD *)&this[20].LowPart;
    v194 = v76;
    v78 = *(_OWORD *)&this[6].LowPart;
    v195 = v77;
    v79 = *(_OWORD *)&this[4].LowPart;
    v179 = v191;
    v187 = v79;
    v80 = *(_OWORD *)&this[8].LowPart;
    v188 = v78;
    v81 = *(_OWORD *)&this[10].LowPart;
    v189 = v80;
    v82 = *(_OWORD *)&this[12].LowPart;
    v190 = v81;
    v83 = *(_OWORD *)&this[14].LowPart;
    v191 = v82;
    v84 = *(_OWORD *)&this[16].LowPart;
    v192 = v83;
    v85 = *(_OWORD *)&this[18].LowPart;
    v193 = v84;
    v86 = *(_OWORD *)&this[20].LowPart;
    v194 = v85;
    v87 = *(_OWORD *)&this[6].LowPart;
    v195 = v86;
    v88 = *(_OWORD *)&this[4].LowPart;
    v180 = *((_QWORD *)&v190 + 1);
    v187 = v88;
    v188 = v87;
    v89 = *(_OWORD *)&this[10].LowPart;
    v189 = *(_OWORD *)&this[8].LowPart;
    v190 = v89;
    v90 = *(_OWORD *)&this[14].LowPart;
    v191 = *(_OWORD *)&this[12].LowPart;
    v192 = v90;
    v91 = *(_OWORD *)&this[18].LowPart;
    v193 = *(_OWORD *)&this[16].LowPart;
    v194 = v91;
    v92 = *(_OWORD *)&this[6].LowPart;
    v195 = *(_OWORD *)&this[20].LowPart;
    v93 = *(_OWORD *)&this[4].LowPart;
    v181 = v190;
    v187 = v93;
    v188 = v92;
    v94 = *(_OWORD *)&this[10].LowPart;
    v189 = *(_OWORD *)&this[8].LowPart;
    v190 = v94;
    v95 = *(_OWORD *)&this[14].LowPart;
    v191 = *(_OWORD *)&this[12].LowPart;
    v192 = v95;
    v96 = *(_OWORD *)&this[18].LowPart;
    v193 = *(_OWORD *)&this[16].LowPart;
    v97 = *(_OWORD *)&this[20].LowPart;
    v194 = v96;
    v195 = v97;
    v98 = *(_OWORD *)&this[4].LowPart;
    v182 = *((_QWORD *)&v189 + 1);
    v99 = *(_OWORD *)&this[6].LowPart;
    v187 = v98;
    v100 = *(_OWORD *)&this[8].LowPart;
    v188 = v99;
    v101 = *(_OWORD *)&this[10].LowPart;
    v189 = v100;
    v102 = *(_OWORD *)&this[12].LowPart;
    v190 = v101;
    v103 = *(_OWORD *)&this[14].LowPart;
    v191 = v102;
    v104 = *(_OWORD *)&this[16].LowPart;
    v192 = v103;
    v105 = *(_OWORD *)&this[18].LowPart;
    v193 = v104;
    v106 = *(_OWORD *)&this[20].LowPart;
    v194 = v105;
    v107 = *(_OWORD *)&this[6].LowPart;
    v195 = v106;
    v108 = *(_OWORD *)&this[4].LowPart;
    v183 = v189;
    v187 = v108;
    v109 = *(_OWORD *)&this[8].LowPart;
    v188 = v107;
    v110 = *(_OWORD *)&this[10].LowPart;
    v189 = v109;
    v111 = *(_OWORD *)&this[12].LowPart;
    v190 = v110;
    v112 = *(_OWORD *)&this[14].LowPart;
    v191 = v111;
    v113 = *(_OWORD *)&this[16].LowPart;
    v192 = v112;
    v114 = *(_OWORD *)&this[18].LowPart;
    v193 = v113;
    v115 = *(_OWORD *)&this[20].LowPart;
    v194 = v114;
    v195 = v115;
    v184 = *((_QWORD *)&v188 + 1);
    v116 = *(_OWORD *)&this[4].LowPart;
    v166 = this;
    v117 = *(_OWORD *)&this[6].LowPart;
    v187 = v116;
    v188 = v117;
    v118 = *(_OWORD *)&this[10].LowPart;
    v189 = *(_OWORD *)&this[8].LowPart;
    v190 = v118;
    v119 = *(_OWORD *)&this[14].LowPart;
    v191 = *(_OWORD *)&this[12].LowPart;
    v120 = *(_OWORD *)&this[16].LowPart;
    v192 = v119;
    v193 = v120;
    v121 = *(_OWORD *)&this[20].LowPart;
    v194 = *(_OWORD *)&this[18].LowPart;
    v122 = *(_OWORD *)&this[6].LowPart;
    v195 = v121;
    v123 = *(_OWORD *)&this[4].LowPart;
    v185 = v188;
    v187 = v123;
    v124 = *(_OWORD *)&this[8].LowPart;
    v188 = v122;
    v125 = *(_OWORD *)&this[10].LowPart;
    v189 = v124;
    v126 = *(_OWORD *)&this[12].LowPart;
    v190 = v125;
    v127 = *(_OWORD *)&this[14].LowPart;
    v191 = v126;
    v128 = *(_OWORD *)&this[16].LowPart;
    v192 = v127;
    v129 = *(_OWORD *)&this[18].LowPart;
    v193 = v128;
    v130 = *(_OWORD *)&this[20].LowPart;
    v194 = v129;
    v131 = *(_OWORD *)&this[6].LowPart;
    v195 = v130;
    v132 = *(_OWORD *)&this[4].LowPart;
    v186 = *((_QWORD *)&v187 + 1);
    v187 = v132;
    v133 = *(_OWORD *)&this[8].LowPart;
    v188 = v131;
    v134 = *(_OWORD *)&this[10].LowPart;
    v189 = v133;
    v135 = *(_OWORD *)&this[12].LowPart;
    v190 = v134;
    v136 = *(_OWORD *)&this[14].LowPart;
    v191 = v135;
    v137 = *(_OWORD *)&this[16].LowPart;
    v192 = v136;
    v138 = *(_OWORD *)&this[18].LowPart;
    v193 = v137;
    v139 = *(_OWORD *)&this[20].LowPart;
    v194 = v138;
    v195 = v139;
    v165 = v187;
    v164 = this[3].LowPart;
    LODWORD(v160) = this[2].HighPart;
    LODWORD(v161) = this[2].LowPart;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&v187,
      byte_180373584,
      v2,
      v3,
      (__int64)&v166,
      (__int64)&v161,
      (__int64)&v160,
      (__int64)&v164,
      (__int64)&v165,
      (__int64)&v186,
      (__int64)&v185,
      (__int64)&v184,
      (__int64)&v183,
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
      (__int64)&v163,
      (__int64)&HighPart);
  }
  QuadPart = (CComposition *)this[34].QuadPart;
  v160 = 0LL;
  v161 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v160);
  ManipulationManager = CComposition::GetManipulationManager(QuadPart, &v160);
  v143 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v159 = 67;
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v161);
  v144 = v160;
  ManipulationManager = CManipulationManager::GetManipulationThreadMessageCallSendHost(v160, &v161);
  v143 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v159 = 69;
    goto LABEL_13;
  }
  v145 = *((_QWORD *)v144 + 10);
  if ( v145 )
  {
    (*(void (__fastcall **)(LARGE_INTEGER *))this->QuadPart)(this);
    v166 = this;
    v146 = *(_OWORD *)&this[2].LowPart;
    v165 = v145;
    v147 = *(_OWORD *)&this[4].LowPart;
    v187 = v146;
    v148 = *(_OWORD *)&this[6].LowPart;
    v188 = v147;
    v149 = *(_OWORD *)&this[8].LowPart;
    v189 = v148;
    v150 = *(_OWORD *)&this[10].LowPart;
    v190 = v149;
    v151 = *(_OWORD *)&this[12].LowPart;
    v191 = v150;
    v152 = *(_OWORD *)&this[14].LowPart;
    v192 = v151;
    v153 = *(_OWORD *)&this[16].LowPart;
    v193 = v152;
    v154 = *(_OWORD *)&this[18].LowPart;
    v194 = v153;
    v155 = *(_OWORD *)&this[20].LowPart;
    v195 = v154;
    v156 = *(_OWORD *)&this[22].LowPart;
    v157 = this[24];
    v196 = v155;
    v197 = v156;
    v198 = v157;
    ManipulationManager = CoreUICallSend(v161, &v165, 1LL, 13LL, 0, &unk_18032C410);
    v143 = ManipulationManager;
    if ( ManipulationManager >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(this[34].QuadPart + 656) + 120LL))(
        *(_QWORD *)(this[34].QuadPart + 656),
        0LL,
        0x4000LL);
      goto LABEL_14;
    }
    v159 = 81;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v142, 0LL, 0LL, ManipulationManager, v159);
    goto LABEL_14;
  }
  v143 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v142, 0LL, 0LL, -2147467259, 0x48u);
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v161);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v160);
  return v143;
}
