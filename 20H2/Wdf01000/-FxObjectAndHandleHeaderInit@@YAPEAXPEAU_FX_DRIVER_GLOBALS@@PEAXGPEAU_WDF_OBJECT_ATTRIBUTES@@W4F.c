/*
 * XREFs of ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0055E44
 * Callers:
 *     ?AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0050E68 (-AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0053D50 (-Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 *     ?Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0053E20 (-Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 *     ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0054210 (-Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 * Callees:
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C000C0B4 (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 */

FxObject *__fastcall FxObjectAndHandleHeaderInit(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _OWORD *AllocationStart,
        unsigned __int16 ObjectSize,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObjectType ObjectType)
{
  FxObject *v5; // rbx

  v5 = (FxObject *)AllocationStart;
  if ( FxDriverGlobals->FxVerifierHandle )
  {
    v5 = (FxObject *)(AllocationStart + 3);
    *AllocationStart = 0LL;
    AllocationStart[1] = 0LL;
    AllocationStart[2] = 0LL;
    *((_DWORD *)AllocationStart + 8) = 1146058822;
  }
  if ( ObjectType == FxObjectTypeExternal )
    FxContextHeaderInit((FxContextHeader *)((char *)v5 + ObjectSize), v5, Attributes);
  return v5;
}
