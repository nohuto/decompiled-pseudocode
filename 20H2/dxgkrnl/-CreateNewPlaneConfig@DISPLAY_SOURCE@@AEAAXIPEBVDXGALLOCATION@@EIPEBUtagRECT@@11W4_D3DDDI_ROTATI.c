/*
 * XREFs of ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C016427C
 * Callers:
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1C00EDCD8 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C00EDDE0 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 * Callees:
 *     McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer @ 0x1C003A4D8 (McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?SetPlaneConfigState@@YAXEPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@EPEAU_DISPLAY_PLANE_CONFIG_STATE@@@Z @ 0x1C01643F0 (-SetPlaneConfigState@@YAXEPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIP.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1C0164494 (-GetNextConfigIndex@@YAHH@Z.c)
 */

void __fastcall DISPLAY_SOURCE::CreateNewPlaneConfig(
        DISPLAY_SOURCE *this,
        __int64 a2,
        const struct DXGALLOCATION *a3,
        char a4,
        unsigned int a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        const struct tagRECT *a8,
        enum _D3DDDI_ROTATION a9,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a10,
        enum D3DDDI_COLOR_SPACE_TYPE a11,
        unsigned int a12,
        enum _D3DDDIFORMAT a13,
        char a14)
{
  __int64 v17; // rdi
  __int64 v18; // rax
  int NextConfigIndex; // eax
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8

  v17 = (unsigned int)a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 536LL) != KeGetCurrentThread() )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v18 + 24) = 9596LL;
    WdLogEvent5_WdAssertion(v18);
  }
  NextConfigIndex = GetNextConfigIndex(*((_DWORD *)this + 42 * v17 + 280));
  v21 = *(_DWORD *)(v20 + 1124);
  v22 = NextConfigIndex;
  *(_DWORD *)(v20 + 1120) = NextConfigIndex;
  if ( NextConfigIndex == v21 || v21 == -1 )
  {
    v23 = GetNextConfigIndex(v21);
    *(_DWORD *)(v20 + 1124) = v23;
  }
  SetPlaneConfigState(
    a4,
    a3,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    (struct _DISPLAY_PLANE_CONFIG_STATE *)(80 * v22 + v20 + 1128));
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer(
      v25,
      v24,
      v26,
      *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
      *((_DWORD *)this + 4),
      v17,
      a4,
      v26,
      a6->left,
      a6->top,
      a6->right,
      a6->bottom,
      a7->left,
      a7->top,
      a7->right,
      a7->bottom,
      a8->left,
      a8->top,
      a8->right,
      a8->bottom,
      a10,
      a11,
      a12);
}
