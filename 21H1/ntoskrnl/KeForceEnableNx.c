/*
 * XREFs of KeForceEnableNx @ 0x1409957B0
 * Callers:
 *     HalpInterruptBuildStartupStub @ 0x14039E060 (HalpInterruptBuildStartupStub.c)
 * Callees:
 *     <none>
 */

char KeForceEnableNx()
{
  return KiNxForceEnable;
}
