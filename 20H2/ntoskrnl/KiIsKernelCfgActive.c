/*
 * XREFs of KiIsKernelCfgActive @ 0x140A772DC
 * Callers:
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402E74C0 (VslGetNestedPageProtectionFlags.c)
 */

__int64 KiIsKernelCfgActive()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
