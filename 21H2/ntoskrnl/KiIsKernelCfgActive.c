/*
 * XREFs of KiIsKernelCfgActive @ 0x140B315A4
 * Callers:
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140294CC0 (VslGetNestedPageProtectionFlags.c)
 */

__int64 KiIsKernelCfgActive()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
