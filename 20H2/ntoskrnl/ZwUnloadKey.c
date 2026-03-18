/*
 * XREFs of ZwUnloadKey @ 0x1403FBA70
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x1405D32D8 (VrpUnloadDifferencingHive.c)
 *     BiUnloadHiveByName @ 0x140775454 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140781C68 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
