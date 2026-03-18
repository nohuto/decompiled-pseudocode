/*
 * XREFs of ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0120B10
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0133FB0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0136F68 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C0145460 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C015A928 (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C0167E80 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C02DAF00 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C02E1430 (-AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_V.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02EC810 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02ED360 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C02EFA74 (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C02EFDE8 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C0004724 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B08 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C0007B48 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0007F40 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017E58 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C0120CB8 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01215E4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C0122A40 (-GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTA.c)
 */

__int64 __fastcall VIDPN_MGR::AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a5,
        unsigned __int16 a6,
        unsigned __int8 a7,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a8)
{
  __int64 v8; // rsi
  __int64 v10; // rbp
  __int64 Container; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DMMVIDPNSOURCE *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DMMVIDPNTARGET *v18; // r14
  __int64 v19; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v20; // ebx
  int LowestAvailImportanceOrdinal; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  DMMVIDPNPRESENTPATH *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct DMMVIDPNPRESENTPATH *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // r10d
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  struct DMMVIDPNPRESENTPATH *v62[2]; // [rsp+30h] [rbp-38h] BYREF
  _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v63; // [rsp+78h] [rbp+10h] BYREF

  v8 = a4;
  v10 = a3;
  if ( !a2 )
  {
    v42 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v42);
  }
  v62[0] = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160, (__int64)a2);
  v15 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(Container + 304), v10);
  if ( !v15 )
  {
    v43 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v43 + 24) = v10;
    *(_QWORD *)(v43 + 32) = a2;
    WdLogEvent5_WdError(v43);
    LODWORD(v26) = -1071774972;
    goto LABEL_16;
  }
  v18 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(Container + 312), v8);
  if ( !v18 )
  {
    v44 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v44 + 24) = v8;
    *(_QWORD *)(v44 + 32) = a2;
    WdLogEvent5_WdError(v44);
    goto LABEL_26;
  }
  v63 = D3DKMDT_VPPI_UNINITIALIZED;
  if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(a2, v10, 0LL, (unsigned int *)&v63) >= 0 )
  {
    if ( !(unsigned __int8)RtlIsMultiSessionSku(v19) )
    {
      v49 = WdLogNewEntry5_WdTrace(v46, v45, v47, v48);
      *(_QWORD *)(v49 + 24) = v8;
      *(_QWORD *)(v49 + 32) = 1LL;
      goto LABEL_29;
    }
    if ( (*(_DWORD *)(*((_QWORD *)v18 + 12) + 556LL) & 0x100) != 0 )
    {
      v50 = WdLogNewEntry5_WdTrace(v46, v45, v47, v48);
      *(_QWORD *)(v50 + 24) = v8;
      *(_QWORD *)(v50 + 32) = 2LL;
      goto LABEL_29;
    }
    v51 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(Container + 312), v63);
    if ( v51 )
    {
      if ( (v56 & *(_DWORD *)(*(_QWORD *)(v51 + 96) + 556LL)) == 0 )
        goto LABEL_6;
      v58 = (_QWORD *)WdLogNewEntry5_WdTrace(v53, v52, v54, v55);
      v58[3] = (unsigned int)v63;
      v58[4] = v8;
      v58[5] = 3LL;
LABEL_29:
      LODWORD(v26) = -1071774975;
      goto LABEL_16;
    }
    v57 = WdLogNewEntry5_WdAssertion(v53, v52);
    WdLogEvent5_WdAssertion(v57);
LABEL_26:
    LODWORD(v26) = -1071774971;
    goto LABEL_16;
  }
LABEL_6:
  v63 = D3DKMDT_VPPI_UNINITIALIZED;
  v20 = a5;
  if ( a5 == 255 )
  {
    LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(a2, &v63);
    v26 = LowestAvailImportanceOrdinal;
    if ( LowestAvailImportanceOrdinal < 0 )
    {
      v59 = WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
      *(_QWORD *)(v59 + 24) = a2;
      *(_QWORD *)(v59 + 32) = v26;
      goto LABEL_16;
    }
    v20 = v63;
  }
  v27 = (DMMVIDPNPRESENTPATH *)operator new[](0xC0uLL, 0x4E506456u, PagedPool);
  if ( v27 )
    v27 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v27, v15, v18, v20, a6);
  auto_ptr<DMMVIDPNPRESENTPATH>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))v62,
    (__int64 (__fastcall ***)(_QWORD, __int64))v27);
  v32 = v62[0];
  if ( v62[0] )
  {
    if ( !(**((unsigned __int8 (__fastcall ***)(char *))v62[0] + 7))((char *)v62[0] + 56) )
    {
      v61 = WdLogNewEntry5_WdAssertion(v34, v33);
      WdLogEvent5_WdAssertion(v61);
    }
    v35 = VIDPN_MGR::_AddPathToVidPnTopology(this, a2, v32, a8, a7);
    v26 = v35;
    if ( v35 >= 0 )
    {
      v62[0] = 0LL;
      LODWORD(v26) = 0;
    }
    else
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdTrace(v37, v36, v38, v39);
      v40[3] = v10;
      v40[4] = v8;
      v40[5] = a2;
      v40[6] = v26;
    }
  }
  else
  {
    v60 = WdLogNewEntry5_WdLowResource(v29, v28, v30, v31);
    WdLogEvent5_WdLowResource(v60);
    LODWORD(v26) = -1073741801;
  }
LABEL_16:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))v62);
  return (unsigned int)v26;
}
