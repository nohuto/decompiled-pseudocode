/*
 * XREFs of CmpIsKcbLockedExclusive @ 0x140736280
 * Callers:
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CmpIsKcbLockedExclusive(__int64 a1)
{
  return *(_QWORD *)(a1 + 56) == (_QWORD)KeGetCurrentThread();
}
