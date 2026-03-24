/*
 * XREFs of ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C02DC8A0
 * Callers:
 *     DxgkOpmGetRedirectionInfo @ 0x1C0217530 (DxgkOpmGetRedirectionInfo.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C025D2E4 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C0294AD8 (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00056AC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007DB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0007F58 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00083B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C011FCF0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C013B794 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 */

__int64 __fastcall DmmGetClientVidPnTargetModeInfo(
        DXGADAPTER *a1,
        __int64 a2,
        enum _D3DKMDT_VIDEO_SIGNAL_STANDARD *a3,
        unsigned int *a4,
        unsigned __int8 *a5,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING *a6,
        struct _D3DKMDT_2DREGION *a7,
        struct _D3DDDI_RATIONAL *a8)
{
  unsigned int v8; // ebx
  __int64 v9; // r12
  unsigned __int8 *v11; // r13
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING *v12; // r15
  struct _D3DKMDT_2DREGION *v13; // rsi
  struct _D3DDDI_RATIONAL *v14; // r14
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // r10
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  enum _D3DKMDT_VIDEO_SIGNAL_STANDARD *v40; // rcx
  __int64 v41; // rdx

  v8 = 0;
  v9 = (unsigned int)a2;
  if ( a3 )
    *a3 = D3DKMDT_VSS_UNINITIALIZED;
  if ( a4 )
    *a4 = 0;
  v11 = a5;
  if ( a5 )
    *a5 = 0;
  v12 = a6;
  if ( a6 )
    *a6 = D3DDDI_VSSLO_UNINITIALIZED;
  v13 = a7;
  if ( a7 )
    *a7 = 0LL;
  v14 = a8;
  if ( a8 )
    *a8 = 0LL;
  if ( !a1 )
  {
    v15 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v15 + 24) = 0LL;
LABEL_15:
    WdLogEvent5_WdError(v15);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18, v17);
    WdLogEvent5_WdAssertion(v19);
  }
  v20 = *((_QWORD *)a1 + 337);
  if ( !v20 )
  {
    v15 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v15 + 24) = a1;
    goto LABEL_15;
  }
  v21 = *(_QWORD *)(v20 + 88);
  if ( v21 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)&a8, v21);
    v23 = *(_QWORD *)(v21 + 88);
    a5 = 0LL;
    if ( v23 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 32));
      v24 = *(_QWORD *)(v21 + 88);
    }
    else
    {
      v24 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&a5, v24);
    if ( a5 )
    {
      v30 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*((_QWORD *)a5 + 39), v9);
      if ( v30 )
      {
        if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v31 + 96), v9) )
        {
          v36 = *(_QWORD *)(v30 + 104);
          if ( v36 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v36 + 96));
            v37 = *(_QWORD *)(v30 + 104);
          }
          else
          {
            v37 = 0LL;
          }
          v38 = *(_QWORD *)(v37 + 144);
          a7 = (struct _D3DKMDT_2DREGION *)v37;
          if ( !v38 )
          {
            v39 = WdLogNewEntry5_WdAssertion(v34, v33);
            WdLogEvent5_WdAssertion(v39);
            v38 = *(_QWORD *)(v37 + 144);
          }
          a6 = *(enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING **)(v38 + 92);
          DmmCalculatePresentationVSync(
            (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v38 + 72),
            (struct _D3DDDI_RATIONAL *)&a6);
          if ( a3 )
            *a3 = *v40;
          if ( a4 )
            *a4 = DmmMapVSyncFromRationalToInteger(
                    (const struct _D3DDDI_RATIONAL *)&a6,
                    (unsigned int)((int)(*(_DWORD *)(*(_QWORD *)(v37 + 144) + 120LL) << 29) >> 29),
                    0LL);
          if ( v11 )
            *v11 = (unsigned int)(((int)(*(_DWORD *)(*(_QWORD *)(v37 + 144) + 120LL) << 29) >> 29) - 2) <= 1;
          if ( v12 )
            *v12 = (int)(*(_DWORD *)(*(_QWORD *)(v37 + 144) + 120LL) << 29) >> 29;
          if ( v13 )
            *v13 = *(struct _D3DKMDT_2DREGION *)(*(_QWORD *)(v37 + 144) + 84LL);
          if ( v14 )
            *v14 = *(struct _D3DDDI_RATIONAL *)(*(_QWORD *)(v37 + 144) + 92LL);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&a7, 0LL);
        }
        else
        {
          v35 = WdLogNewEntry5_WdError(v34, v33);
          *(_QWORD *)(v35 + 24) = v9;
          WdLogEvent5_WdError(v35);
          v8 = -1071774912;
        }
      }
      else
      {
        v32 = WdLogNewEntry5_WdError(v29, v28);
        *(_QWORD *)(v32 + 24) = v9;
        WdLogEvent5_WdError(v32);
        v8 = -1071774971;
      }
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(v26, v25);
      *(_QWORD *)(v27 + 24) = a1;
      WdLogEvent5_WdError(v27);
      v8 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&a5, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)&a8[5], v41);
    return v8;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v22 + 24) = a1;
    WdLogEvent5_WdError(v22);
    return 3223192373LL;
  }
}
