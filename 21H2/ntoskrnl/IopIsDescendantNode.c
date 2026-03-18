/*
 * XREFs of IopIsDescendantNode @ 0x1407668C8
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x140766258 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140810CB4 (PnpQueuePendingSurpriseRemoval.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x140767E88 (PipIsDeviceInDeviceObjectList.c)
 */

__int64 __fastcall IopIsDescendantNode(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdx

  if ( a2 )
    v2 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  else
    v2 = 0LL;
  v3 = *(_QWORD *)(v2 + 16);
  if ( !v3 )
    v3 = *(_QWORD *)(v2 + 648) & 0xFFFFFFFFFFFFFFFEuLL;
  return PipIsDeviceInDeviceObjectList(*a1, *(_QWORD *)(v3 + 32), 0LL);
}
