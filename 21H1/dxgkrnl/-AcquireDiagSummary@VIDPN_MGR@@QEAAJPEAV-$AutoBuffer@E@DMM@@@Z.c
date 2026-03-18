/*
 * XREFs of ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02D6854
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02D5D34 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0059008 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005A43C (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005A534 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02DC308 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02DC630 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E19FC (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E1B78 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C02E4328 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E46D0 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E59A0 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C02EFC18 (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagSummary(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  DMMVIDEOPRESENTTARGETSET *v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _DWORD *v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  _QWORD *v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  _QWORD *v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  SIZE_T v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  void *v88; // r15
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  int v95; // eax
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rsi
  __int64 v100; // rax
  size_t v101; // r12
  SIZE_T v102; // rsi
  int v103; // eax
  __int64 v104; // rdx
  __int64 v105; // rcx
  _QWORD *v106; // rax
  char *v107; // rbx
  char *v108; // rcx
  char *v109; // rbx
  char *v110; // rbx
  char *v111; // rbx
  char *v112; // rbx
  char *v113; // rbx
  char *v114; // rbx
  char *v115; // rbx
  __int64 v116; // rdx
  __int64 v117; // rcx
  _QWORD v118[4]; // [rsp+28h] [rbp-E0h] BYREF
  char *v119; // [rsp+48h] [rbp-C0h]
  SIZE_T v120; // [rsp+50h] [rbp-B8h]
  __int64 v121; // [rsp+58h] [rbp-B0h]
  _QWORD v122[4]; // [rsp+60h] [rbp-A8h] BYREF
  void *v123; // [rsp+80h] [rbp-88h]
  size_t v124; // [rsp+88h] [rbp-80h]
  int v125; // [rsp+90h] [rbp-78h]
  void **v126; // [rsp+98h] [rbp-70h] BYREF
  __int128 v127; // [rsp+A0h] [rbp-68h]
  void **v128; // [rsp+B0h] [rbp-58h]
  void *v129; // [rsp+B8h] [rbp-50h]
  size_t v130; // [rsp+C0h] [rbp-48h]
  int v131; // [rsp+C8h] [rbp-40h]
  void **v132; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v133; // [rsp+D8h] [rbp-30h]
  void **v134; // [rsp+E8h] [rbp-20h]
  void *v135; // [rsp+F0h] [rbp-18h]
  size_t v136; // [rsp+F8h] [rbp-10h]
  int v137; // [rsp+100h] [rbp-8h]
  void **v138; // [rsp+108h] [rbp+0h] BYREF
  __int128 v139; // [rsp+110h] [rbp+8h]
  void **v140; // [rsp+120h] [rbp+18h]
  void *v141; // [rsp+128h] [rbp+20h]
  size_t v142; // [rsp+130h] [rbp+28h]
  int v143; // [rsp+138h] [rbp+30h]
  void **v144; // [rsp+140h] [rbp+38h] BYREF
  __int128 v145; // [rsp+148h] [rbp+40h]
  void **v146; // [rsp+158h] [rbp+50h]
  void *v147; // [rsp+160h] [rbp+58h]
  size_t v148; // [rsp+168h] [rbp+60h]
  int v149; // [rsp+170h] [rbp+68h]
  void **v150; // [rsp+178h] [rbp+70h] BYREF
  __int128 v151; // [rsp+180h] [rbp+78h]
  void **v152; // [rsp+190h] [rbp+88h]
  void *v153; // [rsp+198h] [rbp+90h]
  size_t v154; // [rsp+1A0h] [rbp+98h]
  int v155; // [rsp+1A8h] [rbp+A0h]
  void **v156; // [rsp+1B0h] [rbp+A8h] BYREF
  __int128 v157; // [rsp+1B8h] [rbp+B0h]
  void **v158; // [rsp+1C8h] [rbp+C0h]
  void *Src; // [rsp+1D0h] [rbp+C8h]
  size_t Size; // [rsp+1D8h] [rbp+D0h]
  int v161; // [rsp+1E0h] [rbp+D8h]
  void **v162; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v163; // [rsp+1F0h] [rbp+E8h]
  void **v164; // [rsp+200h] [rbp+F8h]
  void *v165; // [rsp+208h] [rbp+100h]
  size_t v166; // [rsp+210h] [rbp+108h]
  int v167; // [rsp+218h] [rbp+110h]
  SIZE_T v168; // [rsp+260h] [rbp+158h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdError(a1, 0LL);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a2 + 32) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = a1[9];
  v156 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  Src = 0LL;
  v158 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  Size = 0LL;
  v157 = 0LL;
  v161 = 3;
  v8 = DMMVIDEOPRESENTSOURCESET::Serialize(v7, &v156);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    v14 = a1[9];
    v15 = v12;
    *(_QWORD *)(v12 + 24) = v14;
    v16 = a1[1];
    if ( !v16 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v14, v13);
      WdLogEvent5_WdAssertion(v17);
      v16 = a1[1];
    }
    *(_QWORD *)(v15 + 32) = *(_QWORD *)(v16 + 16);
    *(_QWORD *)(v15 + 40) = v11;
    WdLogEvent5_WdError(v15);
    goto LABEL_68;
  }
  v18 = (DMMVIDEOPRESENTTARGETSET *)a1[10];
  v150 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v153 = 0LL;
  v152 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v151 = 0LL;
  v154 = 0LL;
  v155 = 3;
  v19 = DMMVIDEOPRESENTTARGETSET::Serialize(v18);
  v11 = v19;
  if ( v19 < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v21, v20);
    v24 = a1[10];
    v25 = v22;
    *(_QWORD *)(v22 + 24) = v24;
    v26 = a1[1];
    if ( !v26 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v24, v23);
      WdLogEvent5_WdAssertion(v27);
      v26 = a1[1];
    }
    *(_QWORD *)(v25 + 32) = *(_QWORD *)(v26 + 16);
    *(_QWORD *)(v25 + 40) = v11;
    WdLogEvent5_WdError(v25);
    goto LABEL_67;
  }
  v28 = a1[11];
  v122[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v122[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v123 = 0LL;
  v124 = 0LL;
  v125 = 3;
  *(_OWORD *)&v122[1] = 0LL;
  if ( v28 )
  {
    v29 = DMMVIDPN::Serialize(v28, v122);
    v11 = v29;
    if ( v29 < 0 )
    {
      v32 = WdLogNewEntry5_WdError(v31, v30);
      v34 = a1[11];
      v35 = v32;
      *(_QWORD *)(v32 + 24) = v34;
      v36 = a1[1];
      if ( !v36 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v34, v33);
        WdLogEvent5_WdAssertion(v37);
        v36 = a1[1];
      }
      v38 = v35;
      *(_QWORD *)(v35 + 32) = *(_QWORD *)(v36 + 16);
      *(_QWORD *)(v35 + 40) = v11;
      goto LABEL_20;
    }
    goto LABEL_22;
  }
  v39 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)v122, 0xCuLL);
  v11 = v39;
  if ( v39 >= 0 )
  {
    v42 = v123;
    *(_QWORD *)v123 = qword_1C00AF1A0;
    v42[2] = dword_1C00AF1A8;
LABEL_22:
    v147 = 0LL;
    v144 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v148 = 0LL;
    v146 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v149 = 3;
    v145 = 0LL;
    v43 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(a1 + 19, &v144);
    v11 = v43;
    if ( v43 < 0 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44);
      v48[3] = a1 + 19;
      v49 = a1[1];
      if ( !v49 )
      {
        v50 = WdLogNewEntry5_WdAssertion(v47, v46);
        WdLogEvent5_WdAssertion(v50);
        v49 = a1[1];
      }
      v48[4] = *(_QWORD *)(v49 + 16);
      v48[5] = v11;
      WdLogEvent5_WdError(v48);
      goto LABEL_65;
    }
    v51 = a1[10];
    v138 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v141 = 0LL;
    v140 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v139 = 0LL;
    v142 = 0LL;
    v143 = 3;
    v52 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v51, &v138);
    v11 = v52;
    if ( v52 < 0 )
    {
      v55 = WdLogNewEntry5_WdError(v54, v53);
      v57 = a1[10];
      v58 = v55;
      *(_QWORD *)(v55 + 24) = v57;
      v59 = a1[1];
      if ( !v59 )
      {
        v60 = WdLogNewEntry5_WdAssertion(v57, v56);
        WdLogEvent5_WdAssertion(v60);
        v59 = a1[1];
      }
      *(_QWORD *)(v58 + 32) = *(_QWORD *)(v59 + 16);
      *(_QWORD *)(v58 + 40) = v11;
      WdLogEvent5_WdError(v58);
      goto LABEL_64;
    }
    v135 = 0LL;
    v132 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v136 = 0LL;
    v134 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v137 = 3;
    v133 = 0LL;
    v61 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(a1 + 36, &v132);
    v11 = v61;
    if ( v61 < 0 )
    {
      v66 = (_QWORD *)WdLogNewEntry5_WdError(v63, v62);
      v66[3] = a1 + 36;
      v67 = a1[1];
      if ( !v67 )
      {
        v68 = WdLogNewEntry5_WdAssertion(v65, v64);
        WdLogEvent5_WdAssertion(v68);
        v67 = a1[1];
      }
      v66[4] = *(_QWORD *)(v67 + 16);
      v66[5] = v11;
      WdLogEvent5_WdError(v66);
      goto LABEL_63;
    }
    v129 = 0LL;
    v126 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v130 = 0LL;
    v128 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v131 = 3;
    v127 = 0LL;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)&v168, (__int64)a1);
    v69 = DMMVIDPN::SerializeVidPns(a1 + 27, &v126);
    v11 = v69;
    if ( v69 < 0 )
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdError(v71, v70);
      v74[3] = a1 + 27;
      v75 = a1[1];
      if ( !v75 )
      {
        v76 = WdLogNewEntry5_WdAssertion(v73, v72);
        WdLogEvent5_WdAssertion(v76);
        v75 = a1[1];
      }
      v74[4] = *(_QWORD *)(v75 + 16);
      v74[5] = v11;
      WdLogEvent5_WdError(v74);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v168 + 40), v77);
      goto LABEL_62;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v168 + 40), v70);
    v79 = a1[1];
    v162 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v164 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v165 = 0LL;
    v166 = 0LL;
    v167 = 3;
    v168 = 0LL;
    v163 = 0LL;
    if ( !v79 )
    {
      v80 = WdLogNewEntry5_WdAssertion(0LL, v78);
      WdLogEvent5_WdAssertion(v80);
      v79 = a1[1];
    }
    v81 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v79 + 16), &v168, 0LL);
    v83 = 0x80000000LL;
    v11 = v81;
    if ( (int)(v81 + 0x80000000) >= 0 && v81 != -1073741789 )
      goto LABEL_51;
    v84 = v168;
    if ( !v168 )
    {
      v85 = WdLogNewEntry5_WdAssertion(0x80000000LL, v82);
      WdLogEvent5_WdAssertion(v85);
    }
    DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v162, v84);
    v88 = v165;
    if ( !v165 )
    {
      v11 = WdLogNewEntry5_WdError(v87, v86);
      *(_QWORD *)(v11 + 24) = v84;
      v91 = a1[1];
      if ( !v91 )
      {
        v92 = WdLogNewEntry5_WdAssertion(v90, v89);
        WdLogEvent5_WdAssertion(v92);
        v91 = a1[1];
      }
      *(_QWORD *)(v11 + 32) = *(_QWORD *)(v91 + 16);
      WdLogEvent5_WdError(v11);
      LODWORD(v11) = -1073741801;
      goto LABEL_61;
    }
    v93 = a1[1];
    if ( !v93 )
    {
      v94 = WdLogNewEntry5_WdAssertion(0LL, v86);
      WdLogEvent5_WdAssertion(v94);
      v93 = a1[1];
    }
    v95 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v93 + 16), &v168, v88);
    v11 = v95;
    if ( v95 < 0 )
    {
LABEL_51:
      v96 = WdLogNewEntry5_WdError(v83, v82);
      v98 = a1[1];
      v99 = v96;
      if ( !v98 )
      {
        v100 = WdLogNewEntry5_WdAssertion(0LL, v97);
        WdLogEvent5_WdAssertion(v100);
        v98 = a1[1];
      }
      *(_QWORD *)(v99 + 24) = *(_QWORD *)(v98 + 16);
      *(_QWORD *)(v99 + 32) = v11;
      WdLogEvent5_WdError(v99);
      goto LABEL_61;
    }
    LODWORD(v121) = 3;
    v101 = v166;
    v118[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v102 = v154 + v124 + v148 + v142 + v136 + v166 + v130 + Size + 40;
    v118[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v119 = 0LL;
    v120 = 0LL;
    *(_OWORD *)&v118[1] = 0LL;
    v103 = DMM::AutoBuffer<unsigned char>::Initialize((__int64)v118, v102, 0LL, PagedPool);
    v11 = v103;
    if ( v103 >= 0 )
    {
      v11 = (__int64)v119;
      *((_DWORD *)v119 + 1) = v120;
      *(_WORD *)v11 = 20480;
      v107 = v119 + 40;
      v108 = v119 + 40;
      *(_DWORD *)(v11 + 8) = 40;
      memmove(v108, Src, Size);
      v109 = &v107[Size];
      *(_DWORD *)(v11 + 12) = (_DWORD)v109 - (_DWORD)v119;
      memmove(v109, v153, v154);
      v110 = &v109[v154];
      *(_DWORD *)(v11 + 16) = (_DWORD)v110 - (_DWORD)v119;
      memmove(v110, v123, v124);
      v111 = &v110[v124];
      *(_DWORD *)(v11 + 20) = (_DWORD)v111 - (_DWORD)v119;
      memmove(v111, v147, v148);
      v112 = &v111[v148];
      *(_DWORD *)(v11 + 24) = (_DWORD)v112 - (_DWORD)v119;
      memmove(v112, v141, v142);
      v113 = &v112[v142];
      *(_DWORD *)(v11 + 28) = (_DWORD)v113 - (_DWORD)v119;
      memmove(v113, v135, v136);
      v114 = &v113[v136];
      *(_DWORD *)(v11 + 32) = (_DWORD)v114 - (_DWORD)v119;
      memmove(v114, v129, v130);
      v115 = &v114[v130];
      *(_DWORD *)(v11 + 36) = (_DWORD)v115 - (_DWORD)v119;
      memmove(v115, v88, v101);
      LODWORD(v11) = DMM::AutoBuffer<unsigned char>::Initialize(a2, v120, v119, (POOL_TYPE)v121);
      if ( (int)v11 >= 0 )
      {
        LODWORD(v11) = 0;
        goto LABEL_60;
      }
      v106 = (_QWORD *)WdLogNewEntry5_WdError(v117, v116);
      v106[3] = a2;
      v106[4] = v118;
    }
    else
    {
      v106 = (_QWORD *)WdLogNewEntry5_WdError(v105, v104);
      v106[3] = v102;
      v106[4] = a1;
      v106[5] = v11;
    }
    WdLogEvent5_WdError(v106);
LABEL_60:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v118);
LABEL_61:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v162);
LABEL_62:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v126);
LABEL_63:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v132);
LABEL_64:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v138);
LABEL_65:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v144);
    goto LABEL_66;
  }
  v38 = WdLogNewEntry5_WdError(v41, v40);
  *(_QWORD *)(v38 + 24) = 12LL;
  *(_QWORD *)(v38 + 32) = v11;
LABEL_20:
  WdLogEvent5_WdError(v38);
LABEL_66:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v122);
LABEL_67:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v150);
LABEL_68:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v156);
  return (unsigned int)v11;
}
