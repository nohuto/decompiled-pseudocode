/*
 * XREFs of ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C039899C
 * Callers:
 *     ?DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z @ 0x1C039A488 (-DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z.c)
 *     ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x1C039A594 (-DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C039AABC (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0011D9C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0052D10 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0067A6C (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0069178 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0069240 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01A62D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C03993EC (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C0399C6C (-AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C039E9C8 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C039EC94 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C039EE30 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C039F0B8 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C039F250 (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A02FC (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A0444 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C03A7788 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A7C10 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A8CE8 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C03B0CE0 (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagInfo(struct VIDPN_MGR *a1, void *a2, size_t a3, int a4, int *a5, size_t *a6)
{
  __int64 v6; // r15
  size_t *v10; // r12
  _QWORD *v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // r8
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // r8
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  int v24; // eax
  struct VIDPN_MGR *v25; // r8
  __int64 v26; // rdx
  unsigned __int8 *v27; // rdx
  DXGDIAGNOSTICS *v28; // rcx
  unsigned __int64 v29; // rbx
  void *v30; // rcx
  size_t v31; // rbx
  size_t v32; // r8
  _QWORD *v33; // rax
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rbx
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // r8
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  unsigned __int64 v42; // rbx
  __int64 v43; // r12
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // r8
  int v47; // eax
  int v48; // eax
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int64 v53; // rbx
  void *v54; // r14
  __int64 v55; // rcx
  int v56; // eax
  int v57; // eax
  __int64 v58; // r8
  unsigned int v59[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v60; // [rsp+60h] [rbp-21h] BYREF
  __int64 v61; // [rsp+68h] [rbp-19h] BYREF
  __int128 v62; // [rsp+70h] [rbp-11h]
  void **v63; // [rsp+80h] [rbp-1h]
  void *Src; // [rsp+88h] [rbp+7h]
  unsigned __int64 v65; // [rsp+90h] [rbp+Fh]
  __int64 v66; // [rsp+98h] [rbp+17h]

  v6 = a4;
  if ( a2 )
  {
    if ( a3 )
    {
      memset(a2, 0, a3);
      goto LABEL_7;
    }
LABEL_5:
    WdLogSingleEntry2(2LL, a2, a3);
    return 3221225485LL;
  }
  if ( a3 )
    goto LABEL_5;
LABEL_7:
  v10 = a6;
  if ( a6 )
    *a6 = 0LL;
  Src = 0LL;
  v61 = (__int64)&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v63 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v65 = 0LL;
  v66 = 256LL;
  v62 = 0LL;
  if ( (int)v6 > 7 )
  {
    if ( (_DWORD)v6 == 8 )
    {
      if ( a5 )
        WdLogSingleEntry0(1LL);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v60, (__int64)a1);
      v57 = DMMVIDPN::SerializeVidPns((char *)a1 + 256, &v61);
      v14 = v57;
      if ( v57 < 0 )
      {
        v58 = *((_QWORD *)a1 + 1);
        if ( !v58 )
        {
          WdLogSingleEntry0(1LL);
          v58 = *((_QWORD *)a1 + 1);
        }
        v25 = *(struct VIDPN_MGR **)(v58 + 16);
        v26 = (__int64)a1 + 256;
        goto LABEL_149;
      }
      goto LABEL_72;
    }
    if ( (_DWORD)v6 == 9 )
    {
      if ( a5 )
        WdLogSingleEntry0(1LL);
      v49 = *((_QWORD *)a1 + 1);
      *(_QWORD *)v59 = 0LL;
      if ( !v49 )
      {
        WdLogSingleEntry0(1LL);
        v49 = *((_QWORD *)a1 + 1);
      }
      v50 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v49 + 16), v59, 0LL);
      v14 = v50;
      if ( (int)(v50 + 0x80000000) < 0 || v50 == -1073741789 )
      {
        v53 = *(_QWORD *)v59;
        if ( !*(_QWORD *)v59 )
          WdLogSingleEntry0(1LL);
        DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(&v61, v53, v51, v52);
        v54 = Src;
        v55 = *((_QWORD *)a1 + 1);
        if ( !Src )
        {
          if ( !v55 )
          {
            WdLogSingleEntry0(1LL);
            v55 = *((_QWORD *)a1 + 1);
          }
          WdLogSingleEntry2(2LL, v53, *(_QWORD *)(v55 + 16));
          LODWORD(v14) = -1073741801;
          goto LABEL_151;
        }
        if ( !v55 )
        {
          WdLogSingleEntry0(1LL);
          v55 = *((_QWORD *)a1 + 1);
        }
        v56 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v55 + 16), v59, v54);
        v14 = v56;
        if ( v56 >= 0 )
          goto LABEL_73;
        v22 = *((_QWORD *)a1 + 1);
        if ( v22 )
          goto LABEL_87;
      }
      else
      {
        v22 = *((_QWORD *)a1 + 1);
        if ( v22 )
          goto LABEL_87;
      }
      WdLogSingleEntry0(1LL);
      goto LABEL_86;
    }
    if ( (int)v6 > 11 )
    {
      if ( (_DWORD)v6 == 12 )
        goto LABEL_88;
      if ( (_DWORD)v6 == 13 )
      {
        if ( a5 )
          WdLogSingleEntry0(1LL);
        v34 = VIDPN_MGR::AcquireDiagVersion(a1, &v61);
        v14 = v34;
        if ( v34 >= 0 )
          goto LABEL_73;
        v22 = *((_QWORD *)a1 + 1);
        if ( !v22 )
        {
LABEL_85:
          WdLogSingleEntry0(1LL);
LABEL_86:
          v22 = *((_QWORD *)a1 + 1);
        }
LABEL_87:
        WdLogSingleEntry2(2LL, *(_QWORD *)(v22 + 16), v14);
        goto LABEL_151;
      }
      if ( (_DWORD)v6 != 14 )
        goto LABEL_123;
      if ( a5 )
        WdLogSingleEntry0(1LL);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v60, (__int64)a1);
      v59[0] = 0x8000;
      v24 = DMM::AutoBuffer<unsigned char>::Initialize(&v61, 0x8000uLL, 0LL, 256LL);
      v14 = v24;
      if ( v24 < 0 )
      {
        v25 = a1;
        v26 = 0x8000LL;
LABEL_149:
        WdLogSingleEntry3(2LL, v26, v25, v14);
        goto LABEL_121;
      }
      v27 = (unsigned __int8 *)Src;
      if ( !Src )
      {
        WdLogSingleEntry0(1LL);
        v27 = (unsigned __int8 *)Src;
      }
      v28 = (DXGDIAGNOSTICS *)*((_QWORD *)a1 + 70);
      if ( !v28 )
      {
        WdLogSingleEntry2(2LL, v27, a1);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to obtain VIDPN_MGR Diagnosibility buffer; pDiagnosticsBuffer = 0x%I64x, this = 0x%I64x",
          (__int64)Src,
          (__int64)a1,
          0LL,
          0LL,
          0LL);
        LODWORD(v14) = -1073741436;
LABEL_121:
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v60 + 40));
        goto LABEL_151;
      }
      LODWORD(v14) = DXGDIAGNOSTICS::ReadDiagnostics(v28, v27, v59, 0xFFFFFFFF);
      if ( (int)v14 < 0 )
      {
        WdLogSingleEntry2(2LL, Src, a1);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to read VIDPN_MGR diagnostics data; DiagInfoSerialization.get() = 0x%I64x, this = 0x%I64x",
          (__int64)Src,
          (__int64)a1,
          0LL,
          0LL,
          0LL);
        goto LABEL_121;
      }
      v29 = v59[0];
      if ( v59[0] > v65 )
        WdLogSingleEntry0(1LL);
      v65 = v29;
LABEL_72:
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v60 + 40));
      goto LABEL_73;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v60, (__int64)a1);
    *(_QWORD *)v59 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(a1, (__int64 *)v59);
    LODWORD(v14) = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      WdLogSingleEntry1(7LL, ClientVidPnFromLastClientCommitedVidPn);
LABEL_120:
      auto_rc<DMMVIDPN>::reset((__int64 *)v59, 0LL);
      goto LABEL_121;
    }
    v42 = *(_QWORD *)v59;
    v43 = (unsigned int)*a5;
    if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(*(_QWORD *)v59 + 96LL), *a5) )
    {
      v44 = *((_QWORD *)a1 + 1);
      if ( !v44 )
      {
        WdLogSingleEntry0(1LL);
        v44 = *((_QWORD *)a1 + 1);
      }
      WdLogSingleEntry1(7LL, *(_QWORD *)(v44 + 16));
      LODWORD(v14) = -1071774919;
      goto LABEL_120;
    }
    v45 = VIDPN_MGR::UnpinPathModalityFromSource(a1, (struct DMMVIDPNTOPOLOGY *const)(v42 + 96), v43);
    v14 = v45;
    if ( v45 < 0 )
    {
      v46 = *((_QWORD *)a1 + 1);
      if ( !v46 )
        goto LABEL_118;
      goto LABEL_119;
    }
    if ( (_DWORD)v6 == 10 )
    {
      v48 = VIDPN_MGR::_SerializeVidPnSourceModeSet(a1, v42, (unsigned int)v43, &v61);
      v14 = v48;
      if ( v48 < 0 )
      {
        v46 = *((_QWORD *)a1 + 1);
        if ( !v46 )
        {
LABEL_118:
          WdLogSingleEntry0(1LL);
          v46 = *((_QWORD *)a1 + 1);
        }
LABEL_119:
        WdLogSingleEntry3(2LL, v43, *(_QWORD *)(v46 + 16), v14);
        goto LABEL_120;
      }
    }
    else
    {
      v47 = VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(a1, (__int64)&v61);
      v14 = v47;
      if ( v47 < 0 )
      {
        v46 = *((_QWORD *)a1 + 1);
        if ( !v46 )
          goto LABEL_118;
        goto LABEL_119;
      }
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)v59, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v60 + 40));
    v10 = a6;
    goto LABEL_73;
  }
  if ( (_DWORD)v6 != 7 )
  {
    if ( (_DWORD)v6 != 1 )
    {
      switch ( (_DWORD)v6 )
      {
        case 2:
          if ( a5 )
            WdLogSingleEntry0(1LL);
          _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a1 + 14) + 72LL), 1u);
          v16 = *((_QWORD *)a1 + 14);
          v20 = DMMVIDEOPRESENTSOURCESET::Serialize(v16, &v61);
          v14 = v20;
          if ( v20 >= 0 )
            goto LABEL_40;
          v18 = *((_QWORD *)a1 + 1);
          if ( !v18 )
          {
LABEL_26:
            WdLogSingleEntry0(1LL);
LABEL_27:
            v18 = *((_QWORD *)a1 + 1);
          }
          break;
        case 3:
          if ( a5 )
            WdLogSingleEntry0(1LL);
          _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL), 1u);
          v16 = *((_QWORD *)a1 + 15);
          v19 = DMMVIDEOPRESENTTARGETSET::Serialize((DMMVIDEOPRESENTTARGETSET *)v16);
          v14 = v19;
          if ( v19 >= 0 )
            goto LABEL_40;
          v18 = *((_QWORD *)a1 + 1);
          if ( !v18 )
          {
            WdLogSingleEntry0(1LL);
            goto LABEL_27;
          }
          break;
        case 4:
LABEL_88:
          if ( a5 )
            WdLogSingleEntry0(1LL);
          v35 = *((_QWORD *)a1 + 16);
          *(_QWORD *)v59 = 0LL;
          if ( v35 )
          {
            _InterlockedAdd((volatile signed __int32 *)(v35 + 32), 1u);
            v36 = *((_QWORD *)a1 + 16);
          }
          else
          {
            v36 = 0LL;
          }
          auto_rc<DMMVIDPN const>::reset((__int64 *)v59, v36);
          v37 = *(_QWORD *)v59;
          if ( *(_QWORD *)v59 )
          {
            v39 = DMMVIDPN::Serialize(*(_QWORD *)v59, &v61);
            v14 = v39;
            if ( v39 >= 0 )
            {
              auto_rc<DMMVIDPN const>::reset((__int64 *)v59, 0LL);
              goto LABEL_73;
            }
            v40 = *((_QWORD *)a1 + 1);
            if ( !v40 )
            {
              WdLogSingleEntry0(1LL);
              v40 = *((_QWORD *)a1 + 1);
            }
            WdLogSingleEntry3(2LL, v37, *(_QWORD *)(v40 + 16), v14);
          }
          else
          {
            v38 = *((_QWORD *)a1 + 1);
            if ( !v38 )
            {
              WdLogSingleEntry0(1LL);
              v38 = *((_QWORD *)a1 + 1);
            }
            WdLogSingleEntry1(3LL, *(_QWORD *)(v38 + 16));
            LODWORD(v14) = -1071774884;
          }
          auto_rc<DMMVIDPN const>::reset((__int64 *)v59, 0LL);
          goto LABEL_151;
        case 5:
          if ( a5 )
            WdLogSingleEntry0(1LL);
          _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL), 1u);
          v16 = *((_QWORD *)a1 + 15);
          v17 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v16, &v61);
          v14 = v17;
          if ( v17 < 0 )
          {
            v18 = *((_QWORD *)a1 + 1);
            if ( v18 )
              break;
            goto LABEL_26;
          }
LABEL_40:
          if ( v16 )
            ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
          goto LABEL_73;
        case 6:
          if ( a5 )
            WdLogSingleEntry0((unsigned int)(v6 - 5));
          v11 = (_QWORD *)((char *)a1 + 192);
          v12 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests((char *)a1 + 192, &v61);
          v14 = v12;
          if ( v12 < 0 )
          {
            v15 = *((_QWORD *)a1 + 1);
            if ( !v15 )
              goto LABEL_51;
            goto LABEL_52;
          }
LABEL_73:
          v30 = a2;
          v31 = v65;
          if ( a2 )
          {
            v32 = v65;
            if ( a3 < v65 )
              v32 = a3;
            memmove(a2, Src, v32);
          }
          if ( v10 )
            *v10 = v31;
          if ( v31 <= a3 )
          {
            LODWORD(v14) = 0;
          }
          else
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v13);
            LODWORD(v14) = -2147483643;
            v33[3] = a3;
            v33[4] = v6;
            v33[5] = v65;
          }
          goto LABEL_151;
        default:
LABEL_123:
          WdLogSingleEntry1(2LL, v6);
          LODWORD(v14) = -1073741811;
          goto LABEL_151;
      }
      WdLogSingleEntry3(2LL, v16, *(_QWORD *)(v18 + 16), v14);
      if ( v16 )
        ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
      goto LABEL_151;
    }
    if ( a5 )
      WdLogSingleEntry0(1LL);
    v21 = VIDPN_MGR::AcquireDiagSummary(a1, &v61);
    v14 = v21;
    if ( v21 >= 0 )
      goto LABEL_73;
    v22 = *((_QWORD *)a1 + 1);
    if ( !v22 )
      goto LABEL_85;
    goto LABEL_87;
  }
  if ( a5 )
    WdLogSingleEntry0(1LL);
  v11 = (_QWORD *)((char *)a1 + 328);
  v23 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests((char *)a1 + 328, &v61);
  v14 = v23;
  if ( v23 >= 0 )
    goto LABEL_73;
  v15 = *((_QWORD *)a1 + 1);
  if ( !v15 )
  {
LABEL_51:
    WdLogSingleEntry0(1LL);
    v15 = *((_QWORD *)a1 + 1);
  }
LABEL_52:
  WdLogSingleEntry3(2LL, v11, *(_QWORD *)(v15 + 16), v14);
LABEL_151:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v61);
  return (unsigned int)v14;
}
