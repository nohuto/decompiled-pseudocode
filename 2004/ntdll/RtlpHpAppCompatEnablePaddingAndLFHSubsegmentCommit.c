/*
 * XREFs of RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x1800F4070
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSuiteMask @ 0x18003CC00 (RtlGetSuiteMask.c)
 */

__int64 RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit()
{
  __int64 result; // rax

  result = RtlGetSuiteMask();
  if ( (result & 0x10000) != 0 )
    RtlpHpAppCompatFlags |= 6u;
  return result;
}
