/*
 * XREFs of KeForceEnableNx @ 0x140A540D0
 * Callers:
 *     HalpInterruptSetProcessorStartContext @ 0x1403B3020 (HalpInterruptSetProcessorStartContext.c)
 * Callees:
 *     <none>
 */

char KeForceEnableNx()
{
  return KiNxForceEnable;
}
