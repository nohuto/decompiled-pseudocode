/*
 * XREFs of ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C039D724
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03A3518 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0010BF0 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00114BC (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0011B4C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z @ 0x1C001D2D0 (--8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C0068EC4 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0068F64 (-FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C01A6D08 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01AA47C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C01BB920 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinModalityOnPathInVidPnTopology(
        struct _KTHREAD **this,
        struct DMMVIDPNTOPOLOGY *const a2,
        const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *a3)
{
  __int64 Container; // rax
  struct DMMVIDPNTOPOLOGY *v7; // r15
  __int64 v8; // r13
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  DMMVIDPNSOURCEMODE **v12; // r14
  int *v13; // rdi
  int NumPathsFromSource; // eax
  __int64 v15; // rbx
  const struct DMMVIDPNSOURCEMODE *v16; // rdx
  struct DMMVIDPNTOPOLOGY *v17; // r8
  DMMVIDPNSOURCEMODE *v18; // rbp
  struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v20; // rax
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  const struct DMMVIDPNSOURCEMODE *v22; // rbp
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  DMMVIDPNTARGETMODESET *v26; // rdi
  const struct DMMVIDPNTARGETMODE *v27; // rbp
  int v28; // eax
  unsigned int v29; // r8d
  int v30; // eax
  unsigned __int64 v32; // [rsp+80h] [rbp+8h] BYREF
  DMMVIDPNSOURCEMODE **v33; // [rsp+88h] [rbp+10h] BYREF
  __int64 v34; // [rsp+90h] [rbp+18h]
  DMMVIDPNTARGETMODESET *v35; // [rsp+98h] [rbp+20h] BYREF

  if ( this[8] != KeGetCurrentThread() )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v7 = (struct DMMVIDPNTOPOLOGY *)*(unsigned int *)a3;
  v8 = *((unsigned int *)a3 + 1);
  v9 = *(_DWORD *)a3;
  v34 = Container;
  v10 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v9);
  v11 = *(_QWORD *)(v10 + 104);
  if ( v11 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v11 + 96), 1u);
    v12 = *(DMMVIDPNSOURCEMODE ***)(v10 + 104);
  }
  else
  {
    v12 = 0LL;
  }
  v32 = 0LL;
  v33 = v12;
  v13 = (int *)((char *)a3 + 368);
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, (unsigned int)v7, &v32);
  v15 = NumPathsFromSource;
  if ( NumPathsFromSource < 0 )
  {
    v16 = v7;
    v17 = a2;
LABEL_21:
    WdLogSingleEntry3(2LL, v16, v17, v15);
    goto LABEL_22;
  }
  if ( !v32 )
    WdLogSingleEntry0(1LL);
  v18 = v12[18];
  if ( v18 )
  {
    GraphicsInfo = (struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)DMMVIDPNSOURCEMODE::GetGraphicsInfo(v12[18]);
    if ( !operator==(GraphicsInfo, (_DWORD *)a3 + 92) )
    {
      v20 = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v18);
      WdLogSingleEntry3(2LL, v20, (char *)a3 + 368, v7);
      LODWORD(v15) = -1071774960;
LABEL_22:
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v33, 0LL);
      return (unsigned int)v15;
    }
  }
  else
  {
    BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                  (DMMVIDPNSOURCEMODESET *)v12,
                  *v13,
                  *((_DWORD *)a3 + 93),
                  (enum _D3DDDIFORMAT)*((_DWORD *)a3 + 97),
                  (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*((_DWORD *)a3 + 91));
    v22 = BestMatch;
    if ( !BestMatch )
    {
      WdLogSingleEntry3(2LL, (unsigned int)*v13, *((unsigned int *)a3 + 93), *((int *)a3 + 97));
      LODWORD(v15) = -1071774970;
      goto LABEL_22;
    }
    v23 = VIDPN_MGR::PinVidPnSourceMode(
            (VIDPN_MGR *)this,
            (struct DMMVIDPNSOURCEMODESET *const)v12,
            *((_DWORD *)BestMatch + 6),
            1);
    v15 = v23;
    if ( v23 < 0 )
    {
      v17 = v7;
      v16 = v22;
      goto LABEL_21;
    }
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v33, 0LL);
  v24 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v34 + 312), v8);
  v25 = *(_QWORD *)(v24 + 104);
  if ( v25 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 96));
    v26 = *(DMMVIDPNTARGETMODESET **)(v24 + 104);
  }
  else
  {
    v26 = 0LL;
  }
  v35 = v26;
  v27 = DMMVIDPNTARGETMODESET::FindBestMatch(v26, (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)a3 + 408));
  if ( v27 )
  {
    v28 = *((_DWORD *)a3 + 120);
    v29 = *((_DWORD *)v27 + 6);
    *((_DWORD *)v27 + 34) = *((_DWORD *)a3 + 121);
    *((_DWORD *)v27 + 33) = v28;
    v30 = VIDPN_MGR::PinVidPnTargetMode((VIDPN_MGR *)this, v26, v29, 1);
    LODWORD(v15) = v30;
    if ( v30 >= 0 )
      LODWORD(v15) = 0;
    else
      WdLogSingleEntry3(2LL, v27, v8, v30);
  }
  else
  {
    WdLogSingleEntry4(
      2LL,
      *((unsigned int *)a3 + 105),
      *((unsigned int *)a3 + 106),
      *((unsigned int *)a3 + 107),
      *((unsigned int *)a3 + 108));
    LODWORD(v15) = -1071774970;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v35, 0LL);
  return (unsigned int)v15;
}
