/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x14078CCA4
 * Callers:
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140C47E08;
  qword_140C47E10 = (__int64)&qword_140C47E08;
  qword_140C47E08 = (__int64)&qword_140C47E08;
  return result;
}
