/*
 * XREFs of ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C013E4C4
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C013D614 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F360 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000F784 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0010C44 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0010CF0 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C0010E54 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00133A8 (-FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z @ 0x1C001A168 (--8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C011CA6C (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C0128620 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C012B788 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinModalityOnPathInVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *a3)
{
  __int64 Container; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  DMMVIDPNSOURCEMODE **v12; // r14
  int *v13; // rdi
  int NumPathsFromSource; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  DMMVIDPNSOURCEMODE *v18; // rbp
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  const struct DMMVIDPNSOURCEMODE *v22; // rbp
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  DMMVIDPNTARGETMODESET *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  const struct DMMVIDPNTARGETMODE *v31; // rbp
  int v32; // eax
  unsigned int v33; // r8d
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  unsigned __int64 v49; // [rsp+80h] [rbp+8h] BYREF
  DMMVIDPNSOURCEMODE **v50; // [rsp+88h] [rbp+10h] BYREF
  __int64 v51; // [rsp+90h] [rbp+18h]
  DMMVIDPNTARGETMODESET *v52; // [rsp+98h] [rbp+20h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 16LL) != KeGetCurrentThread() )
  {
    v38 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v38);
  }
  if ( !a2 )
  {
    v39 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v39);
  }
  if ( !a3 )
  {
    v40 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v40);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160, (__int64)a2);
  v7 = *(unsigned int *)a3;
  v8 = *((unsigned int *)a3 + 1);
  v9 = *(_DWORD *)a3;
  v51 = Container;
  v10 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(Container + 304), v9);
  v11 = *(_QWORD *)(v10 + 104);
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 96));
    v12 = *(DMMVIDPNSOURCEMODE ***)(v10 + 104);
  }
  else
  {
    v12 = 0LL;
  }
  v49 = 0LL;
  v50 = v12;
  v13 = (int *)((char *)a3 + 368);
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, (unsigned int)v7, &v49);
  v17 = NumPathsFromSource;
  if ( NumPathsFromSource < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v41[3] = v7;
    v41[4] = a2;
LABEL_28:
    v41[5] = v17;
    WdLogEvent5_WdError(v41);
    goto LABEL_29;
  }
  if ( !v49 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v16, v15);
    WdLogEvent5_WdAssertion(v42);
  }
  v18 = v12[18];
  if ( v18 )
  {
    GraphicsInfo = (struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)DMMVIDPNSOURCEMODE::GetGraphicsInfo(v12[18]);
    if ( operator==(GraphicsInfo, (_DWORD *)a3 + 92) )
      goto LABEL_15;
    v17 = WdLogNewEntry5_WdError(v45, v44);
    *(_QWORD *)(v17 + 24) = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v18);
    *(_QWORD *)(v17 + 32) = v13;
    *(_QWORD *)(v17 + 40) = v7;
    WdLogEvent5_WdError(v17);
    LODWORD(v17) = -1071774960;
LABEL_29:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v50, 0LL);
    return (unsigned int)v17;
  }
  BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                (DMMVIDPNSOURCEMODESET *)v12,
                *v13,
                *((_DWORD *)a3 + 93),
                (enum _D3DDDIFORMAT)*((_DWORD *)a3 + 97),
                (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*((_DWORD *)a3 + 91));
  v22 = BestMatch;
  if ( !BestMatch )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v46[3] = (unsigned int)*v13;
    v46[4] = *((unsigned int *)a3 + 93);
    v46[5] = *((int *)a3 + 97);
    WdLogEvent5_WdError(v46);
    LODWORD(v17) = -1071774970;
    goto LABEL_29;
  }
  v23 = VIDPN_MGR::PinVidPnSourceMode(this, (struct DMMVIDPNSOURCEMODESET *const)v12, *((_DWORD *)BestMatch + 6), 1);
  v17 = v23;
  if ( v23 < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
    v41[3] = v22;
    v41[4] = v7;
    goto LABEL_28;
  }
LABEL_15:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v50, 0LL);
  v26 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v51 + 312), v8);
  v27 = *(_QWORD *)(v26 + 104);
  if ( v27 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v27 + 96));
    v28 = *(DMMVIDPNTARGETMODESET **)(v26 + 104);
  }
  else
  {
    v28 = 0LL;
  }
  v52 = v28;
  v31 = DMMVIDPNTARGETMODESET::FindBestMatch(v28, (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)a3 + 408));
  if ( v31 )
  {
    v32 = *((_DWORD *)a3 + 118);
    v33 = *((_DWORD *)v31 + 6);
    *((_DWORD *)v31 + 34) = *((_DWORD *)a3 + 119);
    *((_DWORD *)v31 + 33) = v32;
    v34 = VIDPN_MGR::PinVidPnTargetMode(this, v28, v33, 1);
    v17 = v34;
    if ( v34 < 0 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
      v48[3] = v31;
      v48[4] = v8;
      v48[5] = v17;
      WdLogEvent5_WdError(v48);
    }
    else
    {
      LODWORD(v17) = 0;
    }
  }
  else
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
    v47[3] = *((unsigned int *)a3 + 105);
    v47[4] = *((unsigned int *)a3 + 106);
    v47[5] = *((unsigned int *)a3 + 107);
    v47[6] = *((unsigned int *)a3 + 108);
    WdLogEvent5_WdError(v47);
    LODWORD(v17) = -1071774970;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v52, 0LL);
  return (unsigned int)v17;
}
