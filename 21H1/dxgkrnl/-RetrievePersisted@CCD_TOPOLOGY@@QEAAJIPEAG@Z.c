/*
 * XREFs of ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0139394
 * Callers:
 *     DxgkGetPathsModality @ 0x1C00E81C0 (DxgkGetPathsModality.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C013CBBC (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029187C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0008E58 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00099AC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00E444C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00E8464 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00E8CB0 (-_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C00E9250 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00EA09C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00EA404 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00EB9C0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00EBA90 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C013304C (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C0139640 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C0139718 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0139AC4 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z @ 0x1C0139BD0 (--0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C0139C38 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C0139E8C (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C0139F3C (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C013A01C (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C013ABE0 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C015A070 (DxgkGetGlobalRawmodeFlag.c)
 *     ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C02E8EA4 (--0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C02E8FB8 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrievePersisted(CCD_TOPOLOGY *this, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // r14
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct CCD_BTL *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  __m128i *v19; // rax
  struct D3DKMT_GETPATHSMODALITY *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // rdx
  bool v27; // zf
  __int64 v28; // rcx
  struct CCD_BTL *v29; // rax
  bool v30; // r8
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r15
  int TopologyClass; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  int v40; // ecx
  int active; // eax
  __int64 v42; // rdx
  struct D3DKMT_HASH *v43; // rdi
  struct _STRING *ConnectedSetStr; // rax
  int StringHash; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rax
  const struct CCD_SET_STRING_ID *ModalitySetId; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  _QWORD *v57; // rax
  _QWORD *v58; // rcx
  __int64 v59; // rax
  _QWORD *v60; // rax
  _DWORD *v61; // rbx
  size_t v62; // r8
  PCHAR v63; // rdx
  __int64 v64; // rcx
  unsigned int CurrentProcessSessionId; // eax
  _QWORD *v66; // rax
  __int64 v67; // rdx
  BTL_TOPOLOGY_CONSTRUCTOR *v68; // rax
  int v69; // eax
  __int64 v70; // rdx
  char GlobalRawmodeFlag; // al
  unsigned int v72; // edx
  int v73; // eax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v80; // [rsp+40h] [rbp-C8h]
  __int64 v81; // [rsp+48h] [rbp-C0h]
  size_t Size; // [rsp+50h] [rbp-B8h]
  __m128i Size_8; // [rsp+58h] [rbp-B0h] BYREF
  __m256i v84; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v85; // [rsp+88h] [rbp-80h]
  __int128 v86; // [rsp+90h] [rbp-78h]
  int v87; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v88; // [rsp+A8h] [rbp-60h]
  __int64 v89; // [rsp+B8h] [rbp-50h]
  __int16 v90; // [rsp+C0h] [rbp-48h]
  __int128 v91; // [rsp+C8h] [rbp-40h]
  _BYTE v92[12]; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int16 v93; // [rsp+F4h] [rbp-14h]
  _BYTE v94[64]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v95[112]; // [rsp+138h] [rbp+30h] BYREF
  char v96; // [rsp+1F0h] [rbp+E8h] BYREF

  v3 = a2;
  v96 = 0;
  v5 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v96, 0);
  v10 = v7;
  if ( v7 >= 0 )
  {
    v84.m256i_i32[0] = 0;
    memset(&v84.m256i_u64[1], 0, 24);
    v86 = 0LL;
    v85 = 0;
    v11 = CCD_BTL::Global(v9, v8);
    v12 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, __m256i *))v11)(v11, &v84);
    v10 = v12;
    if ( v12 < 0 )
      goto LABEL_71;
    if ( (v3 & 0x20) != 0 )
    {
      if ( !*((_WORD *)CCD_TOPOLOGY::GetModalitySetId(this) + 4) )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
        v52[3] = this;
        v52[4] = *((_QWORD *)this + 8);
        v52[5] = *(int *)this;
        WdLogEvent5_WdError(v52);
        LODWORD(v10) = -1073741823;
        goto LABEL_22;
      }
      CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v92, this);
      if ( (v3 & 0x2000) != 0 )
      {
        ModalitySetId = CCD_TOPOLOGY::GetModalitySetId(this);
        v87 = 0;
        v89 = 0LL;
        v90 = 0;
        v88 = 0LL;
        v91 = 0LL;
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)&v87, (__int64)ModalitySetId);
        LODWORD(v10) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
                         (CCD_RECENT_TOPOLOGY_RETRIEVER *)v92,
                         (const struct CCD_SET_STRING_ID *)&v84,
                         (const struct CCD_SET_STRING_ID *)&v87,
                         v3 & 0xF,
                         (v3 & 0x1000) != 0);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v87);
      }
      else
      {
        LODWORD(v10) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
                         (CCD_RECENT_TOPOLOGY_RETRIEVER *)v92,
                         this,
                         v3 & 0xF,
                         (v3 & 0x1000) != 0);
      }
      if ( (_DWORD)v10 == -1073741275 )
      {
        v5 = 2;
        v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v54, v56);
        v57[3] = this;
        v57[4] = *((_QWORD *)this + 8);
        v58 = v57;
        v57[5] = v3;
LABEL_42:
        WdLogEvent5_WdWarning(v58);
        goto LABEL_31;
      }
      if ( (int)v10 >= 0 )
      {
        v5 = 1;
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v95);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v94);
LABEL_16:
        LODWORD(v79) = 0;
        TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(this, (enum CCD_TOPOLOGY_CLASS *)&v79);
        v39 = TopologyClass;
        if ( TopologyClass < 0 )
        {
          v77 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
          v77[3] = v39;
          v77[4] = this;
          v77[5] = *((_QWORD *)this + 8);
          WdLogEvent5_WdError(v77);
          v40 = 0;
        }
        else
        {
          v40 = v79;
        }
        *(_DWORD *)(*((_QWORD *)this + 8) + 32LL) = v40;
        active = CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        if ( active < 0
          || (active = CCD_TOPOLOGY::FillPathsTargetFlags(this, v42), active < 0)
          || (active = CCD_TOPOLOGY::_CheckResolvedTopologyForVirtualModeConsistency(this), active < 0) )
        {
          LODWORD(v10) = active;
          goto LABEL_22;
        }
        v43 = (struct D3DKMT_HASH *)*((_QWORD *)this + 8);
        ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v84);
        StringHash = CCD_SET_STRING_ID::_QueryStringHash(ConnectedSetStr, v43);
        v10 = StringHash;
        if ( StringHash >= 0 )
        {
LABEL_22:
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v84);
          goto LABEL_23;
        }
LABEL_71:
        v78 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
        v78[3] = v10;
        v78[4] = this;
        v78[5] = *((_QWORD *)this + 8);
        v78[6] = v3;
        WdLogEvent5_WdError(v78);
        goto LABEL_22;
      }
      v60 = (_QWORD *)WdLogNewEntry5_WdError(v55, v54);
      v60[3] = (int)v10;
      v60[4] = this;
      v60[5] = *((_QWORD *)this + 8);
      v60[6] = v3;
      WdLogEvent5_WdError(v60);
LABEL_31:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v95);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v94);
      goto LABEL_22;
    }
    CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v92, this);
    LODWORD(v81) = v3 & 0xF;
    v15 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v92,
            (const struct CCD_SET_STRING_ID *)&v84,
            0LL,
            v81,
            (v3 & 0x1000) != 0);
    v18 = v15;
    LODWORD(v10) = -1073741789;
    if ( v15 == -1073741789 )
    {
      if ( a3 )
        *a3 = v93;
      goto LABEL_30;
    }
    if ( v15 < 0 )
    {
      Size_8 = *(__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v84);
      LODWORD(v80) = _mm_cvtsi128_si32(Size_8);
      LODWORD(v79) = (unsigned __int16)v80 + 57;
      Size = (unsigned int)v79;
      v61 = operator new[]((unsigned int)v79, 0x63644356u, PagedPool);
      if ( v61 )
      {
        memset(v61, 0, Size);
        v62 = (unsigned __int16)v80;
        v63 = (PCHAR)Size_8.m128i_i64[1];
        v61[1] = v79;
        v61[10] = 0;
        *((_QWORD *)v61 + 4) = 0LL;
        *v61 = 9;
        *(_OWORD *)(v61 + 2) = 0LL;
        *((_QWORD *)v61 + 3) = 0LL;
        v61[12] = v18;
        v61[13] = v3;
        memmove(v61 + 14, v63, v62);
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v64);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v61, CurrentProcessSessionId);
        operator delete[](v61);
      }
      else
      {
        v80 = 0LL;
        DxgkLogCodePointPacket(0x1Bu, v3, v18, 0, 0LL);
      }
      v5 = 2;
    }
    else
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v17, v16) + 1120) )
      {
        v19 = (__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v84);
        v20 = (struct D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
        Size_8 = *v19;
        LogCddDatabaseAccessPacket(1, v18, v20, (struct _STRING *)&Size_8, v3);
      }
      else
      {
        v80 = 0LL;
        DxgkLogCodePointPacket(9u, v3, v18, 0, 0LL);
      }
      v5 = 1;
    }
    if ( (int)v18 >= 0 )
      goto LABEL_10;
    if ( (v3 & 0x80u) == 0LL )
    {
      v66 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      v66[3] = v18;
      v66[4] = this;
      v66[5] = *((_QWORD *)this + 8);
      v66[6] = v3;
      LOWORD(v79) = 0;
      CCD_BTL::Global(v3, v67);
      v68 = BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)&v87);
      v69 = BTL_TOPOLOGY_CONSTRUCTOR::operator()(v68);
      v18 = v69;
      if ( v69 == -1073741789 )
      {
        if ( a3 )
          *a3 = v79;
        CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        CCD_TOPOLOGY::FillPathsTargetFlags(this, v70);
LABEL_30:
        v5 = 0;
        goto LABEL_31;
      }
      if ( v69 < 0 )
        goto LABEL_61;
      if ( (v3 & 0x4000000) != 0 )
      {
        GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag();
        v72 = 0;
        if ( GlobalRawmodeFlag )
          v72 = 0x20000;
        v73 = CCD_TOPOLOGY::Functionalize(this, v72, 1);
        v18 = v73;
        if ( v73 < 0 )
        {
LABEL_61:
          v5 |= 8u;
          v74 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
          v74[3] = v18;
          goto LABEL_65;
        }
      }
      v5 |= 4u;
    }
    if ( (int)v18 >= 0 )
    {
LABEL_10:
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      v27 = (_DWORD)v81 == 15;
      v25[3] = this;
      v28 = *((_QWORD *)this + 8);
      v25[4] = v28;
      v25[5] = v3;
      if ( !v27 )
      {
LABEL_15:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v95);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v94);
        goto LABEL_16;
      }
      v29 = CCD_BTL::Global(v28, v26);
      v31 = CDS_JOURNAL::CommitTo((struct CCD_BTL *)((char *)v29 + 104), this, v30, a3);
      v35 = v31;
      if ( v31 != -1073741789 )
      {
        if ( v31 == -1073741266 )
        {
          v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
          v75[3] = -1073741266LL;
          v75[4] = this;
          v75[5] = *((_QWORD *)this + 8);
          v75[6] = v3;
          WdLogEvent5_WdWarning(v75);
        }
        else if ( v31 < 0 )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
          v76[3] = v35;
          v76[4] = this;
          v76[5] = *((_QWORD *)this + 8);
          v76[6] = v3;
          WdLogEvent5_WdError(v76);
        }
        goto LABEL_15;
      }
      v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
      if ( a3 )
        v59 = *a3;
      else
        v59 = 0LL;
      v58[3] = v59;
      v58[4] = -1073741789LL;
      v58[5] = this;
      v58[6] = *((_QWORD *)this + 8);
      v58[7] = v3;
      goto LABEL_42;
    }
    v74 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v74[3] = (int)v18;
LABEL_65:
    v74[4] = this;
    v74[5] = *((_QWORD *)this + 8);
    v74[6] = v3;
    WdLogEvent5_WdError(v74);
    LODWORD(v10) = v18;
    goto LABEL_31;
  }
  v49 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v49 + 24) = v10;
  WdLogEvent5_WdError(v49);
LABEL_23:
  if ( v96 )
    DxgkReleaseSessionModeChangeLock(v47, v46);
  if ( v5 )
    DisplayScenarioJournalCCDRetrieval(v5);
  return (unsigned int)v10;
}
