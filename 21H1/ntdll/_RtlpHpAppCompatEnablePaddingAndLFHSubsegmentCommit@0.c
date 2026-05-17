/*
 * XREFs of _RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit@0 @ 0x4B358380
 * Callers:
 *     <none>
 * Callees:
 *     _RtlGetSuiteMask@0 @ 0x4B2B0630 (_RtlGetSuiteMask@0.c)
 */

int __stdcall RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit()
{
  int result; // eax

  result = RtlGetSuiteMask();
  if ( (result & 0x10000) != 0 )
    RtlpHpAppCompatFlags |= 6u;
  return result;
}
