/*
 * XREFs of CmpInitializeLightWeightTransaction @ 0x140872F8C
 * Callers:
 *     CmpTransMgrCommit @ 0x140769060 (CmpTransMgrCommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpInitializeLightWeightTransaction(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[1] = 0LL;
  return result;
}
