/*
 * XREFs of ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x180067A38
 * Callers:
 *     ??0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x180065440 (--0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180066D64 (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1802A320C (--0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_B.c)
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1802A44F0 (--0CDxHandleStereoBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 * Callees:
 *     ?CalcDisplayRestriction@CBitmapRealization@@KA?AVDisplayId@@_NPEAUHMONITOR__@@@Z @ 0x180067D08 (-CalcDisplayRestriction@CBitmapRealization@@KA-AVDisplayId@@_NPEAUHMONITOR__@@@Z.c)
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@_N@Z @ 0x180067EC8 (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::CDxHandleBitmapRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
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
  __int64 v17; // rdx
  __int64 v18; // r9
  int *v19; // rax
  int v20; // ecx
  __int64 v22; // [rsp+20h] [rbp-28h]
  __int64 v23; // [rsp+28h] [rbp-20h]

  if ( a9 )
  {
    *(_QWORD *)(a1 + 16) = &CDxHandleBitmapRealization::`vbtable';
    *(_QWORD *)(a1 + 328) = &CDxHandleBitmapRealization::`vbtable'{for `CDeviceResource'};
    *(_QWORD *)(a1 + 368) = &CDxHandleBitmapRealization::`vbtable'{for `ISwapChainRealization'};
    *(_QWORD *)(a1 + 448) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *(_QWORD *)(a1 + 472) = &CGDISectionBitmapRealization::`vbtable'{for `IBitmapRealization'};
    *(_QWORD *)(a1 + 496) = &CDxHandleBitmapRealization::`vbtable'{for `IDeviceResource'};
  }
  CBitmapRealization::CBitmapRealization(a1, a2, a3, a4, a5, a8, a6);
  *(_QWORD *)(a1 + 320) = &CDeviceResource::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 328) + 4LL) + a1 + 328) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 328) + 8LL) + a1 + 328) = &CDeviceResource::`vftable'{for `IDeviceResource'};
  *(_DWORD *)(*(int *)(*(_QWORD *)(a1 + 328) + 8LL) + a1 + 324) = 0;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)a1 = &CDxHandleBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *(_QWORD *)(a1 + 320) = &CDxHandleBitmapRealization::`vftable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 360) = &CDxHandleBitmapRealization::`vftable'{for `ISwapChainRealization'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 8LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 12LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 16LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 20LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `IDeviceResource'};
  v11 = *(int *)(*(_QWORD *)(a1 + 16) + 4LL);
  *(_DWORD *)(v11 + a1 + 12) = v11 - 392;
  v12 = *(int *)(*(_QWORD *)(a1 + 16) + 8LL);
  *(_DWORD *)(v12 + a1 + 12) = v12 - 408;
  v13 = *(int *)(*(_QWORD *)(a1 + 16) + 12LL);
  *(_DWORD *)(v13 + a1 + 12) = v13 - 424;
  v14 = *(int *)(*(_QWORD *)(a1 + 16) + 16LL);
  *(_DWORD *)(v14 + a1 + 12) = v14 - 448;
  v15 = *(int *)(*(_QWORD *)(a1 + 16) + 20LL);
  v16 = a7;
  v17 = (unsigned int)(v15 - 472);
  *(_DWORD *)(v15 + a1 + 12) = v17;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_DWORD *)(a1 + 392) = 0;
  *(_BYTE *)(a1 + 396) = v16;
  *(_BYTE *)(a1 + 397) = 1;
  LOBYTE(v17) = *(_BYTE *)(a4 + 136) & 1;
  v19 = (int *)CBitmapRealization::CalcDisplayRestriction(&a7, v17, *(_QWORD *)(a4 + 8), v18, v22, v23);
  v20 = *v19;
  *(_DWORD *)(a1 + 280) = *v19;
  if ( v20 != DisplayId::None && v20 != DisplayId::All )
    ++*((_DWORD *)g_pComposition + 108);
  return a1;
}
