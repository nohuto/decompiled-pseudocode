/*
 * XREFs of ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180260A8C
 * Callers:
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1800460C8 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCS.c)
 * Callees:
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x180045CE4 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::CDxHandleAdvancedDirectFlipBitmapRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  *(_QWORD *)(a1 + 16) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vbtable'{for `CDxHandleBitmapRealization'};
  *(_QWORD *)(a1 + 296) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vbtable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 336) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vbtable'{for `ISwapChainRealization'};
  *(_QWORD *)(a1 + 376) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vbtable'{for `IAdvancedDirectFlipBitmapRealization'};
  *(_QWORD *)(a1 + 464) = &CInk::`vbtable'{for `IContent'};
  *(_QWORD *)(a1 + 488) = &CDxHandleYUVBitmapRealization::`vbtable'{for `IBitmapRealization'};
  *(_QWORD *)(a1 + 512) = &CDxHandleYUVBitmapRealization::`vbtable'{for `IDeviceResource'};
  CDxHandleBitmapRealization::CDxHandleBitmapRealization(a1, a2, a3, a4, a5, 1, 1, a6, 0);
  *(_QWORD *)(a1 + 368) = &IYUVSwapChainRealization::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 376) + 4LL) + a1 + 376) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)a1 = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 288) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 328) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `ISwapChainRealization'};
  *(_QWORD *)(a1 + 368) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IAdvancedDirectFlipBitmapRealization'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 8LL) + a1 + 16) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 12LL) + a1 + 16) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 16LL) + a1 + 16) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 20LL) + a1 + 16) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResource'};
  v7 = *(int *)(*(_QWORD *)(a1 + 16) + 4LL);
  *(_DWORD *)(v7 + a1 + 12) = v7 - 408;
  v8 = *(int *)(*(_QWORD *)(a1 + 16) + 8LL);
  *(_DWORD *)(v8 + a1 + 12) = v8 - 424;
  v9 = *(int *)(*(_QWORD *)(a1 + 16) + 12LL);
  *(_DWORD *)(v9 + a1 + 12) = v9 - 440;
  v10 = *(int *)(*(_QWORD *)(a1 + 16) + 16LL);
  *(_DWORD *)(v10 + a1 + 12) = v10 - 464;
  v11 = *(int *)(*(_QWORD *)(a1 + 16) + 20LL);
  *(_DWORD *)(v11 + a1 + 12) = v11 - 488;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_BYTE *)(a1 + 408) = 0;
  return a1;
}
