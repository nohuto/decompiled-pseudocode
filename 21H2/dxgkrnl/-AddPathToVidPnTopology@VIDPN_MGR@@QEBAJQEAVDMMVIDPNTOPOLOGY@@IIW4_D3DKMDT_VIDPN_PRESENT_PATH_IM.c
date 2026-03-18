/*
 * XREFs of ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01AA0E0
 * Callers:
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01B06A0 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C01B5D54 (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C01D4290 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C01E8CE0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C039A6D8 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C03A16D0 (-AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_V.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03AC5EC (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C03AC838 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C03AD350 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C03ADCB8 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C000C610 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0010BF0 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00114BC (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00114FC (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0011528 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C01A9F94 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C01AA988 (-GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTA.c)
 */

__int64 __fastcall VIDPN_MGR::AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a5,
        unsigned __int16 a6,
        char a7,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a8)
{
  __int64 v8; // rsi
  __int64 v10; // rbp
  __int64 Container; // rbx
  struct DMMVIDPNSOURCE *v13; // r15
  struct DMMVIDPNTARGET *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v17; // ebx
  int LowestAvailImportanceOrdinal; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  DMMVIDPNPRESENTPATH *v22; // rax
  struct DMMVIDPNPRESENTPATH *v23; // rbx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rax
  struct DMMVIDPNPRESENTPATH *v38[2]; // [rsp+30h] [rbp-38h] BYREF
  _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v39; // [rsp+78h] [rbp+10h] BYREF

  v8 = a4;
  v10 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v38[0] = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v13 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v10);
  if ( !v13 )
  {
    WdLogSingleEntry2(2LL, v10, a2);
    LODWORD(v21) = -1071774972;
    goto LABEL_16;
  }
  v14 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(Container + 312), v8);
  if ( !v14 )
  {
    WdLogSingleEntry2(2LL, v8, a2);
    goto LABEL_26;
  }
  v39 = D3DKMDT_VPPI_UNINITIALIZED;
  if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(a2, v10, 0LL, (unsigned int *)&v39) >= 0 )
  {
    if ( !(unsigned __int8)RtlIsMultiSessionSku(v15) )
    {
      v31 = WdLogNewEntry5_WdTrace(v30, v29);
      *(_QWORD *)(v31 + 24) = v8;
      *(_QWORD *)(v31 + 32) = 1LL;
      goto LABEL_29;
    }
    if ( (*(_DWORD *)(*((_QWORD *)v14 + 12) + 556LL) & 0x100) != 0 )
    {
      v32 = WdLogNewEntry5_WdTrace(v30, v29);
      *(_QWORD *)(v32 + 24) = v8;
      *(_QWORD *)(v32 + 32) = 2LL;
      goto LABEL_29;
    }
    v33 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(Container + 312), v39);
    if ( v33 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v33 + 96) + 556LL) & 0x100) == 0 )
        goto LABEL_6;
      v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v35, v34);
      v36[3] = (unsigned int)v39;
      v36[4] = v8;
      v36[5] = 3LL;
LABEL_29:
      LODWORD(v21) = -1071774975;
      goto LABEL_16;
    }
    WdLogSingleEntry0(1LL);
LABEL_26:
    LODWORD(v21) = -1071774971;
    goto LABEL_16;
  }
LABEL_6:
  v39 = D3DKMDT_VPPI_UNINITIALIZED;
  v17 = a5;
  if ( a5 == 255 )
  {
    LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(a2, &v39);
    v21 = LowestAvailImportanceOrdinal;
    if ( LowestAvailImportanceOrdinal < 0 )
    {
      v37 = WdLogNewEntry5_WdTrace(v20, v19);
      *(_QWORD *)(v37 + 24) = a2;
      *(_QWORD *)(v37 + 32) = v21;
      goto LABEL_16;
    }
    v17 = v39;
  }
  v22 = (DMMVIDPNPRESENTPATH *)operator new[](0xC0uLL, 0x4E506456u, 256LL, v16);
  if ( v22 )
    v22 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v22, v13, v14, v17, a6);
  auto_ptr<DMMVIDPNPRESENTPATH>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))v38,
    (__int64 (__fastcall ***)(_QWORD, __int64))v22);
  v23 = v38[0];
  if ( v38[0] )
  {
    if ( !(**((unsigned __int8 (__fastcall ***)(char *))v38[0] + 7))((char *)v38[0] + 56) )
      WdLogSingleEntry0(1LL);
    v24 = VIDPN_MGR::_AddPathToVidPnTopology(this, a2, v23, (unsigned int)a8, a7);
    v21 = v24;
    if ( v24 < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25);
      v28[3] = v10;
      v28[4] = v8;
      v28[5] = a2;
      v28[6] = v21;
    }
    else
    {
      v38[0] = 0LL;
      LODWORD(v21) = 0;
    }
  }
  else
  {
    WdLogSingleEntry0(6LL);
    LODWORD(v21) = -1073741801;
  }
LABEL_16:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))v38);
  return (unsigned int)v21;
}
