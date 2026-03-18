/*
 * XREFs of PopCoolingInit @ 0x140A70D90
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *PopCoolingInit()
{
  __int64 *result; // rax

  qword_140C23ED8 = 0LL;
  result = &PopCoolingExtensionList;
  PopCoolingExtensionLock = 0LL;
  qword_140C23EE8 = (__int64)&PopCoolingExtensionList;
  PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
  return result;
}
