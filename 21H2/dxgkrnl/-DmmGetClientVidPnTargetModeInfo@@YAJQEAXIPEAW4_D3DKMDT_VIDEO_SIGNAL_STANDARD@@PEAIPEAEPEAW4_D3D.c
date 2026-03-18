/*
 * XREFs of ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C039AD04
 * Callers:
 *     DxgkOpmGetRedirectionInfo @ 0x1C02C4FFC (DxgkOpmGetRedirectionInfo.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C02F765C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C03841C4 (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0010BF0 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0010C30 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C01BE360 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DmmGetClientVidPnTargetModeInfo(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDEO_SIGNAL_STANDARD *a3,
        unsigned int *a4,
        unsigned __int8 *a5,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING *a6,
        struct _D3DKMDT_2DREGION *a7,
        struct _D3DDDI_RATIONAL *a8)
{
  unsigned int v8; // ebx
  __int64 v9; // r15
  unsigned __int8 *v11; // r13
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING *v12; // r12
  struct _D3DKMDT_2DREGION *v13; // rsi
  struct _D3DDDI_RATIONAL *v14; // r14
  __int64 v16; // rbp
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // r10
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rcx

  v8 = 0;
  v9 = a2;
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
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v16 = *((_QWORD *)a1 + 349);
  if ( !v16 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v17 = *(_QWORD *)(v16 + 104);
  if ( v17 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)&a8, v17);
    v18 = *(_QWORD *)(v17 + 128);
    a5 = 0LL;
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 32));
      v19 = *(_QWORD *)(v17 + 128);
    }
    else
    {
      v19 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&a5, v19);
    if ( a5 )
    {
      v20 = IndexedSet<DMMVIDPNTARGET>::FindById(*((_QWORD *)a5 + 39), v9);
      if ( v20 )
      {
        if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v21 + 96), v9) )
        {
          v22 = *(_QWORD *)(v20 + 104);
          if ( v22 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v22 + 96));
            v23 = *(_QWORD *)(v20 + 104);
          }
          else
          {
            v23 = 0LL;
          }
          v24 = *(_QWORD *)(v23 + 144);
          a7 = (struct _D3DKMDT_2DREGION *)v23;
          if ( !v24 )
          {
            WdLogSingleEntry0(1LL);
            v24 = *(_QWORD *)(v23 + 144);
          }
          a6 = *(enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING **)(v24 + 152);
          if ( a3 )
            *a3 = *(enum _D3DKMDT_VIDEO_SIGNAL_STANDARD *)(v24 + 72);
          if ( a4 )
            *a4 = DmmMapVSyncFromRationalToInteger(
                    (const struct _D3DDDI_RATIONAL *)&a6,
                    (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(*(_QWORD *)(v23 + 144) + 120LL) << 29) >> 29),
                    0LL);
          if ( v11 )
            *v11 = (unsigned int)(((int)(*(_DWORD *)(*(_QWORD *)(v23 + 144) + 120LL) << 29) >> 29) - 2) <= 1;
          if ( v12 )
            *v12 = (int)(*(_DWORD *)(*(_QWORD *)(v23 + 144) + 120LL) << 29) >> 29;
          if ( v13 )
            *v13 = *(struct _D3DKMDT_2DREGION *)(*(_QWORD *)(v23 + 144) + 84LL);
          if ( v14 )
            *v14 = *(struct _D3DDDI_RATIONAL *)(*(_QWORD *)(v23 + 144) + 152LL);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&a7, 0LL);
        }
        else
        {
          WdLogSingleEntry1(2LL, v9);
          v8 = -1071774912;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v9);
        v8 = -1071774971;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      v8 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&a5, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)&a8[5]);
    return v8;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
