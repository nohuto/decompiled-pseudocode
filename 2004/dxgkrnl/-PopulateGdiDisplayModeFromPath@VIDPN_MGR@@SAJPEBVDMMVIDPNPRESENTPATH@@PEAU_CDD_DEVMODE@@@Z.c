/*
 * XREFs of ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C0145F04
 * Callers:
 *     FillDevmodeFromVidPn @ 0x1C0145E6C (FillDevmodeFromVidPn.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0008108 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0008208 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C000A278 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C001993C (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C005B254 (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C011D6E0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C01380F4 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C01460A0 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 */

__int64 __fastcall VIDPN_MGR::PopulateGdiDisplayModeFromPath(
        const struct DMMVIDPNPRESENTPATH *a1,
        struct _CDD_DEVMODE *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rbp
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v19; // r13d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v20; // edi
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v21; // ebx
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rbx
  __int64 cy; // rdx
  __int64 v38; // [rsp+80h] [rbp+8h] BYREF
  __int64 v39; // [rsp+88h] [rbp+10h] BYREF

  if ( !a1 )
  {
    v28 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !a2 )
  {
    v29 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v29);
  }
  v4 = *((_QWORD *)a1 + 11);
  if ( !v4 )
  {
    v30 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v30);
  }
  v38 = 0LL;
  v5 = *(_QWORD *)(v4 + 104);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 96));
    v6 = *(_QWORD *)(v4 + 104);
    if ( v6 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0LL;
  }
  v31 = WdLogNewEntry5_WdAssertion(a1, a2);
  WdLogEvent5_WdAssertion(v31);
LABEL_9:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v38, v6);
  v9 = *(unsigned int **)(v38 + 144);
  if ( !v9 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v32);
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v38, 0LL);
  v12 = *((_QWORD *)a1 + 12);
  v13 = *(_QWORD *)(v12 + 104);
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 96));
    v14 = *(_QWORD *)(v12 + 104);
    if ( v14 )
      goto LABEL_13;
  }
  else
  {
    v14 = 0LL;
  }
  v33 = WdLogNewEntry5_WdAssertion(v11, v10);
  WdLogEvent5_WdAssertion(v33);
LABEL_13:
  v15 = *(_QWORD *)(v14 + 144);
  v39 = v14;
  if ( !v15 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v34);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v39, 0LL);
  GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v9);
  *(_QWORD *)((char *)a2 + 220) = *(_QWORD *)(v15 + 92);
  DmmCalculatePresentationVSync(
    (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v15 + 72),
    (struct _D3DDDI_RATIONAL *)((char *)a2 + 220));
  v18 = v9[18];
  v19 = *((_DWORD *)a1 + 28);
  v20 = *((_DWORD *)a1 + 29);
  v21 = (int)(*(_DWORD *)(v15 + 120) << 29) >> 29;
  if ( (((_DWORD)v18 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v18 == 2 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v18, v17);
    WdLogEvent5_WdAssertion(v35);
  }
  v22 = DmmMapVSyncFromRationalToInteger((const struct _D3DDDI_RATIONAL *)((char *)a2 + 220), (unsigned int)v21, 0LL);
  v25 = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
          0x20uLL,
          GraphicsInfo->PrimSurfSize.cx,
          GraphicsInfo->PrimSurfSize.cy,
          v22,
          v21,
          v20,
          v19,
          (struct _devicemodeW *const)a2);
  if ( v25 < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v26);
    v36[3] = GraphicsInfo->PrimSurfSize.cx;
    cy = GraphicsInfo->PrimSurfSize.cy;
    v36[4] = cy;
    v36[5] = (unsigned int)DMMVIDPNSOURCEMODE::GetBitsPerPixel((DMMVIDPNSOURCEMODE *)v9, cy);
    v36[6] = (unsigned int)DMMVIDEOSIGNALMODE::DivideAndRound(*(unsigned int *)(v15 + 92), *(unsigned int *)(v15 + 96));
    v36[7] = (int)(*(_DWORD *)(v15 + 120) << 29) >> 29;
    WdLogEvent5_WdWarning(v36);
    return (unsigned int)v25;
  }
  else
  {
    *((_DWORD *)a2 + 57) = 21;
    return 0LL;
  }
}
