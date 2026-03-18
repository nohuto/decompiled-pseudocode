/*
 * XREFs of SmStoreCompressionStart @ 0x1406D2974
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406D2AE8 (MmProcessWorkingSetControl.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x1402CCAF0 (SmpKeyedStoreEntryGet.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x140311198 (MmQueryProcessWorkingSetSwapPages.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140311254 (MmStoreFlushOutstandingEvictions.c)
 *     SmSwapStore @ 0x1406D081C (SmSwapStore.c)
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
        LODWORD(v1) = SmSwapStore(0);
    }
  }
  return v1;
}
