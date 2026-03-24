/*
 * XREFs of KeForceEnableNx @ 0x14099A140
 * Callers:
 *     HalpInterruptBuildStartupStub @ 0x1403A1580 (HalpInterruptBuildStartupStub.c)
 * Callees:
 *     <none>
 */

char KeForceEnableNx()
{
  return KiNxForceEnable;
}
