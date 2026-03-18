/*
 * XREFs of ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x1C0055C80
 * Callers:
 *     ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00559B0 (-InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0055CC4 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     VfAllocateContext @ 0x1C00C0430 (VfAllocateContext.c)
 * Callees:
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C000B440 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C000C120 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall FxCalculateObjectTotalSize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 RawObjectSize,
        unsigned __int16 ExtraSize,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned __int64 *Total)
{
  unsigned __int64 ContextSize; // rax
  unsigned __int16 v7; // r10
  unsigned __int16 v8; // r11

  ContextSize = FxGetContextSize(Attributes);
  return FxCalculateObjectTotalSize2(FxDriverGlobals, v8, v7, ContextSize, Total);
}
