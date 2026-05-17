/*
 * XREFs of _RtlApplyRXactNoFlush@4 @ 0x4B345800
 * Callers:
 *     <none>
 * Callees:
 *     _RXactpCommit@4 @ 0x4B34539B (_RXactpCommit@4.c)
 */

int __stdcall RtlApplyRXactNoFlush(int a1)
{
  int result; // eax

  result = RXactpCommit((_DWORD *)a1);
  if ( result >= 0 )
    return RtlAbortRXact(a1);
  return result;
}
