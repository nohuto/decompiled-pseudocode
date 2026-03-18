/*
 * XREFs of VfAllocateContext @ 0x1C00C5428
 * Callers:
 *     AddEventHooksWdfDeviceCreate @ 0x1C00C4C90 (AddEventHooksWdfDeviceCreate.c)
 *     AddEventHooksWdfIoQueueCreate @ 0x1C00C5070 (AddEventHooksWdfIoQueueCreate.c)
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x1C00216DC (-FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z.c)
 */

int __fastcall VfAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FX_POOL ***ContextHeader)
{
  int v3; // ebx
  _FX_DRIVER_GLOBALS *v4; // rdi
  int result; // eax
  ULONG Tag; // ecx
  void *v9; // rax
  FX_POOL **v10; // rax
  __m128i v11; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int64 size; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  size = 0LL;
  result = FxValidateObjectAttributes((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Attributes, 8);
  if ( result >= 0 )
  {
    if ( Attributes->ContextTypeInfo )
    {
      result = FxCalculateObjectTotalSize(v4, 0, 0, Attributes, &size);
      if ( result < 0 )
        return result;
      Tag = v4->Tag;
      v9 = retaddr;
      v11.m128i_i64[0] = 0LL;
      v11.m128i_i64[1] = 64LL;
      if ( !v4->FxPoolTrackingOn )
        v9 = 0LL;
      v10 = FxPoolAllocator(v4, &v4->FxPoolFrameworks, &v11, size, Tag, v9);
      if ( v10 )
        *ContextHeader = v10;
      else
        return -1073741670;
    }
    else
    {
      v3 = -1073741773;
      WPP_IFR_SF_qL(v4, 3u, 0xBu, 0xBu, WPP_Verifier_cpp_Traceguids, Attributes, 0xC0000033);
    }
    return v3;
  }
  return result;
}
