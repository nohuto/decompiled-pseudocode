/*
 * XREFs of RtlApplyRXactNoFlush @ 0x180080030
 * Callers:
 *     <none>
 * Callees:
 *     RtlAbortRXact @ 0x180080060 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x1800800A8 (RXactpCommit.c)
 */

__int64 __fastcall RtlApplyRXactNoFlush(__int64 a1)
{
  __int64 result; // rax

  result = RXactpCommit();
  if ( (int)result >= 0 )
    return RtlAbortRXact(a1);
  return result;
}
