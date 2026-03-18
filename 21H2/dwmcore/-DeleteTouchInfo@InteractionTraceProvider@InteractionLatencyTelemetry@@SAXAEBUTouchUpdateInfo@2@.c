/*
 * XREFs of ?DeleteTouchInfo@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchUpdateInfo@2@_K@Z @ 0x1801ADEDC
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18001AC20 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333333333333333333333@Z @ 0x1801AD6A0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1.c)
 */

void __fastcall InteractionLatencyTelemetry::InteractionTraceProvider::DeleteTouchInfo(
        const struct InteractionLatencyTelemetry::TouchUpdateInfo *a1)
{
  __int64 v1; // r9
  __int64 v2; // r10
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm0
  __int128 v34; // xmm0
  __int128 v35; // xmm0
  __int128 v36; // xmm0
  __int128 v37; // xmm0
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm1
  __int128 v41; // xmm1
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm1
  __int128 v65; // xmm1
  __int128 v66; // xmm1
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int128 v85; // xmm0
  __int128 v86; // xmm1
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  __int128 v89; // xmm0
  __int128 v90; // xmm1
  __int128 v91; // xmm1
  __int128 v92; // xmm0
  __int128 v93; // xmm1
  __int128 v94; // xmm1
  __int128 v95; // xmm1
  __int128 v96; // xmm1
  __int128 v97; // xmm0
  __int128 v98; // xmm1
  __int128 v99; // xmm0
  __int128 v100; // xmm0
  __int128 v101; // xmm1
  __int128 v102; // xmm0
  __int128 v103; // xmm1
  __int128 v104; // xmm0
  __int128 v105; // xmm0
  __int128 v106; // xmm1
  __int128 v107; // xmm0
  __int128 v108; // xmm1
  __int128 v109; // xmm0
  __int128 v110; // xmm1
  __int128 v111; // xmm0
  __int128 v112; // xmm1
  __int128 v113; // xmm0
  __int128 v114; // xmm0
  __int128 v115; // xmm1
  __int128 v116; // xmm0
  __int128 v117; // xmm1
  __int128 v118; // xmm0
  __int128 v119; // xmm0
  __int128 v120; // xmm0
  __int128 v121; // xmm1
  __int128 v122; // xmm1
  __int128 v123; // xmm1
  __int128 v124; // xmm0
  __int128 v125; // xmm0
  __int128 v126; // xmm1
  __int128 v127; // xmm0
  __int128 v128; // xmm0
  __int128 v129; // xmm1
  __int128 v130; // xmm0
  __int128 v131; // xmm1
  __int128 v132; // xmm0
  __int128 v133; // xmm1
  __int128 v134; // xmm0
  __int128 v135; // xmm1
  __int128 v136; // xmm0
  __int128 v137; // xmm0
  __int128 v138; // xmm1
  __int128 v139; // xmm0
  __int128 v140; // xmm1
  __int128 v141; // xmm0
  __int128 v142; // xmm1
  __int128 v143; // xmm0
  __int64 v144; // [rsp+100h] [rbp-80h] BYREF
  __int64 v145; // [rsp+108h] [rbp-78h] BYREF
  __int64 v146; // [rsp+110h] [rbp-70h] BYREF
  __int64 v147; // [rsp+118h] [rbp-68h] BYREF
  __int64 v148; // [rsp+120h] [rbp-60h] BYREF
  __int64 v149; // [rsp+128h] [rbp-58h] BYREF
  __int64 v150; // [rsp+130h] [rbp-50h] BYREF
  __int64 v151; // [rsp+138h] [rbp-48h] BYREF
  __int64 v152; // [rsp+140h] [rbp-40h] BYREF
  __int64 v153; // [rsp+148h] [rbp-38h] BYREF
  __int64 v154; // [rsp+150h] [rbp-30h] BYREF
  __int64 v155; // [rsp+158h] [rbp-28h] BYREF
  __int64 v156; // [rsp+160h] [rbp-20h] BYREF
  __int64 v157; // [rsp+168h] [rbp-18h] BYREF
  __int64 v158; // [rsp+170h] [rbp-10h] BYREF
  __int64 v159; // [rsp+178h] [rbp-8h] BYREF
  __int64 v160; // [rsp+180h] [rbp+0h] BYREF
  __int64 v161; // [rsp+188h] [rbp+8h] BYREF
  __int64 v162; // [rsp+190h] [rbp+10h] BYREF
  __int64 v163; // [rsp+198h] [rbp+18h] BYREF
  __int64 v164; // [rsp+1A0h] [rbp+20h] BYREF
  __int64 v165; // [rsp+1A8h] [rbp+28h] BYREF
  __int64 v166; // [rsp+1B0h] [rbp+30h] BYREF
  __int64 v167; // [rsp+1B8h] [rbp+38h] BYREF
  __int64 v168; // [rsp+1C0h] [rbp+40h] BYREF
  __int64 v169; // [rsp+1C8h] [rbp+48h] BYREF
  __int64 v170; // [rsp+1D0h] [rbp+50h] BYREF
  __int128 v171; // [rsp+1E0h] [rbp+60h] BYREF
  __int128 v172; // [rsp+1F0h] [rbp+70h]
  __int128 v173; // [rsp+200h] [rbp+80h]
  __int128 v174; // [rsp+210h] [rbp+90h]
  __int128 v175; // [rsp+220h] [rbp+A0h]
  __int128 v176; // [rsp+230h] [rbp+B0h]
  __int128 v177; // [rsp+240h] [rbp+C0h]
  __int128 v178; // [rsp+250h] [rbp+D0h]
  __int128 v179; // [rsp+260h] [rbp+E0h]

  if ( (unsigned int)dword_1803D0EB8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803D0EB8, 2LL) )
    {
      v3 = *(_OWORD *)(v1 + 8);
      v144 = *(unsigned int *)(v1 + 196);
      v4 = *(_OWORD *)(v1 + 24);
      v5 = *(unsigned int *)(v1 + 192);
      v171 = v3;
      v145 = v5;
      v172 = v4;
      v6 = *(_OWORD *)(v1 + 40);
      v146 = *(_QWORD *)(v1 + 184);
      v7 = *(_OWORD *)(v1 + 56);
      v8 = *(_QWORD *)(v1 + 176);
      v173 = v6;
      v147 = v8;
      v174 = v7;
      v9 = *(_OWORD *)(v1 + 72);
      v148 = *(_QWORD *)(v1 + 168);
      v10 = *(_OWORD *)(v1 + 88);
      v11 = *(_QWORD *)(v1 + 160);
      v175 = v9;
      v149 = v11;
      v176 = v10;
      v12 = *(_OWORD *)(v1 + 104);
      v150 = *(_QWORD *)(v1 + 152);
      v13 = *(_OWORD *)(v1 + 136);
      v177 = v12;
      v178 = *(_OWORD *)(v1 + 120);
      v14 = *(_OWORD *)(v1 + 8);
      v179 = v13;
      v15 = *((_QWORD *)&v13 + 1);
      v16 = *(_OWORD *)(v1 + 24);
      v151 = v15;
      v171 = v14;
      v17 = *(_OWORD *)(v1 + 40);
      v172 = v16;
      v18 = *(_OWORD *)(v1 + 56);
      v173 = v17;
      v19 = *(_OWORD *)(v1 + 72);
      v174 = v18;
      v20 = *(_OWORD *)(v1 + 88);
      v175 = v19;
      v21 = *(_OWORD *)(v1 + 104);
      v176 = v20;
      v22 = *(_OWORD *)(v1 + 120);
      v177 = v21;
      v23 = *(_OWORD *)(v1 + 136);
      v178 = v22;
      v24 = *(_OWORD *)(v1 + 24);
      v179 = v23;
      v25 = *(_OWORD *)(v1 + 8);
      v152 = v179;
      v171 = v25;
      v26 = *(_OWORD *)(v1 + 40);
      v172 = v24;
      v27 = *(_OWORD *)(v1 + 56);
      v173 = v26;
      v28 = *(_OWORD *)(v1 + 72);
      v174 = v27;
      v29 = *(_OWORD *)(v1 + 88);
      v175 = v28;
      v30 = *(_OWORD *)(v1 + 104);
      v176 = v29;
      v31 = *(_OWORD *)(v1 + 120);
      v177 = v30;
      v32 = *(_OWORD *)(v1 + 136);
      v178 = v31;
      v179 = v32;
      v33 = *(_OWORD *)(v1 + 8);
      v153 = *((_QWORD *)&v31 + 1);
      v171 = v33;
      v34 = *(_OWORD *)(v1 + 40);
      v172 = *(_OWORD *)(v1 + 24);
      v173 = v34;
      v35 = *(_OWORD *)(v1 + 72);
      v174 = *(_OWORD *)(v1 + 56);
      v175 = v35;
      v36 = *(_OWORD *)(v1 + 104);
      v176 = *(_OWORD *)(v1 + 88);
      v177 = v36;
      v37 = *(_OWORD *)(v1 + 136);
      v178 = *(_OWORD *)(v1 + 120);
      v179 = v37;
      v38 = *(_OWORD *)(v1 + 8);
      v154 = v178;
      v39 = *(_OWORD *)(v1 + 24);
      v171 = v38;
      v172 = v39;
      v40 = *(_OWORD *)(v1 + 56);
      v173 = *(_OWORD *)(v1 + 40);
      v174 = v40;
      v41 = *(_OWORD *)(v1 + 88);
      v175 = *(_OWORD *)(v1 + 72);
      v176 = v41;
      v42 = *(_OWORD *)(v1 + 120);
      v177 = *(_OWORD *)(v1 + 104);
      v43 = *(_OWORD *)(v1 + 136);
      v178 = v42;
      v44 = *(_OWORD *)(v1 + 24);
      v179 = v43;
      v45 = *(_OWORD *)(v1 + 8);
      v155 = *((_QWORD *)&v177 + 1);
      v171 = v45;
      v46 = *(_OWORD *)(v1 + 40);
      v172 = v44;
      v47 = *(_OWORD *)(v1 + 56);
      v173 = v46;
      v48 = *(_OWORD *)(v1 + 72);
      v174 = v47;
      v49 = *(_OWORD *)(v1 + 88);
      v175 = v48;
      v50 = *(_OWORD *)(v1 + 104);
      v176 = v49;
      v51 = *(_OWORD *)(v1 + 120);
      v177 = v50;
      v52 = *(_OWORD *)(v1 + 136);
      v178 = v51;
      v53 = *(_OWORD *)(v1 + 24);
      v179 = v52;
      v54 = *(_OWORD *)(v1 + 8);
      v156 = v177;
      v171 = v54;
      v55 = *(_OWORD *)(v1 + 40);
      v172 = v53;
      v56 = *(_OWORD *)(v1 + 56);
      v173 = v55;
      v57 = *(_OWORD *)(v1 + 72);
      v174 = v56;
      v58 = *(_OWORD *)(v1 + 88);
      v175 = v57;
      v59 = *(_OWORD *)(v1 + 104);
      v176 = v58;
      v60 = *(_OWORD *)(v1 + 120);
      v177 = v59;
      v61 = *(_OWORD *)(v1 + 136);
      v178 = v60;
      v179 = v61;
      v62 = *(_OWORD *)(v1 + 8);
      v157 = *((_QWORD *)&v176 + 1);
      v63 = *(_OWORD *)(v1 + 24);
      v171 = v62;
      v172 = v63;
      v64 = *(_OWORD *)(v1 + 56);
      v173 = *(_OWORD *)(v1 + 40);
      v174 = v64;
      v65 = *(_OWORD *)(v1 + 88);
      v175 = *(_OWORD *)(v1 + 72);
      v176 = v65;
      v66 = *(_OWORD *)(v1 + 120);
      v177 = *(_OWORD *)(v1 + 104);
      v178 = v66;
      v67 = *(_OWORD *)(v1 + 24);
      v179 = *(_OWORD *)(v1 + 136);
      v68 = *(_OWORD *)(v1 + 8);
      v158 = v176;
      v171 = v68;
      v172 = v67;
      v69 = *(_OWORD *)(v1 + 56);
      v173 = *(_OWORD *)(v1 + 40);
      v174 = v69;
      v70 = *(_OWORD *)(v1 + 88);
      v175 = *(_OWORD *)(v1 + 72);
      v71 = *(_OWORD *)(v1 + 104);
      v176 = v70;
      v72 = *(_OWORD *)(v1 + 120);
      v177 = v71;
      v73 = *(_OWORD *)(v1 + 136);
      v178 = v72;
      v74 = *(_OWORD *)(v1 + 24);
      v179 = v73;
      v75 = *(_OWORD *)(v1 + 8);
      v159 = *((_QWORD *)&v175 + 1);
      v171 = v75;
      v76 = *(_OWORD *)(v1 + 40);
      v172 = v74;
      v77 = *(_OWORD *)(v1 + 56);
      v173 = v76;
      v78 = *(_OWORD *)(v1 + 72);
      v174 = v77;
      v79 = *(_OWORD *)(v1 + 88);
      v175 = v78;
      v80 = *(_OWORD *)(v1 + 104);
      v176 = v79;
      v81 = *(_OWORD *)(v1 + 120);
      v177 = v80;
      v82 = *(_OWORD *)(v1 + 136);
      v178 = v81;
      v83 = *(_OWORD *)(v1 + 24);
      v179 = v82;
      v84 = *(_OWORD *)(v1 + 8);
      v160 = v175;
      v171 = v84;
      v85 = *(_OWORD *)(v1 + 40);
      v172 = v83;
      v86 = *(_OWORD *)(v1 + 56);
      v173 = v85;
      v87 = *(_OWORD *)(v1 + 72);
      v174 = v86;
      v88 = *(_OWORD *)(v1 + 88);
      v175 = v87;
      v89 = *(_OWORD *)(v1 + 104);
      v176 = v88;
      v90 = *(_OWORD *)(v1 + 120);
      v177 = v89;
      v178 = v90;
      v91 = *(_OWORD *)(v1 + 24);
      v179 = *(_OWORD *)(v1 + 136);
      v92 = *(_OWORD *)(v1 + 8);
      v161 = *((_QWORD *)&v174 + 1);
      v171 = v92;
      v172 = v91;
      v93 = *(_OWORD *)(v1 + 56);
      v173 = *(_OWORD *)(v1 + 40);
      v174 = v93;
      v94 = *(_OWORD *)(v1 + 88);
      v175 = *(_OWORD *)(v1 + 72);
      v176 = v94;
      v95 = *(_OWORD *)(v1 + 120);
      v177 = *(_OWORD *)(v1 + 104);
      v178 = v95;
      v96 = *(_OWORD *)(v1 + 24);
      v179 = *(_OWORD *)(v1 + 136);
      v97 = *(_OWORD *)(v1 + 8);
      v162 = v174;
      v171 = v97;
      v172 = v96;
      v98 = *(_OWORD *)(v1 + 56);
      v173 = *(_OWORD *)(v1 + 40);
      v99 = *(_OWORD *)(v1 + 72);
      v174 = v98;
      v175 = v99;
      v100 = *(_OWORD *)(v1 + 104);
      v176 = *(_OWORD *)(v1 + 88);
      v101 = *(_OWORD *)(v1 + 120);
      v177 = v100;
      v102 = *(_OWORD *)(v1 + 136);
      v178 = v101;
      v103 = *(_OWORD *)(v1 + 24);
      v179 = v102;
      v104 = *(_OWORD *)(v1 + 8);
      v163 = *((_QWORD *)&v173 + 1);
      v171 = v104;
      v105 = *(_OWORD *)(v1 + 40);
      v172 = v103;
      v106 = *(_OWORD *)(v1 + 56);
      v173 = v105;
      v107 = *(_OWORD *)(v1 + 72);
      v174 = v106;
      v108 = *(_OWORD *)(v1 + 88);
      v175 = v107;
      v109 = *(_OWORD *)(v1 + 104);
      v176 = v108;
      v110 = *(_OWORD *)(v1 + 120);
      v177 = v109;
      v111 = *(_OWORD *)(v1 + 136);
      v178 = v110;
      v112 = *(_OWORD *)(v1 + 24);
      v179 = v111;
      v113 = *(_OWORD *)(v1 + 8);
      v164 = v173;
      v171 = v113;
      v114 = *(_OWORD *)(v1 + 40);
      v172 = v112;
      v115 = *(_OWORD *)(v1 + 56);
      v173 = v114;
      v116 = *(_OWORD *)(v1 + 72);
      v174 = v115;
      v117 = *(_OWORD *)(v1 + 88);
      v175 = v116;
      v118 = *(_OWORD *)(v1 + 104);
      v176 = v117;
      v177 = v118;
      v169 = v2;
      v119 = *(_OWORD *)(v1 + 136);
      v178 = *(_OWORD *)(v1 + 120);
      v179 = v119;
      v120 = *(_OWORD *)(v1 + 8);
      v165 = *((_QWORD *)&v172 + 1);
      v121 = *(_OWORD *)(v1 + 24);
      v171 = v120;
      v172 = v121;
      v122 = *(_OWORD *)(v1 + 56);
      v173 = *(_OWORD *)(v1 + 40);
      v174 = v122;
      v123 = *(_OWORD *)(v1 + 88);
      v175 = *(_OWORD *)(v1 + 72);
      v124 = *(_OWORD *)(v1 + 104);
      v176 = v123;
      v177 = v124;
      v125 = *(_OWORD *)(v1 + 136);
      v178 = *(_OWORD *)(v1 + 120);
      v126 = *(_OWORD *)(v1 + 24);
      v179 = v125;
      v127 = *(_OWORD *)(v1 + 8);
      v166 = v172;
      v171 = v127;
      v128 = *(_OWORD *)(v1 + 40);
      v172 = v126;
      v129 = *(_OWORD *)(v1 + 56);
      v173 = v128;
      v130 = *(_OWORD *)(v1 + 72);
      v174 = v129;
      v131 = *(_OWORD *)(v1 + 88);
      v175 = v130;
      v132 = *(_OWORD *)(v1 + 104);
      v176 = v131;
      v133 = *(_OWORD *)(v1 + 120);
      v177 = v132;
      v134 = *(_OWORD *)(v1 + 136);
      v178 = v133;
      v135 = *(_OWORD *)(v1 + 24);
      v179 = v134;
      v136 = *(_OWORD *)(v1 + 8);
      v167 = *((_QWORD *)&v171 + 1);
      v171 = v136;
      v137 = *(_OWORD *)(v1 + 40);
      v172 = v135;
      v138 = *(_OWORD *)(v1 + 56);
      v173 = v137;
      v139 = *(_OWORD *)(v1 + 72);
      v174 = v138;
      v140 = *(_OWORD *)(v1 + 88);
      v175 = v139;
      v141 = *(_OWORD *)(v1 + 104);
      v176 = v140;
      v142 = *(_OWORD *)(v1 + 120);
      v177 = v141;
      v143 = *(_OWORD *)(v1 + 136);
      v178 = v142;
      v179 = v143;
      v168 = v171;
      v170 = *(_QWORD *)v1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)&v171,
        byte_18036B430,
        128LL,
        v1,
        (__int64)&v170,
        (__int64)&v169,
        (__int64)&v168,
        (__int64)&v167,
        (__int64)&v166,
        (__int64)&v165,
        (__int64)&v164,
        (__int64)&v163,
        (__int64)&v162,
        (__int64)&v161,
        (__int64)&v160,
        (__int64)&v159,
        (__int64)&v158,
        (__int64)&v157,
        (__int64)&v156,
        (__int64)&v155,
        (__int64)&v154,
        (__int64)&v153,
        (__int64)&v152,
        (__int64)&v151,
        (__int64)&v150,
        (__int64)&v149,
        (__int64)&v148,
        (__int64)&v147,
        (__int64)&v146,
        (__int64)&v145,
        (__int64)&v144);
    }
  }
}
