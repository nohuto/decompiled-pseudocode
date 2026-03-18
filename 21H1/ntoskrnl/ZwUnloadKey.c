/*
 * XREFs of ZwUnloadKey @ 0x1403F5C10
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x1405CB8A8 (VrpUnloadDifferencingHive.c)
 *     BiUnloadHiveByName @ 0x140764A70 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140771258 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
