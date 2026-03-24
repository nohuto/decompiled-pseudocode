/*
 * XREFs of CmpIsKcbLockedExclusive @ 0x14066635C
 * Callers:
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CmpIsKcbLockedExclusive(__int64 a1)
{
  return *(_QWORD *)(a1 + 56) == (_QWORD)KeGetCurrentThread();
}
