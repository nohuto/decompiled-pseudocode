/*
 * XREFs of ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01375F4
 * Callers:
 *     DxgkGetPathsModality @ 0x1C01365A0 (DxgkGetPathsModality.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C0149FA8 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029624C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007D94 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A9FC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C00E1334 (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0122794 (DxgkReleaseSessionModeChangeLock.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C0131024 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0132790 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C013290C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C0132C74 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C01352C8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C0135C78 (-_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0136844 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C0137340 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C01379F8 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C013AB0C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C013C8D8 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C0147464 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C014753C (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01478E8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C0163908 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C016B074 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z @ 0x1C016BAB0 (--0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C016E940 (DxgkGetGlobalRawmodeFlag.c)
 *     ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C02ED774 (--0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C02ED888 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
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
  __int64 v30; // r8
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
  void **ModalitySetId; // rax
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
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned int CurrentProcessSessionId; // eax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  BTL_TOPOLOGY_CONSTRUCTOR *v69; // rax
  int v70; // eax
  __int64 v71; // rdx
  char GlobalRawmodeFlag; // al
  unsigned int v73; // edx
  int v74; // eax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v81; // [rsp+40h] [rbp-C8h]
  __int64 v82; // [rsp+48h] [rbp-C0h]
  size_t Size; // [rsp+50h] [rbp-B8h]
  __m128i Size_8; // [rsp+58h] [rbp-B0h] BYREF
  __m256i v85; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v86; // [rsp+88h] [rbp-80h]
  __int128 v87; // [rsp+90h] [rbp-78h]
  int v88; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v89; // [rsp+A8h] [rbp-60h]
  __int64 v90; // [rsp+B8h] [rbp-50h]
  __int16 v91; // [rsp+C0h] [rbp-48h]
  __int128 v92; // [rsp+C8h] [rbp-40h]
  _BYTE v93[12]; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int16 v94; // [rsp+F4h] [rbp-14h]
  _BYTE v95[64]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v96[112]; // [rsp+138h] [rbp+30h] BYREF
  char v97; // [rsp+1F0h] [rbp+E8h] BYREF

  v3 = a2;
  v97 = 0;
  v5 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v97, 0);
  v10 = v7;
  if ( v7 >= 0 )
  {
    v85.m256i_i32[0] = 0;
    memset(&v85.m256i_u64[1], 0, 24);
    v87 = 0LL;
    v86 = 0;
    v11 = CCD_BTL::Global(v9, v8);
    v12 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, __m256i *))v11)(v11, &v85);
    v10 = v12;
    if ( v12 < 0 )
      goto LABEL_71;
    if ( (v3 & 0x20) != 0 )
    {
      if ( !*((_WORD *)CCD_TOPOLOGY::GetModalitySetId((void **)this) + 4) )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
        v52[3] = this;
        v52[4] = *((_QWORD *)this + 8);
        v52[5] = *(int *)this;
        WdLogEvent5_WdError(v52);
        LODWORD(v10) = -1073741823;
        goto LABEL_22;
      }
      CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v93, this);
      if ( (v3 & 0x2000) != 0 )
      {
        ModalitySetId = CCD_TOPOLOGY::GetModalitySetId((void **)this);
        v88 = 0;
        v90 = 0LL;
        v91 = 0;
        v89 = 0LL;
        v92 = 0LL;
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)&v88, (__int64)ModalitySetId);
        LODWORD(v10) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
                         (CCD_RECENT_TOPOLOGY_RETRIEVER *)v93,
                         (const struct CCD_SET_STRING_ID *)&v85,
                         (const struct CCD_SET_STRING_ID *)&v88,
                         v3 & 0xF,
                         (v3 & 0x1000) != 0);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v88);
      }
      else
      {
        LODWORD(v10) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
                         (CCD_RECENT_TOPOLOGY_RETRIEVER *)v93,
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
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v96);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v95);
LABEL_16:
        LODWORD(v80) = 0;
        TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(this, (enum CCD_TOPOLOGY_CLASS *)&v80);
        v39 = TopologyClass;
        if ( TopologyClass < 0 )
        {
          v78 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
          v78[3] = v39;
          v78[4] = this;
          v78[5] = *((_QWORD *)this + 8);
          WdLogEvent5_WdError(v78);
          v40 = 0;
        }
        else
        {
          v40 = v80;
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
        ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v85);
        StringHash = CCD_SET_STRING_ID::_QueryStringHash(ConnectedSetStr, v43);
        v10 = StringHash;
        if ( StringHash >= 0 )
        {
LABEL_22:
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v85);
          goto LABEL_23;
        }
LABEL_71:
        v79 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
        v79[3] = v10;
        v79[4] = this;
        v79[5] = *((_QWORD *)this + 8);
        v79[6] = v3;
        WdLogEvent5_WdError(v79);
        goto LABEL_22;
      }
      v60 = (_QWORD *)WdLogNewEntry5_WdError(v55, v54);
      v60[3] = (int)v10;
      v60[4] = this;
      v60[5] = *((_QWORD *)this + 8);
      v60[6] = v3;
      WdLogEvent5_WdError(v60);
LABEL_31:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v96);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v95);
      goto LABEL_22;
    }
    CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v93, this);
    LODWORD(v82) = v3 & 0xF;
    v15 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v93,
            (const struct CCD_SET_STRING_ID *)&v85,
            0LL,
            v82,
            (v3 & 0x1000) != 0);
    v18 = v15;
    LODWORD(v10) = -1073741789;
    if ( v15 == -1073741789 )
    {
      if ( a3 )
        *a3 = v94;
      goto LABEL_30;
    }
    if ( v15 < 0 )
    {
      Size_8 = *(__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v85);
      LODWORD(v81) = _mm_cvtsi128_si32(Size_8);
      LODWORD(v80) = (unsigned __int16)v81 + 57;
      Size = (unsigned int)v80;
      v61 = operator new[]((unsigned int)v80, 0x63644356u, PagedPool);
      if ( v61 )
      {
        memset(v61, 0, Size);
        v62 = (unsigned __int16)v81;
        v63 = (PCHAR)Size_8.m128i_i64[1];
        v61[1] = v80;
        v61[10] = 0;
        *((_QWORD *)v61 + 4) = 0LL;
        *v61 = 9;
        *(_OWORD *)(v61 + 2) = 0LL;
        *((_QWORD *)v61 + 3) = 0LL;
        v61[12] = v18;
        v61[13] = v3;
        memmove(v61 + 14, v63, v62);
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v65, v64);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v61, CurrentProcessSessionId);
        operator delete[](v61);
      }
      else
      {
        v81 = 0LL;
        DxgkLogCodePointPacket(0x1Bu, v3, v18, 0, 0LL);
      }
      v5 = 2;
    }
    else
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v17, v16) + 1232) )
      {
        v19 = (__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v85);
        v20 = (struct D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
        Size_8 = *v19;
        LogCddDatabaseAccessPacket(1, v18, v20, (struct _STRING *)&Size_8, v3);
      }
      else
      {
        v81 = 0LL;
        DxgkLogCodePointPacket(9u, v3, v18, 0, 0LL);
      }
      v5 = 1;
    }
    if ( (int)v18 >= 0 )
      goto LABEL_10;
    if ( (v3 & 0x80u) == 0LL )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      v67[3] = v18;
      v67[4] = this;
      v67[5] = *((_QWORD *)this + 8);
      v67[6] = v3;
      LOWORD(v80) = 0;
      CCD_BTL::Global(v3, v68);
      v69 = BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)&v88);
      v70 = BTL_TOPOLOGY_CONSTRUCTOR::operator()(v69);
      v18 = v70;
      if ( v70 == -1073741789 )
      {
        if ( a3 )
          *a3 = v80;
        CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        CCD_TOPOLOGY::FillPathsTargetFlags(this, v71);
LABEL_30:
        v5 = 0;
        goto LABEL_31;
      }
      if ( v70 < 0 )
        goto LABEL_61;
      if ( (v3 & 0x4000000) != 0 )
      {
        GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag();
        v73 = 0;
        if ( GlobalRawmodeFlag )
          v73 = 0x20000;
        v74 = CCD_TOPOLOGY::Functionalize(this, v73, 1);
        v18 = v74;
        if ( v74 < 0 )
        {
LABEL_61:
          v5 |= 8u;
          v75 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
          v75[3] = v18;
          goto LABEL_65;
        }
      }
      v5 |= 4u;
    }
    if ( (int)v18 >= 0 )
    {
LABEL_10:
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      v27 = (_DWORD)v82 == 15;
      v25[3] = this;
      v28 = *((_QWORD *)this + 8);
      v25[4] = v28;
      v25[5] = v3;
      if ( !v27 )
      {
LABEL_15:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v96);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v95);
        goto LABEL_16;
      }
      v29 = CCD_BTL::Global(v28, v26);
      v31 = CDS_JOURNAL::CommitTo((struct CCD_BTL *)((char *)v29 + 104), this, v30, a3);
      v35 = v31;
      if ( v31 != -1073741789 )
      {
        if ( v31 == -1073741266 )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
          v76[3] = -1073741266LL;
          v76[4] = this;
          v76[5] = *((_QWORD *)this + 8);
          v76[6] = v3;
          WdLogEvent5_WdWarning(v76);
        }
        else if ( v31 < 0 )
        {
          v77 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
          v77[3] = v35;
          v77[4] = this;
          v77[5] = *((_QWORD *)this + 8);
          v77[6] = v3;
          WdLogEvent5_WdError(v77);
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
    v75 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v75[3] = (int)v18;
LABEL_65:
    v75[4] = this;
    v75[5] = *((_QWORD *)this + 8);
    v75[6] = v3;
    WdLogEvent5_WdError(v75);
    LODWORD(v10) = v18;
    goto LABEL_31;
  }
  v49 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v49 + 24) = v10;
  WdLogEvent5_WdError(v49);
LABEL_23:
  if ( v97 )
    DxgkReleaseSessionModeChangeLock(v47, v46);
  if ( v5 )
    DisplayScenarioJournalCCDRetrieval(v5);
  return (unsigned int)v10;
}
