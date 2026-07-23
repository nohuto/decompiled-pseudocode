/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x1407A57E4
 * Callers:
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140C47E88;
  qword_140C47E90 = (__int64)&qword_140C47E88;
  qword_140C47E88 = (__int64)&qword_140C47E88;
  return result;
}
