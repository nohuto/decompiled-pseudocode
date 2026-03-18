/*
 * XREFs of ?FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00613D8
 * Callers:
 *     imp_WdfPdoInitAddDeviceText @ 0x1C0045650 (imp_WdfPdoInitAddDeviceText.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memmove @ 0x1C001CB80 (memmove.c)
 */

FX_POOL **__fastcall FxDuplicateUnicodeStringToString(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Source)
{
  FX_POOL **v3; // rax
  FX_POOL **v4; // rbx
  void *Caller; // [rsp+38h] [rbp+0h]

  v3 = FxPoolAllocator(
         FxDriverGlobals,
         &FxDriverGlobals->FxPoolFrameworks,
         1u,
         Source->Length + 2LL,
         FxDriverGlobals->Tag,
         Caller);
  v4 = v3;
  if ( v3 )
  {
    memmove(v3, Source->Buffer, Source->Length);
    *((_WORD *)v4 + ((unsigned __int64)Source->Length >> 1)) = 0;
  }
  return v4;
}
