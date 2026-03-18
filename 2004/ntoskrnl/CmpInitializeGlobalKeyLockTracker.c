/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x14078EB74
 * Callers:
 *     CmInitSystem1 @ 0x140A582D4 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140C47CA8;
  qword_140C47CB0 = (__int64)&qword_140C47CA8;
  qword_140C47CA8 = (__int64)&qword_140C47CA8;
  return result;
}
