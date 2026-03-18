/*
 * XREFs of ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0146B70
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0146A54 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02E6900 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B08 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C0007B48 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007C30 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0007F40 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000CBA4 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017E58 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C0122A40 (-GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTA.c)
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v19; // rcx
  const struct _D3DKMDT_VIDPN_PRESENT_PATH *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  bool v28; // zf
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // rax
  DMMVIDPNPRESENTPATH *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  int LowestAvailImportanceOrdinal; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 (__fastcall ***v56)(_QWORD, __int64); // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v57; // [rsp+28h] [rbp-1C0h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH v58; // [rsp+30h] [rbp-1B8h] BYREF

  if ( !a3 )
  {
    v44 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v44);
  }
  *a3 = 0LL;
  VidPnSourceId = a2->VidPnSourceId;
  VidPnTargetId = a2->VidPnTargetId;
  v56 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160, (__int64)a2);
  v11 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(
                                   *(_QWORD *)(Container + 304),
                                   VidPnSourceId);
  if ( v11 )
  {
    v12 = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160, v9);
    v57 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v12 + 312), VidPnTargetId);
    v15 = (struct DMMVIDPNTARGET *)v57;
    if ( v57 )
    {
      if ( DMMVIDPNTOPOLOGY::FindPath(this, VidPnSourceId, VidPnTargetId) )
      {
        v40 = WdLogNewEntry5_WdDmmEvent(v17, v16);
        *(_QWORD *)(v40 + 24) = VidPnSourceId;
        *(_QWORD *)(v40 + 32) = VidPnTargetId;
        *(_QWORD *)(v40 + 40) = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160, v47);
        WdLogEvent5_WdDmmEvent(v40);
        LODWORD(v40) = -1071774957;
      }
      else
      {
        v18 = 2LL;
        v19 = &v58;
        v20 = a2;
        do
        {
          v21 = *(_OWORD *)&v20->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v19->VidPnSourceId = *(_OWORD *)&v20->VidPnSourceId;
          v22 = *(_OWORD *)&v20->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v19->ContentTransformation.ScalingSupport = v21;
          VidPnTargetColorCoeffDynamicRanges = v20->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v19->VisibleFromActiveTLOffset.cy = v22;
          v24 = *(_OWORD *)&v20->Content;
          v19->VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
          v25 = *(_OWORD *)&v20->CopyProtection.OEMCopyProtection[4];
          *(_OWORD *)&v19->Content = v24;
          v26 = *(_OWORD *)&v20->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v19->CopyProtection.OEMCopyProtection[4] = v25;
          v27 = *(_OWORD *)&v20->CopyProtection.OEMCopyProtection[36];
          v20 = (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v20 + 128);
          *(_OWORD *)&v19->CopyProtection.OEMCopyProtection[20] = v26;
          v19 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v19 + 128);
          *(_OWORD *)&v19[-1].GammaRamp.DataSize = v27;
          --v18;
        }
        while ( v18 );
        v28 = a2->ImportanceOrdinal == 255;
        v29 = *(_OWORD *)&v20->ContentTransformation.ScalingSupport;
        *(_OWORD *)&v19->VidPnSourceId = *(_OWORD *)&v20->VidPnSourceId;
        v30 = *(_OWORD *)&v20->VisibleFromActiveTLOffset.cy;
        *(_OWORD *)&v19->ContentTransformation.ScalingSupport = v29;
        v31 = v20->VidPnTargetColorCoeffDynamicRanges;
        *(_OWORD *)&v19->VisibleFromActiveTLOffset.cy = v30;
        v32 = *(_OWORD *)&v20->Content;
        v19->VidPnTargetColorCoeffDynamicRanges = v31;
        v33 = *(_OWORD *)&v20->CopyProtection.OEMCopyProtection[4];
        v34 = *(_QWORD *)&v20->CopyProtection.OEMCopyProtection[20];
        *(_OWORD *)&v19->Content = v32;
        *(_OWORD *)&v19->CopyProtection.OEMCopyProtection[4] = v33;
        *(_QWORD *)&v19->CopyProtection.OEMCopyProtection[20] = v34;
        if ( v28 )
        {
          LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(this, &v58.ImportanceOrdinal);
          v40 = LowestAvailImportanceOrdinal;
          if ( LowestAvailImportanceOrdinal < 0 )
          {
            v53 = WdLogNewEntry5_WdTrace(v50, v49, v51, v52);
            *(_QWORD *)(v53 + 24) = this;
            *(_QWORD *)(v53 + 32) = v40;
            goto LABEL_14;
          }
          v15 = (struct DMMVIDPNTARGET *)v57;
        }
        v35 = (DMMVIDPNPRESENTPATH *)operator new[](0xC0uLL, 0x4E506456u, PagedPool);
        if ( v35 )
          v35 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v35, v11, v15, &v58);
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(&v56, (__int64 (__fastcall ***)(_QWORD, __int64))v35);
        v40 = (__int64)v56;
        if ( v56 )
        {
          if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64)))*v56[7])(v56 + 7) )
          {
            v56 = 0LL;
            *a3 = (struct DMMVIDPNPRESENTPATH *)v40;
            LODWORD(v40) = 0;
          }
          else
          {
            v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v42, v41);
            v55[3] = a2->VidPnSourceId;
            v55[4] = a2->VidPnTargetId;
            v55[5] = this;
            v55[6] = *(int *)(v40 + 64);
            WdLogEvent5_WdDmmEvent(v55);
            LODWORD(v40) = *(_DWORD *)(v40 + 64);
          }
        }
        else
        {
          v54 = WdLogNewEntry5_WdLowResource(v37, v36, v38, v39);
          *(_QWORD *)(v54 + 24) = this;
          WdLogEvent5_WdLowResource(v54);
          LODWORD(v40) = -1073741801;
        }
      }
    }
    else
    {
      v46 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v46 + 24) = a2->VidPnTargetId;
      WdLogEvent5_WdError(v46);
      LODWORD(v40) = -1071774971;
    }
  }
  else
  {
    v45 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v45 + 24) = a2->VidPnSourceId;
    WdLogEvent5_WdError(v45);
    LODWORD(v40) = -1071774972;
  }
LABEL_14:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>(&v56);
  return (unsigned int)v40;
}
