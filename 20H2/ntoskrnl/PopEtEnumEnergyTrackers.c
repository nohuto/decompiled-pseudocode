/*
 * XREFs of PopEtEnumEnergyTrackers @ 0x14065E9B8
 * Callers:
 *     PopEtEnergyContextProcessStateUpdate @ 0x14065E068 (PopEtEnergyContextProcessStateUpdate.c)
 *     PoEnergyContextCleanup @ 0x14066122C (PoEnergyContextCleanup.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PopEtGetNextEnergyTracker @ 0x14065EA14 (PopEtGetNextEnergyTracker.c)
 *     PopEtEnergyTrackerEnumSnapshotCallback @ 0x1406DA568 (PopEtEnergyTrackerEnumSnapshotCallback.c)
 */

__int64 __fastcall PopEtEnumEnergyTrackers(__int64 a1, __int64 a2)
{
  void *i; // rcx
  __int64 NextEnergyTracker; // rax
  void *v5; // rbx
  int v6; // edi

  for ( i = 0LL; ; i = v5 )
  {
    NextEnergyTracker = PopEtGetNextEnergyTracker(i);
    v5 = (void *)NextEnergyTracker;
    if ( !NextEnergyTracker )
      break;
    v6 = PopEtEnergyTrackerEnumSnapshotCallback(NextEnergyTracker, a2);
    if ( v6 < 0 )
      goto LABEL_4;
  }
  v6 = 0;
LABEL_4:
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x74456F50u);
  return (unsigned int)v6;
}
