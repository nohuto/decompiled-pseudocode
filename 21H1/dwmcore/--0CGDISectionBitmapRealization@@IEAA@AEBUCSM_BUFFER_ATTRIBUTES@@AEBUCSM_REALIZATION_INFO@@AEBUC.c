/*
 * XREFs of ??0CGDISectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x18008D8D0
 * Callers:
 *     ?Create@CGDISectionBitmapRealization@@SAJPEAXAEBUD2D_SIZE_U@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAEPEAPEAVIGDIBitmapRealization@@@Z @ 0x18008D780 (-Create@CGDISectionBitmapRealization@@SAJPEAXAEBUD2D_SIZE_U@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@.c)
 *     ??0CGDISubSectionBitmapRealization@@AEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18026382C (--0CGDISubSectionBitmapRealization@@AEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AE.c)
 * Callees:
 *     ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x18008DA10 (--0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_.c)
 */

CGDISectionBitmapRealization *__fastcall CGDISectionBitmapRealization::CGDISectionBitmapRealization(
        CGDISectionBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        const struct CSM_SYSMEM_SECTION_INFO *a4,
        bool a5,
        int a6)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  CGDISectionBitmapRealization *result; // rax
  bool v12; // [rsp+20h] [rbp-18h]

  if ( a6 )
  {
    *((_QWORD *)this + 2) = &CGDISectionBitmapRealization::`vbtable'{for `CSectionBitmapRealization'};
    *((_QWORD *)this + 37) = &CGDISectionBitmapRealization::`vbtable'{for `ID2DBitmapCacheSource'};
    *((_QWORD *)this + 46) = &CGDISectionBitmapRealization::`vbtable'{for `IGDIBitmapRealization'};
    *((_QWORD *)this + 55) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 58) = &CGDISectionBitmapRealization::`vbtable'{for `IBitmapRealization'};
  }
  CSectionBitmapRealization::CSectionBitmapRealization(this, a2, a3, a4, v12);
  *(_QWORD *)this = &CGDISectionBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 36) = &CGDISectionBitmapRealization::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 38) = &CGDISectionBitmapRealization::`vftable'{for `IPixelColor'};
  *((_QWORD *)this + 45) = &CGDIBitmapRealization::`vftable'{for `IGDIBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CGDISectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CGDISectionBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CGDISectionBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CGDISectionBitmapRealization::`vftable'{for `CBitmapRealization'};
  v7 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v7 + 12) = v7 - 384;
  v8 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v8 + 12) = v8 - 400;
  v9 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v9 + 12) = v9 - 416;
  v10 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  result = this;
  *(_DWORD *)((char *)this + v10 + 12) = v10 - 440;
  *(_OWORD *)((char *)this + 376) = 0LL;
  return result;
}
