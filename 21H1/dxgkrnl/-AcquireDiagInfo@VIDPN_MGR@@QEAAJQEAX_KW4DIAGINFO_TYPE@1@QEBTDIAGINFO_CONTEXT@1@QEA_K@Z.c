/*
 * XREFs of ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02D5D34
 * Callers:
 *     ?DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z @ 0x1C02D7680 (-DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z.c)
 *     ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x1C02D77BC (-DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C02D7D60 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000ADD0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000F8C0 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0011098 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0043D74 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0059008 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005A43C (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005A534 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128E64 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02D6854 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02D7220 (-AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02DC308 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02DC630 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C02DC8D4 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C02DCBE4 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02DCDD4 (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E19FC (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E1B78 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C02E4328 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E46D0 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E59A0 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C02EFC18 (MonitorSerializeMonitorPresentEvents.c)
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
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // r15
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rax
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  int v94; // eax
  __int64 v95; // rdx
  __int64 v96; // rcx
  _QWORD *v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rax
  int v105; // eax
  SIZE_T v106; // rsi
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  void *v110; // rbx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rbx
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rax
  int v118; // eax
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rax
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rdx
  __int64 v128; // rcx
  _QWORD *v129; // rbx
  __int64 v130; // rax
  __int64 v131; // rax
  size_t v132; // rbx
  size_t v133; // r8
  _QWORD *v134; // rax
  __int64 v135; // [rsp+38h] [rbp-49h] BYREF
  __int64 v136; // [rsp+40h] [rbp-41h] BYREF
  __int64 v137; // [rsp+48h] [rbp-39h] BYREF
  __int128 v138; // [rsp+50h] [rbp-31h]
  void **v139; // [rsp+60h] [rbp-21h]
  void *Src; // [rsp+68h] [rbp-19h]
  unsigned __int64 v141; // [rsp+70h] [rbp-11h]
  int v142; // [rsp+78h] [rbp-9h]
  SIZE_T v143; // [rsp+80h] [rbp-1h] BYREF
  __int64 v144; // [rsp+88h] [rbp+7h] BYREF
  __int64 v145; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v146; // [rsp+98h] [rbp+17h] BYREF
  void *v147; // [rsp+E0h] [rbp+5Fh] BYREF

  v147 = a2;
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
  v137 = (__int64)&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v139 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v141 = 0LL;
  v142 = 3;
  v138 = 0LL;
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
      v15 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests((char *)v9 + 288, &v137);
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
        v22 = DMMVIDEOPRESENTSOURCESET::Serialize(v21, &v137);
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
            v15 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests((char *)v9 + 152, &v137);
            goto LABEL_42;
          }
LABEL_108:
          v101 = WdLogNewEntry5_WdError(a1, a2);
          *(_QWORD *)(v101 + 24) = v6;
          WdLogEvent5_WdError(v101);
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
        v22 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v21, &v137);
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
    v33 = VIDPN_MGR::AcquireDiagSummary(v9, &v137);
    goto LABEL_70;
  }
  if ( (_DWORD)v6 == 8 )
  {
    if ( a5 )
    {
      v123 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v123);
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v146, (__int64)v9);
    v124 = DMMVIDPN::SerializeVidPns((char *)v9 + 216, &v137);
    v23 = v124;
    if ( v124 < 0 )
    {
      v129 = (_QWORD *)WdLogNewEntry5_WdError(v126, v125);
      v129[3] = (char *)v9 + 216;
      v130 = *((_QWORD *)v9 + 1);
      if ( !v130 )
      {
        v131 = WdLogNewEntry5_WdAssertion(v128, v127);
        WdLogEvent5_WdAssertion(v131);
        v130 = *((_QWORD *)v9 + 1);
      }
      v129[4] = *(_QWORD *)(v130 + 16);
      v129[5] = v23;
      WdLogEvent5_WdError(v129);
      v52 = v146;
      goto LABEL_106;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v146 + 40), v125);
    goto LABEL_134;
  }
  if ( (_DWORD)v6 == 9 )
  {
    if ( a5 )
    {
      v102 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v102);
    }
    v103 = *((_QWORD *)v9 + 1);
    v143 = 0LL;
    if ( !v103 )
    {
      v104 = WdLogNewEntry5_WdAssertion(0LL, a2);
      WdLogEvent5_WdAssertion(v104);
      v103 = *((_QWORD *)v9 + 1);
    }
    v105 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v103 + 16), &v143, 0LL);
    v17 = 0x80000000LL;
    v23 = v105;
    if ( (int)(v105 + 0x80000000) < 0 || v105 == -1073741789 )
    {
      v106 = v143;
      if ( !v143 )
      {
        v107 = WdLogNewEntry5_WdAssertion(0x80000000LL, v16);
        WdLogEvent5_WdAssertion(v107);
      }
      DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v137, v106);
      v110 = Src;
      if ( !Src )
      {
        v113 = WdLogNewEntry5_WdError(v109, v108);
        *(_QWORD *)(v113 + 24) = v106;
        v114 = *((_QWORD *)v9 + 1);
        if ( !v114 )
        {
          v115 = WdLogNewEntry5_WdAssertion(v112, v111);
          WdLogEvent5_WdAssertion(v115);
          v114 = *((_QWORD *)v9 + 1);
        }
        *(_QWORD *)(v113 + 32) = *(_QWORD *)(v114 + 16);
        WdLogEvent5_WdError(v113);
        LODWORD(v23) = -1073741801;
        goto LABEL_144;
      }
      v116 = *((_QWORD *)v9 + 1);
      if ( !v116 )
      {
        v117 = WdLogNewEntry5_WdAssertion(0LL, v108);
        WdLogEvent5_WdAssertion(v117);
        v116 = *((_QWORD *)v9 + 1);
      }
      v118 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v116 + 16), &v143, v110);
      v23 = v118;
      if ( v118 >= 0 )
        goto LABEL_135;
    }
    v119 = WdLogNewEntry5_WdError(v17, v16);
    v121 = *((_QWORD *)v9 + 1);
    v37 = (_QWORD *)v119;
    if ( !v121 )
    {
      v122 = WdLogNewEntry5_WdAssertion(0LL, v120);
      WdLogEvent5_WdAssertion(v122);
      v121 = *((_QWORD *)v9 + 1);
    }
    v37[3] = *(_QWORD *)(v121 + 16);
    goto LABEL_74;
  }
  if ( (int)v6 <= 11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v145, (__int64)v9);
    v136 = 0LL;
    v80 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v9, &v136);
    v23 = v80;
    if ( v80 < 0 )
    {
      v82 = WdLogNewEntry5_WdDmmEvent(v81);
      *(_QWORD *)(v82 + 24) = v23;
      WdLogEvent5_WdDmmEvent(v82);
LABEL_105:
      auto_rc<DMMVIDPN>::reset(&v136, 0LL);
      v52 = v145;
      goto LABEL_106;
    }
    v83 = v136;
    v84 = (unsigned int)*a5;
    if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v136 + 96), *a5) )
    {
      v88 = WdLogNewEntry5_WdDmmEvent(v85);
      v89 = *((_QWORD *)v9 + 1);
      if ( !v89 )
      {
        v90 = WdLogNewEntry5_WdAssertion(v87, v86);
        WdLogEvent5_WdAssertion(v90);
        v89 = *((_QWORD *)v9 + 1);
      }
      *(_QWORD *)(v88 + 24) = *(_QWORD *)(v89 + 16);
      WdLogEvent5_WdDmmEvent(v88);
      LODWORD(v23) = -1071774919;
      goto LABEL_105;
    }
    v91 = VIDPN_MGR::UnpinPathModalityFromSource(v9, (struct DMMVIDPNTOPOLOGY *const)(v83 + 96), v84);
    v23 = v91;
    if ( v91 < 0
      || ((_DWORD)v6 == 10
        ? (v94 = VIDPN_MGR::_SerializeVidPnSourceModeSet(v9, v83, (unsigned int)v84, &v137))
        : (v94 = VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(v9, (__int64)&v137)),
          v23 = v94,
          v94 < 0) )
    {
      v97 = (_QWORD *)WdLogNewEntry5_WdError(v93, v92);
      v97[3] = v84;
      v98 = *((_QWORD *)v9 + 1);
      if ( !v98 )
      {
        v99 = WdLogNewEntry5_WdAssertion(v96, v95);
        WdLogEvent5_WdAssertion(v99);
        v98 = *((_QWORD *)v9 + 1);
      }
      v97[4] = *(_QWORD *)(v98 + 16);
      v97[5] = v23;
      WdLogEvent5_WdError(v97);
      goto LABEL_105;
    }
    auto_rc<DMMVIDPN>::reset(&v136, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v145 + 40), v100);
    v8 = v147;
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
    v135 = 0LL;
    if ( v61 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v61 + 32));
      v62 = *((_QWORD *)v9 + 11);
    }
    else
    {
      v62 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v135, v62);
    v66 = v135;
    if ( !v135 )
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
      auto_rc<DMMVIDPN const>::reset(&v135, 0LL);
      goto LABEL_144;
    }
    v72 = DMMVIDPN::Serialize(v135, &v137);
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
    auto_rc<DMMVIDPN const>::reset(&v135, 0LL);
LABEL_135:
    v132 = v141;
    if ( v8 )
    {
      v133 = v141;
      if ( a3 < v141 )
        v133 = a3;
      memmove(v8, Src, v133);
    }
    if ( v12 )
      *v12 = v132;
    if ( v132 <= a3 )
    {
      LODWORD(v23) = 0;
    }
    else
    {
      v134 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
      LODWORD(v23) = -2147483643;
      v134[3] = a3;
      v134[4] = v6;
      v134[5] = v141;
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
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v144, (__int64)v9);
    LODWORD(v147) = 0x8000;
    v41 = DMM::AutoBuffer<unsigned char>::Initialize((__int64)&v137, 0x8000uLL, 0LL, PagedPool);
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
        v52 = v144;
LABEL_106:
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v52 + 40), v49);
        goto LABEL_144;
      }
      LODWORD(v23) = DXGDIAGNOSTICS::ReadDiagnostics(v47, v45, (unsigned int *)&v147, -1);
      if ( (int)v23 >= 0 )
      {
        v53 = (unsigned int)v147;
        if ( (unsigned int)v147 > v141 )
        {
          v54 = WdLogNewEntry5_WdAssertion(v51, v50);
          WdLogEvent5_WdAssertion(v54);
        }
        v141 = v53;
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v144 + 40), v50);
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
  v33 = VIDPN_MGR::AcquireDiagVersion(a1, &v137);
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
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v137);
  return (unsigned int)v23;
}
