/*
 * XREFs of KiAreCodePatchesAllowed @ 0x140A74EA0
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140A1C354 (CcInitializeBcbProfiler.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 *     VslConnectSwInterrupt @ 0x140A60044 (VslConnectSwInterrupt.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402653A0 (VslGetNestedPageProtectionFlags.c)
 */

_BOOL8 KiAreCodePatchesAllowed()
{
  return (VslGetNestedPageProtectionFlags() & 0x500) != 0;
}
