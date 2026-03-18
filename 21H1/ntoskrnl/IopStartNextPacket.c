/*
 * XREFs of IopStartNextPacket @ 0x1405010DC
 * Callers:
 *     IoStartNextPacket @ 0x140500900 (IoStartNextPacket.c)
 *     IopStartNextPacketByKeyEx @ 0x140501260 (IopStartNextPacketByKeyEx.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KeRemoveDeviceQueue @ 0x140515110 (KeRemoveDeviceQueue.c)
 */

void __fastcall IopStartNextPacket(__int64 a1, int a2)
{
  KIRQL v2; // si
  PKDEVICE_QUEUE_ENTRY v5; // rax
  PKDEVICE_QUEUE_ENTRY v6; // rbp

  v2 = 0;
  if ( a2 )
    v2 = KeAcquireQueuedSpinLock(7uLL);
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = KeRemoveDeviceQueue((PKDEVICE_QUEUE)(a1 + 160));
  if ( v5 )
  {
    v6 = v5 - 5;
    *(_QWORD *)(a1 + 32) = v5 - 5;
    if ( a2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 64LL) & 0x200) != 0 )
        v6[4].DeviceListEntry.Blink = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v2);
    }
    (*(void (__fastcall **)(__int64, PKDEVICE_QUEUE_ENTRY))(*(_QWORD *)(a1 + 8) + 96LL))(a1, v6);
  }
  else if ( a2 )
  {
    KeReleaseQueuedSpinLock(7uLL, v2);
  }
}
