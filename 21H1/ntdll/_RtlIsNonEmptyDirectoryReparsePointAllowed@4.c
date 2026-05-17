/*
 * XREFs of _RtlIsNonEmptyDirectoryReparsePointAllowed@4 @ 0x4B366950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __stdcall RtlIsNonEmptyDirectoryReparsePointAllowed(int a1)
{
  return (a1 & 0x10000000) != 0 || a1 == -2147483624;
}
