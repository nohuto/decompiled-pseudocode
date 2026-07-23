/*
 * XREFs of KeForceEnableNx @ 0x14099B140
 * Callers:
 *     HalpInterruptBuildStartupStub @ 0x1403A16D0 (HalpInterruptBuildStartupStub.c)
 * Callees:
 *     <none>
 */

char KeForceEnableNx()
{
  return KiNxForceEnable;
}
