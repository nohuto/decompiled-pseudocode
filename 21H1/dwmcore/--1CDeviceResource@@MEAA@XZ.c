/*
 * XREFs of ??1CDeviceResource@@MEAA@XZ @ 0x1800328BC
 * Callers:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x180032450 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x1800C1E5C (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1800D49FC (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ??1CLegacyRemotingSwapChain@@MEAA@XZ @ 0x1800DEB5C (--1CLegacyRemotingSwapChain@@MEAA@XZ.c)
 *     ??_GCDeviceResource@@MEAAPEAXI@Z @ 0x18019F540 (--_GCDeviceResource@@MEAAPEAXI@Z.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802433FC (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ??1CCompSwapChain@@MEAA@XZ @ 0x180251AF4 (--1CCompSwapChain@@MEAA@XZ.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1802661D4 (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
