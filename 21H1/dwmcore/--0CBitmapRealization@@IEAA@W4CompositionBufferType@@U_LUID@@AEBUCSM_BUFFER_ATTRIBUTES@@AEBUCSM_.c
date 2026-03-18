/*
 * XREFs of ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@_N@Z @ 0x18003192C
 * Callers:
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x1800314C0 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 *     ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x18008DA10 (--0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180265ED8 (--0CDxHandleYUVBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_IN.c)
 * Callees:
 *     ??0CD2DBitmapCache@@IEAA@XZ @ 0x180032FC0 (--0CD2DBitmapCache@@IEAA@XZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800B5D50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CBitmapRealization::CBitmapRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        CMILCOMBase *a6,
        char a7)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r11d
  __int64 v13; // r10
  __int64 result; // rax

  CD2DBitmapCache::CD2DBitmapCache((CD2DBitmapCache *)a1);
  *(_QWORD *)a1 = &CBitmapRealization::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16) = &CBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 8LL) + a1 + 16) = &CBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 12LL) + a1 + 16) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 16LL) + a1 + 16) = &CBitmapRealization::`vftable';
  v9 = *(int *)(*(_QWORD *)(a1 + 16) + 4LL);
  *(_DWORD *)(v9 + a1 + 12) = v9 - 280;
  v10 = *(int *)(*(_QWORD *)(a1 + 16) + 8LL);
  *(_DWORD *)(v10 + a1 + 12) = v10 - 296;
  v11 = *(int *)(*(_QWORD *)(a1 + 16) + 16LL);
  *(_DWORD *)(v11 + a1 + 12) = v11 - 328;
  *(_DWORD *)(a1 + 80) = v12;
  *(_QWORD *)(a1 + 84) = v13;
  *(_OWORD *)(a1 + 96) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 144) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(a1 + 160) = *(_OWORD *)(a4 + 64);
  *(_OWORD *)(a1 + 176) = *(_OWORD *)(a4 + 80);
  *(_OWORD *)(a1 + 192) = *(_OWORD *)(a4 + 96);
  *(_QWORD *)(a1 + 208) = *(_QWORD *)(a4 + 112);
  *(_OWORD *)(a1 + 216) = *a5;
  *(_OWORD *)(a1 + 232) = a5[1];
  *(_DWORD *)(a1 + 248) = DisplayId::None;
  *(_QWORD *)(a1 + 256) = a6;
  if ( a6 )
    CMILCOMBase::InternalAddRef(a6);
  *(_BYTE *)(a1 + 281) = a7;
  result = a1;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_BYTE *)(a1 + 280) = 0;
  return result;
}
