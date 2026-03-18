/*
 * XREFs of ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C0214E5C
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0252ED8 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C02A31E8 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 * Callees:
 *     ?SetPlaneConfigState@@YAXEPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@EPEAU_DISPLAY_PLANE_CONFIG_STATE@@@Z @ 0x1C01655A0 (-SetPlaneConfigState@@YAXEPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIP.c)
 */

void __fastcall DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
        DISPLAY_SOURCE *this,
        __int64 a2,
        const struct DXGALLOCATION *a3,
        char a4,
        const struct tagRECT *a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        enum _D3DDDI_ROTATION a8,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a9,
        enum D3DDDI_COLOR_SPACE_TYPE a10,
        unsigned int a11)
{
  __int64 v13; // rdi
  __int64 v15; // rax

  v13 = (unsigned int)a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 536LL) != KeGetCurrentThread() )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v15 + 24) = 9453LL;
    WdLogEvent5_WdAssertion(v15);
  }
  *((_BYTE *)this + v13 + 2880) = 1;
  SetPlaneConfigState(
    1,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    D3DDDIFMT_UNKNOWN,
    0,
    (DISPLAY_SOURCE *)((char *)this + 80 * v13 + 2896));
  if ( (unsigned int)v13 >= *((_DWORD *)this + 935) )
    *((_DWORD *)this + 935) = v13 + 1;
}
