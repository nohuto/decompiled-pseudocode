/*
 * XREFs of DifDeregisterAllPlugins @ 0x1406045C8
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140A9CAB4 (VfVolatileClearDifRuleClass.c)
 * Callees:
 *     CarDeregisterRuleClassConfiguration @ 0x1406037F0 (CarDeregisterRuleClassConfiguration.c)
 *     DifDeregisterPlugin @ 0x140604620 (DifDeregisterPlugin.c)
 */

void DifDeregisterAllPlugins()
{
  unsigned int v0; // ebx
  char *v1; // rdi
  int *v2; // rbx
  __int64 v3; // rdi

  v0 = 0;
  v1 = &DifPluginStates;
  do
  {
    if ( *v1 )
      DifDeregisterPlugin(v0);
    ++v0;
    ++v1;
  }
  while ( v0 < 0x40 );
  v2 = &DifKernelPluginRules;
  v3 = 4LL;
  do
  {
    CarDeregisterRuleClassConfiguration((unsigned int)*v2);
    v2 += 4;
    --v3;
  }
  while ( v3 );
}
