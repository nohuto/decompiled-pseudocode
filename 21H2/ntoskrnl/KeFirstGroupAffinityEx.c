/*
 * XREFs of KeFirstGroupAffinityEx @ 0x14035C9C0
 * Callers:
 *     KiSetAffinityThread @ 0x14020EC24 (KiSetAffinityThread.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140263790 (KeQueryLogicalProcessorRelationship.c)
 *     KiComputeThreadAffinity @ 0x140292884 (KiComputeThreadAffinity.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14056B9FC (KeSetSystemMultipleGroupAffinityThread.c)
 *     PpmIdleInstallNewVetoList @ 0x1405C8024 (PpmIdleInstallNewVetoList.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PpmRegisterPerfStates @ 0x140848C18 (PpmRegisterPerfStates.c)
 *     PpmIdleInitializeConcurrency @ 0x140849A30 (PpmIdleInitializeConcurrency.c)
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
