/*
 * XREFs of ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C013E7E8
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C013E6C4 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02E3330 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000E170 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F360 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C0010910 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C001093C (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0013458 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C0129C6C (-GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTA.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::CreateNewPath(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        struct DMMVIDPNPRESENTPATH **a3)
{
  __int64 VidPnSourceId; // r14
  __int64 VidPnTargetId; // rbp
  __int64 Container; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DMMVIDPNSOURCE *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DMMVIDPNTARGET *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v18; // rcx
  const struct _D3DKMDT_VIDPN_PRESENT_PATH *v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  bool v27; // zf
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rax
  DMMVIDPNPRESENTPATH *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  int LowestAvailImportanceOrdinal; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 (__fastcall ***v54)(_QWORD, __int64); // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v55; // [rsp+28h] [rbp-1C0h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH v56; // [rsp+30h] [rbp-1B8h] BYREF

  if ( !a3 )
  {
    v42 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v42);
  }
  *a3 = 0LL;
  VidPnSourceId = a2->VidPnSourceId;
  VidPnTargetId = a2->VidPnTargetId;
  v54 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160, (__int64)a2);
  v11 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(
                                   *(_QWORD *)(Container + 304),
                                   VidPnSourceId);
  if ( v11 )
  {
    v12 = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160, v9);
    v55 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v12 + 312), VidPnTargetId);
    v15 = (struct DMMVIDPNTARGET *)v55;
    if ( v55 )
    {
      if ( DMMVIDPNTOPOLOGY::FindPath(this, VidPnSourceId, VidPnTargetId) )
      {
        v39 = WdLogNewEntry5_WdDmmEvent(v16);
        *(_QWORD *)(v39 + 24) = VidPnSourceId;
        *(_QWORD *)(v39 + 32) = VidPnTargetId;
        *(_QWORD *)(v39 + 40) = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160, v45);
        WdLogEvent5_WdDmmEvent(v39);
        LODWORD(v39) = -1071774957;
      }
      else
      {
        v17 = 2LL;
        v18 = &v56;
        v19 = a2;
        do
        {
          v20 = *(_OWORD *)&v19->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v18->VidPnSourceId = *(_OWORD *)&v19->VidPnSourceId;
          v21 = *(_OWORD *)&v19->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v18->ContentTransformation.ScalingSupport = v20;
          VidPnTargetColorCoeffDynamicRanges = v19->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v18->VisibleFromActiveTLOffset.cy = v21;
          v23 = *(_OWORD *)&v19->Content;
          v18->VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
          v24 = *(_OWORD *)&v19->CopyProtection.OEMCopyProtection[4];
          *(_OWORD *)&v18->Content = v23;
          v25 = *(_OWORD *)&v19->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v18->CopyProtection.OEMCopyProtection[4] = v24;
          v26 = *(_OWORD *)&v19->CopyProtection.OEMCopyProtection[36];
          v19 = (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v19 + 128);
          *(_OWORD *)&v18->CopyProtection.OEMCopyProtection[20] = v25;
          v18 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v18 + 128);
          *(_OWORD *)&v18[-1].GammaRamp.DataSize = v26;
          --v17;
        }
        while ( v17 );
        v27 = a2->ImportanceOrdinal == 255;
        v28 = *(_OWORD *)&v19->ContentTransformation.ScalingSupport;
        *(_OWORD *)&v18->VidPnSourceId = *(_OWORD *)&v19->VidPnSourceId;
        v29 = *(_OWORD *)&v19->VisibleFromActiveTLOffset.cy;
        *(_OWORD *)&v18->ContentTransformation.ScalingSupport = v28;
        v30 = v19->VidPnTargetColorCoeffDynamicRanges;
        *(_OWORD *)&v18->VisibleFromActiveTLOffset.cy = v29;
        v31 = *(_OWORD *)&v19->Content;
        v18->VidPnTargetColorCoeffDynamicRanges = v30;
        v32 = *(_OWORD *)&v19->CopyProtection.OEMCopyProtection[4];
        v33 = *(_QWORD *)&v19->CopyProtection.OEMCopyProtection[20];
        *(_OWORD *)&v18->Content = v31;
        *(_OWORD *)&v18->CopyProtection.OEMCopyProtection[4] = v32;
        *(_QWORD *)&v18->CopyProtection.OEMCopyProtection[20] = v33;
        if ( v27 )
        {
          LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(this, &v56.ImportanceOrdinal);
          v39 = LowestAvailImportanceOrdinal;
          if ( LowestAvailImportanceOrdinal < 0 )
          {
            v51 = WdLogNewEntry5_WdTrace(v48, v47, v49, v50);
            *(_QWORD *)(v51 + 24) = this;
            *(_QWORD *)(v51 + 32) = v39;
            goto LABEL_14;
          }
          v15 = (struct DMMVIDPNTARGET *)v55;
        }
        v34 = (DMMVIDPNPRESENTPATH *)operator new[](0xC0uLL, 0x4E506456u, PagedPool);
        if ( v34 )
          v34 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v34, v11, v15, &v56);
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(&v54, (__int64 (__fastcall ***)(_QWORD, __int64))v34);
        v39 = (__int64)v54;
        if ( v54 )
        {
          if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64)))*v54[7])(v54 + 7) )
          {
            v54 = 0LL;
            *a3 = (struct DMMVIDPNPRESENTPATH *)v39;
            LODWORD(v39) = 0;
          }
          else
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v40);
            v53[3] = a2->VidPnSourceId;
            v53[4] = a2->VidPnTargetId;
            v53[5] = this;
            v53[6] = *(int *)(v39 + 64);
            WdLogEvent5_WdDmmEvent(v53);
            LODWORD(v39) = *(_DWORD *)(v39 + 64);
          }
        }
        else
        {
          v52 = WdLogNewEntry5_WdLowResource(v36, v35, v37, v38);
          *(_QWORD *)(v52 + 24) = this;
          WdLogEvent5_WdLowResource(v52);
          LODWORD(v39) = -1073741801;
        }
      }
    }
    else
    {
      v44 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v44 + 24) = a2->VidPnTargetId;
      WdLogEvent5_WdError(v44);
      LODWORD(v39) = -1071774971;
    }
  }
  else
  {
    v43 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v43 + 24) = a2->VidPnSourceId;
    WdLogEvent5_WdError(v43);
    LODWORD(v39) = -1071774972;
  }
LABEL_14:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>(&v54);
  return (unsigned int)v39;
}
