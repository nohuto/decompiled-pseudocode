/*
 * XREFs of ZwUnloadKey @ 0x1403F6EA0
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x1405CCC78 (VrpUnloadDifferencingHive.c)
 *     BiUnloadHiveByName @ 0x140766424 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140773668 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
