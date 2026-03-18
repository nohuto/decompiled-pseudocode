/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x14079B52C
 * Callers:
 *     CmInitSystem1 @ 0x140A58954 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140C47D08;
  qword_140C47D10 = (__int64)&qword_140C47D08;
  qword_140C47D08 = (__int64)&qword_140C47D08;
  return result;
}
