/*
 * XREFs of ?SvchostPushServiceGlobals@@YAXPEAU_SVCHOST_GLOBAL_DATA@@@Z @ 0x180069B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SvchostPushServiceGlobals(struct _SVCHOST_GLOBAL_DATA *a1)
{
  gpSvchostSharedGlobals = a1;
}
