/*
 * XREFs of KiAreCodePatchesAllowed @ 0x140A6FF74
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140A18354 (CcInitializeBcbProfiler.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     VslConnectSwInterrupt @ 0x140A580D8 (VslConnectSwInterrupt.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14032BBE0 (VslGetNestedPageProtectionFlags.c)
 */

_BOOL8 KiAreCodePatchesAllowed()
{
  return (VslGetNestedPageProtectionFlags() & 0x500) != 0;
}
