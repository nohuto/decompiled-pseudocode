/*
 * XREFs of KeFirstGroupAffinityEx @ 0x140350740
 * Callers:
 *     KeStartThread @ 0x1402EAD58 (KeStartThread.c)
 *     KeSetAffinityProcess @ 0x1403C7CBC (KeSetAffinityProcess.c)
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     PpmRegisterPerfStates @ 0x1407A7090 (PpmRegisterPerfStates.c)
 *     PpmIdleInitializeConcurrency @ 0x1407A7EA4 (PpmIdleInitializeConcurrency.c)
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
