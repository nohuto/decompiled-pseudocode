/*
 * XREFs of ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01B6AE8
 * Callers:
 *     DxgkGetPathsModality @ 0x1C01AE940 (DxgkGetPathsModality.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C01D4080 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F0FB0 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C01AB120 (-_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01ABA20 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C01ACA7C (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C01ACAD8 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C01AD7EC (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C01ADB54 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01AEBD8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C01AF5C4 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C01B5EA8 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C01B6D84 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C01B6E54 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01B71EC (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z @ 0x1C01B79D4 (--0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C01B7AFC (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C01B7D54 (--0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C01B83A4 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C01B8454 (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C01C08BC (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C01E91F0 (DxgkGetGlobalRawmodeFlag.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C03AD0FC (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrievePersisted(struct D3DKMT_HASH **this, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // r12
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // r14
  struct CCD_BTL *v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  struct _STRING *v13; // rax
  struct D3DKMT_GETPATHSMODALITY *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  bool v18; // zf
  struct CCD_BTL *v19; // rax
  bool v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  int TopologyClass; // eax
  int v24; // ecx
  int active; // eax
  struct D3DKMT_HASH *v26; // rdi
  struct _STRING *ConnectedSetStr; // rax
  int StringHash; // eax
  int v29; // edi
  void **ModalitySetId; // rax
  __int64 v32; // r9
  __int64 v33; // rax
  struct _DXGK_DIAG_HEADER *v34; // rbx
  size_t v35; // r8
  PCHAR v36; // rdx
  __int64 v37; // rcx
  unsigned int CurrentProcessSessionId; // eax
  _QWORD *v39; // rax
  BTL_TOPOLOGY_CONSTRUCTOR *v40; // rax
  int v41; // eax
  char GlobalRawmodeFlag; // al
  unsigned int v43; // edx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+60h] [rbp-A8h]
  unsigned int v50; // [rsp+68h] [rbp-A0h]
  __m128i v51; // [rsp+70h] [rbp-98h] BYREF
  int v52; // [rsp+80h] [rbp-88h] BYREF
  __int128 v53; // [rsp+88h] [rbp-80h]
  __int64 v54; // [rsp+98h] [rbp-70h]
  __int16 v55; // [rsp+A0h] [rbp-68h]
  __int128 v56; // [rsp+A8h] [rbp-60h]
  int v57; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v58; // [rsp+C0h] [rbp-48h]
  __int64 v59; // [rsp+D0h] [rbp-38h]
  __int16 v60; // [rsp+D8h] [rbp-30h]
  __int128 v61; // [rsp+E0h] [rbp-28h]
  _BYTE v62[12]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int16 v63; // [rsp+104h] [rbp-4h]
  _BYTE v64[64]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v65[128]; // [rsp+148h] [rbp+40h] BYREF
  char v66; // [rsp+210h] [rbp+108h] BYREF

  v3 = a2;
  v66 = 0;
  v5 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v66, 0);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v52 = 0;
    v53 = 0LL;
    v54 = 0LL;
    v56 = 0LL;
    v55 = 0;
    v9 = CCD_BTL::Global();
    v10 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v9)(v9, &v52);
    LODWORD(v8) = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry4(2LL, v10, this, this[8], v3);
      goto LABEL_23;
    }
    if ( (v3 & 0x20) != 0 )
    {
      if ( !*((_WORD *)CCD_TOPOLOGY::GetModalitySetId((void **)this) + 4) )
      {
        WdLogSingleEntry3(2LL, this, this[8], *(int *)this);
        LODWORD(v8) = -1073741823;
        goto LABEL_23;
      }
      CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER(
        (CCD_RECENT_TOPOLOGY_RETRIEVER *)v62,
        (struct CCD_TOPOLOGY *)this);
      if ( (v3 & 0x2000) != 0 )
      {
        ModalitySetId = CCD_TOPOLOGY::GetModalitySetId((void **)this);
        v57 = 0;
        v59 = 0LL;
        v60 = 0;
        v58 = 0LL;
        v61 = 0LL;
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)&v57, (__int64)ModalitySetId);
        LODWORD(v8) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
                        (CCD_RECENT_TOPOLOGY_RETRIEVER *)v62,
                        (const struct CCD_SET_STRING_ID *)&v52,
                        (const struct CCD_SET_STRING_ID *)&v57,
                        v3 & 0xF,
                        (v3 & 0x1000) != 0);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v57);
      }
      else
      {
        LODWORD(v8) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
                        (CCD_RECENT_TOPOLOGY_RETRIEVER *)v62,
                        (const struct CCD_SET_STRING_ID *)this,
                        v3 & 0xF,
                        (v3 & 0x1000) != 0);
      }
      if ( (_DWORD)v8 == -1073741275 )
      {
        v5 = 2;
        WdLogSingleEntry3(3LL, this, this[8], v3);
      }
      else
      {
        if ( (int)v8 >= 0 )
        {
          v5 = 1;
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v65);
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v64);
LABEL_15:
          LODWORD(v48) = 0;
          TopologyClass = CCD_TOPOLOGY::QueryTopologyClass((CCD_TOPOLOGY *)this, (enum CCD_TOPOLOGY_CLASS *)&v48);
          if ( TopologyClass < 0 )
          {
            WdLogSingleEntry3(2LL, TopologyClass, this, this[8]);
            v24 = 0;
          }
          else
          {
            v24 = v48;
          }
          *((_DWORD *)this[8] + 8) = v24;
          active = CCD_TOPOLOGY::_FillPathsActiveFlags((CCD_TOPOLOGY *)this);
          if ( active < 0
            || (active = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)this), active < 0)
            || (active = CCD_TOPOLOGY::_CheckResolvedTopologyForVirtualModeConsistency((CCD_TOPOLOGY *)this), active < 0) )
          {
            LODWORD(v8) = active;
          }
          else
          {
            v26 = this[8];
            ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v52);
            StringHash = CCD_SET_STRING_ID::_QueryStringHash(ConnectedSetStr, v26);
            v29 = StringHash;
            if ( StringHash < 0 )
              WdLogSingleEntry4(2LL, StringHash, this, this[8], v3);
            LODWORD(v8) = v29;
          }
          goto LABEL_23;
        }
        WdLogSingleEntry4(2LL, (int)v8, this, this[8], v3);
      }
      goto LABEL_31;
    }
    CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER(
      (CCD_RECENT_TOPOLOGY_RETRIEVER *)v62,
      (struct CCD_TOPOLOGY *)this);
    LODWORD(v48) = v3 & 0xF;
    v11 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v62,
            (const struct CCD_SET_STRING_ID *)&v52,
            0LL,
            v48,
            (v3 & 0x1000) != 0);
    v12 = v11;
    LODWORD(v8) = -1073741789;
    if ( v11 == -1073741789 )
    {
      if ( a3 )
        *a3 = v63;
      goto LABEL_31;
    }
    if ( v11 < 0 )
    {
      v51 = *(__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v52);
      LODWORD(v49) = _mm_cvtsi128_si32(v51);
      v50 = (unsigned __int16)v49 + 57;
      v33 = operator new[](v50, 0x63644356u, 256LL, v32);
      v34 = (struct _DXGK_DIAG_HEADER *)v33;
      if ( v33 )
      {
        v35 = (unsigned __int16)v49;
        v36 = (PCHAR)v51.m128i_i64[1];
        *(_DWORD *)v33 = 9;
        *(_DWORD *)(v33 + 4) = v50;
        *(_DWORD *)(v33 + 40) = 0;
        *(_QWORD *)(v33 + 32) = 0LL;
        *(_OWORD *)(v33 + 8) = 0LL;
        *(_QWORD *)(v33 + 24) = 0LL;
        *(_DWORD *)(v33 + 48) = v12;
        *(_DWORD *)(v33 + 52) = v3;
        memmove((void *)(v33 + 56), v36, v35);
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v37);
        DxgkWriteDiagEntry(v34, CurrentProcessSessionId);
        operator delete[](v34);
      }
      else
      {
        v49 = 0LL;
        DxgkLogCodePointPacket(0x1Bu, v3, v12, 0, 0LL);
      }
      v5 = 2;
      if ( (v3 & 0x80u) == 0LL )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
        v5 = 0;
        LOWORD(v50) = 0;
        v39[3] = v12;
        v39[4] = this;
        v39[5] = this[8];
        v39[6] = v3;
        CCD_BTL::Global();
        v40 = BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)&v57);
        v41 = BTL_TOPOLOGY_CONSTRUCTOR::operator()(v40);
        v12 = v41;
        if ( v41 == -1073741789 )
        {
          if ( a3 )
            *a3 = v50;
          CCD_TOPOLOGY::_FillPathsActiveFlags((CCD_TOPOLOGY *)this);
          CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)this);
          goto LABEL_31;
        }
        if ( v41 < 0 )
          goto LABEL_57;
        if ( (v3 & 0x4000000) != 0 )
        {
          GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag();
          v43 = 0;
          if ( GlobalRawmodeFlag )
            v43 = 0x20000;
          v44 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)this, v43, 1);
          v12 = v44;
          if ( v44 < 0 )
          {
LABEL_57:
            v5 = 10;
            v45 = v12;
LABEL_61:
            WdLogSingleEntry4(2LL, v45, this, this[8], v3);
            LODWORD(v8) = v12;
LABEL_31:
            CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v65);
            CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v64);
LABEL_23:
            CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v52);
            goto LABEL_24;
          }
        }
        v5 = 6;
      }
    }
    else
    {
      if ( *((_BYTE *)DXGGLOBAL_GetGlobal() + 1376) )
      {
        v13 = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v52);
        v14 = this[8];
        v51 = *(__m128i *)v13;
        LogCddDatabaseAccessPacket(1, v12, v14, (struct _STRING *)&v51, v3);
      }
      else
      {
        v49 = 0LL;
        DxgkLogCodePointPacket(9u, v3, v12, 0, 0LL);
      }
      v5 = 1;
    }
    if ( (int)v12 >= 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
      v18 = (_DWORD)v48 == 15;
      v17[3] = this;
      v17[4] = this[8];
      v17[5] = v3;
      if ( !v18 )
      {
LABEL_14:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v65);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v64);
        goto LABEL_15;
      }
      v19 = CCD_BTL::Global();
      v21 = CDS_JOURNAL::CommitTo((struct CCD_BTL *)((char *)v19 + 112), (struct CCD_TOPOLOGY *)this, v20, a3);
      if ( v21 != -1073741789 )
      {
        v22 = -1073741266LL;
        if ( v21 == -1073741266 )
        {
          v47 = 3LL;
        }
        else
        {
          if ( v21 >= 0 )
            goto LABEL_14;
          v22 = v21;
          v47 = 2LL;
        }
        WdLogSingleEntry4(v47, v22, this, this[8], v3);
        goto LABEL_14;
      }
      if ( a3 )
        v46 = *a3;
      else
        v46 = 0LL;
      WdLogSingleEntry5(3LL, v46, -1073741789LL, this, this[8], v3);
      goto LABEL_31;
    }
    v45 = (int)v12;
    goto LABEL_61;
  }
  WdLogSingleEntry1(2LL, v7);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
    v8,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_24:
  if ( v66 )
    DxgkReleaseSessionModeChangeLock();
  if ( v5 )
    DisplayScenarioJournalCCDRetrieval(v5);
  return (unsigned int)v8;
}
