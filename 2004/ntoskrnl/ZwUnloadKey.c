/*
 * XREFs of ZwUnloadKey @ 0x1403F6EA0
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x1405CCC78 (VrpUnloadDifferencingHive.c)
 *     BiUnloadHiveByName @ 0x140766424 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140773668 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
