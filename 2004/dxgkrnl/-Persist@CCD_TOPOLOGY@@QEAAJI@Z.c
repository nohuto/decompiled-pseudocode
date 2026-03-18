/*
 * XREFs of ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00E02F8
 * Callers:
 *     DxgkPersistPathsModality @ 0x1C00E0230 (DxgkPersistPathsModality.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0146870 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0295D6C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0296AB8 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A6AC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C00DFC28 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00E059C (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E1C28 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C012E5CC (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C012F26C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0131C28 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C0133CA0 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C0139238 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C0143DB0 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C0143E40 (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0144078 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0164A44 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Persist(struct D3DKMT_GETPATHSMODALITY **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct CCD_BTL *v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // edx
  DXGSESSIONMGR *v20; // r14
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct CCD_BTL *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rbx
  bool v34; // r9
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbx
  struct CCD_BTL *v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct DXGGLOBAL *Global; // rax
  _QWORD *v47; // rax
  struct CCD_BTL *v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct _STRING *ConnectedSetStr; // rax
  struct D3DKMT_GETPATHSMODALITY *v53; // r8
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  unsigned int v57; // edx
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  struct _STRING v64; // [rsp+30h] [rbp-50h] BYREF
  int v65; // [rsp+40h] [rbp-40h] BYREF
  __int128 v66; // [rsp+48h] [rbp-38h] BYREF
  __int64 v67; // [rsp+58h] [rbp-28h]
  __int16 v68; // [rsp+60h] [rbp-20h]
  __int128 v69; // [rsp+68h] [rbp-18h]

  v5 = (unsigned int)a2;
  if ( g_bDMgrIsSetupRunning == 1 )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    return 0LL;
  }
  else
  {
    if ( *((_WORD *)CCD_TOPOLOGY::GetModalitySetId((CCD_TOPOLOGY *)this) + 4) )
    {
      v65 = 0;
      v66 = 0LL;
      v67 = 0LL;
      v69 = 0LL;
      v68 = 0;
      v8 = CCD_BTL::Global();
      v9 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v8)(v8, &v65);
      v12 = v9;
      if ( v9 < 0 )
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
        v55[3] = v12;
        v55[4] = this;
        v55[5] = this[8];
        WdLogEvent5_WdError(v55);
        v18 = 1;
        goto LABEL_10;
      }
      if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v65) )
      {
        if ( (v5 & 0x40000000) != 0 )
          goto LABEL_8;
        v16 = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)this, (const struct CCD_SET_STRING_ID *)&v65);
        v12 = v16;
        if ( v16 != -1073741266 )
        {
          if ( v16 < 0 )
          {
            v59 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
            v59[3] = v12;
            v59[4] = this[8];
            v59[5] = v5;
            WdLogEvent5_WdError(v59);
            v18 = 3;
            goto LABEL_10;
          }
LABEL_8:
          if ( (int)v5 < 0 )
          {
            v18 = 4;
LABEL_10:
            DxgkLogCodePointPacket(0x3Fu, v18, v5, v12, 0LL);
LABEL_11:
            CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v65);
            return (unsigned int)v12;
          }
          v20 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v14, v13) + 102);
          if ( v20 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId();
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v20,
                                               CurrentProcessSessionId);
          }
          else
          {
            SessionDataForSpecifiedSession = 0LL;
          }
          if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18490) )
          {
            v43 = 9;
LABEL_26:
            DxgkLogCodePointPacket(0x3Fu, v43, v5, v12, 0LL);
            Global = DXGGLOBAL::GetGlobal(v45, v44);
            QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 172), 1);
            goto LABEL_11;
          }
          v23 = CCD_BTL::Global();
          if ( *((struct CCD_BTL **)v23 + 16) != (struct CCD_BTL *)((char *)v23 + 128) )
          {
            v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
            v47[3] = v5;
            LODWORD(v5) = v5 | 1;
            v47[4] = this;
            v47[5] = this[8];
            v48 = CCD_BTL::Global();
            CDS_JOURNAL::Purge((struct CCD_BTL *)((char *)v48 + 104));
          }
          if ( (v5 & 1) == 0 )
          {
            v28 = CCD_STORE::ForTopology(
                    (const struct CCD_SET_STRING_ID *)this,
                    anonymous_namespace_::_UpdateTimestampTopologySetCallback,
                    this,
                    0);
            v33 = v28;
            if ( v28 >= 0 )
            {
LABEL_20:
              if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v65) )
              {
                v35 = CCD_STORE::ForConnectedSet(
                        (const struct CCD_SET_STRING_ID *)&v65,
                        anonymous_namespace_::_UpdateConnectedSetCallback,
                        this,
                        v34);
                v38 = v35;
                if ( v35 < 0 )
                {
                  v62 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
                  v62[4] = &v66;
                  v62[3] = v38;
                  v62[5] = this;
                  v62[6] = this[8];
                  WdLogEvent5_WdError(v62);
                  DxgkLogCodePointPacket(0x3Fu, 6u, v5, v38, 0LL);
                }
              }
              v39 = CCD_BTL::Global();
              v40 = CCD_TOPOLOGY::CopyInheritScope(
                      (struct CCD_BTL *)((char *)v39 + 8),
                      (const struct CCD_TOPOLOGY *)this);
              v12 = v40;
              if ( v40 < 0 )
              {
                v63 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41);
                v63[3] = v12;
                v63[4] = this;
                v63[5] = this[8];
                WdLogEvent5_WdError(v63);
                DxgkLogCodePointPacket(0x3Fu, 7u, v5, v12, 0LL);
                LODWORD(v12) = 0;
              }
              v43 = 8;
              goto LABEL_26;
            }
            v60 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v29, v31, v32);
            v60[3] = v33;
            v60[4] = this;
            v60[5] = this[8];
          }
          v49 = CCD_STORE::ForTopology(
                  (const struct CCD_SET_STRING_ID *)this,
                  anonymous_namespace_::_SaveTopologySetCallback,
                  this,
                  1);
          v12 = v49;
          if ( v49 < 0 )
          {
            v61 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
            v61[3] = v12;
            v61[4] = this;
            v61[5] = this[8];
            WdLogEvent5_WdError(v61);
            v18 = 5;
            goto LABEL_10;
          }
          if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v51, v50) + 1232) )
          {
            ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v65);
            v53 = this[8];
            v64 = *ConnectedSetStr;
            LogCddDatabaseAccessPacket(0, v12, v53, &v64, 0);
          }
          goto LABEL_20;
        }
        v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v17);
        v58[3] = -1073741266LL;
        v58[4] = this[8];
        v58[5] = v5;
        WdLogEvent5_WdWarning(v58);
        v57 = 3;
      }
      else
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
        v56[3] = -1073741266LL;
        v56[4] = this[8];
        v56[5] = v5;
        WdLogEvent5_WdWarning(v56);
        v57 = 2;
      }
      DxgkLogCodePointPacket(0x3Fu, v57, v5, 0xC000022E, 0LL);
      LODWORD(v12) = -1073741266;
      goto LABEL_11;
    }
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
    v54[3] = this;
    v54[4] = this[8];
    v54[5] = *(int *)this;
    WdLogEvent5_WdError(v54);
    DxgkLogCodePointPacket(0x3Fu, 0, v5, 0xC0000001, 0LL);
    return 3221225473LL;
  }
}
