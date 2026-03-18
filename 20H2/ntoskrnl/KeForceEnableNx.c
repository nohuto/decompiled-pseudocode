/*
 * XREFs of KeForceEnableNx @ 0x14099CBC0
 * Callers:
 *     HalpInterruptBuildStartupStub @ 0x1403A0CC0 (HalpInterruptBuildStartupStub.c)
 * Callees:
 *     <none>
 */

char KeForceEnableNx()
{
  return KiNxForceEnable;
}
