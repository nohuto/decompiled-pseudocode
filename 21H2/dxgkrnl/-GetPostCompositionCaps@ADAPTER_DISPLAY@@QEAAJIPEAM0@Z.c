/*
 * XREFs of ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x1C01671E8
 * Callers:
 *     DxgkGetPostCompositionCaps @ 0x1C0166ED0 (DxgkGetPostCompositionCaps.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01DB83C (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?SupportGetPostCompositionCaps@DXGADAPTER@@QEBAEXZ @ 0x1C0009384 (-SupportGetPostCompositionCaps@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DdiGetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETPOSTCOMPOSITIONCAPS@@@Z @ 0x1C0165308 (-DdiGetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETPOSTCOMPOSITIONCAPS@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C0167908 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetPostCompositionCaps(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        float *a3,
        float *a4)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  ADAPTER_RENDER *v9; // rcx
  __int64 v10; // r8
  int PostCompositionCaps; // eax
  float MaxShrinkFactor; // xmm1_4
  _DXGKARG_GETPOSTCOMPOSITIONCAPS v14; // [rsp+50h] [rbp-48h] BYREF

  v7 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry2(2LL, a2, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
      v7,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    LODWORD(v8) = 0;
    *a3 = 1.0;
    *a4 = 1.0;
    v9 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 2800LL);
    if ( v9
      && ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v9)
      && DXGADAPTER::SupportGetPostCompositionCaps(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 2800LL) + 16LL))
      && ADAPTER_DISPLAY::IsVidPnSourceActive(this, v7) )
    {
      *(_QWORD *)&v14.MaxStretchFactor = 0LL;
      v14.VidPnSourceId = v7;
      PostCompositionCaps = ADAPTER_DISPLAY::DdiGetPostCompositionCaps(this, &v14, v10);
      v8 = PostCompositionCaps;
      if ( PostCompositionCaps < 0 )
      {
        WdLogSingleEntry3(2LL, PostCompositionCaps, *(_QWORD *)(*((_QWORD *)this + 2) + 280LL), v7);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver returned error (0x%I64x) from GetPostCompositionCaps: Adapter (0x%I64x), VidPnSourceId (0x%I64x)",
          v8,
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          v7,
          0LL,
          0LL);
      }
      else
      {
        MaxShrinkFactor = v14.MaxShrinkFactor;
        *a3 = v14.MaxStretchFactor;
        *a4 = MaxShrinkFactor;
      }
    }
    return (unsigned int)v8;
  }
}
