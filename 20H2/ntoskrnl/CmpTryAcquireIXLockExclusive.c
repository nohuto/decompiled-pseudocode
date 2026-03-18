/*
 * XREFs of CmpTryAcquireIXLockExclusive @ 0x14066EF78
 * Callers:
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpTryAcquireIXLockExclusive(_DWORD *a1)
{
  return *a1 == 0;
}
