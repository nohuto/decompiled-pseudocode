/*
 * XREFs of PopEtEnumEnergyTrackers @ 0x1406F6F38
 * Callers:
 *     PoEnergyContextCleanup @ 0x14067D90C (PoEnergyContextCleanup.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x1406F6E88 (PopEtEnergyContextProcessStateUpdate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PopEtEnergyTrackerEnumSnapshotCallback @ 0x1406188BC (PopEtEnergyTrackerEnumSnapshotCallback.c)
 *     PopEtGetNextEnergyTracker @ 0x1406F6F94 (PopEtGetNextEnergyTracker.c)
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
