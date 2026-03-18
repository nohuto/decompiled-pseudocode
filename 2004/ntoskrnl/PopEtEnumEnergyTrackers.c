/*
 * XREFs of PopEtEnumEnergyTrackers @ 0x140657E24
 * Callers:
 *     PoEnergyContextCleanup @ 0x14061ABFC (PoEnergyContextCleanup.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x140657D74 (PopEtEnergyContextProcessStateUpdate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     PopEtGetNextEnergyTracker @ 0x140657E80 (PopEtGetNextEnergyTracker.c)
 *     PopEtEnergyTrackerEnumSnapshotCallback @ 0x1407079E8 (PopEtEnergyTrackerEnumSnapshotCallback.c)
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
