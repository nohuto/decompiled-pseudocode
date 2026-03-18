/*
 * XREFs of FlushLookUpTableBucket @ 0x1B698C
 * Callers:
 *     LookUpTableFlushComplete @ 0x27A994 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x27B226 (LookUpTableFlushPartial.c)
 * Callees:
 *     FlattenEventEntryTree @ 0x1B6950 (FlattenEventEntryTree.c)
 *     FlushEventEntryList @ 0x27B1F6 (FlushEventEntryList.c)
 */

int __fastcall FlushLookUpTableBucket(int a1, int a2)
{
  int v5; // ecx
  int v6; // edi
  const EVENT_DESCRIPTOR *EventDescriptor; // [esp+8h] [ebp-8h]
  KIRQL OldIrql; // [esp+Ch] [ebp-4h]

  if ( !*(_DWORD *)(a1 + 4 * a2) )
    return 0;
  OldIrql = 0;
  ExAcquirePushLockExclusiveEx(a1 + 140, 0);
  if ( !*(_BYTE *)(a1 + 217) )
    OldIrql = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 144));
  v5 = *(_DWORD *)(a1 + 4 * a2);
  *(_DWORD *)(a1 + 4 * a2) = 0;
  EventDescriptor = (const EVENT_DESCRIPTOR *)v5;
  v6 = FlattenEventEntryTree(v5);
  *(_DWORD *)(a1 + 128) -= v6;
  if ( !*(_BYTE *)(a1 + 217) )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 144), OldIrql);
  ExReleasePushLockExclusiveEx(a1 + 140, 0);
  FlushEventEntryList(EventDescriptor, *(_QWORD *)(*(_DWORD *)(a1 + 200) + 24));
  return v6;
}
