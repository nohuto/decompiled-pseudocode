/*
 * XREFs of KiAreCodePatchesAllowed @ 0x140B50F00
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140AD6354 (CcInitializeBcbProfiler.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     VslConnectSwInterrupt @ 0x140B12930 (VslConnectSwInterrupt.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140294CC0 (VslGetNestedPageProtectionFlags.c)
 */

_BOOL8 KiAreCodePatchesAllowed()
{
  return (VslGetNestedPageProtectionFlags() & 0x500) != 0;
}
