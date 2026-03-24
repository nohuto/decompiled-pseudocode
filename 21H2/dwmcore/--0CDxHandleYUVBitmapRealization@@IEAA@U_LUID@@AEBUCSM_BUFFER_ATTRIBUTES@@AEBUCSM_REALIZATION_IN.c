/*
 * XREFs of ??0CDxHandleYUVBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180265338
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180265838 (-Create@CDxHandleYUVBitmapRealization@@SAJU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x18026593C (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 * Callees:
 *     ?CalcDisplayRestriction@CBitmapRealization@@KA?AVDisplayId@@_NPEAUHMONITOR__@@@Z @ 0x180039390 (-CalcDisplayRestriction@CBitmapRealization@@KA-AVDisplayId@@_NPEAUHMONITOR__@@@Z.c)
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@_N@Z @ 0x1800393AC (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 */

CDxHandleYUVBitmapRealization *CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(
        CDxHandleYUVBitmapRealization *this,
        struct _LUID a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4,
        struct CDecodeBitmap *a5,
        ...)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int *v13; // rax
  int v14; // ecx
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  *((_QWORD *)this + 2) = &CDxHandleYUVBitmapRealization::`vbtable'{for `CBitmapRealization'};
  *((_QWORD *)this + 37) = &CDxHandleYUVBitmapRealization::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 42) = &CDxHandleYUVBitmapRealization::`vbtable'{for `IYUVSwapChainRealization'};
  *((_QWORD *)this + 52) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 55) = &CDxHandleYUVBitmapRealization::`vbtable'{for `IBitmapRealization'};
  *((_QWORD *)this + 58) = &CDxHandleYUVBitmapRealization::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 61) = &CDxHandleYUVBitmapRealization::`vbtable'{for `ISwapChainRealization'};
  CBitmapRealization::CBitmapRealization((__int64)this, 0LL, *(_QWORD *)&a2, (__int64)a3, a4, a5, 1);
  *((_QWORD *)this + 36) = &CDeviceResource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 37) + 4LL) + 296) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 37) + 8LL) + 296) = &CDeviceResource::`vftable'{for `IDeviceResource'};
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 37) + 8LL) + 292) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = &IYUVSwapChainRealization::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 42) + 4LL) + 336) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 42) + 8LL) + 336) = &ILegacyStereoSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 42) + 12LL) + 336) = &IYUVSwapChainRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 42) + 16LL) + 336) = &Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *>::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 42) + 20LL) + 336) = &IYUVSwapChainRealization::`vftable'{for `ISwapChainRealization'};
  *(_QWORD *)this = &CDxHandleYUVBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 36) = &CDxHandleYUVBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 41) = &CDxHandleYUVBitmapRealization::`vftable'{for `IYUVSwapChainRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 24LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `ISwapChainRealization'};
  v7 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v7 + 12) = v7 - 360;
  v8 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v8 + 12) = v8 - 376;
  v9 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v9 + 12) = v9 - 392;
  v10 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  *(_DWORD *)((char *)this + v10 + 12) = v10 - 416;
  v11 = *(int *)(*((_QWORD *)this + 2) + 20LL);
  *(_DWORD *)((char *)this + v11 + 12) = v11 - 440;
  v12 = *(int *)(*((_QWORD *)this + 2) + 24LL);
  *(_DWORD *)((char *)this + v12 + 12) = v12 - 464;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 90) = 0;
  v13 = CBitmapRealization::CalcDisplayRestriction((int *)va, *((_BYTE *)a3 + 116) & 1, *((_QWORD *)a3 + 1));
  v14 = *v13;
  *((_DWORD *)this + 62) = *v13;
  if ( v14 != DisplayId::None && v14 != DisplayId::All )
    ++*((_DWORD *)g_pComposition + 70);
  return this;
}
