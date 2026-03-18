/*
 * XREFs of KiIsKernelCfgActive @ 0x140A710BC
 * Callers:
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402E6AA0 (VslGetNestedPageProtectionFlags.c)
 */

__int64 KiIsKernelCfgActive()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
