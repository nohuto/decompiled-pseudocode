/*
 * XREFs of KeFirstGroupAffinityEx @ 0x140240B10
 * Callers:
 *     KeStartThread @ 0x140265A0C (KeStartThread.c)
 *     KeSetAffinityProcess @ 0x1403CB43C (KeSetAffinityProcess.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     PpmRegisterPerfStates @ 0x1407BA470 (PpmRegisterPerfStates.c)
 *     PpmIdleInitializeConcurrency @ 0x1407BB2B8 (PpmIdleInitializeConcurrency.c)
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
