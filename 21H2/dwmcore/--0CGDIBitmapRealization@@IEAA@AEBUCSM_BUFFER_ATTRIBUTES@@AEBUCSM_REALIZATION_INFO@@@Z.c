/*
 * XREFs of ??0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x180032E1C
 * Callers:
 *     ?Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x180032D28 (-Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z.c)
 * Callees:
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x180039144 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 */

CGDIBitmapRealization *__fastcall CGDIBitmapRealization::CGDIBitmapRealization(
        CGDIBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  CGDIBitmapRealization *result; // rax
  char v10; // [rsp+28h] [rbp-30h]
  char v11; // [rsp+30h] [rbp-28h]

  *((_QWORD *)this + 2) = &CGDIBitmapRealization::`vbtable'{for `CDxHandleBitmapRealization'};
  *((_QWORD *)this + 37) = &CGDIBitmapRealization::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 42) = &CGDIBitmapRealization::`vbtable'{for `ISwapChainRealization'};
  *((_QWORD *)this + 47) = &CGDISectionBitmapRealization::`vbtable'{for `IGDIBitmapRealization'};
  *((_QWORD *)this + 56) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 59) = &CGDISectionBitmapRealization::`vbtable'{for `IBitmapRealization'};
  *((_QWORD *)this + 62) = &CDxHandleBitmapRealization::`vbtable'{for `IDeviceResource'};
  v11 = 0;
  v10 = 0;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _BYTE, _BYTE, _QWORD, _DWORD))CDxHandleBitmapRealization::CDxHandleBitmapRealization)(
    this,
    0LL,
    g_luidZero,
    a2,
    a3,
    v10,
    v11,
    0LL,
    0);
  *(_QWORD *)this = &CGDIBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 36) = &CGDIBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 41) = &CDxHandleBitmapRealization::`vftable'{for `ISwapChainRealization'};
  *((_QWORD *)this + 46) = &CGDIBitmapRealization::`vftable'{for `IGDIBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CGDIBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CGDIBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CGDIBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CGDIBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16) = &CGDIBitmapRealization::`vftable'{for `IDeviceResource'};
  v4 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 392;
  v5 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 408;
  v6 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v6 + 12) = v6 - 424;
  v7 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  *(_DWORD *)((char *)this + v7 + 12) = v7 - 448;
  v8 = *(int *)(*((_QWORD *)this + 2) + 20LL);
  result = this;
  *(_DWORD *)((char *)this + v8 + 12) = v8 - 472;
  *((_OWORD *)this + 24) = 0LL;
  return result;
}
