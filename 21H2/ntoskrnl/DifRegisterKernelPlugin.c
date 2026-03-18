/*
 * XREFs of DifRegisterKernelPlugin @ 0x140604884
 * Callers:
 *     VfVolatileSetDifRuleClass @ 0x140A9CBF8 (VfVolatileSetDifRuleClass.c)
 *     VfInitBootDriversLoaded @ 0x140B0DBD4 (VfInitBootDriversLoaded.c)
 * Callees:
 *     VfSecurityEntry @ 0x1405FFDD0 (VfSecurityEntry.c)
 *     VfIovPluginEntry @ 0x1406019A0 (VfIovPluginEntry.c)
 *     VfPoolTrackingEntry @ 0x140601DB0 (VfPoolTrackingEntry.c)
 *     CarRegisterDefaultRuleClassConfiguration @ 0x140603CB0 (CarRegisterDefaultRuleClassConfiguration.c)
 *     CarSetCustomRuleIdRange @ 0x1406042D0 (CarSetCustomRuleIdRange.c)
 *     DifUtilDbgPrint @ 0x140604500 (DifUtilDbgPrint.c)
 *     VfLwSPEntry @ 0x140628A6C (VfLwSPEntry.c)
 *     VfSpecialPoolEntry @ 0x14065521C (VfSpecialPoolEntry.c)
 *     VfMiscPluginEntry @ 0x140AA4854 (VfMiscPluginEntry.c)
 */

__int64 DifRegisterKernelPlugin()
{
  unsigned int *v0; // rdi
  __int64 v1; // rsi
  int v2; // eax
  unsigned int v3; // ebx

  v0 = (unsigned int *)&unk_140C0DA0C;
  v1 = 4LL;
  do
  {
    v2 = CarRegisterDefaultRuleClassConfiguration(*(v0 - 2), *(v0 - 3));
    v3 = v2;
    if ( v2 < 0 )
      DifUtilDbgPrint(
        "Failed to register kernel DIF plugin %d for reporting. NTSTATUS code: 0x%x",
        DifKernelPluginRules,
        v2);
    else
      CarSetCustomRuleIdRange(*(v0 - 3));
    v0 += 4;
    --v1;
  }
  while ( v1 );
  if ( (VfRuleClasses & 0x8000000000LL) != 0 )
    v3 = VfLwSPEntry();
  if ( (VfRuleClasses & 1) != 0 )
    v3 = VfSpecialPoolEntry();
  if ( (VfRuleClasses & 8) != 0 )
    v3 = VfPoolTrackingEntry();
  if ( (VfRuleClasses & 0x100) != 0 )
    v3 = VfSecurityEntry();
  if ( (VfRuleClasses & 0x800) != 0 )
    v3 = VfMiscPluginEntry();
  if ( (VfRuleClasses & 0x10) != 0 )
    return (unsigned int)VfIovPluginEntry();
  return v3;
}
