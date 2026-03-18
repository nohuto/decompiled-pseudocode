/*
 * XREFs of VfAllocateContext @ 0x1C00C0430
 * Callers:
 *     AddEventHooksWdfDeviceCreate @ 0x1C00BFC90 (AddEventHooksWdfDeviceCreate.c)
 *     AddEventHooksWdfIoQueueCreate @ 0x1C00C0070 (AddEventHooksWdfIoQueueCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x1C0055C80 (-FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z.c)
 */

__int64 __fastcall VfAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FX_POOL ***ContextHeader)
{
  unsigned int v3; // ebx
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  __int64 result; // rax
  FX_POOL **v8; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 size; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  size = 0LL;
  result = FxValidateObjectAttributes((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Attributes, 8);
  if ( (int)result >= 0 )
  {
    if ( Attributes->ContextTypeInfo )
    {
      result = FxCalculateObjectTotalSize(DriverName, 0, 0, Attributes, &size);
      if ( (int)result < 0 )
        return result;
      v8 = FxPoolAllocator(
             DriverName,
             &DriverName->FxPoolFrameworks,
             ExDefaultNonPagedPoolType,
             size,
             DriverName->Tag,
             retaddr);
      if ( v8 )
        *ContextHeader = v8;
      else
        return (unsigned int)-1073741670;
    }
    else
    {
      v3 = -1073741773;
      WPP_IFR_SF_qL(DriverName, 3u, 0xBu, 0xBu, WPP_Verifier_cpp_Traceguids, Attributes, 0xC0000033);
    }
    return v3;
  }
  return result;
}
