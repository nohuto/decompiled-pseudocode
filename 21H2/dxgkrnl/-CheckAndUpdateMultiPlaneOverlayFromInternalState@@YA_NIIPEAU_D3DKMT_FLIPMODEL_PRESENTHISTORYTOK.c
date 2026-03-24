/*
 * XREFs of ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C02A36C8
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0106FE0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C00E07E8 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C00EF680 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1C02109B4 (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?ClearQueryStateForPostCompositionUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0210A18 (-ClearQueryStateForPostCompositionUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@0@Z @ 0x1C02130A4 (-GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@.c)
 *     ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x1C0214AD4 (-SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C0214B8C (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1C0214C98 (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02526D4 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 */

char __fastcall CheckAndUpdateMultiPlaneOverlayFromInternalState(
        __int64 a1,
        __int64 a2,
        struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        char a4,
        struct ADAPTER_RENDER *a5,
        struct ADAPTER_DISPLAY *a6,
        struct tagRECT *a7)
{
  struct ADAPTER_DISPLAY *v7; // r13
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // di
  const struct DXGALLOCATION *v16; // r15
  const struct tagRECT *v17; // r14
  RECT SourceRect; // xmm0
  enum D3DDDI_COLOR_SPACE_TYPE ColorSpace; // eax
  const struct tagRECT *v20; // r8
  __int64 v21; // rdx
  __int64 v23; // rax
  D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v24; // [rsp+78h] [rbp-61h] BYREF
  unsigned int v25[36]; // [rsp+88h] [rbp-51h] BYREF
  int v26; // [rsp+128h] [rbp+4Fh] BYREF
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v27; // [rsp+138h] [rbp+5Fh]
  char v28; // [rsp+140h] [rbp+67h]

  v28 = a4;
  v27 = a3;
  v7 = a6;
  v8 = (unsigned int)a1;
  v9 = (unsigned int)a2;
  v10 = *((_QWORD *)a6 + 14) + 3968LL * (unsigned int)a1;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v10 + 8) + 544LL) != KeGetCurrentThread() )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v11 + 24) = 9349LL;
    WdLogEvent5_WdAssertion(v11);
  }
  LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((DISPLAY_SOURCE *)v10, v9);
  if ( LatestPlaneConfigInternal
    && (v14 = *((unsigned int *)LatestPlaneConfigInternal + 2), v15 = 1, (v14 & 1) != 0)
    && (v16 = *(const struct DXGALLOCATION **)LatestPlaneConfigInternal) != 0LL )
  {
    memset(v25, 0, 0x58uLL);
    DISPLAY_SOURCE::GetLatestPlaneAttributesUnsafe(
      (DISPLAY_SOURCE *)v10,
      (unsigned int)v9,
      v25,
      (struct tagRECT *)&v25[1],
      (struct tagRECT *)&v25[5],
      (struct tagRECT *)&v25[9],
      (enum _D3DDDI_ROTATION *)&v25[13],
      (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND *)&v25[14],
      (enum D3DDDI_COLOR_SPACE_TYPE *)&v25[18],
      &v25[20]);
    v17 = a7;
    SourceRect = v27->SourceRect;
    ColorSpace = v27->ColorSpace;
    LODWORD(a6) = ColorSpace;
    *(RECT *)&v25[1] = SourceRect;
    v25[18] = ColorSpace;
    if ( v28 )
    {
      *(RECT *)&v25[5] = SourceRect;
      v20 = a7;
      *(RECT *)&v25[9] = SourceRect;
      *a7 = *(struct tagRECT *)(v10 + 652);
      DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe((DISPLAY_SOURCE *)v10, (const struct tagRECT *)&v25[1], v20);
      ColorSpace = (int)a6;
    }
    DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
      (DISPLAY_SOURCE *)v10,
      (unsigned int)v9,
      v16,
      v25[0],
      (const struct tagRECT *)&v25[1],
      (const struct tagRECT *)&v25[5],
      (const struct tagRECT *)&v25[9],
      (enum _D3DDDI_ROTATION)v25[13],
      (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND)v25[14],
      ColorSpace,
      v25[20]);
    v26 = 0;
    v24.0 = 0;
    CheckMultiPlaneOverlayInternal3(v8, a5, v7, &v26, &v24);
    DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe((DISPLAY_SOURCE *)v10, (unsigned int)v9);
    if ( !v26 )
      return 0;
    DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
      (DISPLAY_SOURCE *)v10,
      (unsigned int)v9,
      v16,
      1u,
      v25[0],
      (const struct tagRECT *)&v25[1],
      (const struct tagRECT *)&v25[5],
      (const struct tagRECT *)&v25[9],
      (enum _D3DDDI_ROTATION)v25[13],
      (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND)v25[14],
      (enum D3DDDI_COLOR_SPACE_TYPE)a6,
      v25[20],
      D3DDDIFMT_FORCE_UINT|0x80000000,
      1u);
    if ( v28 )
    {
      DISPLAY_SOURCE::ClearQueryStateForPostCompositionUnsafe((DISPLAY_SOURCE *)v10);
      LOBYTE(v21) = 1;
      DISPLAY_SOURCE::SetPostCompositionConfigUnsafe((DISPLAY_SOURCE *)v10, v21, (const struct tagRECT *)&v25[1], v17);
    }
    return v15;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v23 + 24) = v8;
    *(_QWORD *)(v23 + 32) = v9;
    WdLogEvent5_WdError(v23);
    return 0;
  }
}
