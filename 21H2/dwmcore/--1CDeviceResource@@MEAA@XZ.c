/*
 * XREFs of ??1CDeviceResource@@MEAA@XZ @ 0x180067C88
 * Callers:
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x18001C360 (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x1800659A4 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x180066264 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??1CLegacyRemotingSwapChain@@MEAA@XZ @ 0x1800FD9D0 (--1CLegacyRemotingSwapChain@@MEAA@XZ.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x180282544 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ??_GCDeviceResource@@MEAAPEAXI@Z @ 0x180283280 (--_GCDeviceResource@@MEAAPEAXI@Z.c)
 *     ??1CDummyRemotingSwapChain@@MEAA@XZ @ 0x180289334 (--1CDummyRemotingSwapChain@@MEAA@XZ.c)
 *     ??1CCompSwapChain@@MEAA@XZ @ 0x18028E85C (--1CCompSwapChain@@MEAA@XZ.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1802A50A8 (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CDeviceResource::~CDeviceResource(CDeviceResource *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CDeviceResource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CDeviceResource::`vftable'{for `IDeviceResource'};
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 4) = *(_DWORD *)(*((_QWORD *)this + 1) + 8LL) - 48;
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 4) - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
}
