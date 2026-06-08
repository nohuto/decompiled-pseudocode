/*
 * XREFs of ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C0001AE4
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0001B40 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxStubBindClasses(struct _WDF_BIND_INFO *a1)
{
  if ( &__KMDF_CLASS_BIND_START <= &__KMDF_CLASS_BIND_END )
    return 0LL;
  DbgPrintEx(
    0x4Du,
    0,
    "FxStubBindClasses: invalid driver image, the address of symbol __KMDF_CLASS_BIND_START 0x%p is greater than the addr"
    "ess of symbol __KMDF_CLASS_BIND_END 0x%p, status 0x%x\n",
    &__KMDF_CLASS_BIND_START,
    &__KMDF_CLASS_BIND_END,
    -1073741701);
  return 3221225595LL;
}
