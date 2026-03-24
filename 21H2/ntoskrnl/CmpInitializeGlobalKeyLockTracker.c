/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x1407A55E4
 * Callers:
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140C47E28;
  qword_140C47E30 = (__int64)&qword_140C47E28;
  qword_140C47E28 = (__int64)&qword_140C47E28;
  return result;
}
