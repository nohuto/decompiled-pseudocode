/*
 * XREFs of ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x1C015FE64
 * Callers:
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C015F4D0 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C015FA90 (DxgkGetMultiPlaneOverlayCaps.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A708 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?SupportGetMultiPlaneOverlayCaps@DXGADAPTER@@QEBAEXZ @ 0x1C003AFC8 (-SupportGetMultiPlaneOverlayCaps@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C015FF1C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiGetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETMULTIPLANEOVERLAYCAPS@@@Z @ 0x1C021B8B4 (-DdiGetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETMULTIPLANEOVERLAYCAPS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS *a6,
        float *a7,
        float *a8)
{
  __int64 v11; // rdi
  __int64 v12; // r14
  ADAPTER_RENDER *v13; // rcx
  __int64 v15; // rax
  int MultiPlaneOverlayCaps; // eax
  __int64 v17; // rdx
  UINT Value; // ecx
  float MaxStretchFactor; // xmm0_4
  float MaxShrinkFactor; // xmm1_4
  _QWORD *v21; // rax
  _DXGKARG_GETMULTIPLANEOVERLAYCAPS v22; // [rsp+30h] [rbp-38h] BYREF

  v11 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v15 = WdLogNewEntry5_WdError(a8, a2);
    *(_QWORD *)(v15 + 24) = v11;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  else
  {
    *a3 = 1;
    *a4 = 0;
    *a5 = 0;
    LODWORD(v12) = 0;
    a6->Value = 0;
    *a7 = 1.0;
    *a8 = 1.0;
    v13 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 2704LL);
    if ( v13
      && ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v13)
      && DXGADAPTER::SupportGetMultiPlaneOverlayCaps(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 2704LL) + 16LL))
      && ADAPTER_DISPLAY::IsVidPnSourceActive(this, (unsigned int)v11) )
    {
      v22.VidPnSourceId = v11;
      memset(&v22.MaxPlanes, 0, 24);
      MultiPlaneOverlayCaps = ADAPTER_DISPLAY::DdiGetMultiPlaneOverlayCaps(this, &v22);
      v12 = MultiPlaneOverlayCaps;
      if ( MultiPlaneOverlayCaps < 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdError(0LL, v17);
        v21[3] = v12;
        v21[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 272LL);
        v21[5] = v11;
        WdLogEvent5_WdError(v21);
      }
      else
      {
        if ( v22.MaxPlanes )
        {
          MaxStretchFactor = v22.MaxStretchFactor;
          MaxShrinkFactor = v22.MaxShrinkFactor;
          *a3 = v22.MaxPlanes;
          *a4 = v22.MaxRGBPlanes;
          *a5 = v22.MaxYUVPlanes;
          *a7 = MaxStretchFactor;
          *a8 = MaxShrinkFactor;
          Value = a6->Value ^ (*(_WORD *)&v22.OverlayCaps.0 ^ (unsigned __int16)a6->Value) & 0x7FF;
        }
        else
        {
          *a3 = 1;
          *a4 = 0;
          *a5 = 0;
          a6->Value = 0;
          *a7 = 1.0;
          *a8 = 1.0;
          Value = a6->Value;
        }
        a6->Value = Value | 0x800;
      }
    }
    return (unsigned int)v12;
  }
}
