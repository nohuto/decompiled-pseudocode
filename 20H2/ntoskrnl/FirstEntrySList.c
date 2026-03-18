/*
 * XREFs of FirstEntrySList @ 0x1404052B0
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14099C000 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall FirstEntrySList(PSLIST_HEADER SListHead)
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)SListHead->Region;
  LOBYTE(result) = (unsigned __int8)result & 0xF0;
  return result;
}
