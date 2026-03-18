/*
 * XREFs of ?AllocateCxContext@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C0068EC4
 * Callers:
 *     imp_WdfCxDeviceInitAllocateContext @ 0x1C0065410 (imp_WdfCxDeviceInitAllocateContext.c)
 * Callees:
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0011378 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0021414 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 */

__int64 __fastcall WDFDEVICE_INIT::AllocateCxContext(
        WDFDEVICE_INIT *this,
        _FX_DRIVER_GLOBALS *CxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *ContextAttributes,
        void **Context)
{
  FxObject **p_CxContextObject; // rbx
  __int64 result; // rax

  p_CxContextObject = &this->CxContextObject;
  if ( this->CxContextObject )
    return FxObjectAllocateContext(*p_CxContextObject, ContextAttributes, 0, Context);
  result = FxUserObject::_Create(CxDriverGlobals, 0LL, &this->CxContextObject);
  if ( (int)result >= 0 )
    return FxObjectAllocateContext(*p_CxContextObject, ContextAttributes, 0, Context);
  return result;
}
