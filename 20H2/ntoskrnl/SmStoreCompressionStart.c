/*
 * XREFs of SmStoreCompressionStart @ 0x1406C57E4
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406C54D4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MmQueryProcessWorkingSetSwapPages @ 0x14025371C (MmQueryProcessWorkingSetSwapPages.c)
 *     SmpKeyedStoreEntryGet @ 0x140253B98 (SmpKeyedStoreEntryGet.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14031ABD8 (MmStoreFlushOutstandingEvictions.c)
 *     SmSwapStore @ 0x1406F0E7C (SmSwapStore.c)
 */

int SmStoreCompressionStart()
{
  _KPROCESS *Process; // rdi
  __int64 v1; // rax
  __int64 v2; // rbx
  _KPROCESS *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = Process;
  v1 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_140D24188, (__int64 *)&v4, 0, 0);
  v2 = v1;
  if ( v1 || dword_140D241B0 != -1 )
  {
    LODWORD(v1) = MmStoreFlushOutstandingEvictions();
    if ( v2 )
    {
      LODWORD(v1) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v5);
      if ( (int)v1 >= 0 )
        LODWORD(v1) = SmSwapStore(0LL);
    }
  }
  return v1;
}
