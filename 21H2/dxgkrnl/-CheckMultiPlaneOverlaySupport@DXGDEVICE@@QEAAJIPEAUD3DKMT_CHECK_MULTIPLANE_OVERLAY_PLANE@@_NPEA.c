/*
 * XREFs of ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0253C08
 * Callers:
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C0257790 (DxgkCheckMultiPlaneOverlaySupport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C015FF1C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0252E98 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlaySupport(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *a3,
        bool a4,
        int *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // r8d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID *p_VidPnSourceId; // rdx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v14; // rsi
  char *v15; // rcx
  char *v16; // r9
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v17; // r10
  char *v18; // r11
  int v19; // eax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v22; // eax
  __int128 v23; // xmm0
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v24; // eax
  __int64 v26; // rax
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v27; // [rsp+40h] [rbp-448h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v28[8]; // [rsp+50h] [rbp-438h] BYREF
  char v29; // [rsp+90h] [rbp-3F8h] BYREF
  char v30; // [rsp+94h] [rbp-3F4h] BYREF
  char v31; // [rsp+190h] [rbp-2F8h] BYREF
  char v32; // [rsp+194h] [rbp-2F4h] BYREF

  *a5 = 0;
  if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(this[2]) && (v10 = *((_QWORD *)this[2] + 2), *(_QWORD *)(v10 + 808)) )
  {
    memset(v28, 0, sizeof(v28));
    v12 = 0;
    if ( a2 )
    {
      p_VidPnSourceId = &a3->VidPnSourceId;
      v14 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)&v29;
      v15 = &v32;
      v16 = &v30;
      v17 = v28;
      v18 = &v31;
      do
      {
        v19 = *(p_VidPnSourceId - 3);
        v20 = *(_OWORD *)(p_VidPnSourceId + 2);
        *((_DWORD *)v15 + 14) = 0;
        v21 = *(_OWORD *)(p_VidPnSourceId + 6);
        *(_QWORD *)(v15 + 60) = 0LL;
        *(_DWORD *)v16 = v19;
        *(_QWORD *)(v16 + 4) = *((_QWORD *)p_VidPnSourceId - 1);
        *((_DWORD *)v16 + 3) = *p_VidPnSourceId;
        *((_DWORD *)v15 - 1) = p_VidPnSourceId[1];
        *((_DWORD *)v15 + 12) = p_VidPnSourceId[14];
        *((_DWORD *)v15 + 13) = p_VidPnSourceId[15];
        v22 = p_VidPnSourceId[25];
        *(_OWORD *)v15 = v20;
        *((_DWORD *)v15 + 18) = v22;
        v23 = *(_OWORD *)(p_VidPnSourceId + 10);
        v24 = p_VidPnSourceId[20];
        *v17 = v14;
        *((_DWORD *)v16 - 1) = v12;
        *(_QWORD *)(v16 + 20) = v18;
        *((_OWORD *)v15 + 1) = v21;
        *((_OWORD *)v15 + 2) = v23;
        if ( v24 )
        {
          if ( (v24 & 1) != 0 )
            *((_DWORD *)v15 + 17) = (v24 & 2) != 0 ? 8 : 6;
        }
        else
        {
          *((_DWORD *)v15 + 17) = 0;
        }
        ++v12;
        ++v14;
        v18 += 88;
        ++v17;
        v16 += 32;
        p_VidPnSourceId += 30;
        v15 += 88;
      }
      while ( v12 < a2 );
    }
    v27.0 = 0;
    return DXGDEVICE::CheckMultiPlaneOverlaySupport3((DXGDEVICE *)this, a2, v28, 0, 0LL, a4, a5, &v27);
  }
  else
  {
    v26 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v26 + 24) = 0LL;
    WdLogEvent5_WdWarning(v26);
    return 0LL;
  }
}
