/*
 * XREFs of KeFirstGroupAffinityEx @ 0x1403128B0
 * Callers:
 *     KeStartThread @ 0x14032FE98 (KeStartThread.c)
 *     KeSetAffinityProcess @ 0x1403C6EAC (KeSetAffinityProcess.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     PpmRegisterPerfStates @ 0x1407A4940 (PpmRegisterPerfStates.c)
 *     PpmIdleInitializeConcurrency @ 0x1407A5754 (PpmIdleInitializeConcurrency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFirstGroupAffinityEx(__int64 a1, _WORD *a2)
{
  unsigned __int16 v2; // ax

  v2 = 0;
  if ( !*a2 )
    return 3221226021LL;
  while ( !*(_QWORD *)&a2[4 * v2 + 4] )
  {
    if ( ++v2 >= *a2 )
      return 3221226021LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_WORD *)(a1 + 8) = v2;
  *(_QWORD *)a1 = *(_QWORD *)&a2[4 * v2 + 4];
  return 0LL;
}
