/*
 * XREFs of ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@_N@Z @ 0x180067EC8
 * Callers:
 *     ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x18005E274 (--0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_.c)
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x180067A38 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1802A4DA8 (--0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 * Callees:
 *     ??0CD2DBitmapCache@@IEAA@XZ @ 0x180068108 (--0CD2DBitmapCache@@IEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall CBitmapRealization::CBitmapRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r11d
  __int64 v13; // r10
  __int64 result; // rax

  CD2DBitmapCache::CD2DBitmapCache((CD2DBitmapCache *)a1);
  *(_QWORD *)a1 = &CBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16) = &CBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 8LL) + a1 + 16) = &CBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 12LL) + a1 + 16) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 16LL) + a1 + 16) = &CBitmapRealization::`vftable';
  v9 = *(int *)(*(_QWORD *)(a1 + 16) + 4LL);
  *(_DWORD *)(v9 + a1 + 12) = v9 - 312;
  v10 = *(int *)(*(_QWORD *)(a1 + 16) + 8LL);
  *(_DWORD *)(v10 + a1 + 12) = v10 - 328;
  v11 = *(int *)(*(_QWORD *)(a1 + 16) + 16LL);
  *(_DWORD *)(v11 + a1 + 12) = v11 - 360;
  *(_DWORD *)(a1 + 80) = v12;
  *(_QWORD *)(a1 + 84) = v13;
  *(_OWORD *)(a1 + 96) = *a4;
  *(_OWORD *)(a1 + 112) = a4[1];
  *(_OWORD *)(a1 + 128) = a4[2];
  *(_OWORD *)(a1 + 144) = a4[3];
  *(_OWORD *)(a1 + 160) = a4[4];
  *(_OWORD *)(a1 + 176) = a4[5];
  *(_OWORD *)(a1 + 192) = a4[6];
  *(_OWORD *)(a1 + 208) = a4[7];
  *(_OWORD *)(a1 + 224) = a4[8];
  *(_OWORD *)(a1 + 240) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 256) = *(_OWORD *)(a5 + 16);
  *(_QWORD *)(a1 + 272) = *(_QWORD *)(a5 + 32);
  *(_DWORD *)(a1 + 280) = DisplayId::None;
  *(_QWORD *)(a1 + 288) = a6;
  if ( a6 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a6 + 8));
  *(_BYTE *)(a1 + 313) = a7;
  result = a1;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_BYTE *)(a1 + 312) = 0;
  return result;
}
