/*
 * XREFs of EtwpCoverageInitializeStringBuffer @ 0x1402D3E70
 * Callers:
 *     EtwpCoverageEnsureStringBuffer @ 0x1407CA42C (EtwpCoverageEnsureStringBuffer.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 */

_QWORD *__fastcall EtwpCoverageInitializeStringBuffer(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx
  _QWORD *result; // rax

  v2 = a2;
  memset(a1, 0, a2);
  a1[2] = (char *)a1 + v2;
  result = a1 + 5;
  a1[3] = a1 + 5;
  a1[4] = a1 + 5;
  return result;
}
