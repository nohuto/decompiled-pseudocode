/*
 * XREFs of DifSetPluginRunningWithoutReboot @ 0x140604D28
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140A9CAB4 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140A9CBF8 (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     <none>
 */

void __fastcall DifSetPluginRunningWithoutReboot(char a1)
{
  DifIsVolatileMode = a1;
}
