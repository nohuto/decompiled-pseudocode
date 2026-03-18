/*
 * XREFs of ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C03A53AC
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0399D00 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C03A6910 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0010BF0 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00114BC (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00114FC (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0011528 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C006A0E8 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C01AA988 (-GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTA.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::CreateNewPath(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        struct DMMVIDPNPRESENTPATH **a3)
{
  __int64 VidPnSourceId; // rbp
  struct DMMVIDPNPRESENTPATH *VidPnTargetId; // rbx
  __int64 Container; // rax
  struct DMMVIDPNSOURCE *v9; // r12
  __int64 v10; // rax
  struct DMMVIDPNTARGET *v11; // r13
  __int64 v12; // r9
  __int64 v13; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v14; // rcx
  const struct _D3DKMDT_VIDPN_PRESENT_PATH *v15; // rax
  __int64 v16; // r8
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  bool v24; // zf
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  int LowestAvailImportanceOrdinal; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  DMMVIDPNPRESENTPATH *v35; // rax
  __int64 (__fastcall ***v37[2])(_QWORD, __int64); // [rsp+30h] [rbp-1C8h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v38; // [rsp+40h] [rbp-1B8h] BYREF

  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *a3 = 0LL;
  VidPnSourceId = a2->VidPnSourceId;
  VidPnTargetId = (struct DMMVIDPNPRESENTPATH *)a2->VidPnTargetId;
  v37[0] = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v9 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), VidPnSourceId);
  if ( v9 )
  {
    v10 = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    v11 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v10 + 312), (int)VidPnTargetId);
    if ( v11 )
    {
      if ( DMMVIDPNTOPOLOGY::FindPath(this, VidPnSourceId, (int)VidPnTargetId) )
      {
        v13 = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
        WdLogSingleEntry3(7LL, VidPnSourceId, VidPnTargetId, v13);
        LODWORD(VidPnTargetId) = -1071774957;
      }
      else
      {
        v14 = &v38;
        v15 = a2;
        v16 = 2LL;
        do
        {
          v17 = *(_OWORD *)&v15->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v14->VidPnSourceId = *(_OWORD *)&v15->VidPnSourceId;
          v18 = *(_OWORD *)&v15->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v14->ContentTransformation.ScalingSupport = v17;
          VidPnTargetColorCoeffDynamicRanges = v15->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v14->VisibleFromActiveTLOffset.cy = v18;
          v20 = *(_OWORD *)&v15->Content;
          v14->VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
          v21 = *(_OWORD *)&v15->CopyProtection.OEMCopyProtection[4];
          *(_OWORD *)&v14->Content = v20;
          v22 = *(_OWORD *)&v15->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v14->CopyProtection.OEMCopyProtection[4] = v21;
          v23 = *(_OWORD *)&v15->CopyProtection.OEMCopyProtection[36];
          v15 = (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v15 + 128);
          *(_OWORD *)&v14->CopyProtection.OEMCopyProtection[20] = v22;
          v14 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v14 + 128);
          *(_OWORD *)&v14[-1].GammaRamp.DataSize = v23;
          --v16;
        }
        while ( v16 );
        v24 = a2->ImportanceOrdinal == 255;
        v25 = *(_OWORD *)&v15->ContentTransformation.ScalingSupport;
        *(_OWORD *)&v14->VidPnSourceId = *(_OWORD *)&v15->VidPnSourceId;
        v26 = *(_OWORD *)&v15->VisibleFromActiveTLOffset.cy;
        *(_OWORD *)&v14->ContentTransformation.ScalingSupport = v25;
        v27 = v15->VidPnTargetColorCoeffDynamicRanges;
        *(_OWORD *)&v14->VisibleFromActiveTLOffset.cy = v26;
        v28 = *(_OWORD *)&v15->Content;
        v14->VidPnTargetColorCoeffDynamicRanges = v27;
        v29 = *(_OWORD *)&v15->CopyProtection.OEMCopyProtection[4];
        v30 = *(_QWORD *)&v15->CopyProtection.OEMCopyProtection[20];
        *(_OWORD *)&v14->Content = v28;
        *(_OWORD *)&v14->CopyProtection.OEMCopyProtection[4] = v29;
        *(_QWORD *)&v14->CopyProtection.OEMCopyProtection[20] = v30;
        if ( v24
          && (LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(
                                               this,
                                               &v38.ImportanceOrdinal),
              VidPnTargetId = (struct DMMVIDPNPRESENTPATH *)LowestAvailImportanceOrdinal,
              LowestAvailImportanceOrdinal < 0) )
        {
          v34 = WdLogNewEntry5_WdTrace(v33, v32);
          *(_QWORD *)(v34 + 24) = this;
          *(_QWORD *)(v34 + 32) = VidPnTargetId;
        }
        else
        {
          v35 = (DMMVIDPNPRESENTPATH *)operator new[](0xC0uLL, 0x4E506456u, 256LL, v12);
          if ( v35 )
            v35 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v35, v9, v11, &v38);
          auto_ptr<DMMVIDPNPRESENTPATH>::reset(v37, (__int64 (__fastcall ***)(_QWORD, __int64))v35);
          VidPnTargetId = (struct DMMVIDPNPRESENTPATH *)v37[0];
          if ( v37[0] )
          {
            if ( (**((unsigned __int8 (__fastcall ***)(__int64 (__fastcall ***)(_QWORD, __int64)))v37[0] + 7))(v37[0] + 7) )
            {
              v37[0] = 0LL;
              *a3 = VidPnTargetId;
              LODWORD(VidPnTargetId) = 0;
            }
            else
            {
              WdLogSingleEntry4(7LL, a2->VidPnSourceId, a2->VidPnTargetId, this, *((int *)VidPnTargetId + 16));
              LODWORD(VidPnTargetId) = *((_DWORD *)VidPnTargetId + 16);
            }
          }
          else
          {
            WdLogSingleEntry1(6LL, this);
            LODWORD(VidPnTargetId) = -1073741801;
          }
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a2->VidPnTargetId);
      LODWORD(VidPnTargetId) = -1071774971;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a2->VidPnSourceId);
    LODWORD(VidPnTargetId) = -1071774972;
  }
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>(v37);
  return (unsigned int)VidPnTargetId;
}
