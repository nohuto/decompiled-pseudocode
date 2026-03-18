/*
 * XREFs of KiInterruptThunk @ 0x140401870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KiInterruptThunk()
{
  return FsRtlTruncateSmallMcb();
}
