/*
 * XREFs of ??$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostIdAndGlomId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180121350
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180030F5C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$FindEx@VCImmersiveAppFinderByHostIdAndGlomId@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHostIdAndGlomId@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18011F1A8 (--$FindEx@VCImmersiveAppFinderByHostIdAndGlomId@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveAppl.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostIdAndGlomId>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        ...)
{
  _QWORD *v4; // rsi
  int v5; // edi
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  if ( a3 )
    *a3 = 0LL;
  v4 = (_QWORD *)(a1 + 632);
  v8 = 0LL;
  v5 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHostIdAndGlomId>(
         (_QWORD *)(a1 + 632),
         a2,
         (__int64 *)va,
         &v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va);
  if ( v5 >= 0 && a3 )
    return (unsigned int)(***(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*v4 + 8 * v7))(
                           *(_QWORD *)(*v4 + 8 * v7),
                           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                           a3);
  return (unsigned int)v5;
}
