/*
 * XREFs of SmProcessCreateNotification @ 0x1406F6BB4
 * Callers:
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     SmpKeyedStoreCreate @ 0x1406559F4 (SmpKeyedStoreCreate.c)
 */

__int64 __fastcall SmProcessCreateNotification(LUID a1, char a2)
{
  if ( (dword_140D24180 & 0xC) == 0 || *(_WORD *)(*(_QWORD *)&a1 + 1838LL) )
    return 3221225659LL;
  if ( (a2 & 3) != 0 )
    return SmpKeyedStoreCreate((ULONG_PTR)qword_140D24188, (__int64)&SmGlobals, a1);
  return 3221266944LL;
}
