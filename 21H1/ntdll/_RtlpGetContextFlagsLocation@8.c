/*
 * XREFs of _RtlpGetContextFlagsLocation@8 @ 0x4B35C423
 * Callers:
 *     _RtlCopyContext@12 @ 0x4B35B5F0 (_RtlCopyContext@12.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpGetContextFlagsLocation(int a1, int a2)
{
  int result; // eax

  result = 0;
  if ( (a2 & 0x10000) != 0 )
    return a1;
  if ( (a2 & 0x100000) != 0 )
    return a1 + 48;
  if ( (a2 & 0x200000) != 0 || (a2 & 0x400000) != 0 )
    return a1;
  return result;
}
