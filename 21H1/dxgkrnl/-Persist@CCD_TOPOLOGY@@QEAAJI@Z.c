/*
 * XREFs of ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C013A7F8
 * Callers:
 *     DxgkPersistPathsModality @ 0x1C013A730 (DxgkPersistPathsModality.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C013CCF0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029187C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02925C8 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0008E58 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00E9E98 (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00EA09C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00EB9C0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C0132B5C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C01397FC (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C013988C (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0139AC4 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C013A01C (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C013AA9C (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C013ABE0 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C013CB74 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0154D44 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Persist(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v20; // rdx
  __int64 v21; // rcx
  DXGSESSIONMGR *v22; // r14
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct CCD_BTL *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rbx
  struct CCD_BTL *v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // edx
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  struct CCD_BTL *v54; // rax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  struct _STRING *ConnectedSetStr; // rax
  struct D3DKMT_GETPATHSMODALITY *v59; // r8
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  unsigned int v63; // edx
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  struct _STRING v70; // [rsp+30h] [rbp-50h] BYREF
  int v71; // [rsp+40h] [rbp-40h] BYREF
  __int128 v72; // [rsp+48h] [rbp-38h] BYREF
  __int64 v73; // [rsp+58h] [rbp-28h]
  __int16 v74; // [rsp+60h] [rbp-20h]
  __int128 v75; // [rsp+68h] [rbp-18h]

  v5 = (unsigned int)a2;
  if ( g_bDMgrIsSetupRunning == 1 )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    return 0LL;
  }
  else
  {
    if ( *((_WORD *)CCD_TOPOLOGY::GetModalitySetId(this) + 4) )
    {
      v71 = 0;
      v72 = 0LL;
      v73 = 0LL;
      v75 = 0LL;
      v74 = 0;
      v8 = CCD_BTL::Global(v7, v6);
      v9 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v8)(v8, &v71);
      v12 = v9;
      if ( v9 < 0 )
      {
        v61 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
        v61[3] = v12;
        v61[4] = this;
        v61[5] = *((_QWORD *)this + 8);
        WdLogEvent5_WdError(v61);
        v18 = 1;
        goto LABEL_10;
      }
      if ( CCD_SET_STRING_ID::IsSubsetOf(this, (const struct CCD_SET_STRING_ID *)&v71) )
      {
        if ( (v5 & 0x40000000) != 0 )
          goto LABEL_8;
        v16 = CCD_TOPOLOGY::VerifyConnectivityHash(this, (const struct CCD_SET_STRING_ID *)&v71);
        v12 = v16;
        if ( v16 != -1073741266 )
        {
          if ( v16 < 0 )
          {
            v65 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
            v65[3] = v12;
            v65[4] = *((_QWORD *)this + 8);
            v65[5] = v5;
            WdLogEvent5_WdError(v65);
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
            CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v71);
            return (unsigned int)v12;
          }
          v22 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v14, v13) + 88);
          if ( v22 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v21);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v22,
                                               CurrentProcessSessionId);
          }
          else
          {
            SessionDataForSpecifiedSession = 0LL;
          }
          if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18490) )
          {
            v44 = 9;
LABEL_26:
            DxgkLogCodePointPacket(0x3Fu, v44, v5, v12, 0LL);
            Global = DXGGLOBAL::GetGlobal(v46, v45);
            LOBYTE(v48) = 1;
            QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 158), v48, v49, v50);
            goto LABEL_11;
          }
          v25 = CCD_BTL::Global(v21, v20);
          if ( *((struct CCD_BTL **)v25 + 16) != (struct CCD_BTL *)((char *)v25 + 128) )
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
            v51[3] = v5;
            LODWORD(v5) = v5 | 1;
            v51[4] = this;
            v52 = *((_QWORD *)this + 8);
            v51[5] = v52;
            v54 = CCD_BTL::Global(v52, v53);
            CDS_JOURNAL::Purge((struct CCD_BTL *)((char *)v54 + 104));
          }
          if ( (v5 & 1) == 0 )
          {
            v30 = CCD_STORE::ForTopology(
                    this,
                    anonymous_namespace_::_UpdateTimestampTopologySetCallback,
                    (__int64)this,
                    0);
            v35 = v30;
            if ( v30 >= 0 )
            {
LABEL_20:
              if ( CCD_SET_STRING_ID::IsSubsetOf(this, (const struct CCD_SET_STRING_ID *)&v71) )
              {
                v38 = CCD_STORE::ForConnectedSet(
                        (const struct CCD_SET_STRING_ID *)&v71,
                        anonymous_namespace_::_UpdateConnectedSetCallback,
                        this);
                v39 = v38;
                if ( v38 < 0 )
                {
                  v68 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
                  v68[4] = &v72;
                  v68[3] = v39;
                  v68[5] = this;
                  v68[6] = *((_QWORD *)this + 8);
                  WdLogEvent5_WdError(v68);
                  DxgkLogCodePointPacket(0x3Fu, 6u, v5, v39, 0LL);
                }
              }
              v40 = CCD_BTL::Global(v37, v36);
              v41 = CCD_TOPOLOGY::CopyInheritScope((struct CCD_BTL *)((char *)v40 + 8), this);
              v12 = v41;
              if ( v41 < 0 )
              {
                v69 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42);
                v69[3] = v12;
                v69[4] = this;
                v69[5] = *((_QWORD *)this + 8);
                WdLogEvent5_WdError(v69);
                DxgkLogCodePointPacket(0x3Fu, 7u, v5, v12, 0LL);
                LODWORD(v12) = 0;
              }
              v44 = 8;
              goto LABEL_26;
            }
            v66 = (_QWORD *)WdLogNewEntry5_WdTrace(v32, v31, v33, v34);
            v66[3] = v35;
            v66[4] = this;
            v66[5] = *((_QWORD *)this + 8);
          }
          v55 = CCD_STORE::ForTopology(this, anonymous_namespace_::_SaveTopologySetCallback, (__int64)this, 1);
          v12 = v55;
          if ( v55 < 0 )
          {
            v67 = (_QWORD *)WdLogNewEntry5_WdError(v57, v56);
            v67[3] = v12;
            v67[4] = this;
            v67[5] = *((_QWORD *)this + 8);
            WdLogEvent5_WdError(v67);
            v18 = 5;
            goto LABEL_10;
          }
          if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v57, v56) + 1120) )
          {
            ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v71);
            v59 = (struct D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
            v70 = *ConnectedSetStr;
            LogCddDatabaseAccessPacket(0, v12, v59, &v70, 0);
          }
          goto LABEL_20;
        }
        v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v17);
        v64[3] = -1073741266LL;
        v64[4] = *((_QWORD *)this + 8);
        v64[5] = v5;
        WdLogEvent5_WdWarning(v64);
        v63 = 3;
      }
      else
      {
        v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
        v62[3] = -1073741266LL;
        v62[4] = *((_QWORD *)this + 8);
        v62[5] = v5;
        WdLogEvent5_WdWarning(v62);
        v63 = 2;
      }
      DxgkLogCodePointPacket(0x3Fu, v63, v5, 0xC000022E, 0LL);
      LODWORD(v12) = -1073741266;
      goto LABEL_11;
    }
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
    v60[3] = this;
    v60[4] = *((_QWORD *)this + 8);
    v60[5] = *(int *)this;
    WdLogEvent5_WdError(v60);
    DxgkLogCodePointPacket(0x3Fu, 0, v5, 0xC0000001, 0LL);
    return 3221225473LL;
  }
}
