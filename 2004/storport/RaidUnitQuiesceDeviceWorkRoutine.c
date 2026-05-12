/*
 * XREFs of RaidUnitQuiesceDeviceWorkRoutine @ 0x1C0013D40
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000C340 (RaUnitReleaseRemoveLock.c)
 *     RaidLunQueueWaitForQuiescence @ 0x1C0013DB8 (RaidLunQueueWaitForQuiescence.c)
 */

void __fastcall RaidUnitQuiesceDeviceWorkRoutine(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  char *DeviceExtension; // rdi
  __int64 v4; // rbx
  unsigned int v5; // eax
  char v6; // r8

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Context + 1) + 184LL) + 8LL);
  v5 = RaidLunQueueWaitForQuiescence(DeviceExtension + 656, *(unsigned int *)(v4 + 20));
  v6 = 1;
  if ( v5 == 258 )
    v6 = 9;
  *(_BYTE *)(v4 + 3) = v6;
  RaidCompleteRequestEx(*((PIRP *)Context + 1), 0, v5);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
}
