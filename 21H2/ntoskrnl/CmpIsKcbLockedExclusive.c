/*
 * XREFs of CmpIsKcbLockedExclusive @ 0x14065B17C
 * Callers:
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CmpIsKcbLockedExclusive(__int64 a1)
{
  return *(_QWORD *)(a1 + 56) == (_QWORD)KeGetCurrentThread();
}
