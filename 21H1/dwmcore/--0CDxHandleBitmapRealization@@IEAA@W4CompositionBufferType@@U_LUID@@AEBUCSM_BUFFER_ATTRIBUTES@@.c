/*
 * XREFs of ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x1800314C0
 * Callers:
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x18002F24C (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ??0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18008F2C0 (--0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 *     ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1802642DC (--0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_B.c)
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x180265644 (--0CDxHandleStereoBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 * Callees:
 *     ?CalcDisplayRestriction@CBitmapRealization@@KA?AVDisplayId@@_NPEAUHMONITOR__@@@Z @ 0x1800314A4 (-CalcDisplayRestriction@CBitmapRealization@@KA-AVDisplayId@@_NPEAUHMONITOR__@@@Z.c)
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@_N@Z @ 0x18003192C (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::CDxHandleBitmapRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        int a9)
{
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  char v16; // al
  int *v17; // rax
  int v18; // ecx

  if ( a9 )
  {
    *(_QWORD *)(a1 + 16) = &CDxHandleBitmapRealization::`vbtable';
    *(_QWORD *)(a1 + 296) = &CDxHandleBitmapRealization::`vbtable'{for `CDeviceResource'};
    *(_QWORD *)(a1 + 336) = &CDxHandleBitmapRealization::`vbtable'{for `ISwapChainRealization'};
    *(_QWORD *)(a1 + 416) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *(_QWORD *)(a1 + 440) = &CGDISectionBitmapRealization::`vbtable'{for `IBitmapRealization'};
    *(_QWORD *)(a1 + 464) = &CDxHandleBitmapRealization::`vbtable'{for `IDeviceResource'};
  }
  CBitmapRealization::CBitmapRealization(a1, a2, a3);
  *(_QWORD *)(a1 + 288) = &CDeviceResource::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 296) + 4LL) + a1 + 296) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 296) + 8LL) + a1 + 296) = &CDeviceResource::`vftable'{for `IDeviceResource'};
  *(_DWORD *)(*(int *)(*(_QWORD *)(a1 + 296) + 8LL) + a1 + 292) = 0;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)a1 = &CDxHandleBitmapRealization::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 288) = &CDxHandleBitmapRealization::`vftable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 328) = &CDxHandleBitmapRealization::`vftable'{for `ISwapChainRealization'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 8LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 12LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 16LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 20LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `IDeviceResource'};
  v11 = *(int *)(*(_QWORD *)(a1 + 16) + 4LL);
  *(_DWORD *)(v11 + a1 + 12) = v11 - 360;
  v12 = *(int *)(*(_QWORD *)(a1 + 16) + 8LL);
  *(_DWORD *)(v12 + a1 + 12) = v12 - 376;
  v13 = *(int *)(*(_QWORD *)(a1 + 16) + 12LL);
  *(_DWORD *)(v13 + a1 + 12) = v13 - 392;
  v14 = *(int *)(*(_QWORD *)(a1 + 16) + 16LL);
  *(_DWORD *)(v14 + a1 + 12) = v14 - 416;
  v15 = *(int *)(*(_QWORD *)(a1 + 16) + 20LL);
  v16 = a7;
  *(_DWORD *)(v15 + a1 + 12) = v15 - 440;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_DWORD *)(a1 + 360) = 0;
  *(_BYTE *)(a1 + 364) = v16;
  *(_BYTE *)(a1 + 365) = 1;
  v17 = CBitmapRealization::CalcDisplayRestriction(&a7, *(_BYTE *)(a4 + 116) & 1, *(_QWORD *)(a4 + 8));
  v18 = *v17;
  *(_DWORD *)(a1 + 248) = *v17;
  if ( v18 != DisplayId::None && v18 != DisplayId::All )
    ++*((_DWORD *)g_pComposition + 70);
  return a1;
}
