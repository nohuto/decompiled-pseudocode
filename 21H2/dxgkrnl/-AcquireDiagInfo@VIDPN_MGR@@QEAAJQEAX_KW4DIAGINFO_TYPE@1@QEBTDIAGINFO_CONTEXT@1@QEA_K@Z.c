/*
 * XREFs of ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02DA5F4
 * Callers:
 *     ?DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z @ 0x1C02DBF40 (-DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z.c)
 *     ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x1C02DC07C (-DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C02DC620 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00055D4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00056AC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00085F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000B5A8 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0045C24 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C005AE68 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005C29C (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005C394 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0125B70 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02DB114 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02DBAE0 (-AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E0BC8 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E0EF0 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C02E1194 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C02E14A4 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E1694 (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E62CC (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E6448 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C02E8BF8 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E8FA0 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02EA270 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C02F44E8 (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagInfo(unsigned __int64 a1, void *a2, size_t a3, int a4, int *a5, size_t *a6)
{
  __int64 v6; // r14
  void *v8; // r13
  struct VIDPN_MGR *v9; // rdi
  __int64 v10; // rax
  size_t *v12; // r15
  __int64 v13; // rax
  _QWORD *v14; // r15
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  unsigned __int8 *v45; // rdx
  __int64 v46; // rax
  DXGFASTMUTEX **v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  unsigned __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  _QWORD *v77; // r14
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rbx
  __int64 v85; // r15
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rax
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rcx
  int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  _QWORD *v99; // rbx
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rax
  int v107; // eax
  SIZE_T v108; // rsi
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  void *v112; // rbx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rbx
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rax
  int v120; // eax
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rax
  int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rcx
  _QWORD *v131; // rbx
  __int64 v132; // rax
  __int64 v133; // rax
  size_t v134; // rbx
  size_t v135; // r8
  _QWORD *v136; // rax
  __int64 v137; // [rsp+38h] [rbp-49h] BYREF
  __int64 v138; // [rsp+40h] [rbp-41h] BYREF
  __int64 v139; // [rsp+48h] [rbp-39h] BYREF
  __int128 v140; // [rsp+50h] [rbp-31h]
  void **v141; // [rsp+60h] [rbp-21h]
  void *Src; // [rsp+68h] [rbp-19h]
  unsigned __int64 v143; // [rsp+70h] [rbp-11h]
  int v144; // [rsp+78h] [rbp-9h]
  SIZE_T v145; // [rsp+80h] [rbp-1h] BYREF
  __int64 v146; // [rsp+88h] [rbp+7h] BYREF
  __int64 v147; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v148; // [rsp+98h] [rbp+17h] BYREF
  void *v149; // [rsp+E0h] [rbp+5Fh] BYREF

  v149 = a2;
  v6 = a4;
  v8 = a2;
  v9 = (struct VIDPN_MGR *)a1;
  if ( a2 )
  {
    if ( a3 )
    {
      memset(a2, 0, a3);
      goto LABEL_7;
    }
LABEL_5:
    v10 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v10 + 24) = v8;
    *(_QWORD *)(v10 + 32) = a3;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  if ( a3 )
    goto LABEL_5;
LABEL_7:
  v12 = a6;
  if ( a6 )
    *a6 = 0LL;
  Src = 0LL;
  v139 = (__int64)&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v141 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v143 = 0LL;
  v144 = 3;
  v140 = 0LL;
  if ( (int)v6 <= 7 )
  {
    if ( (_DWORD)v6 == 7 )
    {
      if ( a5 )
      {
        v34 = WdLogNewEntry5_WdAssertion(a1, a2);
        WdLogEvent5_WdAssertion(v34);
      }
      v14 = (_QWORD *)((char *)v9 + 288);
      v15 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests((char *)v9 + 288, &v139);
LABEL_42:
      v23 = v15;
      if ( v15 < 0 )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
        v37[3] = v14;
        v38 = *((_QWORD *)v9 + 1);
        if ( !v38 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v36, v35);
          WdLogEvent5_WdAssertion(v39);
          v38 = *((_QWORD *)v9 + 1);
        }
        v37[4] = *(_QWORD *)(v38 + 16);
        v37[5] = v23;
        goto LABEL_75;
      }
      goto LABEL_134;
    }
    if ( (_DWORD)v6 != 1 )
    {
      if ( (_DWORD)v6 == 2 )
      {
        if ( a5 )
        {
          v31 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 2), a2);
          WdLogEvent5_WdAssertion(v31);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 9) + 72LL));
        v21 = *((_QWORD *)v9 + 9);
        v22 = DMMVIDEOPRESENTSOURCESET::Serialize(v21, &v139);
        goto LABEL_23;
      }
      if ( (_DWORD)v6 == 3 )
      {
        if ( a5 )
        {
          v30 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 3), a2);
          WdLogEvent5_WdAssertion(v30);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 10) + 72LL));
        v21 = *((_QWORD *)v9 + 10);
        v22 = DMMVIDEOPRESENTTARGETSET::Serialize((DMMVIDEOPRESENTTARGETSET *)v21);
        goto LABEL_23;
      }
      a1 = (unsigned int)(v6 - 4);
      if ( (_DWORD)v6 != 4 )
      {
        a1 = (unsigned int)(v6 - 5);
        if ( (_DWORD)v6 != 5 )
        {
          if ( (_DWORD)v6 == 6 )
          {
            if ( a5 )
            {
              v13 = WdLogNewEntry5_WdAssertion(a1, a2);
              WdLogEvent5_WdAssertion(v13);
            }
            v14 = (_QWORD *)((char *)v9 + 152);
            v15 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests((char *)v9 + 152, &v139);
            goto LABEL_42;
          }
LABEL_108:
          v103 = WdLogNewEntry5_WdError(a1, a2);
          *(_QWORD *)(v103 + 24) = v6;
          WdLogEvent5_WdError(v103);
          LODWORD(v23) = -1073741811;
          goto LABEL_144;
        }
        if ( a5 )
        {
          v20 = WdLogNewEntry5_WdAssertion(a1, a2);
          WdLogEvent5_WdAssertion(v20);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 10) + 72LL));
        v21 = *((_QWORD *)v9 + 10);
        v22 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v21, &v139);
LABEL_23:
        v23 = v22;
        if ( v22 < 0 )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
          v26[3] = v21;
          v27 = *((_QWORD *)v9 + 1);
          if ( !v27 )
          {
            v28 = WdLogNewEntry5_WdAssertion(v25, v24);
            WdLogEvent5_WdAssertion(v28);
            v27 = *((_QWORD *)v9 + 1);
          }
          v26[4] = *(_QWORD *)(v27 + 16);
          v26[5] = v23;
          WdLogEvent5_WdError(v26);
          if ( v21 )
            ReferenceCounted::Release((ReferenceCounted *)(v21 + 64), v29);
          goto LABEL_144;
        }
        if ( v21 )
          ReferenceCounted::Release((ReferenceCounted *)(v21 + 64), v16);
        goto LABEL_135;
      }
      goto LABEL_76;
    }
    if ( a5 )
    {
      v32 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 1), a2);
      WdLogEvent5_WdAssertion(v32);
    }
    v33 = VIDPN_MGR::AcquireDiagSummary(v9, &v139);
    goto LABEL_70;
  }
  if ( (_DWORD)v6 == 8 )
  {
    if ( a5 )
    {
      v125 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v125);
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v148, (__int64)v9);
    v126 = DMMVIDPN::SerializeVidPns((char *)v9 + 216, &v139);
    v23 = v126;
    if ( v126 < 0 )
    {
      v131 = (_QWORD *)WdLogNewEntry5_WdError(v128, v127);
      v131[3] = (char *)v9 + 216;
      v132 = *((_QWORD *)v9 + 1);
      if ( !v132 )
      {
        v133 = WdLogNewEntry5_WdAssertion(v130, v129);
        WdLogEvent5_WdAssertion(v133);
        v132 = *((_QWORD *)v9 + 1);
      }
      v131[4] = *(_QWORD *)(v132 + 16);
      v131[5] = v23;
      WdLogEvent5_WdError(v131);
      v52 = v148;
      goto LABEL_106;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v148 + 40), v127);
    goto LABEL_134;
  }
  if ( (_DWORD)v6 == 9 )
  {
    if ( a5 )
    {
      v104 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v104);
    }
    v105 = *((_QWORD *)v9 + 1);
    v145 = 0LL;
    if ( !v105 )
    {
      v106 = WdLogNewEntry5_WdAssertion(0LL, a2);
      WdLogEvent5_WdAssertion(v106);
      v105 = *((_QWORD *)v9 + 1);
    }
    v107 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v105 + 16), &v145, 0LL);
    v17 = 0x80000000LL;
    v23 = v107;
    if ( (int)(v107 + 0x80000000) < 0 || v107 == -1073741789 )
    {
      v108 = v145;
      if ( !v145 )
      {
        v109 = WdLogNewEntry5_WdAssertion(0x80000000LL, v16);
        WdLogEvent5_WdAssertion(v109);
      }
      DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v139, v108);
      v112 = Src;
      if ( !Src )
      {
        v115 = WdLogNewEntry5_WdError(v111, v110);
        *(_QWORD *)(v115 + 24) = v108;
        v116 = *((_QWORD *)v9 + 1);
        if ( !v116 )
        {
          v117 = WdLogNewEntry5_WdAssertion(v114, v113);
          WdLogEvent5_WdAssertion(v117);
          v116 = *((_QWORD *)v9 + 1);
        }
        *(_QWORD *)(v115 + 32) = *(_QWORD *)(v116 + 16);
        WdLogEvent5_WdError(v115);
        LODWORD(v23) = -1073741801;
        goto LABEL_144;
      }
      v118 = *((_QWORD *)v9 + 1);
      if ( !v118 )
      {
        v119 = WdLogNewEntry5_WdAssertion(0LL, v110);
        WdLogEvent5_WdAssertion(v119);
        v118 = *((_QWORD *)v9 + 1);
      }
      v120 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v118 + 16), &v145, v112);
      v23 = v120;
      if ( v120 >= 0 )
        goto LABEL_135;
    }
    v121 = WdLogNewEntry5_WdError(v17, v16);
    v123 = *((_QWORD *)v9 + 1);
    v37 = (_QWORD *)v121;
    if ( !v123 )
    {
      v124 = WdLogNewEntry5_WdAssertion(0LL, v122);
      WdLogEvent5_WdAssertion(v124);
      v123 = *((_QWORD *)v9 + 1);
    }
    v37[3] = *(_QWORD *)(v123 + 16);
    goto LABEL_74;
  }
  if ( (int)v6 <= 11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v147, (__int64)v9);
    v138 = 0LL;
    v80 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v9, &v138);
    v23 = v80;
    if ( v80 < 0 )
    {
      v83 = WdLogNewEntry5_WdDmmEvent(v82, v81);
      *(_QWORD *)(v83 + 24) = v23;
      WdLogEvent5_WdDmmEvent(v83);
LABEL_105:
      auto_rc<DMMVIDPN>::reset(&v138, 0LL);
      v52 = v147;
      goto LABEL_106;
    }
    v84 = v138;
    v85 = (unsigned int)*a5;
    if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v138 + 96), *a5) )
    {
      v90 = WdLogNewEntry5_WdDmmEvent(v87, v86);
      v91 = *((_QWORD *)v9 + 1);
      if ( !v91 )
      {
        v92 = WdLogNewEntry5_WdAssertion(v89, v88);
        WdLogEvent5_WdAssertion(v92);
        v91 = *((_QWORD *)v9 + 1);
      }
      *(_QWORD *)(v90 + 24) = *(_QWORD *)(v91 + 16);
      WdLogEvent5_WdDmmEvent(v90);
      LODWORD(v23) = -1071774919;
      goto LABEL_105;
    }
    v93 = VIDPN_MGR::UnpinPathModalityFromSource(v9, (struct DMMVIDPNTOPOLOGY *const)(v84 + 96), v85);
    v23 = v93;
    if ( v93 < 0
      || ((_DWORD)v6 == 10
        ? (v96 = VIDPN_MGR::_SerializeVidPnSourceModeSet(v9, v84, (unsigned int)v85, &v139))
        : (v96 = VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(v9, (__int64)&v139)),
          v23 = v96,
          v96 < 0) )
    {
      v99 = (_QWORD *)WdLogNewEntry5_WdError(v95, v94);
      v99[3] = v85;
      v100 = *((_QWORD *)v9 + 1);
      if ( !v100 )
      {
        v101 = WdLogNewEntry5_WdAssertion(v98, v97);
        WdLogEvent5_WdAssertion(v101);
        v100 = *((_QWORD *)v9 + 1);
      }
      v99[4] = *(_QWORD *)(v100 + 16);
      v99[5] = v23;
      WdLogEvent5_WdError(v99);
      goto LABEL_105;
    }
    auto_rc<DMMVIDPN>::reset(&v138, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v147 + 40), v102);
    v8 = v149;
LABEL_134:
    v12 = a6;
    goto LABEL_135;
  }
  if ( (_DWORD)v6 == 12 )
  {
LABEL_76:
    if ( a5 )
    {
      v60 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v60);
    }
    v61 = *((_QWORD *)v9 + 11);
    v137 = 0LL;
    if ( v61 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v61 + 32));
      v62 = *((_QWORD *)v9 + 11);
    }
    else
    {
      v62 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v137, v62);
    v66 = v137;
    if ( !v137 )
    {
      v69 = WdLogNewEntry5_WdWarning(v64, v63, v65);
      v70 = *((_QWORD *)v9 + 1);
      if ( !v70 )
      {
        v71 = WdLogNewEntry5_WdAssertion(v68, v67);
        WdLogEvent5_WdAssertion(v71);
        v70 = *((_QWORD *)v9 + 1);
      }
      *(_QWORD *)(v69 + 24) = *(_QWORD *)(v70 + 16);
      WdLogEvent5_WdWarning(v69);
      LODWORD(v23) = -1071774884;
LABEL_89:
      auto_rc<DMMVIDPN const>::reset(&v137, 0LL);
      goto LABEL_144;
    }
    v72 = DMMVIDPN::Serialize(v137, &v139);
    v23 = v72;
    if ( v72 < 0 )
    {
      v77 = (_QWORD *)WdLogNewEntry5_WdError(v74, v73);
      v77[3] = v66;
      v78 = *((_QWORD *)v9 + 1);
      if ( !v78 )
      {
        v79 = WdLogNewEntry5_WdAssertion(v76, v75);
        WdLogEvent5_WdAssertion(v79);
        v78 = *((_QWORD *)v9 + 1);
      }
      v77[4] = *(_QWORD *)(v78 + 16);
      v77[5] = v23;
      WdLogEvent5_WdError(v77);
      goto LABEL_89;
    }
    auto_rc<DMMVIDPN const>::reset(&v137, 0LL);
LABEL_135:
    v134 = v143;
    if ( v8 )
    {
      v135 = v143;
      if ( a3 < v143 )
        v135 = a3;
      memmove(v8, Src, v135);
    }
    if ( v12 )
      *v12 = v134;
    if ( v134 <= a3 )
    {
      LODWORD(v23) = 0;
    }
    else
    {
      v136 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
      LODWORD(v23) = -2147483643;
      v136[3] = a3;
      v136[4] = v6;
      v136[5] = v143;
    }
    goto LABEL_144;
  }
  if ( (_DWORD)v6 != 13 )
  {
    if ( (_DWORD)v6 != 14 )
      goto LABEL_108;
    if ( a5 )
    {
      v40 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v40);
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v146, (__int64)v9);
    LODWORD(v149) = 0x8000;
    v41 = DMM::AutoBuffer<unsigned char>::Initialize((__int64)&v139, 0x8000uLL, 0LL, PagedPool);
    v23 = v41;
    if ( v41 >= 0 )
    {
      v45 = (unsigned __int8 *)Src;
      if ( !Src )
      {
        v46 = WdLogNewEntry5_WdAssertion(v43, 0LL);
        WdLogEvent5_WdAssertion(v46);
        v45 = (unsigned __int8 *)Src;
      }
      v47 = (DXGFASTMUTEX **)*((_QWORD *)v9 + 63);
      if ( !v47 )
      {
        v48 = WdLogNewEntry5_WdError(0LL, v45);
        *(_QWORD *)(v48 + 24) = Src;
        *(_QWORD *)(v48 + 32) = v9;
        WdLogEvent5_WdError(v48);
        LODWORD(v23) = -1073741436;
LABEL_63:
        v52 = v146;
LABEL_106:
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v52 + 40), v49);
        goto LABEL_144;
      }
      LODWORD(v23) = DXGDIAGNOSTICS::ReadDiagnostics(v47, v45, (unsigned int *)&v149, -1);
      if ( (int)v23 >= 0 )
      {
        v53 = (unsigned int)v149;
        if ( (unsigned int)v149 > v143 )
        {
          v54 = WdLogNewEntry5_WdAssertion(v51, v50);
          WdLogEvent5_WdAssertion(v54);
        }
        v143 = v53;
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v146 + 40), v50);
        goto LABEL_135;
      }
      v44 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
      v44[3] = Src;
    }
    else
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42);
      v44[3] = 0x8000LL;
      v44[5] = v23;
    }
    v44[4] = v9;
    WdLogEvent5_WdError(v44);
    goto LABEL_63;
  }
  if ( a5 )
  {
    v55 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v55);
  }
  v33 = VIDPN_MGR::AcquireDiagVersion(a1, &v139);
LABEL_70:
  v23 = v33;
  if ( v33 >= 0 )
    goto LABEL_135;
  v37 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
  v58 = *((_QWORD *)v9 + 1);
  if ( !v58 )
  {
    v59 = WdLogNewEntry5_WdAssertion(v57, v56);
    WdLogEvent5_WdAssertion(v59);
    v58 = *((_QWORD *)v9 + 1);
  }
  v37[3] = *(_QWORD *)(v58 + 16);
LABEL_74:
  v37[4] = v23;
LABEL_75:
  WdLogEvent5_WdError(v37);
LABEL_144:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v139);
  return (unsigned int)v23;
}
