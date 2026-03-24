/*
 * XREFs of ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C014B278
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C014A6EC (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007DB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00083B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00084B8 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C000A508 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C000A5C8 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000CC30 (-FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018798 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z @ 0x1C001AA84 (--8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C0121C9C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C0125010 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0142A04 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinModalityOnPathInVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *a3)
{
  __int64 v6; // rax
  __int64 Container; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  DMMVIDPNSOURCEMODE **v13; // r14
  int *v14; // rdi
  int NumPathsFromSource; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  DMMVIDPNSOURCEMODE *v19; // rbp
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  const struct DMMVIDPNSOURCEMODE *v23; // rbp
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  DMMVIDPNTARGETMODESET *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  const struct DMMVIDPNTARGETMODE *v32; // rbp
  int v33; // eax
  unsigned int v34; // r8d
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
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
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
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
  v8 = *(unsigned int *)a3;
  v9 = *((unsigned int *)a3 + 1);
  v10 = *(_DWORD *)a3;
  v51 = Container;
  v11 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(Container + 304), v10);
  v12 = *(_QWORD *)(v11 + 104);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
    v13 = *(DMMVIDPNSOURCEMODE ***)(v11 + 104);
  }
  else
  {
    v13 = 0LL;
  }
  v49 = 0LL;
  v50 = v13;
  v14 = (int *)((char *)a3 + 368);
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, (unsigned int)v8, &v49);
  v18 = NumPathsFromSource;
  if ( NumPathsFromSource < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v41[3] = v8;
    v41[4] = a2;
LABEL_29:
    v41[5] = v18;
    WdLogEvent5_WdError(v41);
    goto LABEL_30;
  }
  if ( !v49 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v42);
  }
  v19 = v13[18];
  if ( v19 )
  {
    GraphicsInfo = (struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)DMMVIDPNSOURCEMODE::GetGraphicsInfo(v13[18]);
    if ( operator==(GraphicsInfo, (_DWORD *)a3 + 92) )
      goto LABEL_15;
    v18 = WdLogNewEntry5_WdError(v45, v44);
    *(_QWORD *)(v18 + 24) = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v19);
    *(_QWORD *)(v18 + 32) = v14;
    *(_QWORD *)(v18 + 40) = v8;
    WdLogEvent5_WdError(v18);
    LODWORD(v18) = -1071774960;
LABEL_30:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v50, 0LL);
    return (unsigned int)v18;
  }
  BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                (DMMVIDPNSOURCEMODESET *)v13,
                *v14,
                *((_DWORD *)a3 + 93),
                (enum _D3DDDIFORMAT)*((_DWORD *)a3 + 97),
                (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*((_DWORD *)a3 + 91));
  v23 = BestMatch;
  if ( !BestMatch )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v46[3] = (unsigned int)*v14;
    v46[4] = *((unsigned int *)a3 + 93);
    v46[5] = *((int *)a3 + 97);
    WdLogEvent5_WdError(v46);
    LODWORD(v18) = -1071774970;
    goto LABEL_30;
  }
  v24 = VIDPN_MGR::PinVidPnSourceMode(this, (struct DMMVIDPNSOURCEMODESET *const)v13, *((_DWORD *)BestMatch + 6), 1);
  v18 = v24;
  if ( v24 < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
    v41[3] = v23;
    v41[4] = v8;
    goto LABEL_29;
  }
LABEL_15:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v50, 0LL);
  v27 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v51 + 312), v9);
  v28 = *(_QWORD *)(v27 + 104);
  if ( v28 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v28 + 96));
    v29 = *(DMMVIDPNTARGETMODESET **)(v27 + 104);
  }
  else
  {
    v29 = 0LL;
  }
  v52 = v29;
  v32 = DMMVIDPNTARGETMODESET::FindBestMatch(v29, (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)a3 + 408));
  if ( v32 )
  {
    v33 = *((_DWORD *)a3 + 118);
    v34 = *((_DWORD *)v32 + 6);
    *((_DWORD *)v32 + 34) = *((_DWORD *)a3 + 119);
    *((_DWORD *)v32 + 33) = v33;
    v35 = VIDPN_MGR::PinVidPnTargetMode(this, v29, v34, 1);
    v18 = v35;
    if ( v35 < 0 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
      v48[3] = v32;
      v48[4] = v9;
      v48[5] = v18;
      WdLogEvent5_WdError(v48);
    }
    else
    {
      LODWORD(v18) = 0;
    }
  }
  else
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
    v47[3] = *((unsigned int *)a3 + 105);
    v47[4] = *((unsigned int *)a3 + 106);
    v47[5] = *((unsigned int *)a3 + 107);
    v47[6] = *((unsigned int *)a3 + 108);
    WdLogEvent5_WdError(v47);
    LODWORD(v18) = -1071774970;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v52, 0LL);
  return (unsigned int)v18;
}
