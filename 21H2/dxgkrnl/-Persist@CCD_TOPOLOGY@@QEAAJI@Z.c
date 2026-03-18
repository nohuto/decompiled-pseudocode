/*
 * XREFs of ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C2A0C
 * Callers:
 *     DxgkPersistPathsModality @ 0x1C01C2940 (DxgkPersistPathsModality.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01D3EC0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F0FB0 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F20A0 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C01AB36C (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C01ACA7C (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C01AD7EC (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C01AF5C4 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C01B5EA8 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C01B6F34 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C01B6FB4 (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01B71EC (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C01C02FC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C01C2CB0 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01E3C20 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C01E8B00 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Persist(struct D3DKMT_GETPATHSMODALITY **this, __int64 a2)
{
  __int64 v3; // rsi
  struct CCD_BTL *v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // r14
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct CCD_BTL *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // eax
  unsigned int v20; // edi
  struct CCD_BTL *v21; // rax
  int v22; // eax
  unsigned int v23; // edx
  struct DXGGLOBAL *Global; // rax
  __int64 v25; // rdx
  unsigned int v27; // edx
  _QWORD *v28; // rax
  struct CCD_BTL *v29; // rax
  int v30; // eax
  struct _STRING *ConnectedSetStr; // rax
  struct D3DKMT_GETPATHSMODALITY *v32; // r8
  unsigned int v33; // edx
  _QWORD *v34; // rax
  struct _STRING v35; // [rsp+30h] [rbp-50h] BYREF
  int v36; // [rsp+40h] [rbp-40h] BYREF
  __int128 v37; // [rsp+48h] [rbp-38h] BYREF
  __int64 v38; // [rsp+58h] [rbp-28h]
  __int16 v39; // [rsp+60h] [rbp-20h]
  __int128 v40; // [rsp+68h] [rbp-18h]

  v3 = (unsigned int)a2;
  if ( g_bDMgrIsSetupRunning == 1 )
  {
    WdLogNewEntry5_WdTrace(this, a2);
    return 0LL;
  }
  else
  {
    if ( *((_WORD *)CCD_TOPOLOGY::GetModalitySetId((void **)this) + 4) )
    {
      v36 = 0;
      v37 = 0LL;
      v38 = 0LL;
      v40 = 0LL;
      v39 = 0;
      v4 = CCD_BTL::Global();
      v5 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v4)(v4, &v36);
      v6 = v5;
      if ( v5 < 0 )
      {
        WdLogSingleEntry3(2LL, v5, this, this[8]);
        v27 = 1;
        goto LABEL_25;
      }
      if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v36) )
      {
        if ( (v3 & 0x40000000) != 0 )
        {
LABEL_8:
          if ( (int)v3 < 0 )
          {
            v27 = 4;
          }
          else
          {
            v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
            if ( v9 )
            {
              CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
              SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                 v9,
                                                 CurrentProcessSessionId);
              if ( SessionDataForSpecifiedSession )
              {
                if ( *((_BYTE *)SessionDataForSpecifiedSession + 18498) )
                {
                  v23 = 9;
LABEL_22:
                  DxgkLogCodePointPacket(0x3Fu, v23, v3, v6, 0LL);
                  Global = DXGGLOBAL_GetGlobal();
                  LOBYTE(v25) = 1;
                  QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 191), v25);
LABEL_23:
                  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v36);
                  return v6;
                }
              }
            }
            v12 = CCD_BTL::Global();
            if ( *((struct CCD_BTL **)v12 + 17) != (struct CCD_BTL *)((char *)v12 + 136) )
            {
              v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
              v28[3] = v3;
              LODWORD(v3) = v3 | 1;
              v28[4] = this;
              v28[5] = this[8];
              v29 = CCD_BTL::Global();
              CDS_JOURNAL::Purge((struct CCD_BTL *)((char *)v29 + 112));
            }
            if ( (v3 & 1) == 0 )
            {
              v15 = CCD_STORE::ForTopology(
                      (__int64)this,
                      anonymous_namespace_::_UpdateTimestampTopologySetCallback,
                      (__int64)this,
                      0);
              v18 = v15;
              if ( v15 >= 0 )
              {
LABEL_16:
                if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v36) )
                {
                  v19 = CCD_STORE::ForConnectedSet(
                          (const struct CCD_SET_STRING_ID *)&v36,
                          anonymous_namespace_::_UpdateConnectedSetCallback,
                          this);
                  v20 = v19;
                  if ( v19 < 0 )
                  {
                    WdLogSingleEntry4(2LL, v19, &v37, this, this[8]);
                    DxgkLogCodePointPacket(0x3Fu, 6u, v3, v20, 0LL);
                  }
                }
                v21 = CCD_BTL::Global();
                v22 = CCD_TOPOLOGY::CopyInheritScope(
                        (struct CCD_BTL *)((char *)v21 + 8),
                        (const struct CCD_TOPOLOGY *)this);
                v6 = v22;
                if ( v22 < 0 )
                {
                  WdLogSingleEntry3(2LL, v22, this, this[8]);
                  DxgkLogCodePointPacket(0x3Fu, 7u, v3, v6, 0LL);
                  v6 = 0;
                }
                v23 = 8;
                goto LABEL_22;
              }
              v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16);
              v34[3] = v18;
              v34[4] = this;
              v34[5] = this[8];
            }
            v30 = CCD_STORE::ForTopology(
                    (__int64)this,
                    anonymous_namespace_::_SaveTopologySetCallback,
                    (__int64)this,
                    1);
            v6 = v30;
            if ( v30 >= 0 )
            {
              if ( *((_BYTE *)DXGGLOBAL_GetGlobal() + 1376) )
              {
                ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v36);
                v32 = this[8];
                v35 = *ConnectedSetStr;
                LogCddDatabaseAccessPacket(0, v6, v32, &v35, 0);
              }
              goto LABEL_16;
            }
            WdLogSingleEntry3(2LL, v30, this, this[8]);
            v27 = 5;
          }
LABEL_25:
          DxgkLogCodePointPacket(0x3Fu, v27, v3, v6, 0LL);
          goto LABEL_23;
        }
        v7 = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)this, (const struct CCD_SET_STRING_ID *)&v36);
        v6 = v7;
        if ( v7 != -1073741266 )
        {
          if ( v7 < 0 )
          {
            WdLogSingleEntry3(2LL, v7, this[8], v3);
            v27 = 3;
            goto LABEL_25;
          }
          goto LABEL_8;
        }
        WdLogSingleEntry3(3LL, -1073741266LL, this[8], v3);
        v33 = 3;
      }
      else
      {
        WdLogSingleEntry3(3LL, -1073741266LL, this[8], v3);
        v33 = 2;
      }
      DxgkLogCodePointPacket(0x3Fu, v33, v3, 0xC000022E, 0LL);
      v6 = -1073741266;
      goto LABEL_23;
    }
    WdLogSingleEntry3(2LL, this, this[8], *(int *)this);
    DxgkLogCodePointPacket(0x3Fu, 0, v3, 0xC0000001, 0LL);
    return 3221225473LL;
  }
}
