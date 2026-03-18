/*
 * XREFs of ??0CDxHandleStereoBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x180261DF4
 * Callers:
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x180262144 (-Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 * Callees:
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x180045CE4 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 *     ??0CD2DBitmapCache@@IEAA@XZ @ 0x18006F5D4 (--0CD2DBitmapCache@@IEAA@XZ.c)
 */

CDxHandleStereoBitmapRealization *__fastcall CDxHandleStereoBitmapRealization::CDxHandleStereoBitmapRealization(
        CDxHandleStereoBitmapRealization *this,
        struct _LUID a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  CDxHandleStereoBitmapRealization *result; // rax

  *((_QWORD *)this + 2) = &CDxHandleStereoBitmapRealization::`vbtable';
  *((_QWORD *)this + 37) = &CDxHandleStereoBitmapRealization::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 42) = &CDxHandleStereoBitmapRealization::`vbtable'{for `ISwapChainRealization'};
  *((_QWORD *)this + 65) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 68) = &CDxHandleYUVBitmapRealization::`vbtable'{for `IBitmapRealization'};
  *((_QWORD *)this + 71) = &CDxHandleYUVBitmapRealization::`vbtable'{for `IDeviceResource'};
  CDxHandleBitmapRealization::CDxHandleBitmapRealization(
    (__int64)this,
    0LL,
    *(_QWORD *)&a2,
    (__int64)a3,
    (__int64)a4,
    1,
    1,
    0LL,
    0);
  *(_QWORD *)this = &CDxHandleStereoBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 36) = &CDxHandleStereoBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 41) = &CDxHandleStereoBitmapRealization::`vftable'{for `ISwapChainRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResource'};
  v5 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 464;
  v6 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v6 + 12) = v6 - 480;
  v7 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v7 + 12) = v7 - 496;
  v8 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  *(_DWORD *)((char *)this + v8 + 12) = v8 - 520;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 12) = *(_DWORD *)(*((_QWORD *)this + 2) + 20LL)
                                                                          - 544;
  *((_QWORD *)this + 46) = 0LL;
  CD2DBitmapCache::CD2DBitmapCache((CDxHandleStereoBitmapRealization *)((char *)this + 376), 1);
  result = this;
  ++*((_DWORD *)g_pComposition + 71);
  return result;
}
