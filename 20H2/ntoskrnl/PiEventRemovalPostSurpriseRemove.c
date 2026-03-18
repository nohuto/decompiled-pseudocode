/*
 * XREFs of PiEventRemovalPostSurpriseRemove @ 0x14076EF48
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14073F768 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpQueuePendingSurpriseRemoval @ 0x1407409DC (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140740B58 (PnpUnlinkDeviceRemovalRelations.c)
 */

_QWORD *__fastcall PiEventRemovalPostSurpriseRemove(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v7; // rbx

  v3 = *(_QWORD *)(a1 + 152);
  if ( v3 )
    v7 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
  else
    v7 = 0LL;
  PnpUnlinkDeviceRemovalRelations(a1, *a3);
  if ( !*(_QWORD *)(v7 + 16) )
  {
    ++*(_DWORD *)(*(_QWORD *)(v7 + 648) + 656LL);
    *(_QWORD *)(v7 + 648) |= 1uLL;
  }
  return PnpQueuePendingSurpriseRemoval(*(PVOID *)(v7 + 32), (void **)a3, *(_DWORD *)(a1 + 16), a2);
}
