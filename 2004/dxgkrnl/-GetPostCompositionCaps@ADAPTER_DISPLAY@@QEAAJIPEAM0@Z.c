/*
 * XREFs of ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x1C015AA58
 * Callers:
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C015A520 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkGetPostCompositionCaps @ 0x1C015A5E0 (DxgkGetPostCompositionCaps.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A3B8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?SupportGetPostCompositionCaps@DXGADAPTER@@QEBAEXZ @ 0x1C003A1F4 (-SupportGetPostCompositionCaps@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C015AF6C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiGetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETPOSTCOMPOSITIONCAPS@@@Z @ 0x1C021BDCC (-DdiGetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETPOSTCOMPOSITIONCAPS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetPostCompositionCaps(ADAPTER_DISPLAY *this, __int64 a2, float *a3, float *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rbx
  ADAPTER_RENDER *v9; // rcx
  _QWORD *v11; // rax
  int PostCompositionCaps; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  float MaxShrinkFactor; // xmm1_4
  _DXGKARG_GETPOSTCOMPOSITIONCAPS v16; // [rsp+20h] [rbp-48h] BYREF

  v7 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    LODWORD(v8) = -1073741811;
    v11[3] = v7;
    v11[4] = -1073741811LL;
    goto LABEL_11;
  }
  LODWORD(v8) = 0;
  *a3 = 1.0;
  *a4 = 1.0;
  v9 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 2704LL);
  if ( v9
    && ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v9)
    && DXGADAPTER::SupportGetPostCompositionCaps(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 2704LL) + 16LL))
    && ADAPTER_DISPLAY::IsVidPnSourceActive(this, (unsigned int)v7) )
  {
    *(_QWORD *)&v16.MaxStretchFactor = 0LL;
    v16.VidPnSourceId = v7;
    PostCompositionCaps = ADAPTER_DISPLAY::DdiGetPostCompositionCaps(this, &v16);
    v8 = PostCompositionCaps;
    if ( PostCompositionCaps >= 0 )
    {
      MaxShrinkFactor = v16.MaxShrinkFactor;
      *a3 = v16.MaxStretchFactor;
      *a4 = MaxShrinkFactor;
      return (unsigned int)v8;
    }
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v11[3] = v8;
    v11[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 272LL);
    v11[5] = v7;
LABEL_11:
    WdLogEvent5_WdError(v11);
  }
  return (unsigned int)v8;
}
