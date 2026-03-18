/*
 * XREFs of ??0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1802A4DA8
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802A52AC (-Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIB.c)
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802A53C0 (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 * Callees:
 *     ?CalcDisplayRestriction@CBitmapRealization@@KA?AVDisplayId@@_NPEAUHMONITOR__@@@Z @ 0x180067D08 (-CalcDisplayRestriction@CBitmapRealization@@KA-AVDisplayId@@_NPEAUHMONITOR__@@@Z.c)
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@_N@Z @ 0x180067EC8 (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 */

__int64 CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        ...)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int *v14; // rax
  int v15; // ecx
  va_list va; // [rsp+80h] [rbp+38h] BYREF

  va_start(va, a6);
  *(_QWORD *)(a1 + 16) = &CDxHandleYUVBitmapRealization::`vbtable'{for `CBitmapRealization'};
  *(_QWORD *)(a1 + 328) = &CDxHandleYUVBitmapRealization::`vbtable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 368) = &CDxHandleYUVBitmapRealization::`vbtable'{for `IYUVSwapChainRealization'};
  *(_QWORD *)(a1 + 448) = &CInk::`vbtable'{for `IContent'};
  *(_QWORD *)(a1 + 472) = &CDxHandleYUVBitmapRealization::`vbtable'{for `IBitmapRealization'};
  *(_QWORD *)(a1 + 496) = &CDxHandleYUVBitmapRealization::`vbtable'{for `IDeviceResource'};
  *(_QWORD *)(a1 + 520) = &CDxHandleYUVBitmapRealization::`vbtable'{for `ISwapChainRealization'};
  CBitmapRealization::CBitmapRealization(a1, a2, a3, (_OWORD *)a4, a5, a6, 1);
  *(_QWORD *)(a1 + 320) = &CDeviceResource::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 328) + 4LL) + a1 + 328) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 328) + 8LL) + a1 + 328) = &CDeviceResource::`vftable'{for `IDeviceResource'};
  *(_DWORD *)(*(int *)(*(_QWORD *)(a1 + 328) + 8LL) + a1 + 324) = 0;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = &IYUVSwapChainRealization::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 368) + 4LL) + a1 + 368) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 368) + 8LL) + a1 + 368) = &ILegacyStereoSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 368) + 12LL) + a1 + 368) = &IYUVSwapChainRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 368) + 16LL) + a1 + 368) = &IStereoRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 368) + 20LL) + a1 + 368) = &IYUVSwapChainRealization::`vftable'{for `ISwapChainRealization'};
  *(_QWORD *)a1 = &CDxHandleYUVBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *(_QWORD *)(a1 + 320) = &CDxHandleYUVBitmapRealization::`vftable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 360) = &CDxHandleYUVBitmapRealization::`vftable'{for `IYUVSwapChainRealization'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 8LL) + a1 + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 12LL) + a1 + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 16LL) + a1 + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 20LL) + a1 + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 24LL) + a1 + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `ISwapChainRealization'};
  v8 = *(int *)(*(_QWORD *)(a1 + 16) + 4LL);
  *(_DWORD *)(v8 + a1 + 12) = v8 - 392;
  v9 = *(int *)(*(_QWORD *)(a1 + 16) + 8LL);
  *(_DWORD *)(v9 + a1 + 12) = v9 - 408;
  v10 = *(int *)(*(_QWORD *)(a1 + 16) + 12LL);
  *(_DWORD *)(v10 + a1 + 12) = v10 - 424;
  v11 = *(int *)(*(_QWORD *)(a1 + 16) + 16LL);
  *(_DWORD *)(v11 + a1 + 12) = v11 - 448;
  v12 = *(int *)(*(_QWORD *)(a1 + 16) + 20LL);
  *(_DWORD *)(v12 + a1 + 12) = v12 - 472;
  v13 = *(int *)(*(_QWORD *)(a1 + 16) + 24LL);
  *(_DWORD *)(v13 + a1 + 12) = v13 - 496;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_DWORD *)(a1 + 392) = 0;
  v14 = CBitmapRealization::CalcDisplayRestriction((int *)va, *(_BYTE *)(a4 + 136) & 1, *(_QWORD *)(a4 + 8));
  v15 = *v14;
  *(_DWORD *)(a1 + 280) = *v14;
  if ( v15 != DisplayId::None && v15 != DisplayId::All )
    ++*((_DWORD *)g_pComposition + 108);
  return a1;
}
