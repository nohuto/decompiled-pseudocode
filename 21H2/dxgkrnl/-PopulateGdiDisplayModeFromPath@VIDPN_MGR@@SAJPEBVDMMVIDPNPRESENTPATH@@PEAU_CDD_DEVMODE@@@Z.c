/*
 * XREFs of ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C01BE07C
 * Callers:
 *     FillDevmodeFromVidPn @ 0x1C01BDFE4 (FillDevmodeFromVidPn.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0011B4C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C0013758 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C006902C (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C01BE1E4 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C01BE360 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall VIDPN_MGR::PopulateGdiDisplayModeFromPath(
        const struct DMMVIDPNPRESENTPATH *a1,
        struct _CDD_DEVMODE *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  DMMVIDPNSOURCEMODE *v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbp
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v13; // r12
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v14; // edi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v15; // esi
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v16; // ebx
  unsigned int v17; // eax
  int v18; // esi
  __int64 v20; // rdi
  __int64 v21; // rbx
  unsigned int BitsPerPixel; // eax
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+78h] [rbp+10h] BYREF

  if ( !a1 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = *((_QWORD *)a1 + 11);
  if ( !v4 )
    WdLogSingleEntry0(1LL);
  v23 = 0LL;
  v5 = *(_QWORD *)(v4 + 104);
  if ( v5 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v5 + 96), 1u);
    v6 = *(_QWORD *)(v4 + 104);
    if ( v6 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0LL;
  }
  WdLogSingleEntry0(1LL);
LABEL_9:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v23, v6);
  v7 = *(DMMVIDPNSOURCEMODE **)(v23 + 144);
  if ( !v7 )
    WdLogSingleEntry0(1LL);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v23, 0LL);
  v8 = *((_QWORD *)a1 + 12);
  v9 = *(_QWORD *)(v8 + 104);
  if ( v9 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v9 + 96), 1u);
    v10 = *(_QWORD *)(v8 + 104);
    if ( v10 )
      goto LABEL_13;
  }
  else
  {
    v10 = 0LL;
  }
  WdLogSingleEntry0(1LL);
LABEL_13:
  v11 = *(_QWORD *)(v10 + 144);
  v24 = v10;
  if ( !v11 )
    WdLogSingleEntry0(1LL);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v24, 0LL);
  GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v7);
  *(_QWORD *)((char *)a2 + 220) = *(_QWORD *)(v11 + 152);
  v13 = GraphicsInfo;
  v14 = *((_DWORD *)a1 + 28);
  v15 = *((_DWORD *)a1 + 29);
  v16 = (int)(*(_DWORD *)(v11 + 120) << 29) >> 29;
  v17 = DmmMapVSyncFromRationalToInteger((const struct _D3DDDI_RATIONAL *)((char *)a2 + 220), v16, 0LL);
  v18 = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
          0x20uLL,
          v13->PrimSurfSize.cx,
          v13->PrimSurfSize.cy,
          v17,
          v16,
          v15,
          v14,
          (struct _devicemodeW *const)a2);
  if ( v18 < 0 )
  {
    v20 = (int)(*(_DWORD *)(v11 + 120) << 29) >> 29;
    v21 = (unsigned int)DMMVIDEOSIGNALMODE::DivideAndRound(*(unsigned int *)(v11 + 152), *(unsigned int *)(v11 + 156));
    BitsPerPixel = DMMVIDPNSOURCEMODE::GetBitsPerPixel(v7);
    WdLogSingleEntry5(3LL, v13->PrimSurfSize.cx, v13->PrimSurfSize.cy, BitsPerPixel, v21, v20);
    return (unsigned int)v18;
  }
  else
  {
    *((_DWORD *)a2 + 57) = 21;
    return 0LL;
  }
}
