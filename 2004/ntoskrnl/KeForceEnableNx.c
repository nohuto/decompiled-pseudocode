/*
 * XREFs of KeForceEnableNx @ 0x140996B80
 * Callers:
 *     HalpInterruptBuildStartupStub @ 0x14039E7F0 (HalpInterruptBuildStartupStub.c)
 * Callees:
 *     <none>
 */

char KeForceEnableNx()
{
  return KiNxForceEnable;
}
