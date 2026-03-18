/*
 * XREFs of SmProcessCreateNotification @ 0x140698CB0
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     SmpKeyedStoreCreate @ 0x1406F064C (SmpKeyedStoreCreate.c)
 */

__int64 __fastcall SmProcessCreateNotification(__int64 a1, char a2)
{
  if ( (dword_140D24180 & 0xC) == 0 || *(_WORD *)(a1 + 1838) )
    return 3221225659LL;
  if ( (a2 & 3) != 0 )
    return SmpKeyedStoreCreate((ULONG_PTR)qword_140D24188);
  return 3221266944LL;
}
