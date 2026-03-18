/*
 * XREFs of ?SetPlaneConfigState@@YAXEPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@EPEAU_DISPLAY_PLANE_CONFIG_STATE@@@Z @ 0x1C01643F0
 * Callers:
 *     ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C016427C (-CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATI.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C0213CAC (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 * Callees:
 *     <none>
 */

void __fastcall SetPlaneConfigState(
        char a1,
        const struct DXGALLOCATION *a2,
        char a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5,
        const struct tagRECT *a6,
        enum _D3DDDI_ROTATION a7,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a8,
        enum D3DDDI_COLOR_SPACE_TYPE a9,
        unsigned int a10,
        enum _D3DDDIFORMAT a11,
        char a12,
        struct _DISPLAY_PLANE_CONFIG_STATE *a13)
{
  int v13; // r10d
  enum _D3DDDI_ROTATION v14; // ecx
  __int128 v15; // xmm0

  v13 = (2 * (a1 & 1 | (4 * (a12 & 1)))) | a1 & 1;
  *((_DWORD *)a13 + 2) = v13;
  if ( (a3 & 1) != 0 )
  {
    v13 |= 0x10u;
    *((_DWORD *)a13 + 2) = v13;
  }
  if ( (a3 & 2) != 0 )
  {
    v13 |= 0x20u;
    *((_DWORD *)a13 + 2) = v13;
  }
  if ( a8 == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND )
    *((_DWORD *)a13 + 2) = v13 | 4;
  v14 = a7;
  *(_QWORD *)a13 = a2;
  if ( !a7 )
    v14 = D3DDDI_ROTATION_IDENTITY;
  *(struct tagRECT *)((char *)a13 + 12) = *a4;
  *(struct tagRECT *)((char *)a13 + 28) = *a5;
  v15 = (__int128)*a6;
  *((_DWORD *)a13 + 16) = a9;
  *((_DWORD *)a13 + 17) = a10;
  *((_DWORD *)a13 + 18) = a11;
  *(_OWORD *)((char *)a13 + 44) = v15;
  *((_DWORD *)a13 + 15) = v14;
}
